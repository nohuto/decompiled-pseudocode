/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x1403C6670
 * Callers:
 *     DifExDeleteNPagedLookasideListWrapper @ 0x1405D83F0 (DifExDeleteNPagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14093CDE0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140357F10 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140357FE4 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside);
}
