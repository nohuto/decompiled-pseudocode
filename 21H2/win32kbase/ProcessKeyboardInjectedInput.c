/*
 * XREFs of ProcessKeyboardInjectedInput @ 0x1C00053AC
 * Callers:
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C0005350 (ProcessKeyboardInjectedInputViaRim.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0005F10 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C00CD590 (VKFromVSC.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessKeyboardInjectedInput(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int16 v6; // cx
  unsigned __int8 v7; // al
  __int16 v8; // dx
  __int16 v9; // ax
  __int64 v10; // rcx
  __int16 *v11; // rax
  int v12; // eax
  __int16 v14; // dx
  __int16 v15; // ax
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int128 v18; // [rsp+40h] [rbp-20h]

  v16 = 0LL;
  v3 = a3;
  v4 = a2;
  LOBYTE(a3) = 0;
  v18 = 0LL;
  if ( a2 )
    v17 = *a2;
  else
    v17 = 0LL;
  v6 = *(_WORD *)(a1 + 4);
  if ( (v6 & 0x60) != 0 )
  {
    v8 = WORD1(v16);
  }
  else
  {
    LOBYTE(v16) = *(_BYTE *)(a1 + 2);
    LOBYTE(a2) = (v6 & 2) != 0 ? 0xE0 : 0;
    v7 = VKFromVSC(&v16, a2, a3);
    v6 = *(_WORD *)(a1 + 4);
    LOBYTE(a3) = v7;
    v8 = v7;
    WORD1(v16) = v7;
  }
  if ( (v6 & 0x40) != 0 )
  {
    v9 = *(_WORD *)(a1 + 2);
    LOBYTE(a3) = *(_BYTE *)(a1 + 2);
    switch ( v9 )
    {
      case 16:
        LOBYTE(a3) = -95;
        break;
      case 17:
        LOBYTE(a3) = ((v6 & 2) != 0) | 0xA2;
        break;
      case 18:
        LOBYTE(a3) = ((v6 & 2) != 0) | 0xA4;
        break;
    }
    v8 = (unsigned __int8)a3 | 0x2000;
    *(_WORD *)(a1 + 2) = 0;
    WORD1(v16) = v8;
    v6 &= ~0x40u;
    *(_WORD *)(a1 + 4) = v6;
  }
  if ( (v6 & 1) != 0 )
  {
    v8 |= 0x8000u;
    WORD1(v16) = v8;
  }
  if ( (v6 & 0x20) != 0 )
  {
    LOWORD(v16) = *(_WORD *)(a1 + 2);
    v14 = ((v6 & 1) << 15) | 0x10E7 | v8;
LABEL_30:
    WORD1(v16) = v14;
    goto LABEL_21;
  }
  if ( (v6 & 2) != 0 )
  {
    v15 = 256;
LABEL_29:
    v14 = v15 | v8;
    goto LABEL_30;
  }
  if ( (unsigned __int8)(a3 - 96) <= 9u || (_BYTE)a3 == 110 )
  {
LABEL_28:
    v15 = 2048;
    goto LABEL_29;
  }
  LODWORD(v10) = 0;
  if ( ausNumPadCvt[0] )
  {
    v11 = ausNumPadCvt;
    while ( (_BYTE)a3 != *(_BYTE *)v11 )
    {
      v10 = (unsigned int)(v10 + 1);
      v11 = &ausNumPadCvt[v10];
      if ( !*v11 )
        goto LABEL_21;
    }
    goto LABEL_28;
  }
LABEL_21:
  v12 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)&v18 = *(_QWORD *)a1;
  HIDWORD(v16) = v12;
  DWORD2(v18) = 0;
  return xxxProcessKeyEvent(&v16, 0LL, 1LL, 0LL, v4, v3);
}
