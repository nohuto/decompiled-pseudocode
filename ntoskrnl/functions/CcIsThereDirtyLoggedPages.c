char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v4; // di
  __int64 *v5; // rcx
  __int64 *v6; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  memset(&v14, 0, sizeof(v14));
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v14);
  v5 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    do
    {
      v6 = v5 - 2;
      if ( *(v5 - 1) == a1 )
        break;
      v5 = (__int64 *)*v5;
      v6 = 0LL;
    }
    while ( v5 != &CcVolumeCacheMapList );
    if ( v6 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)PspSystemPartition + 1) + 768LL), &LockHandle);
      if ( v6[8] || *((_DWORD *)v6 + 50) )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v6 + 50) + *((_DWORD *)v6 + 16);
        v4 = 1;
      }
      KxReleaseQueuedSpinLock(&LockHandle);
    }
  }
  KxReleaseQueuedSpinLock(&v14);
  OldIrql = v14.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v14.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (v14.OldIrql + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v4;
}
