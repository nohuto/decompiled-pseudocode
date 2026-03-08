/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x140939DC0
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x1402EC300 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1403C0DB0 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
