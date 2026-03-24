/*
 * XREFs of UNLOCK_CM_RM_LIST @ 0x1407167E0
 * Callers:
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140206970 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *UNLOCK_CM_RM_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
