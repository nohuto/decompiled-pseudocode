/*
 * XREFs of MiMarkLargePageMappings @ 0x140A42100
 * Callers:
 *     MiMarkLargePageRanges @ 0x140A421B8 (MiMarkLargePageRanges.c)
 * Callees:
 *     MiWalkPageTables @ 0x140209280 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 MiMarkLargePageMappings()
{
  char *AnyMultiplexedVm; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // r9
  _OWORD v5[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v5, 0, sizeof(v5));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v5[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  BYTE2(v5[0]) = BYTE2(v5[0]) & 0xE3 | 4;
  LOWORD(v5[0]) = 2567;
  *((_QWORD *)&v5[1] + 1) = AnyMultiplexedVm;
  *((_QWORD *)&v5[9] + 1) = MiMarkLargePagePte;
  BYTE6(v5[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v1, v2, v3);
  MiWalkPageTables((__int64)v5);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(v5[0]));
}
