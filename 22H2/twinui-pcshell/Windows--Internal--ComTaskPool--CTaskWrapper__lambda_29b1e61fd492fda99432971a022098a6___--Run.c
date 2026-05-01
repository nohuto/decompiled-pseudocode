/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29b1e61fd492fda99432971a022098a6___::Run @ 0x1802FFE50
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x1802FEFE0 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29b1e61fd492fda99432971a022098a6___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 48LL);
  AcquireSRWLockExclusive(v2);
  TabTransferManager::PerformCancel(*(TabTransferManager **)(a1 + 16), 0);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
