/*
 * XREFs of ExDeleteLookasideListEx @ 0x1402EC380
 * Callers:
 *     DifExDeleteLookasideListExWrapper @ 0x1405D5E40 (DifExDeleteLookasideListExWrapper.c)
 * Callees:
 *     ExFlushLookasideListEx @ 0x1402EC3C0 (ExFlushLookasideListEx.c)
 *     ExpRemoveGeneralLookaside @ 0x1402EC404 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx

  v2 = (Lookaside->L.Type & 1) == 0;
  v3 = &ExNPagedLookasideLock;
  if ( !v2 )
    v3 = &ExPagedLookasideLock;
  ExpRemoveGeneralLookaside(v3, Lookaside);
  ExFlushLookasideListEx(Lookaside);
}
