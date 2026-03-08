/*
 * XREFs of IoAcquireRemoveLockEx @ 0x140305F80
 * Callers:
 *     PopFxLockDevice @ 0x1402B91F4 (PopFxLockDevice.c)
 *     PopFxAllocatePowerIrp @ 0x1402BAC6C (PopFxAllocatePowerIrp.c)
 *     PoFxPowerControl @ 0x1402D91A0 (PoFxPowerControl.c)
 *     PopFxAddRefDevice @ 0x140305F38 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1403060C4 (PopFxProcessWork.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140393420 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxAllocatePowerIrpLegacy @ 0x14040B520 (PopFxAllocatePowerIrpLegacy.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x140587F40 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPlatformIdleVeto @ 0x140588DC0 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x140588FC0 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x140589F60 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14058A070 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x14059D504 (PopPepPlatformStateRegistered.c)
 *     PopFxAcpiForwardNotification @ 0x14059E718 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14059E858 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxAcpiUnregisterDevice @ 0x14059EB40 (PopFxAcpiUnregisterDevice.c)
 *     DifIoAcquireRemoveLockExWrapper @ 0x1405DA910 (DifIoAcquireRemoveLockExWrapper.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1409818B0 (PoFxSetTargetDripsDevicePowerState.c)
 *     ViFilterDispatchGeneric @ 0x140ADC520 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140ADC600 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140ADC7D0 (ViFilterDispatchPower.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoAcquireRemoveLockEx(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
        ULONG RemlockSize)
{
  NTSTATUS v9; // esi
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v12; // r14
  unsigned __int64 v13; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v17; // eax
  bool v18; // zf

  _InterlockedIncrement(&RemoveLock->Common.IoCount);
  v9 = 0;
  if ( RemoveLock->Common.Removed )
  {
    if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
    return -1073741738;
  }
  else if ( RemlockSize == 120 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, LODWORD(RemoveLock[1].Common.RemoveEvent.Header.WaitListHead.Flink));
    v12 = (struct _LIST_ENTRY *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 8) = Tag;
      *(_QWORD *)(Pool2 + 24) = File;
      *(_DWORD *)(Pool2 + 32) = Line;
      *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000320];
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      v12->Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
      RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v12;
      KxReleaseSpinLock((volatile signed __int64 *)&RemoveLock[2].Common.RemoveEvent.Header.Lock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v13);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  return v9;
}
