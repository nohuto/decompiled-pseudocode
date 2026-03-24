/*
 * XREFs of ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01AB088
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C0007210 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     xxxKeyEventEx @ 0x1C004BFD0 (xxxKeyEventEx.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C01AAF88 (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 */

void __fastcall xxxManageKeyboardModifiers(struct tagKL *a1, struct tagKL *a2)
{
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rbx
  __int64 v6; // rax
  unsigned __int8 v7[16]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v8; // [rsp+60h] [rbp-38h]

  v2 = gptiCurrent;
  v3 = 0LL;
  if ( *((_QWORD *)gptiCurrent + 54) )
  {
    if ( a1 )
    {
      *(_OWORD *)v7 = 0LL;
      v8 = 0LL;
      xxxAdjustPushStateForKL(gptiCurrent, v7, a1, a1, a2);
      xxxAdjustPushStateForKL(v2, v7, a2, a1, a2);
      v6 = *((_QWORD *)a1 + 6);
      if ( v6 && (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 80LL) & 1) != 0 && (byte_1C0250884 & 4) == 0 )
        xxxKeyEventEx(0x80A2u, 0x21Du, 0, 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
    }
    else
    {
      GetDomainLockRef(16);
      do
      {
        *(_BYTE *)(v3 + *((_QWORD *)v2 + 54) + 228) &= 0xAAu;
        *((_BYTE *)&gafAsyncKeyState + v3) &= 0xAAu;
        gafRawKeyState[v3++] &= 0xAAu;
      }
      while ( v3 < 64 );
    }
  }
}
