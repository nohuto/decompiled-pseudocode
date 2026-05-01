/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a2f07679fb06ed1e26642539d8e628___::Run @ 0x180300200
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x1802FE23C (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     ?ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803014EC (-ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a2f07679fb06ed1e26642539d8e628___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 48LL);
  AcquireSRWLockExclusive(v2);
  v3 = *(_OWORD *)(a1 + 32);
  TabTransferManager::ValidateTabId(*(_QWORD *)(a1 + 16), &v3);
  TabTransferManager::AdvanceTransfer(*(_QWORD *)(a1 + 16), 0x20u);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
