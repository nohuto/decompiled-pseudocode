/*
 * XREFs of NtShutdownWorkerFactory @ 0x1402FC0D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpShutdownWorkerFactory @ 0x1402037D0 (ExpShutdownWorkerFactory.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x140861790 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtShutdownWorkerFactory(void *a1, volatile signed __int32 *a2)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v4; // esi
  struct _EX_RUNDOWN_REF *v5; // rbx
  unsigned __int8 OldIrql; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  struct _EX_RUNDOWN_REF *v15; // [rsp+78h] [rbp+20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a2 + 1) > 0x7FFFFFFF0000LL || a2 + 1 < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(a1, 0x20u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)Object;
    ExpShutdownWorkerFactory(Object);
    ExWaitForRundownProtectionRelease(v5 + 13);
    v5 += 49;
    v15 = v5;
    _InterlockedExchangeAdd(a2, v5->Count);
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    LODWORD(v5->Count) = 0;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  return (unsigned int)v4;
}
