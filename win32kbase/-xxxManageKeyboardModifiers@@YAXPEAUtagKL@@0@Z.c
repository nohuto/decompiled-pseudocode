/*
 * XREFs of ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C0214488
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C00C7730 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C0214388 (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 */

void __fastcall xxxManageKeyboardModifiers(struct tagKL *a1, struct tagKL *a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int8 v19[16]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v20; // [rsp+60h] [rbp-38h]

  v4 = gptiCurrent;
  v5 = 0LL;
  if ( *((_QWORD *)gptiCurrent + 54) )
  {
    if ( a1 )
    {
      *(_OWORD *)v19 = 0LL;
      v20 = 0LL;
      xxxAdjustPushStateForKL(gptiCurrent, v19, a1, a1, a2);
      xxxAdjustPushStateForKL(v4, v19, a2, a1, a2);
      v11 = *((_QWORD *)a1 + 6);
      if ( v11 )
      {
        v12 = *(unsigned int *)(*(_QWORD *)(v11 + 32) + 80LL);
        if ( (v12 & 1) != 0 && (*(_BYTE *)(SGDGetUserSessionState(v12, v8, v9, v10) + 14060) & 4) == 0 )
          xxxKeyEventEx(32930LL, 541LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
      }
    }
    else
    {
      do
      {
        *(_BYTE *)(*((_QWORD *)v4 + 54) + v5 + 236) &= 0xAAu;
        v13 = SGDGetUserSessionState(a1, a2, a3, a4);
        *(_BYTE *)(v13 + v5 + 13992) &= 0xAAu;
        v18 = SGDGetUserSessionState(v15, v14, v16, v17);
        *(_BYTE *)(v18 + v5++ + 14056) &= 0xAAu;
      }
      while ( v5 < 64 );
    }
  }
}
