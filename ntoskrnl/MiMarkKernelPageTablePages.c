/*
 * XREFs of MiMarkKernelPageTablePages @ 0x140AA9288
 * Callers:
 *     MmMarkHiberPhase @ 0x140AA9B70 (MmMarkHiberPhase.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 MiMarkKernelPageTablePages()
{
  char *AnyMultiplexedVm; // rax
  __m128i v2[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  v2[0].m128i_i32[0] = 2305;
  v2[0].m128i_i8[4] = v2[0].m128i_i8[4] & 0xE3 | 4;
  v2[9].m128i_i64[1] = (__int64)MiMarkKernelPageTablePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v2[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  v2[1].m128i_i64[1] = (__int64)AnyMultiplexedVm;
  v2[0].m128i_i8[7] = 17;
  return MiWalkPageTables(v2);
}
