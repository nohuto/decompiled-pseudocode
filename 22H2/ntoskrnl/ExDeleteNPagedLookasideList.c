/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x14039A420
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14088A630 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140317790 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140317864 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside);
}
