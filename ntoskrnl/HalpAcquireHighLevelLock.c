/*
 * XREFs of HalpAcquireHighLevelLock @ 0x140379818
 * Callers:
 *     HalDisableInterrupt @ 0x14028E8F0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x14028E950 (HalpInterruptSetDestination.c)
 *     HalEnableInterrupt @ 0x14028F730 (HalEnableInterrupt.c)
 *     HalpMaskInterrupt @ 0x140376370 (HalpMaskInterrupt.c)
 *     HalpInterruptLocalErrorService @ 0x140377E80 (HalpInterruptLocalErrorService.c)
 *     EmonSetInterval @ 0x140378050 (EmonSetInterval.c)
 *     HalpInterruptEnableNmi @ 0x140378254 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403789F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpFindSecondaryIcEntry @ 0x140379320 (HalpFindSecondaryIcEntry.c)
 *     HalpUnmaskInterrupt @ 0x140379600 (HalpUnmaskInterrupt.c)
 *     HalpInterruptApplyOverrides @ 0x140379748 (HalpInterruptApplyOverrides.c)
 *     HalpTimerConfigureInterrupt @ 0x140379C34 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403A9F64 (HalpInterruptRemapFixedLines.c)
 *     HalpCreateSecondaryIcEntry @ 0x1403AA9B8 (HalpCreateSecondaryIcEntry.c)
 *     IvtFlushDomainTb @ 0x140456980 (IvtFlushDomainTb.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x140502010 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405025EC (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRequestInterrupt @ 0x1405031A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14050342C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptServiceActiveBoth @ 0x1405047BC (HalpInterruptServiceActiveBoth.c)
 *     HalpQueryProfileSource @ 0x140505B3C (HalpQueryProfileSource.c)
 *     HalpQueryProfileSourceList @ 0x140505CD8 (HalpQueryProfileSourceList.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140507660 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x140507810 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1405079F4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140507AE0 (HalpVpptStop.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140508738 (HalpTimerEnableHypervisorTimer.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140517798 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x1405179A4 (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpInsertSecondarySignalList @ 0x140517B78 (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x140517C68 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x140517EB0 (HalpProcessSecondarySignalList.c)
 *     EmonAddProfileSource @ 0x14051A480 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x14051ADD0 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x14051BF80 (EmonRemoveProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405263A0 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x140526CE0 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x140527A10 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x140527C30 (Amd64SetInterval.c)
 *     IvtAttachDeviceDomainInternal @ 0x140529388 (IvtAttachDeviceDomainInternal.c)
 *     IvtFreeDomain @ 0x14052A260 (IvtFreeDomain.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052C890 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x14052D9F0 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 */

unsigned __int8 __fastcall HalpAcquireHighLevelLock(PKSPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r8
  __int64 v4; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v4) = 0x8000;
    else
      v4 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v4;
  }
  KxAcquireSpinLock(SpinLock);
  return CurrentIrql;
}
