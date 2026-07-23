/*
 * XREFs of RtlInitializeRangeListPackage @ 0x140A946EC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x1406BFA10 (ExInitializePagedLookasideList.c)
 */

void RtlInitializeRangeListPackage()
{
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&RtlpRangeListEntryLookasideList,
    0LL,
    0LL,
    0,
    0x38uLL,
    0x656C5252u,
    0x10u);
}
