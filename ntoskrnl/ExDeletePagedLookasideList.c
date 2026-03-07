void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock, Lookaside);
  ExpFlushGeneralLookaside(Lookaside);
}
