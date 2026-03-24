/*
 * XREFs of UNLOCK_CM_RM_LIST @ 0x14070D988
 * Callers:
 *     CmpInitCmRM @ 0x14070D220 (CmpInitCmRM.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *UNLOCK_CM_RM_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
