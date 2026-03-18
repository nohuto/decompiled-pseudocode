/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x1407684B8
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x140302D98 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1407692E8 (CmpRundownUnitOfWork.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 */

void UNLOCK_TRANSACTION_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
}
