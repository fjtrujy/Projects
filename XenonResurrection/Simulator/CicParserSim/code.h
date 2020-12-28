// 27. dec 2020
//  "start", "sub_105A3", "sub_107ED", "sub_15E8A", "sub_15E5E", "sub_13C75", "sub_15EC3", "sub_15E7A", "sub_10000", "sub_10101", "sub_10067", "sub_10089", "sub_10097", "sub_106FE", "sub_1F2D5", "sub_14311", "sub_14759"

void start();
void sub_24B90();
void sub_105A3();
void sub_107ED();
void sub_15E8A();
void sub_15E5E();
void sub_15C8B();
void sub_13C75();
void sub_15EC3();
void sub_15E7A();

// imports
void sub_10000();
void sub_1011C();
void sub_1066E() {_ASSERT(0);};
void sub_106FE();
void sub_1080F();
void sub_10985();
void sub_10A2F();
void sub_10A95();
void sub_10BA5();
void sub_10D5F();
void sub_10D81();
void sub_10DA3();
void sub_10E2B();
void sub_10E4D();
void sub_10E6F();
void sub_10E91();
void sub_10FF0();
void sub_11827();
void sub_118F5() {_ASSERT(0);};
void sub_1193C() {_ASSERT(0);};
void sub_11A62() {_ASSERT(0);};
void sub_11A65() {_ASSERT(0);};
void sub_11B43();
void sub_12B22() {_ASSERT(0);};
void sub_13319() {_ASSERT(0);};
void sub_135EB();
void sub_13615();
void sub_13682();
void sub_1373D();
void sub_13760() {_ASSERT(0);};
void sub_137A9() {_ASSERT(0);};
void sub_14191();
void sub_1426A();
void sub_14675();
void sub_14A69() {_ASSERT(0);};
void sub_15863();
void sub_15926();
void sub_159C8() {_ASSERT(0);};
void sub_15B21();
void sub_15C0F() {_ASSERT(0);};
void sub_15CC5();
void sub_16058();
void sub_160A5();
void sub_24EFC() {_ASSERT(0);};
void sub_24CD5() {_ASSERT(0);};
void sub_24D33() {_ASSERT(0);};
void sub_24F05() {_ASSERT(0);};


// imports
void sub_10067();
void sub_10089();
void sub_10097();
void sub_10101();

void sub_1011C();
void sub_1019A();
void sub_10230();
void sub_102A8();
void sub_102D4();
void sub_1034C();
void sub_10174();
void sub_10373();
void sub_103DD();
void sub_103FD();
void sub_10423();
void sub_104C9();



void sub_1426A();
void sub_141A1();
void sub_14191();
void sub_141B1();
void sub_13589();                                //call sub_13589
void sub_11BEA();                                //call sub_11BEA
void sub_13A33();
void sub_13C4F();
void sub_11E29();
void sub_13C01();
void sub_144F3();


void sub_13A33() {_ASSERT(0);};
void sub_13C01() {_ASSERT(0);};
void sub_13C4F() {_ASSERT(0);};
void sub_1F2D5();


void start()
{
    _ax = 0x2853;                               //mov ax, 2853h
    _ds = _ax;                                  //mov ds, ax
    _es = _ax;                                  //mov es, ax
    _flags.direction = false;                   //cld
    memory16(_ds, 0x8E6A) = _sp;                //mov word_3139A, sp
    sub_105A3();                                //call sub_105A3
    memory16(_ds, 0x8E6C) = 0;                  //mov word_3139C, 0
    sub_107ED();                                //call sub_107ED
    memory16(_ds, 0x8E88) = 0;                  //mov word_313B8, 0
    memory16(_ds, 0x8E8A) = 0;                  //mov word_313BA, 0
    _push(_es);                                 //push es
    _ax = _ax ^ _ax;                            //xor ax, ax
    _es = _ax;                                  //mov es, ax
    _flags.interrupt = false;                   //cli
    memory16(_es, 0x200) = 0;                   //mov word ptr es:200h, 0
    memory16(_es, 0x202) = 9401;                //mov word ptr es:202h, 24B9h
    _flags.interrupt = true;                    //sti
    _es = _pop();                               //pop es
    _ah = 0x22;                                 //mov ah, 22h
    _al = 0x16;                                 //mov al, 16h
    _interrupt(0x80);                           //int 80h
    sub_15E8A();                                //call sub_15E8A
    memory16(_ds, 0x3048) = 0;                  //mov word_2B578, 0
    
    // wait keyboard
//loc_1053B:                                      //loc_1053B:
//    if ((short)memory16(_ds, 0x3048) < (short)0x28)//jl short loc_1053B
//      goto loc_1053B;
    
    sub_15E5E();                                //call sub_15E5E
    sub_15C8B();                                //call sub_15C8B
    _ax = _ds;                                  //mov ax, ds
    _es = _ax;                                  //mov es, ax
    sub_13C75();                                //call sub_13C75
loc_1054F:                                      //loc_1054F:
    if (memory16(_ds, 0x3044) != 4)             //jnz short loc_10585
      goto loc_10585;
    _dx = 0x03b8;                               //mov dx, 3B8h
    _al = 0x00;                                 //mov al, 0
    _out(_dx, _al);                             //out dx, al
    _dx = 0x03b4;                               //mov dx, 3B4h
    _si = 0x2ee0;                               //mov si, 2EE0h
    _cx = 0x0009;                               //mov cx, 9
loc_10565:                                      //loc_10565:
    _lodsw<MemAuto, DirAuto>();                 //lodsw
    _out(_dx, _ax);                             //out dx, ax
    if (--_cx)                                  //loop loc_10565
      goto loc_10565;
    _push(_es);                                 //push es
    _ax = 0xb000;                               //mov ax, 0B000h
    _es = _ax;                                  //mov es, ax
    _di = _di ^ _di;                            //xor di, di
    _cx = 0x4000;                               //mov cx, 4000h
    _ax = _ax ^ _ax;                            //xor ax, ax
    _rep_stosw<MemAuto, DirAuto>();             //rep stosw
    _es = _pop();                               //pop es
    _dx = 0x03b8;                               //mov dx, 3B8h
    _al = 0x08;                                 //mov al, 8
    _out(_dx, _al);                             //out dx, al
    _dx = 0x03bf;                               //mov dx, 3BFh
    _al = 0x00;                                 //mov al, 0
    _out(_dx, _al);                             //out dx, al
loc_10585:                                      //loc_10585:
    _ah = 0x01;                                 //mov ah, 1
    _interrupt(0x80);                           //int 80h
    sub_15EC3();                                //call sub_15EC3
    sub_15E7A();                                //call sub_15E7A
    _ax = 0x0003;                               //mov ax, 3
    if (memory16(_ds, 0x3044) != 4)             //jnz short loc_1059C
      goto loc_1059C;
    _ax = 0x0007;                               //mov ax, 7
loc_1059C:                                      //loc_1059C:
    _interrupt(0x10);                           //int 10h
    _ax = 0x4c00;                               //mov ax, 4C00h
    _interrupt(0x21);                           //int 21h
}

void sub_105A3()
{
    memory(_ds, 0x8F57) = 0;                    //mov byte_31487, 0
    sub_10000();                                //call sub_10000
    _ax = _ds;                                  //mov ax, ds
    _es = _ax;                                  //mov es, ax
    _ax = 0x0004;                               //mov ax, 4
    if (memory(_ds, 0x8E59) != 0)               //jnz short loc_105DA
      goto loc_105DA;
    _ax = 0x0003;                               //mov ax, 3
    if (memory(_ds, 0x8E5A) != 0)               //jnz short loc_105DA
      goto loc_105DA;
    _ax = 0x0002;                               //mov ax, 2
    if (memory(_ds, 0x8E58) != 0)               //jnz short loc_105DA
      goto loc_105DA;
    _ax = 0x0000;                               //mov ax, 0
    if (memory(_ds, 0x8E5D) != 0)               //jnz short loc_105DA
      goto loc_105DA;
    _ax = 0x0001;                               //mov ax, 1
loc_105DA:                                      //loc_105DA:
    memory16(_ds, 0x3044) = _ax;                //mov word_2B574, ax
    _ah = 0x0f;                                 //mov ah, 0Fh
    _interrupt(0x10);                           //int 10h
    memory(_ds, 0x2EF3) = _bh;                  //mov byte_2B423, bh
    memory(_ds, 0x2EF4) = _al;                  //mov byte_2B424, al
    memory(_ds, 0x2EF5) = _ah;                  //mov byte_2B425, ah
    _ah = 0x01;                                 //mov ah, 1
    _ch = 0x20;                                 //mov ch, 20h
    _cl = 0x20;                                 //mov cl, 20h
    _interrupt(0x10);                           //int 10h
loc_105F4:                                      //loc_105F4:
    _ax = 0x0600;                               //mov ax, 600h
    _bh = _bh ^ _bh;                            //xor bh, bh
    _cx = _cx ^ _cx;                            //xor cx, cx
    _dl = memory(_ds, 0x2EF5);                  //mov dl, byte_2B425
    _dl -= 1;                                   //dec dl
    _dh = 0x18;                                 //mov dh, 18h
    _interrupt(0x10);                           //int 10h
loc_10605:                                      //loc_10605:
    sub_106FE();                                //call sub_106FE
loc_10608:                                      //loc_10608:
    _ah = _ah ^ _ah;                            //xor ah, ah
    _interrupt(0x16);                           //int 16h
    if (_ah == 0x1c)                            //jz short loc_10657
      goto loc_10657;
    if (_ah == 0x41)                            //jz short loc_10652
      goto loc_10652;
    if (_ah == 0x39)                            //jz short loc_10631
      goto loc_10631;
    if (_ah == 0x50)                            //jz short loc_10631
      goto loc_10631;
    if (_ah == 0x4d)                            //jz short loc_10631
      goto loc_10631;
    if (_ah == 0x48)                            //jz short loc_10644
      goto loc_10644;
    if (_ah == 0x4b)                            //jz short loc_10644
      goto loc_10644;
    goto loc_10608;                             //jmp short loc_10608
loc_10631:                                      //loc_10631:
    memory16(_ds, 0x3044) += 1;                 //inc word_2B574
    if ((short)memory16(_ds, 0x3044) < (short)6)//jl short loc_10605
      goto loc_10605;
    memory16(_ds, 0x3044) = 0;                  //mov word_2B574, 0
    goto loc_10605;                             //jmp short loc_10605
loc_10644:                                      //loc_10644:
    memory16(_ds, 0x3044) -= 1;                 //dec word_2B574
    if ((short)memory16(_ds, 0x3044) >= 0)      //jns short loc_10605
      goto loc_10605;
    memory16(_ds, 0x3044) = 5;                  //mov word_2B574, 5
    goto loc_10605;                             //jmp short loc_10605
loc_10652:                                      //loc_10652:
    memory(_ds, 0x8F57) = 0xff;                 //mov byte_31487, 0FFh
loc_10657:                                      //loc_10657:
    if (memory16(_ds, 0x3044) != 5)             //jnz short loc_10663
      goto loc_10663;
    sub_1066E();                                //call sub_1066E
    goto loc_105F4;                             //jmp short loc_105F4
loc_10663:                                      //loc_10663:
    _ax = memory16(_ds, 0x3044);                //mov ax, word_2B574
    _bx = 0x2ef8;                               //mov bx, 2EF8h
    _xlat();                                    //xlat
    memory16(_ds, 0x3044) = _ax;                //mov word_2B574, ax
}

void sub_seg001_00() // vga
{
    sub_1F2D5();
    _ax = 0x0d;
    _interrupt(0x10);
    _ax = 0x1002;
    _dx = 0x425d;
    _interrupt(0x10);
    _ax = 0x1001;
    _bh = 0;
    _interrupt(0x10);
    _ax = 0x40;
    _es = _ax;
    _dx = memory16(0x0040, 0x0063);
    memory16(_ds, /*0x2c787-0x28530*/ 0x4257) = _dx;
    _ax = _ds;
    _es = _ax;
}

void sub_seg001_2a() // vga?
{
    sub_1F2D5();
    _ax = 0x0d;
    _interrupt(0x10);
    _ax = 0x40;
    _es = _ax;
    _dx = memory16(_es, 0x63); // 0040:0063 = Video controller base I/O port address
    int ppp = memory16(_ds, /*0x2c787-0x28530*/ 0x4257);
    memory16(_ds, /*0x2c787-0x28530*/ 0x4257) = _dx;
    _ax = _ds;
    _es = _ax;
}

void sub_107ED()
{
    _bp = memory16(_ds, 0x3044);                //mov bp, word_2B574
    _bp <<= 1;                                  //shl bp, 1
    _bp <<= 1;                                  //shl bp, 1
    //_STOP_("call dword ptr cs:[bp+7FBh]");      //call dword ptr cs:[bp+7FBh]
    
    switch (_bp)
    {
        case 0: sub_seg001_00(); break; // seg001 + 0
        case 4: _ASSERT(0); // seg001 + 39cd
        case 8: _ASSERT(0); // seg001 + 2060, mode 6
        case 12: sub_seg001_2a(); break;// seg001 + 2a
        case 16: _ASSERT(0); // seg001 + 207bh, b800
            
    }

}

void sub_15E8A()
{
    WORD _cs = _seg000;
    memory16(_cs, 0x6009) = 3;                  //mov cs:word_16009, 3
    _ax = 0x3508;                               //mov ax, 3508h
    _interrupt(0x21);                           //int 21h
    memory16(_ds, 0x8E62) = _bx;                //mov word_31392, bx
    memory16(_ds, 0x8E64) = _es;                //mov word_31394, es
    _ax = 0x2508;                               //mov ax, 2508h
    _push(_ds);                                 //push ds
    _dx = 0x600b;                               //mov dx, 600Bh
    _cx = _cs;                                  //mov cx, cs
    _ds = _cx;                                  //mov ds, cx
    _interrupt(0x21);                           //int 21h
    _ds = _pop();                               //pop ds
    _flags.interrupt = false;                   //cli
    _al = 0x36;                                 //mov al, 36h
    _out(0x43, _al);                            //out 43h, al
    _dx = 0x5555;                               //mov dx, 5555h
    _al = _dl;                                  //mov al, dl
    _out(0x40, _al);                            //out 40h, al
    _al = _dh;                                  //mov al, dh
    _out(0x40, _al);                            //out 40h, al
    _in(_al, 0x61);                             //in al, 61h
    memory(_ds, 0x3042) = _al;                  //mov byte_2B572, al
    _flags.interrupt = true;                    //sti
}

void sub_15E5E()
{
    WORD _cs = _seg000;
    _ax = 0x3509;                               //mov ax, 3509h
    _interrupt(0x21);                           //int 21h
    memory16(_ds, 0x8E66) = _bx;                //mov word_31396, bx
    memory16(_ds, 0x8E68) = _es;                //mov word_31398, es
    _ax = 0x2509;                               //mov ax, 2509h
    _push(_ds);                                 //push ds
    _dx = _cs;                                  //mov dx, cs
    _ds = _dx;                                  //mov ds, dx
    _dx = 0x5eeb;                               //mov dx, 5EEBh
    _interrupt(0x21);                           //int 21h
    _ds = _pop();                               //pop ds
}

void sub_13C75()
{
    WORD _cs = _seg000;
    sub_16058();                                //call sub_16058
    memory(_ds, 0x8F54) = 0;                    //mov byte_31484, 0
    memory16(_ds, 0x8E6E) = 1;                  //mov word_3139E, 1
    memory(_ds, 0x8F55) = 0;                    //mov byte_31485, 0
    memory(_ds, 0x8F56) = 0;                    //mov byte_31486, 0
    //std::cout << "ignore: mov word ptr ss:byte_447B0+10h, 0BFh\n";
    memory16(_ss, 0x447B0+0x10-0x447B0) = 0xBF;
    //_FIXME_ = 0xbf;                             //mov word ptr ss:byte_447B0+10h, 0BFh
    sub_1426A();                                //call sub_1426A
    memory16(_ds, 0x8E70) = 1;                  //mov word_313A0, 1
loc_13C9D:                                      //loc_13C9D:
    _sp = memory16(_ds, 0x8E6A);                //mov sp, word_3139A
    sub_10D5F();                                //call sub_10D5F
    memory(_ds, 0x8F58) = 0;                    //mov byte_31488, 0
    memory(_ds, 0x8F59) = 0;                    //mov byte_31489, 0
    memory(_ds, 0x8F5B) = 0;                    //mov byte_3148B, 0
    memory16(_ds, 0x8E88) = 0;                  //mov word_313B8, 0
    memory16(_ds, 0x8E8A) = 0;                  //mov word_313BA, 0
    sub_15863();                                //call sub_15863
    sub_15B21();                                //call sub_15B21
    sub_10D5F();                                //call sub_10D5F
    memory16(_ds, 0x991C) = 1;                  //mov word_31E4C, 1
    memory(_ds, 0x3550) = 0x31;                 //mov byte_2BA80, 31h
    sub_15CC5();                                //call sub_15CC5
    sub_11827();                                //call sub_11827
    sub_11B43();                                //call sub_11B43
    memory(_ds, 0x3727) = 0x31;                 //mov byte_2BC57, 31h
    if (memory(_ds, 0x8F5D) != 0)               //jnz short loc_13CED
      goto loc_13CED;
    memory(_ds, 0x3727) = 0x32;                 //mov byte_2BC57, 32h
loc_13CED:                                      //loc_13CED:
    _si = 0x3715;                               //mov si, 3715h
    memory(_ds, 0x374E) = 0xff;                 //mov byte_2BC7E, 0FFh
    sub_15926();                                //call sub_15926
    memory(_ds, 0x374E) = 0;                    //mov byte_2BC7E, 0
    sub_10D5F();                                //call sub_10D5F
    if (memory(_ds, 0x8F54) == 0)               //jz short loc_13D0D
      goto loc_13D0D;
    _ah = 0x02;                                 //mov ah, 2
    _al = 0x00;                                 //mov al, 0
    _interrupt(0x80);                           //int 80h
loc_13D0D:                                      //loc_13D0D:
    sub_10985();                                //call sub_10985
    sub_1080F();                                //call sub_1080F
    sub_10A2F();                                //call sub_10A2F
    sub_10E2B();                                //call sub_10E2B
    sub_10D81();                                //call sub_10D81
    memory(_ds, 0x8F59) = 0;                    //mov byte_31489, 0
    memory(_ds, 0x8F5B) = 0;                    //mov byte_3148B, 0
loc_13D26:                                      //loc_13D26:
    memory16(_ds, 0x919C) += 1;                 //inc word_316CC
    _ax = memory16(_ds, 0x919C);                //mov ax, word_316CC
    _ax &= 0x0003;                              //and ax, 3
    if (_ax != 0)                               //jnz short loc_13D47
      goto loc_13D47;
    _ax = memory16(_ds, 0x91AC);                //mov ax, word_316DC
    memory16(_ds, 0x8EB0) = _ax;                //mov word_313E0, ax
    _ax = memory16(_ds, 0x91AC);                //mov ax, word_316DC
    memory16(_ds, 0x8EB2) = _ax;                //mov word_313E2, ax
    memory16(_ds, 0x8EB2) += 1;                 //inc word_313E2
    memory16(_ds, 0x91AC) += 2;                 //add word_316DC, 2
loc_13D47:                                      //loc_13D47:
    sub_10985();                                //call sub_10985
    memory16(_ds, 0x919A) = 1;                  //mov word_316CA, 1
    _ASSERT(_ds == _dseg);

    sub_10E4D();                                //call sub_10E4D
    _ASSERT(_ds == _dseg);

    sub_10BA5();                                //call sub_10BA5
    _ASSERT(_ds == _dseg);

    sub_1373D();                                //call sub_1373D
    _ASSERT(_ds == _dseg);

    sub_10FF0();                                //call sub_10FF0
    _ASSERT(_ds == _dseg);

    // Draw plane & objects
    sub_13682();                                //call sub_13682
    _ASSERT(_ds == _dseg);

    sub_1080F();                                //call sub_1080F
    _ASSERT(_ds == _dseg);

    sub_14675();                                //call sub_14675
    _ASSERT(_ds == _dseg);

    sub_10A95();                                //call sub_10A95
    _ASSERT(_ds == _dseg);

    sub_13615();                                //call sub_13615
    _al = memory(_ds, 0x8F58);                  //mov al, byte_31488
    if (_al & _al)                              //jnz short loc_13D75
      goto loc_13D75;
    goto loc_13E1A;                             //jmp loc_13E1A
loc_13D75:                                      //loc_13D75:
    memory(_ds, 0x8F58) = 0;                    //mov byte_31488, 0
    _si = 0x3d8f;                               //mov si, 3D8Fh
    memory(_cs, 0x3D9B) = _al;                  //mov cs:byte_13D9B, al
loc_13D81:                                      //loc_13D81:
    if (_al == memory16(_cs, _si))              //jz short loc_13D8B
      goto loc_13D8B;
    _si += 0x0003;                              //add si, 3
    goto loc_13D81;                             //jmp short loc_13D81
loc_13D8B:                                      //loc_13D8B:
    //goto word ptr cs:[si+1];                    //jmp word ptr cs:[si+1]
    _ASSERT(0);
    _STOP_("db 19h, 0F8h, 3Dh, 1, 9Dh, 3Ch, 1Ch, 0BDh,...");
    _STOP_("db 3Dh");                           //db 3Dh
    _STOP_("byte_13D9B db 0");                  //byte_13D9B db 0
    _STOP_("db 1Ah, 3Eh, 9, 0, 1, 0, 4, 0, 2, 0, 1, 0,...");
    _STOP_("word_13DAA dw 1");                  //word_13DAA dw 1
    _STOP_("word_13DAC dw 1");                  //word_13DAC dw 1
    _ax = _ax + memory16(_ds, _bx + _si);       //add ax, [bx+si]
    memory(_ds, _bx + _si) |= _al;              //or [bx+si], al
    _al += 0x00;                                //add al, 0
    _al = memory(_ds, 0x8F57);                  //mov al, byte_31487
    memory(_ds, 0x8F56) = memory(_ds, 0x8F56) ^ _al;//xor byte_31486, al
    goto loc_13E1A;                             //jmp short loc_13E1A
    if (memory(_ds, 0x9224) != 0)               //jnz short loc_13E1A
      goto loc_13E1A;
    if (memory16(_ds, 0x8E80) != 0)             //jnz short loc_13DF0
      goto loc_13DF0;
    if (memory16(_ds, 0x9160) == 0)             //jz short loc_13E1A
      goto loc_13E1A;
    memory16(_ds, 0x8E82) = 1;                  //mov word_313B2, 1
    memory16(_ds, 0x8E88) = 0x18;               //mov word_313B8, 18h
    memory16(_ds, 0x8E80) = 1;                  //mov word_313B0, 1
    memory16(_ds, 0x9160) -= 1;                 //dec word_31690
    memory16(_ds, 0x8E84) = 0x88;               //mov word_313B4, 88h
    goto loc_13E1A;                             //jmp short loc_13E1A
loc_13DF0:                                      //loc_13DF0:
    memory16(_ds, 0x8E84) = 1;                  //mov word_313B4, 1
    goto loc_13E1A;                             //jmp short loc_13E1A
    memory(_ds, 0x8F5B) = 0;                    //mov byte_3148B, 0
loc_13DFD:                                      //loc_13DFD:
    if (memory(_ds, 0x8F5B) != 0)               //jnz short loc_13E10
      goto loc_13E10;
    if (memory(_ds, 0x8F58) != 0)               //jnz short loc_13E10
      goto loc_13E10;
    sub_160A5();                                //call sub_160A5
    goto loc_13DFD;                             //jmp short loc_13DFD
loc_13E10:                                      //loc_13E10:
    memory(_ds, 0x8F58) = 0;                    //mov byte_31488, 0
    memory(_ds, 0x8F5B) = 0;                    //mov byte_3148B, 0
loc_13E1A:                                      //loc_13E1A:
    _ax = memory16(_ds, 0x9190);                //mov ax, word_316C0
    memory16(_ds, 0xFCFE) = _ax;                //mov word_3822E, ax
    _ax = memory16(_ds, 0x919A);                //mov ax, word_316CA
    memory16(_ds, 0xFCE2) = _ax;                //mov word_38212, ax
    _ax = memory16(_ds, 0xFCE2);                //mov ax, word_38212
    if (_ax == memory16(_ds, 0x918C))           //jz short loc_13E46
      goto loc_13E46;
    memory16(_ds, 0x91A0) += 1;                 //inc word_316D0
    if ((short)memory16(_ds, 0x91A0) < (short)0x23)//jl short loc_13E4C
      goto loc_13E4C;
    memory16(_ds, 0xFCE2) <<= 1;                //shl word_38212, 1
    _ax = memory16(_ds, 0xFCE2);                //mov ax, word_38212
    memory16(_ds, 0x919A) = _ax;                //mov word_316CA, ax
    goto loc_13E4C;                             //jmp short loc_13E4C
loc_13E46:                                      //loc_13E46:
    memory16(_ds, 0x91A0) = 0;                  //mov word_316D0, 0
loc_13E4C:                                      //loc_13E4C:
    _ax = memory16(_ds, 0x9196);                //mov ax, word_316C6
    memory16(_ds, 0xFCE6) = _ax;                //mov word_38216, ax
    _ax = memory16(_ds, 0x918E);                //mov ax, word_316BE
    memory16(_ds, 0xFCEA) = _ax;                //mov word_3821A, ax
    _ax = memory16(_ds, 0x9190);                //mov ax, word_316C0
    memory16(_ds, 0xFCEE) = _ax;                //mov word_3821E, ax
    _ax = memory16(_ds, 0xFCE2);                //mov ax, word_38212
    memory16(_ds, 0xFCEE) -= _ax;               //sub word_3821E, ax
    _ax = memory16(_ds, 0x91A8);                //mov ax, word_316D8
    if ((short)memory16(_ds, 0xFCEE) >= (short)_ax)//jge short loc_13E82
      goto loc_13E82;
    _ax = memory16(_ds, 0x91A8);                //mov ax, word_316D8
    memory16(_ds, 0xFCEE) -= _ax;               //sub word_3821E, ax
    _ax = memory16(_ds, 0xFCEE);                //mov ax, word_3821E
    memory16(_ds, 0xFCE2) += _ax;               //add word_38212, ax
    _ax = memory16(_ds, 0x91A8);                //mov ax, word_316D8
    memory16(_ds, 0xFCEE) = _ax;                //mov word_3821E, ax
loc_13E82:                                      //loc_13E82:
    _ax = memory16(_ds, 0x91AA);                //mov ax, word_316DA
    if ((short)memory16(_ds, 0xFCEE) <= (short)_ax)//jle short loc_13E9F
      goto loc_13E9F;
    _ax = memory16(_ds, 0xFCEE);                //mov ax, word_3821E
    memory16(_ds, 0xFCE2) += _ax;               //add word_38212, ax
    _ax = memory16(_ds, 0x91AA);                //mov ax, word_316DA
    memory16(_ds, 0xFCE2) -= _ax;               //sub word_38212, ax
    _ax = memory16(_ds, 0x91AA);                //mov ax, word_316DA
    memory16(_ds, 0xFCEE) = _ax;                //mov word_3821E, ax
loc_13E9F:                                      //loc_13E9F:
    _ax = memory16(_ds, 0xFCE2);                //mov ax, word_38212
    memory16(_ds, 0xFCE6) -= _ax;               //sub word_38216, ax
    if ((short)memory16(_ds, 0xFCE6) < 0)       //js short loc_13EBB
      goto loc_13EBB;
    if ((short)memory16(_ds, 0xFCE6) < (short)0x10)//jl short loc_13EC5
      goto loc_13EC5;
    memory16(_ds, 0xFCE6) -= 0x10;              //sub word_38216, 10h
    memory16(_ds, 0xFCEA) += 0x28;              //add word_3821A, 28h
    goto loc_13EC5;                             //jmp short loc_13EC5
loc_13EBB:                                      //loc_13EBB:
    memory16(_ds, 0xFCE6) += 0x10;              //add word_38216, 10h
    memory16(_ds, 0xFCEA) -= 0x28;              //sub word_3821A, 28h
loc_13EC5:                                      //loc_13EC5:
    _ax = memory16(_ds, 0xFCE2);                //mov ax, word_38212
    memory16(_ds, 0x9198) = _ax;                //mov word_316C8, ax
    _ax = memory16(_ds, 0xFCE6);                //mov ax, word_38216
    memory16(_ds, 0x9196) = _ax;                //mov word_316C6, ax
    _ax = memory16(_ds, 0xFCEA);                //mov ax, word_3821A
    memory16(_ds, 0x918E) = _ax;                //mov word_316BE, ax
    _ax = memory16(_ds, 0xFCEE);                //mov ax, word_3821E
    memory16(_ds, 0x9190) = _ax;                //mov word_316C0, ax
    _ax = memory16(_ds, 0x91AA);                //mov ax, word_316DA
    if (memory16(_ds, 0xFCFE) != _ax)           //jnz short loc_13EED
      goto loc_13EED;
    if (memory(_ds, 0x8F59) & 2)                //jnz short loc_13EF4
      goto loc_13EF4;
loc_13EED:                                      //loc_13EED:
    _ax = memory16(_ds, 0x91AE);                //mov ax, word_316DE
    memory16(_ds, 0xFCEE) += _ax;               //add word_3821E, ax
loc_13EF4:                                      //loc_13EF4:
    _ax = memory16(_ds, 0x91AA);                //mov ax, word_316DA
    if ((short)memory16(_ds, 0xFCEE) > (short)_ax)//jg short loc_13F03
      goto loc_13F03;
    _ax = memory16(_ds, 0xFCEE);                //mov ax, word_3821E
    memory16(_ds, 0x91AA) = _ax;                //mov word_316DA, ax
loc_13F03:                                      //loc_13F03:
    sub_10A2F();                                //call sub_10A2F
    sub_10D81();                                //call sub_10D81
    if (memory(_ds, 0x8F5C) != 0)               //jnz short loc_13F13
      goto loc_13F13;
    goto loc_13FAA;                             //jmp loc_13FAA
loc_13F13:                                      //loc_13F13:
    memory(_ds, 0x8F5C) = 0;                    //mov byte_3148C, 0
    memory16(_ds, 0x9132) = 1;                  //mov word_31662, 1
    memory16(_ds, 0x9186) = 0x27;               //mov word_316B6, 27h
    memory(_ds, 0x8FAF) = 0xff;                 //mov byte_314DF, 0FFh
    memory16(_ds, 0x918A) -= 1;                 //dec word_316BA
    sub_10E91();                                //call sub_10E91
    if (memory16(_ds, 0x918A) != 0)             //jnz short loc_13F9A
      goto loc_13F9A;
    sub_10D5F();                                //call sub_10D5F
    sub_159C8();                                //call sub_159C8
    sub_10D5F();                                //call sub_10D5F
    memory16(_ds, 0x91B0) -= 1;                 //dec word_316E0
    if (memory16(_ds, 0x91B0) == 0)             //jz short loc_13F7B
      goto loc_13F7B;
    sub_15C0F();                                //call sub_15C0F
    if (_ax == 0x0000)                          //jz short loc_13F7B
      goto loc_13F7B;
    memory16(_ds, 0x918A) = 3;                  //mov word_316BA, 3
    sub_10E91();                                //call sub_10E91
    memory16(_ds, 0x9152) = 0;                  //mov word_31682, 0
    memory16(_ds, 0x9154) = 0;                  //mov word_31684, 0
    _di = 0x921c;                               //mov di, 921Ch
    _cx = 0x0007;                               //mov cx, 7
    _al = _al ^ _al;                            //xor al, al
    _rep_stosb<MemAuto, DirAuto>();             //rep stosb
    memory16(_ds, 0x9156) = 0;                  //mov word_31686, 0
    memory16(_ds, 0x9158) = 0;                  //mov word_31688, 0
    sub_10E6F();                                //call sub_10E6F
    goto loc_13F9A;                             //jmp short loc_13F9A
loc_13F7B:                                      //loc_13F7B:
    _si = 0x3729;                               //mov si, 3729h
    _cx = 0x1e;                                 //mov cx, 1Eh
    sub_15926();                                //call sub_15926
    _bx = memory16(_ds, 0x8E7A);                //mov bx, word_313AA
    memory(_ds, _bx + -28835) = 0;              //mov byte ptr [bx-70A3h], 0
    _bx = _bx ^ 0x0001;                         //xor bx, 1
    if (memory(_ds, _bx + -28835) != 0)         //jnz short loc_13F9A
      goto loc_13F9A;
    goto loc_13C9D;                             //jmp loc_13C9D
loc_13F9A:                                      //loc_13F9A:
    sub_11A62();                                //call sub_11A62
    if (memory(_ds, 0x8F54) == 0)               //jz short loc_13FAA
      goto loc_13FAA;
    _ah = 0x02;                                 //mov ah, 2
    _al = 0x00;                                 //mov al, 0
    _interrupt(0x80);                           //int 80h
loc_13FAA:                                      //loc_13FAA:
    if (memory16(_ds, 0x9164) == 0)             //jz short loc_13FB4
      goto loc_13FB4;
    goto loc_13D26;                             //jmp loc_13D26
loc_13FB4:                                      //loc_13FB4:
    if (memory(_ds, 0x8FB0) != 0)               //jnz short loc_13FC8
      goto loc_13FC8;
    if (memory(_ds, 0x8F61) == 0)               //jz short loc_13FC5
      goto loc_13FC5;
    goto loc_140A7;                             //jmp loc_140A7
loc_13FC5:                                      //loc_13FC5:
    goto loc_13D26;                             //jmp loc_13D26
loc_13FC8:                                      //loc_13FC8:
    _ah = 0x01;                                 //mov ah, 1
    _interrupt(0x80);                           //int 80h
    if ((short)memory16(_ds, 0x9190) > (short)480)//jg short loc_1400D
      goto loc_1400D;
    _ax = memory16(_ds, 0x8EAC);                //mov ax, word_313DC
    memory16(_ds, 0xFCE6) = _ax;                //mov word_38216, ax
    _ax = memory16(_ds, 0xFCE6);                //mov ax, word_38216
    memory16(_ds, 0x8F4A) = _ax;                //mov word_3147A, ax
    memory16(_ds, 0xFCE6) += 400;               //add word_38216, 190h
    if (memory16(_ds, 0x915C) != 0)             //jnz short loc_1403E
      goto loc_1403E;
    _ax = memory16(_ds, 0x915A);                //mov ax, word_3168A
    if ((short)memory16(_ds, 0xFCE6) <= (short)_ax)//jle short loc_1403E
      goto loc_1403E;
    sub_14191();                                //call sub_14191
    _ax &= 0x0003;                              //and ax, 3
    _dx = 0x32;                                 //mov dx, 32h
    _ax = _dx * _al;                            //mul dx
    memory16(_ds, 0xFCE6) += _ax;               //add word_38216, ax
    _ax = memory16(_ds, 0xFCE6);                //mov ax, word_38216
    memory16(_ds, 0x915A) = _ax;                //mov word_3168A, ax
    goto loc_1403E;                             //jmp short loc_1403E
loc_1400D:                                      //loc_1400D:
    _ax = memory16(_ds, 0x8EAE);                //mov ax, word_313DE
    memory16(_ds, 0xFCE6) = _ax;                //mov word_38216, ax
    _ax = memory16(_ds, 0xFCE6);                //mov ax, word_38216
    memory16(_ds, 0x8F4A) = _ax;                //mov word_3147A, ax
    if (memory16(_ds, 0x915C) != 0)             //jnz short loc_1403E
      goto loc_1403E;
    _ax = memory16(_ds, 0x915A);                //mov ax, word_3168A
    if ((short)memory16(_ds, 0xFCE6) <= (short)_ax)//jle short loc_1403E
      goto loc_1403E;
    sub_14191();                                //call sub_14191
    _ax &= 0x0003;                              //and ax, 3
    _dx = 0x32;                                 //mov dx, 32h
    _ax = _dx * _al;                            //mul dx
    memory16(_ds, 0xFCE6) += _ax;               //add word_38216, ax
    _ax = memory16(_ds, 0xFCE6);                //mov ax, word_38216
    memory16(_ds, 0x915A) = _ax;                //mov word_3168A, ax
loc_1403E:                                      //loc_1403E:
    memory(_ds, 0x9223) = 0;                    //mov byte_31753, 0
    memory(_ds, 0x8FB1) = 0;                    //mov byte_314E1, 0
    if ((short)memory16(_ds, 0x9190) > (short)960)//jg short loc_14078
      goto loc_14078;
    if (memory16(_ds, 0x991C) != 5)             //jnz short loc_14078
      goto loc_14078;
    memory(_ds, 0x8FB1) = 0xff;                 //mov byte_314E1, 0FFh
    if (memory16(_ds, 0x8E70) != 2)             //jnz short loc_14078
      goto loc_14078;
    _bx = memory16(_ds, 0x8E7A);                //mov bx, word_313AA
    _bx = _bx ^ 0x0001;                         //xor bx, 1
    if (memory(_ds, _bx + -28835) == 0)         //jz short loc_14078
      goto loc_14078;
    if (memory(_ds, _bx + -28833) == 0)         //jz short loc_1407E
      goto loc_1407E;
loc_14078:                                      //loc_14078:
    sub_14A69();                                //call sub_14A69
    sub_10E91();                                //call sub_10E91
loc_1407E:                                      //loc_1407E:
    memory(_ds, 0x8FB0) = 0;                    //mov byte_314E0, 0
    if (memory16(_ds, 0x9162) == 0)             //jz short loc_1408D
      goto loc_1408D;
    sub_12B22();                                //call sub_12B22
loc_1408D:                                      //loc_1408D:
    if (memory(_ds, 0x8F61) != 0)               //jnz short loc_140A7
      goto loc_140A7;
    if (memory(_ds, 0x8F54) != 0)               //jnz short loc_1409E
      goto loc_1409E;
    goto loc_13D26;                             //jmp loc_13D26
loc_1409E:                                      //loc_1409E:
    _ah = 0x02;                                 //mov ah, 2
    _al = 0x00;                                 //mov al, 0
    _interrupt(0x80);                           //int 80h
    goto loc_13D26;                             //jmp loc_13D26
loc_140A7:                                      //loc_140A7:
    memory(_ds, 0x8F61) = 0;                    //mov byte_31491, 0
    if (memory16(_ds, 0x991C) != 5)             //jnz short loc_140CB
      goto loc_140CB;
loc_140B3:                                      //loc_140B3:
    _si = memory16(_ds, 0x9008);                //mov si, word_31538
    if (memory16(_ds, _si) == 0)                //jz short loc_140C1
      goto loc_140C1;
    sub_137A9();                                //call sub_137A9
    goto loc_140B3;                             //jmp short loc_140B3
loc_140C1:                                      //loc_140C1:
    sub_13319();                                //call sub_13319
    sub_135EB();                                //call sub_135EB
    memory16(_ds, 0x91B0) += 1;                 //inc word_316E0
loc_140CB:                                      //loc_140CB:
    _bx = memory16(_ds, 0x8E7A);                //mov bx, word_313AA
    _bx = _bx ^ 0x0001;                         //xor bx, 1
    if (memory(_ds, _bx + -28835) == 0)         //jz short loc_14116
      goto loc_14116;
    if (memory(_ds, _bx + -28833) != 0)         //jnz short loc_14116
      goto loc_14116;
    _bx = _bx ^ 0x0001;                         //xor bx, 1
    memory(_ds, _bx + -28833) = 0xff;           //mov byte ptr [bx-70A1h], 0FFh
    sub_118F5();                                //call sub_118F5
    _si = memory16(_ds, 0x9054);                //mov si, word_31584
    sub_13760();                                //call sub_13760
    _si = memory16(_ds, 0x90EC);                //mov si, word_3161C
    sub_13760();                                //call sub_13760
    _si = memory16(_ds, 0x90A0);                //mov si, word_315D0
    sub_13760();                                //call sub_13760
    sub_11A65();                                //call sub_11A65
    if (memory(_ds, 0x8F54) != 0)               //jnz short loc_1410D
      goto loc_1410D;
    goto loc_13D26;                             //jmp loc_13D26
loc_1410D:                                      //loc_1410D:
    _ah = 0x02;                                 //mov ah, 2
    _al = 0x00;                                 //mov al, 0
    _interrupt(0x80);                           //int 80h
    goto loc_13D26;                             //jmp loc_13D26
loc_14116:                                      //loc_14116:
    sub_10D5F();                                //call sub_10D5F
    sub_118F5();                                //call sub_118F5
    _si = memory16(_ds, 0x9054);                //mov si, word_31584
    sub_13760();                                //call sub_13760
    _si = memory16(_ds, 0x90EC);                //mov si, word_3161C
    sub_13760();                                //call sub_13760
    _si = memory16(_ds, 0x90A0);                //mov si, word_315D0
    sub_13760();                                //call sub_13760
    memory16(_ds, 0x991C) += 1;                 //inc word_31E4C
    if ((short)memory16(_ds, 0x991C) < (short)6)//jl short loc_14146
      goto loc_14146;
    memory16(_ds, 0x991C) = 1;                  //mov word_31E4C, 1
    memory16(_ds, 0x991A) += 1;                 //inc word_31E4A
loc_14146:                                      //loc_14146:
    _ax = memory16(_ds, 0x991C);                //mov ax, word_31E4C
    _ax += 0x30;                                //add ax, 30h
    memory(_ds, 0x3550) = _al;                  //mov byte_2BA80, al
    sub_15CC5();                                //call sub_15CC5
    sub_1193C();                                //call sub_1193C
    if (memory16(_ds, 0x9162) == 0)             //jz short loc_1415F
      goto loc_1415F;
    sub_12B22();                                //call sub_12B22
loc_1415F:                                      //loc_1415F:
    sub_11B43();                                //call sub_11B43
    memory(_ds, 0x8F5F) = 0;                    //mov byte_3148F, 0
    memory(_ds, 0x8F60) = 0;                    //mov byte_31490, 0
    sub_11A62();                                //call sub_11A62
    sub_10985();                                //call sub_10985
    sub_1080F();                                //call sub_1080F
    sub_10A2F();                                //call sub_10A2F
    sub_10E2B();                                //call sub_10E2B
    sub_10D81();                                //call sub_10D81
    if (memory(_ds, 0x8F54) != 0)               //jnz short loc_14188
      goto loc_14188;
    goto loc_13D26;                             //jmp loc_13D26
loc_14188:                                      //loc_14188:
    _ah = 0x02;                                 //mov ah, 2
    _al = 0x00;                                 //mov al, 0
    _interrupt(0x80);                           //int 80h
    goto loc_13D26;                             //jmp loc_13D26
}

void sub_15EC3()
{
    _flags.interrupt = false;                   //cli
    _al = memory(_ds, 0x3042);                  //mov al, byte_2B572
    _out(0x61, _al);                            //out 61h, al
    _al = 0x36;                                 //mov al, 36h
    _out(0x43, _al);                            //out 43h, al
    _dx = 0xffff;                               //mov dx, 0FFFFh
    _al = _dl;                                  //mov al, dl
    _out(0x40, _al);                            //out 40h, al
    _al = _dh;                                  //mov al, dh
    _out(0x40, _al);                            //out 40h, al
    _in(_al, 0x61);                             //in al, 61h
    _flags.interrupt = true;                    //sti
    _ax = 0x2508;                               //mov ax, 2508h
    _push(_ds);                                 //push ds
    _dx = memory16(_ds, 0x8E62);                //mov dx, word_31392
    _ds = memory16(_ds, 0x8E64);                //mov ds, word_31394
    _interrupt(0x21);                           //int 21h
    _ds = _pop();                               //pop ds
}

void sub_15E7A()
{
    _ax = 0x2509;                               //mov ax, 2509h
    _push(_ds);                                 //push ds
    _dx = memory16(_ds, 0x8E66);                //mov dx, word_31396
    _ds = memory16(_ds, 0x8E68);                //mov ds, word_31398
    _interrupt(0x21);                           //int 21h
    _ds = _pop();                               //pop ds
}

void sub_10000()
{
    _ax = _ds;                                  //mov ax, ds
    _es = _ax;                                  //mov es, ax
    _cx = 0x0008;                               //mov cx, 8
    _di = 0x8e58;                               //mov di, 8E58h
    _al = 0xff;                                 //mov al, 0FFh
    _rep_stosb<MemAuto, DirAuto>();             //rep stosb
    _ax = 0x1a00;                               //mov ax, 1A00h
    _interrupt(0x10);                           //int 10h
    if (_al != 0x1a)                            //jnz short loc_10032
      goto loc_10032;
    if (_bl >= _bh)                             //jnb short loc_1001D
      goto loc_1001D;
    _bl = _bh;                                  //mov bl, bh
loc_1001D:                                      //loc_1001D:
    if (_bl < 0x0b)                             //jb short loc_1002C
      goto loc_1002C;
    if (_bl > 0x0c)                             //ja short loc_1002C
      goto loc_1002C;
    memory(_ds, 0x8E5A) = 0;                    //mov byte_3138A, 0
loc_1002C:                                      //loc_1002C:
    memory(_ds, 0x8E58) = 0;                    //mov byte_31388, 0
    return;                                     //retn
loc_10032:                                      //loc_10032:
    memory(_ds, 0x8E59) = 0;                    //mov byte_31389, 0
    sub_10067();                                //call sub_10067
    sub_10089();                                //call sub_10089
    sub_10097();                                //call sub_10097
    _dx = 0x03b4;                               //mov dx, 3B4h
    sub_10101();                                //call sub_10101
    if (_flags.carry)                           //jb short loc_1005C
      goto loc_1005C;
    _dl = 0xba;                                 //mov dl, 0BAh
    _in(_al, _dx);                              //in al, dx
    _al &= 0x80;                                //and al, 80h
    _ah = _al;                                  //mov ah, al
    _cx = 0x8000;                               //mov cx, 8000h
loc_10052:                                      //loc_10052:
    _in(_al, _dx);                              //in al, dx
    _al &= 0x80;                                //and al, 80h
    if (--_cx && _al == _ah)                    //loope loc_10052
      goto loc_10052;
    if (_al == _ah)                             //jz short loc_10061
      goto loc_10061;
    return;                                     //retn
loc_1005C:                                      //loc_1005C:
    memory(_ds, 0x8E5C) = 0;                    //mov byte_3138C, 0
loc_10061:                                      //loc_10061:
    memory(_ds, 0x8E5D) = 0;                    //mov byte_3138D, 0
}

void sub_10101()
{
    _al = 0x0f;                                 //mov al, 0Fh
    _out(_dx, _al);                             //out dx, al
    _out(_dx, _al);                             //out dx, al
    _dx += 1;                                   //inc dx
    _in(_al, _dx);                              //in al, dx
    _ah = _al;                                  //mov ah, al
    _al = 0x66;                                 //mov al, 66h
    _out(_dx, _al);                             //out dx, al
    _cx = 0x0100;                               //mov cx, 100h
loc_1010F:                                      //loc_1010F:
    if (--_cx)                                  //loop loc_1010F
      goto loc_1010F;
    _in(_al, _dx);                              //in al, dx
    _xchg(_al, _ah);                            //xchg al, ah
    _out(_dx, _al);                             //out dx, al
    if (_ah == 0x66)                            //jz short locret_1011B
      goto locret_1011B;
    _flags.carry = true;                        //stc
locret_1011B:                                   //locret_1011B:
    return;
}

void sub_10067()
{
    _bl = 0x10;                                 //mov bl, 10h
    _ah = 0x12;                                 //mov ah, 12h
    _interrupt(0x10);                           //int 10h
    if (_bl == 0x10)                            //jz short loc_10083
      goto loc_10083;
    _ah = 0x12;                                 //mov ah, 12h
    _bl = 0x10;                                 //mov bl, 10h
    _interrupt(0x10);                           //int 10h
    if (_bl >= 0x03)                            //jnb short locret_10082
      goto locret_10082;
    memory(_ds, 0x8E5E) = 0;                    //mov byte_3138E, 0
locret_10082:                                   //locret_10082:
    return;                                     //retn
loc_10083:                                      //loc_10083:
    memory(_ds, 0x8E5A) = 0;                    //mov byte_3138A, 0
}

void sub_10089()
{
    _dx = 0x03d4;                               //mov dx, 3D4h
    sub_10101();                                //call sub_10101
    if (!_flags.carry)                          //jnb short locret_10096
      goto locret_10096;
    memory(_ds, 0x8E5B) = 0;                    //mov byte_3138B, 0
locret_10096:                                   //locret_10096:
    return;
}

void sub_10097()
{
    _bx = 0xb800;                               //mov bx, 0B800h
    _es = _bx;                                  //mov es, bx
    _di = _di ^ _di;                            //xor di, di
    _push(memory16(_es, 0x0));                  //push word ptr es:0
    memory16(_es, 0x0) = 16714;                 //mov word ptr es:0, 414Ah
    _interrupt(0x12);                           //int 12h
    _ax += 0x3f;                                //add ax, 3Fh
    _ax &= 0xffc0;                              //and ax, 0FFC0h
    _ax -= 0x40;                                //sub ax, 40h
    _cl = 0x06;                                 //mov cl, 6
    _ax <<= _cl;                                //shl ax, cl
    _es = _ax;                                  //mov es, ax
    _dx = _ax;                                  //mov dx, ax
    _ax = 0x414a;                               //mov ax, 414Ah
    _cx = 0x8000;                               //mov cx, 8000h
loc_100C3:                                      //loc_100C3:
    _repne_scasw();                             //repne scasw
    if (_ax == 0)                               //jz short loc_100D6
      goto loc_100D6;
    _es = _bx;                                  //mov es, bx
    _di = _di ^ _di;                            //xor di, di
    memory16(_es, 0x0) = _pop();                //pop word ptr es:0
    memory(_ds, 0x8E58) = 0;                    //mov byte_31388, 0
    return;                                     //retn
loc_100D6:                                      //loc_100D6:
    _di -= 0x0002;                              //sub di, 2
    _es = _bx;                                  //mov es, bx
    memory16(_es, 0x0) = 18505;                 //mov word ptr es:0, 4849h
    _es = _dx;                                  //mov es, dx
    if (memory16(_es, _di) != 18505)            //jnz short loc_100F1
      goto loc_100F1;
    memory16(_es, 0x0) = _pop();                //pop word ptr es:0
    return;                                     //retn
loc_100F1:                                      //loc_100F1:
    _es = _bx;                                  //mov es, bx
    memory16(_es, 0x0) = 16714;                 //mov word ptr es:0, 414Ah
    _es = _dx;                                  //mov es, dx
    _di += 0x0002;                              //add di, 2
    goto loc_100C3;                             //jmp short loc_100C3
}

void sub_106FE()
{
    _si = 0x2efd;                               //mov si, 2EFDh
    _cx = _cx ^ _cx;                            //xor cx, cx
loc_10703:                                      //loc_10703:
    _bl = 0x07;                                 //mov bl, 7
    if (_cx != memory16(_ds, 0x3044))           //jnz short loc_10716
      goto loc_10716;
    _bl = 0x1f;                                 //mov bl, 1Fh
    if (memory(_ds, 0x2EF4) != 7)               //jnz short loc_10716
      goto loc_10716;
    _bl = 0xf0;                                 //mov bl, 0F0h
loc_10716:                                      //loc_10716:
    memory(_ds, 0x2EF7) = _bl;                  //mov byte_2B427, bl
    _lodsb<MemAuto, DirAuto>();                 //lodsb
    if (!(_al & _al))                           //jz short locret_10760
      goto locret_10760;
    _al = _al - memory(_ds, 0x2EF5);            //sub al, byte_2B425
    _al = -_al;                                 //neg al
    _al >>= 1;                                  //shr al, 1
    memory(_ds, 0x2EF2) = _al;                  //mov byte_2B422, al
    _lodsb<MemAuto, DirAuto>();                 //lodsb
    memory(_ds, 0x2EF6) = _al;                  //mov byte_2B426, al
    _push(_cx);                                 //push cx
loc_1072F:                                      //loc_1072F:
    _lodsb<MemAuto, DirAuto>();                 //lodsb
    if (!(_al & _al))                           //jz short loc_1075C
      goto loc_1075C;
    _ah = 0x02;                                 //mov ah, 2
    _bh = memory(_ds, 0x2EF3);                  //mov bh, byte_2B423
    _dh = memory(_ds, 0x2EF6);                  //mov dh, byte_2B426
    _dl = memory(_ds, 0x2EF2);                  //mov dl, byte_2B422
    _interrupt(0x10);                           //int 10h
    memory(_ds, 0x2EF2) += 1;                   //inc byte_2B422
    _al = memory(_ds, _si - 1);                 //mov al, [si-1]
    _ah = 0x09;                                 //mov ah, 9
    _bl = memory(_ds, 0x2EF7);                  //mov bl, byte_2B427
    _bh = memory(_ds, 0x2EF3);                  //mov bh, byte_2B423
    _cx = 0x0001;                               //mov cx, 1
    _interrupt(0x10);                           //int 10h
    goto loc_1072F;                             //jmp short loc_1072F
loc_1075C:                                      //loc_1075C:
    _cx = _pop();                               //pop cx
    _cx += 1;                                   //inc cx
    goto loc_10703;                             //jmp short loc_10703
locret_10760:                                   //locret_10760:
    return;
}

void sub_1F2D5()
{
    _di = 0x973e;                               //mov di, 973Eh
    _ax = _ax ^ _ax;                            //xor ax, ax
    _cx = 0xc8;                                 //mov cx, 0C8h
loc_1F2DD:                                      //loc_1F2DD:
    _stosw<MemAuto, DirAuto>();                 //stosw
    _ax += 0x28;                                //add ax, 28h
    if (--_cx)                                  //loop loc_1F2DD
      goto loc_1F2DD;
}

void sub_14311()
{
    memory16(_ds, _si + 4) = 2131;              //mov word ptr [si+4], 853h
    if (memory(_ds, 0x9224) == 0)               //jz short loc_1433E
      goto loc_1433E;
    memory16(_ds, 0x919A) = 0;                  //mov word_316CA, 0
    sub_141B1();                                //call sub_141B1
    if (memory16(_ds, _si + 14) != 0)           //jnz short locret_1433D
      goto locret_1433D;
    memory16(_ds, _si + 4) = 1889;              //mov word ptr [si+4], 761h
    if ((short)memory16(_ds, 0x991E) < (short)0x10)//jl short locret_1433D
      goto locret_1433D;
    memory(_ds, 0x8F5C) = 0xff;                 //mov byte_3148C, 0FFh
locret_1433D:                                   //locret_1433D:
    return;                                     //retn
loc_1433E:                                      //loc_1433E:
    if (memory16(_ds, 0x8E80) != 0)             //jnz short loc_143B6
      goto loc_143B6;
    if (memory16(_ds, 0x9150) != 0)             //jnz short loc_14356
      goto loc_14356;
    sub_13589();                                //call sub_13589
    sub_11BEA();                                //call sub_11BEA
    if (!_flags.zero)                           //jnz short loc_14381
      goto loc_14381;
    goto loc_143B6;                             //jmp short loc_143B6
loc_14356:                                      //loc_14356:
    _ax = memory16(_ds, _si + 18);              //mov ax, [si+12h]
    _ax -= 0x40;                                //sub ax, 40h
    memory16(_ds, _si + 40) = _ax;              //mov [si+28h], ax
    _ax += 0x80;                                //add ax, 80h
    memory16(_ds, _si + 44) = _ax;              //mov [si+2Ch], ax
    _ax = memory16(_ds, _si + 22);              //mov ax, [si+16h]
    _ax -= 0x40;                                //sub ax, 40h
    memory16(_ds, _si + 42) = _ax;              //mov [si+2Ah], ax
    _ax += 0x80;                                //add ax, 80h
    memory16(_ds, _si + 46) = _ax;              //mov [si+2Eh], ax
    sub_11BEA();                                //call sub_11BEA
    if (_flags.zero)                            //jz short loc_1437C
      goto loc_1437C;
    sub_13A33();                                //call sub_13A33
loc_1437C:                                      //loc_1437C:
    sub_13589();                                //call sub_13589
    goto loc_143B6;                             //jmp short loc_143B6
loc_14381:                                      //loc_14381:
    if (memory16(_ds, 0x9188) != 0)             //jnz short loc_143A9
      goto loc_143A9;
    if (memory16(_ds, _di) == 0)                //jz short loc_143B6
      goto loc_143B6;
    memory16(_ds, _si + 4) = 2233;              //mov word ptr [si+4], 8B9h
    _ax = 0x0008;                               //mov ax, 8
    if (memory(_ds, _di + 39) == 0)             //jz short loc_1439E
      goto loc_1439E;
    _ax = 0x10;                                 //mov ax, 10h
loc_1439E:                                      //loc_1439E:
    sub_13C4F();                                //call sub_13C4F
    if (memory(_ds, 0x9224) == 0)               //jz short loc_143A9
      goto loc_143A9;
    return;                                     //retn
loc_143A9:                                      //loc_143A9:
    if (memory16(_ds, _di) == 0x50)             //jz short loc_143B6
      goto loc_143B6;
    if (memory16(_ds, _di) == 0x54)             //jz short loc_143B6
      goto loc_143B6;
    sub_13A33();                                //call sub_13A33
loc_143B6:                                      //loc_143B6:
    if (memory16(_ds, 0x8E7E) == 0)             //jz short loc_14430
      goto loc_14430;
    if ((short)memory16(_ds, 0x8E7E) >= 0 /*CHECK*/)//jns short loc_143D7
      goto loc_143D7;
    sub_11E29();                                //call sub_11E29
    if (!_flags.zero)                           //jnz short loc_143CC
      goto loc_143CC;
    memory16(_ds, 0x8E7E) = 0;                  //mov word_313AE, 0
    goto loc_14430;                             //jmp short loc_14430
loc_143CC:                                      //loc_143CC:
    if (memory16(_ds, 0x8E7E) != 0xffef)        //jnz short loc_143D7
      goto loc_143D7;
    sub_13C01();                                //call sub_13C01
    return;                                     //retn
loc_143D7:                                      //loc_143D7:
    memory16(_ds, 0x8E7E) -= 1;                 //dec word_313AE
    _ax = memory16(_ds, 0x918C);                //mov ax, word_316BC
    memory16(_ds, 0x919A) = _ax;                //mov word_316CA, ax
    _ax = memory16(_ds, 0x8ED2);                //mov ax, word_31402
    _ax = _ax - memory16(_ds, 0x9190);          //sub ax, word_316C0
    _bx = memory16(_ds, 0x8ED4);                //mov bx, word_31404
    memory16(_ds, _si + 18) = _bx;              //mov [si+12h], bx
    _ax = _ax + memory16(_ds, 0x8ED6);          //add ax, word_31406
    if ((short)_ax <= (short)0xb0)              //jle short loc_14402
      goto loc_14402;
    _ax -= 0xb0;                                //sub ax, 0B0h
    memory16(_ds, 0x919A) -= _ax;               //sub word_316CA, ax
    _ax = 0xb0;                                 //mov ax, 0B0h
loc_14402:                                      //loc_14402:
    if ((short)_ax >= (short)0x10)              //jge short loc_14411
      goto loc_14411;
    _ax -= 0x10;                                //sub ax, 10h
    memory16(_ds, 0x919A) -= _ax;               //sub word_316CA, ax
    _ax = 0x10;                                 //mov ax, 10h
loc_14411:                                      //loc_14411:
    memory16(_ds, _si + 22) = _ax;              //mov [si+16h], ax
    _push(_si);                                 //push si
    _si = 0x8ed2;                               //mov si, 8ED2h
    _di = 0x8ecc;                               //mov di, 8ECCh
    _cx = 0x30;                                 //mov cx, 30h
    _rep_movsw<MemAuto, MemAuto, DirAuto>();    //rep movsw
    _si = _pop();                               //pop si
    if (memory16(_ds, 0x8E7E) != 0)             //jnz short loc_14483
      goto loc_14483;
    memory16(_ds, 0x8E7E) = 0xffff;             //mov word_313AE, 0FFFFh
    goto loc_14483;                             //jmp short loc_14483
loc_14430:                                      //loc_14430:
    sub_144F3();                                //call sub_144F3
    _push(_si);                                 //push si
    _si = 0x8f2a;                               //mov si, 8F2Ah
    _di = 0x8f30;                               //mov di, 8F30h
    _cx = 0x30;                                 //mov cx, 30h
    _flags.direction = true;                    //std
    _rep_movsw<MemAuto, MemAuto, DirBackward>();    //rep movsw
    _flags.direction = false;                   //cld
    _si = _pop();                               //pop si
    _ax = memory16(_ds, 0x9190);                //mov ax, word_316C0
    memory16(_ds, 0x8ECC) = _ax;                //mov word_313FC, ax
    _ax = memory16(_ds, _si + 18);              //mov ax, [si+12h]
    memory16(_ds, 0x8ECE) = _ax;                //mov word_313FE, ax
    _ax = memory16(_ds, _si + 22);              //mov ax, [si+16h]
    memory16(_ds, 0x8ED0) = _ax;                //mov word_31400, ax
    if (memory16(_ds, 0x8E80) != 0)             //jnz short loc_14483
      goto loc_14483;
    if ((short)memory16(_ds, 0x8E7E) < 0 /*CHECK*/)//js short loc_14483
      goto loc_14483;
    sub_11E29();                                //call sub_11E29
    if (_flags.zero)                            //jz short loc_14483
      goto loc_14483;
    _ax = memory16(_ds, 0x8E6E);                //mov ax, word_3139E
    memory16(_ds, 0x8E7E) = _ax;                //mov word_313AE, ax
    memory16(_ds, 0x919E) = 0;                  //mov word_316CE, 0
    _ax = memory16(_ds, 0x9190);                //mov ax, word_316C0
    _ax = _ax + memory16(_ds, 0x91AE);          //add ax, word_316DE
    if ((short)_ax <= (short)memory16(_ds, 0x91AA))//jle short loc_14483
      goto loc_14483;
    memory16(_ds, 0x91AA) = _ax;                //mov word_316DA, ax
loc_14483:                                      //loc_14483:
    _push(_si);                                 //push si
    _si = 0x8ec0;                               //mov si, 8EC0h
    _di = 0x8ebc;                               //mov di, 8EBCh
    _cx = 0x0004;                               //mov cx, 4
    _rep_movsw<MemAuto, MemAuto, DirAuto>();    //rep movsw
    _si = _pop();                               //pop si
    _ax = memory16(_ds, 0x8F34);                //mov ax, word_31464
    memory16(_ds, _di) = _ax;                   //mov [di], ax
    _ax = memory16(_ds, 0x8F36);                //mov ax, word_31466
    memory16(_ds, _di + 2) = _ax;               //mov [di+2], ax
    _bx = memory16(_ds, 0x8E80);                //mov bx, word_313B0
    if (_bx & _bx)                              //jnz short loc_144B4
      goto loc_144B4;
    _bx = memory16(_ds, 0x919E);                //mov bx, word_316CE
    _bx += 0x0006;                              //add bx, 6
    _bx <<= 1;                                  //shl bx, 1
    _ax = memory16(_ds, _bx + 12364);           //mov ax, [bx+304Ch]
    memory16(_ds, _si + 12) = _ax;              //mov [si+0Ch], ax
    return;                                     //retn
loc_144B4:                                      //loc_144B4:
    _bx <<= 1;                                  //shl bx, 1
    _ax = memory16(_ds, _bx + 12888);           //mov ax, [bx+3258h]
    memory16(_ds, _si + 12) = _ax;              //mov [si+0Ch], ax
    memory16(_ds, _si + 4) = 2131;              //mov word ptr [si+4], 853h
    _ax = memory16(_ds, 0x8E82);                //mov ax, word_313B2
    _ax = _ax + memory16(_ds, 0x8E80);          //add ax, word_313B0
    memory16(_ds, 0x8E80) = _ax;                //mov word_313B0, ax
    if (_ax == 0)                               //jz short loc_144E6
      goto loc_144E6;
    if (_ax != 0x0004)                          //jnz short locret_144E5
      goto locret_144E5;
    if (memory16(_ds, 0x8E82) != 0)             //jnz short loc_144DF
      goto loc_144DF;
    memory16(_ds, _si + 4) = 2199;              //mov word ptr [si+4], 897h
loc_144DF:                                      //loc_144DF:
    memory16(_ds, 0x8E82) = 0;                  //mov word_313B2, 0
locret_144E5:                                   //locret_144E5:
    return;                                     //retn
loc_144E6:                                      //loc_144E6:
    memory16(_ds, 0x8E82) = 0;                  //mov word_313B2, 0
    memory16(_ds, 0x8E7E) = 0xfff1;             //mov word_313AE, 0FFF1h
}

void sub_14759()
{
    sub_141B1();                                //call sub_141B1
    _ax = memory16(_ds, 0x9F12);                //mov ax, word_32442
    _bx = memory16(_ds, 0x919E);                //mov bx, word_316CE
    if ((short)_bx >= 0)                        //jns short loc_14769
      goto loc_14769;
    _bx = -_bx;                                 //neg bx
loc_14769:                                      //loc_14769:
    _bx <<= 1;                                  //shl bx, 1
    if (!(memory16(_ds, _si + 34) & 1))         //jz short loc_14775
      goto loc_14775;
    _bx += 0x0e;                                //add bx, 0Eh
loc_14775:                                      //loc_14775:
    _ax = _ax + memory16(_ds, _bx + 12918);     //add ax, [bx+3276h]
    memory16(_ds, _si + 18) = _ax;              //mov [si+12h], ax
    _ax = memory16(_ds, 0x9F16);                //mov ax, word_32446
    memory16(_ds, _si + 22) = _ax;              //mov [si+16h], ax
    memory16(_ds, _si + 4) = 1889;              //mov word ptr [si+4], 761h
    if (memory16(_ds, 0x8E80) == 0)             //jz short loc_1478F
      goto loc_1478F;
    return;                                     //retn
loc_1478F:                                      //loc_1478F:
    if ((short)memory16(_ds, _si + 34) < (short)2)//jl short loc_147A2
      goto loc_147A2;
loc_1479A:                                      //loc_1479A:
    if (!(memory(_ds, 0x8F59) & 2))             //jz short locret_147A1
      goto locret_147A1;
    memory16(_ds, _si + 4) = 2131;              //mov word ptr [si+4], 853h
locret_147A1:                                   //locret_147A1:
    return;                                     //retn
loc_147A2:                                      //loc_147A2:
    goto loc_1479A;                             //jmp short loc_1479A
}
