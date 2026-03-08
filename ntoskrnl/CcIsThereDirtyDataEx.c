/*
 * XREFs of CcIsThereDirtyDataEx @ 0x140535650
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall CcIsThereDirtyDataEx(PVPB Vpb, PULONG NumberOfDirtyPages)
{
  BOOLEAN v4; // di
  __int64 *v5; // rax
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  __int64 *v7; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  memset(&v15, 0, sizeof(v15));
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v15);
  v5 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    DeviceObject = Vpb->DeviceObject;
    do
    {
      v7 = v5 - 2;
      if ( (struct _DEVICE_OBJECT *)*(v5 - 1) == DeviceObject )
        break;
      v5 = (__int64 *)*v5;
      v7 = 0LL;
    }
    while ( v5 != &CcVolumeCacheMapList );
    if ( v7 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)PspSystemPartition + 1) + 768LL), &LockHandle);
      if ( v7[4] || *((_DWORD *)v7 + 49) )
      {
        if ( NumberOfDirtyPages )
          *NumberOfDirtyPages = *((_DWORD *)v7 + 8) + *((_DWORD *)v7 + 49);
        v4 = 1;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v15);
  OldIrql = v15.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v15.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (v15.OldIrql + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v4;
}
