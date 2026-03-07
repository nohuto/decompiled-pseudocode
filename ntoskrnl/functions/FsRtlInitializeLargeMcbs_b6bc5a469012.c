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
