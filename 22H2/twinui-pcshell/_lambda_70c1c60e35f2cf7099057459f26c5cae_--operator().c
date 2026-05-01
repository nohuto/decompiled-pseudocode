/*
 * XREFs of _lambda_70c1c60e35f2cf7099057459f26c5cae_::operator() @ 0x1802FDA90
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_70c1c60e35f2cf7099057459f26c5cae___::Run @ 0x1802FFF70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_70c1c60e35f2cf7099057459f26c5cae___--Run.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802F0424 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x1802FDFCC (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_70c1c60e35f2cf7099057459f26c5cae_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rbx
  RTL_SRWLOCK *v3; // rdx
  RTL_SRWLOCK *v4; // rax
  PVOID Ptr; // rcx
  _BYTE v6[32]; // [rsp+20h] [rbp-58h] BYREF
  char v7[24]; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+58h] [rbp-20h]

  TabViewManagerTraceLogging::WatchCurrentThread(
    (wil::ActivityThreadWatcher *)v6,
    "TabTransferManager_DragEnterForApplicationManagedTab");
  v2 = *a1 + 6;
  AcquireSRWLockExclusive(v2);
  v3 = *a1;
  v4 = a1[2];
  a1[2] = 0LL;
  Ptr = v3[34].Ptr;
  v3[34].Ptr = v4;
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  TabTransferManager::AdvanceTransfer(*a1, 4LL);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v8 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v7);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v6);
}
