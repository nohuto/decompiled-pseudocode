/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x1403C0DB0
 * Callers:
 *     DifExDeleteNPagedLookasideListWrapper @ 0x1405D5F40 (DifExDeleteNPagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140939DC0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x1402EC330 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1402EC404 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside);
}
