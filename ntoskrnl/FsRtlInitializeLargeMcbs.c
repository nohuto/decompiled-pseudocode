/*
 * XREFs of FsRtlInitializeLargeMcbs @ 0x140B65F50
 * Callers:
 *     FsRtlInitSystem @ 0x140B65B14 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x1403BD370 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideList @ 0x140787D60 (ExInitializePagedLookasideList.c)
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
