/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x140664390
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14026D0B0 (CmpTransEnlistUowInCmTrans.c)
 *     CmpPrepareLightWeightTransaction @ 0x1405DF2C8 (CmpPrepareLightWeightTransaction.c)
 *     CmpRundownUnitOfWork @ 0x140664278 (CmpRundownUnitOfWork.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *UNLOCK_TRANSACTION_LIST()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v0, v1, v2);
}
