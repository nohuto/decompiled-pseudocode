/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x1406B530C
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14024185C (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1406B6040 (CmpRundownUnitOfWork.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
