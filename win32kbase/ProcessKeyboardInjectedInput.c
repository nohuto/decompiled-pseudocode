__int64 __fastcall ProcessKeyboardInjectedInput(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int16 v6; // cx
  unsigned __int8 v7; // al
  __int16 v8; // dx
  __int16 v9; // ax
  __int16 v10; // cx
  __int64 v11; // rcx
  _WORD *v12; // rax
  int v13; // eax
  __int16 v15; // dx
  __int16 v16; // ax
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h]
  __int128 v19; // [rsp+40h] [rbp-20h]

  v17 = 0LL;
  v3 = a3;
  v4 = a2;
  LOBYTE(a3) = 0;
  v19 = 0LL;
  if ( a2 )
    v18 = *a2;
  else
    v18 = 0LL;
  v6 = *(_WORD *)(a1 + 4);
  if ( (v6 & 0x60) != 0 )
  {
    v8 = WORD1(v17);
  }
  else
  {
    LOBYTE(v17) = *(_BYTE *)(a1 + 2);
    LOBYTE(a2) = (v6 & 2) != 0 ? 0xE0 : 0;
    v7 = VKFromVSC(&v17, a2);
    a3 = v7;
    v8 = v7;
    WORD1(v17) = v7;
  }
  v9 = *(_WORD *)(a1 + 4);
  if ( (v9 & 0x40) != 0 )
  {
    v10 = *(_WORD *)(a1 + 2);
    LOBYTE(a3) = *(_BYTE *)(a1 + 2);
    switch ( v10 )
    {
      case 16:
        LOBYTE(a3) = -95;
        break;
      case 17:
        LOBYTE(a3) = ((v9 & 2) != 0) | 0xA2;
        break;
      case 18:
        LOBYTE(a3) = ((v9 & 2) != 0) | 0xA4;
        break;
    }
    v8 = (unsigned __int8)a3 | 0x2000;
    *(_WORD *)(a1 + 2) = 0;
    WORD1(v17) = v8;
    v9 &= ~0x40u;
    *(_WORD *)(a1 + 4) = v9;
  }
  if ( (v9 & 1) != 0 )
  {
    v8 |= 0x8000u;
    WORD1(v17) = v8;
  }
  if ( (v9 & 0x20) != 0 )
  {
    LOWORD(v17) = *(_WORD *)(a1 + 2);
    v15 = ((v9 & 1) << 15) | 0x10E7 | v8;
  }
  else
  {
    if ( (v9 & 2) != 0 )
    {
      v16 = 256;
    }
    else
    {
      if ( (unsigned __int8)(a3 - 96) > 9u && (_BYTE)a3 != 110 )
      {
        LODWORD(v11) = 0;
        v12 = &ausNumPadCvt;
        while ( (_BYTE)a3 != *(_BYTE *)v12 )
        {
          v11 = (unsigned int)(v11 + 1);
          v12 = (_WORD *)((char *)&ausNumPadCvt + 2 * v11);
          if ( !*v12 )
            goto LABEL_20;
        }
      }
      v16 = 2048;
    }
    v15 = v16 | v8;
  }
  WORD1(v17) = v15;
LABEL_20:
  v13 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  LOBYTE(a3) = 1;
  *(_QWORD *)&v19 = *(_QWORD *)a1;
  HIDWORD(v17) = v13;
  DWORD2(v19) = 0;
  return xxxProcessKeyEvent(&v17, 0LL, a3, 0LL, v4, v3);
}
