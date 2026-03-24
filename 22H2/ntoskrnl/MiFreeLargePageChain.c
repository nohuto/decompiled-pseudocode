/*
 * XREFs of MiFreeLargePageChain @ 0x140556990
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x14028BF14 (MiReturnExcessPoolCommit.c)
 *     MiGetLargePageChain @ 0x140318414 (MiGetLargePageChain.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AB548 (MiTimeSingleLargePageZeroWorker.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall MiFreeLargePageChain(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int8 v6; // al
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v4 = a1;
    do
    {
      v5 = *(_QWORD *)v4;
      v6 = MiLockPageInline(v4, a2, a3, a4);
      v7[1] = *(_BYTE *)(v4 + 34) & 7;
      v7[2] = v6;
      v7[0] = (v4 + 0x58000000000LL) / 48;
      MiInsertLargePageInNodeList((__int64)v7);
      v4 = v5;
    }
    while ( v5 );
  }
}
