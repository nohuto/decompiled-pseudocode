/*
 * XREFs of IoReleaseRemoveLockEx @ 0x1402D9240
 * Callers:
 *     DifIoReleaseRemoveLockExWrapper @ 0x1405DEA70 (DifIoReleaseRemoveLockExWrapper.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x140ADC3E0 (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x140ADC9B0 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x140ADCA20 (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140ACF89C (VfRemLockReportBadReleaseTag.c)
 */

void __stdcall IoReleaseRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  char v5; // r15
  LIST_ENTRY *p_WaitListHead; // r14
  unsigned __int64 v7; // rbp
  struct _LIST_ENTRY *Flink; // rdi
  PVOID *p_Flink; // rcx
  struct _LIST_ENTRY *v10; // rax
  PVOID **v11; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  if ( RemlockSize == 120 )
  {
    v5 = 0;
    p_WaitListHead = &RemoveLock[3].Common.RemoveEvent.Header.WaitListHead;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
    Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
    p_Flink = (PVOID *)&Flink->Flink;
    if ( Flink )
    {
      do
      {
        if ( v5 || p_Flink[1] != Tag )
        {
          Flink = (struct _LIST_ENTRY *)p_Flink;
          p_Flink = (PVOID *)*p_Flink;
        }
        else
        {
          v10 = (struct _LIST_ENTRY *)*p_Flink;
          v5 = 1;
          if ( p_Flink == (PVOID *)p_WaitListHead->Flink )
          {
            p_WaitListHead->Flink = v10;
            v11 = (PVOID **)&RemoveLock[3].Common.RemoveEvent.Header.WaitListHead;
          }
          else
          {
            Flink->Flink = v10;
            v11 = (PVOID **)Flink;
          }
          ExFreePoolWithTag(p_Flink, 0);
          p_Flink = *v11;
        }
      }
      while ( p_Flink );
    }
    KxReleaseSpinLock((volatile signed __int64 *)&RemoveLock[2].Common.RemoveEvent.Header.Lock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v7);
    if ( !v5
      && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0
      && ((MmVerifierData & 0x800) == 0
       || !(unsigned int)VfRemLockReportBadReleaseTag((ULONG_PTR)RemoveLock, (ULONG_PTR)Tag)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
}
