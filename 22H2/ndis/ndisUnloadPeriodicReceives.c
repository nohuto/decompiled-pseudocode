/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x1C0148330
 * Callers:
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C01441F0 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C00043E0 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C0005AC0 (NdisReleaseRWLock.c)
 *     NdisFreeRWLock @ 0x1C0038F10 (NdisFreeRWLock.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     NdisFreeNetBufferListPool @ 0x1C00AE550 (NdisFreeNetBufferListPool.c)
 */

void ndisUnloadPeriodicReceives()
{
  void *v0; // rbx
  NDIS_HANDLE v1; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( Lock )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    v1 = PoolHandle;
    if ( PoolHandle )
    {
      PoolHandle = 0LL;
      v0 = v1;
    }
    if ( ndisPeriodicReceives == 1 )
    {
      ndisPeriodicReceives = 0;
      ExDeleteNPagedLookasideList(&Lookaside);
      ExDeleteNPagedLookasideList(&stru_1C00E51C0);
      memset(&Lookaside, 0, 0x100uLL);
    }
    NdisReleaseRWLock(Lock, &LockState);
    NdisFreeRWLock(Lock);
    if ( v0 )
      NdisFreeNetBufferListPool(v0);
  }
  if ( ndisPerCpuPoisonPills )
  {
    ExFreePoolWithTag(ndisPerCpuPoisonPills, 0);
    ndisPerCpuPoisonPills = 0LL;
  }
  if ( qword_1C00E5108 )
  {
    ExFreePoolWithTag(qword_1C00E5108, 0);
    qword_1C00E5108 = 0LL;
  }
  if ( qword_1C00E5100 )
  {
    ExFreePoolWithTag(qword_1C00E5100, 0);
    qword_1C00E5100 = 0LL;
  }
  if ( qword_1C00E50F8 )
  {
    ExFreePoolWithTag(qword_1C00E50F8, 0);
    qword_1C00E50F8 = 0LL;
  }
  if ( qword_1C00E50F0 )
  {
    ExFreePoolWithTag(qword_1C00E50F0, 0);
    qword_1C00E50F0 = 0LL;
  }
}
