/*
 * XREFs of MiMarkLargePageMappings @ 0x140B5AF48
 * Callers:
 *     MiMarkLargePageRanges @ 0x140B5AB84 (MiMarkLargePageRanges.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025BBE0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 MiMarkLargePageMappings()
{
  char *AnyMultiplexedVm; // rbx
  __m128i v2[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v2[0].m128i_i32[0] = 2567;
  v2[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  v2[0].m128i_i8[4] = v2[0].m128i_i8[4] & 0xE3 | 4;
  v2[9].m128i_i64[1] = (__int64)MiMarkLargePagePte;
  v2[1].m128i_i64[1] = (__int64)AnyMultiplexedVm;
  v2[0].m128i_i8[7] = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables(v2);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v2[0].m128i_u8[7]);
}
