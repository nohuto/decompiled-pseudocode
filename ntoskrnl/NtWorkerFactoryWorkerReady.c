/*
 * XREFs of NtWorkerFactoryWorkerReady @ 0x1402E85A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtWorkerFactoryWorkerReady(void *a1)
{
  NTSTATUS v1; // edi
  _DWORD *v2; // rbx
  int v3; // eax
  int v4; // eax
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v1 = ObReferenceObjectByHandle(
         a1,
         0x10u,
         ExpWorkerFactoryObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v1 >= 0 )
  {
    v2 = Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    v3 = v2[100];
    if ( v3 )
    {
      v2[100] = v3 - 1;
      v4 = v2[98];
      if ( v4 )
      {
        ++v2[96];
        ++v2[97];
        v2[98] = v4 - 1;
      }
      else
      {
        v1 = -1073741558;
      }
    }
    else
    {
      v1 = -1073741823;
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v2 = Object;
      }
    }
    __writecr8(OldIrql);
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  return (unsigned int)v1;
}
