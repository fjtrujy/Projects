pages = [
[0x8010, 0x0000, 0x0000, 0x78f8, 0x7878, 0x0000, 0x0000, 0x0080, 0x0080, 0x78f8, 0x78f8, 0x8000, 0x8080, 0xf8f8, 0xf8f8, 0xf8f8, 0xf8f8, 0xf8f8, 0xfff8, 0x8000, 0x8000, 0x8000, ],
[0x8000, 0x0000, 0x0000, 0x0000, 0x0080, 0x7878, 0x7878, 0x0080, 0x0080, 0x78f8, 0x78f8, 0x0000, 0x0000, 0x0080, 0x0080, 0x7878, 0x7878, 0x7878, 0x7cf8, 0x7ff8, 0x7ff0, 0x8000, ],
[0x8010, 0x7ff8, 0x7ffc, 0x7ffc, 0x7cfc, 0x7c7c, 0x7c7c, 0x0484, 0x0484, 0x7cfc, 0x7cfc, 0x7cfc, 0x7cfc, 0x7c7c, 0x7c7c, 0x7c7c, 0x7c7c, 0x0404, 0x0084, 0x0004, 0x0008, 0xfff0, ],
[0x7fe0, 0x8000, 0x8000, 0x8000, 0x8000, 0x8080, 0x8080, 0xf878, 0xf878, 0x8000, 0x8000, 0x7cfc, 0x7cfc, 0x7c7c, 0x7c7c, 0x7c7c, 0x7c7c, 0x0404, 0x0004, 0x0004, 0x0008, 0xfff0, ]
];

function sw(x)
{
  return x;
//  return ((x&0xff)<<8) | ((x&0xff00)>>8);
}
//var bitmap = [];
var line = "";
for(var x=0; x<16; x++)
{
  for(var y=0; y<0x16; y++)
  {
    var p0=sw(pages[0][y]);
    var p1=sw(pages[1][y]);
    var p2=sw(pages[2][y]);
    var p3=sw(pages[3][y]);
    var a = (p0>>(15-x))&1;
    var b = (p1>>(15-x))&1;
    var c = (p2>>(15-x))&1;
    var d = (p3>>(15-x))&1;
    var p = a + b*2 + c*4 + d*8;
    line += p.toString(16);
  }
  console.log(line);
  line = "";
}