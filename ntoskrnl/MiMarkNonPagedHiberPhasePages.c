/*
 * XREFs of MiMarkNonPagedHiberPhasePages @ 0x140AA9324
 * Callers:
 *     MiMarkHotPatchForHiberPhase @ 0x140640410 (MiMarkHotPatchForHiberPhase.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140640440 (MiMarkHotPatchesForHiberPhase.c)
 *     MmMarkHiberPhase @ 0x140AA9B70 (MmMarkHiberPhase.c)
 *     MmMarkImageForHiberPhase @ 0x140AA9DFC (MmMarkImageForHiberPhase.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiMarkNonPagedHiberPhasePages(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __m128i v4; // rdi
  __m128i v6[11]; // [rsp+20h] [rbp-D8h] BYREF

  v4.m128i_i64[1] = a2;
  v4.m128i_i64[0] = a1;
  memset(v6, 0, sizeof(v6));
  v6[0].m128i_i32[0] = a3 | 0x901;
  v6[9].m128i_i64[1] = (__int64)MiMarkNonPagedHiberPhasePte;
  v6[1].m128i_i64[1] = (__int64)MiGetAnyMultiplexedVm(3);
  v6[0].m128i_i8[7] = 17;
  v6[2] = v4;
  return MiWalkPageTables(v6);
}
