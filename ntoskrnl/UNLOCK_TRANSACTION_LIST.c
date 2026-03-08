/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x1406B52E8
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14024185C (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1406B6040 (CmpRundownUnitOfWork.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void UNLOCK_TRANSACTION_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
}
