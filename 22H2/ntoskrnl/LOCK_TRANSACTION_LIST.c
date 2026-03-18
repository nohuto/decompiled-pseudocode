/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x1407684DC
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x140302D98 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1407692E8 (CmpRundownUnitOfWork.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
