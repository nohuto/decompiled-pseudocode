/*
 * XREFs of FsRtlInitializeLargeMcbs @ 0x140B6982C
 * Callers:
 *     FsRtlInitSystem @ 0x140B693F0 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x1403C2C30 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideList @ 0x1407D71C0 (ExInitializePagedLookasideList.c)
 */

void FsRtlInitializeLargeMcbs()
{
  ExInitializePagedLookasideList(&FsRtlFirstPagedMappingLookasideList, 0LL, 0LL, 0, 0x78uLL, 0x6D695346u, 4u);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&FsRtlFirstNonPagedMappingLookasideList,
    0LL,
    0LL,
    0x200u,
    0x78uLL,
    0x6D695346u,
    4u);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&FsRtlFastMutexLookasideList,
    0LL,
    0LL,
    0x200u,
    0x38uLL,
    0x6D665346u,
    0x20u);
}
