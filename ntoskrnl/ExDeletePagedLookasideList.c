/*
 * XREFs of ExDeletePagedLookasideList @ 0x1402EC300
 * Callers:
 *     DifExDeletePagedLookasideListWrapper @ 0x1405D6040 (DifExDeletePagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140939DC0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x1402EC330 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1402EC404 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock, Lookaside);
  ExpFlushGeneralLookaside(Lookaside);
}
