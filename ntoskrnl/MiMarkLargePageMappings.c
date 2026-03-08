/*
 * XREFs of MiMarkLargePageMappings @ 0x140B4F638
 * Callers:
 *     MiMarkLargePageRanges @ 0x140B4F274 (MiMarkLargePageRanges.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
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
