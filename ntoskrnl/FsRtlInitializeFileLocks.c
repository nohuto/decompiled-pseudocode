/*
 * XREFs of FsRtlInitializeFileLocks @ 0x140B660E0
 * Callers:
 *     FsRtlInitSystem @ 0x140B65B14 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x1403BD370 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideList @ 0x140787D60 (ExInitializePagedLookasideList.c)
 */

LIST_ENTRY *FsRtlInitializeFileLocks()
{
  LIST_ENTRY *result; // rax

  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList,
    0LL,
    0LL,
    0x200u,
    0x38uLL,
    0x68734C46u,
    0x10u);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&FsRtlExclusiveLockLookasideList,
    0LL,
    0LL,
    0x200u,
    0x48uLL,
    0x78654C46u,
    0x10u);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&FsRtlWaitingLockLookasideList,
    0LL,
    0LL,
    0x200u,
    0x20uLL,
    0x6C774C46u,
    0x10u);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList,
    0LL,
    0LL,
    0x200u,
    0x38uLL,
    0x6E6C4C46u,
    0x10u);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&FsRtlLockInfoLookasideList,
    0LL,
    0LL,
    0x200u,
    0x40uLL,
    0x696C4C46u,
    8u);
  ExInitializePagedLookasideList(&FsRtlFileLockLookasideList, 0LL, 0LL, 0, 0x60uLL, 0x6C664C46u, 8u);
  result = &FsRtlCreateLockInfo.Event.Header.WaitListHead;
  FsRtlCreateLockInfo.Owner = 0LL;
  FsRtlCreateLockInfo.Contention = 0;
  FsRtlCreateLockInfo.Event.Header.SignalState = 0;
  FsRtlCreateLockInfo.Event.Header.WaitListHead.Blink = &FsRtlCreateLockInfo.Event.Header.WaitListHead;
  FsRtlCreateLockInfo.Event.Header.WaitListHead.Flink = &FsRtlCreateLockInfo.Event.Header.WaitListHead;
  FsRtlFileLockCancelCollideLock = 0LL;
  FsRtlFileLockCancelCollideList = 0LL;
  FsRtlCreateLockInfo.Count = 1;
  LOWORD(FsRtlCreateLockInfo.Event.Header.Lock) = 1;
  FsRtlCreateLockInfo.Event.Header.Size = 6;
  return result;
}
