/*
 * XREFs of HalpAcquireHighLevelLock @ 0x140378990
 * Callers:
 *     EmonQueryInformation @ 0x140376660 (EmonQueryInformation.c)
 *     HalDisableInterrupt @ 0x140376CF0 (HalDisableInterrupt.c)
 *     HalEnableInterrupt @ 0x1403775A0 (HalEnableInterrupt.c)
 *     EmonSetInterval @ 0x140377C80 (EmonSetInterval.c)
 *     HalpInterruptSetDestination @ 0x140378400 (HalpInterruptSetDestination.c)
 *     HalpInterruptApplyOverrides @ 0x140378894 (HalpInterruptApplyOverrides.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14038628C (HalpTimerEnableHypervisorTimer.c)
 *     HalpUnmaskInterrupt @ 0x14038C4D0 (HalpUnmaskInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A1E84 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A306C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A32A0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptLocalErrorService @ 0x1403A6050 (HalpInterruptLocalErrorService.c)
 *     HalpMaskInterrupt @ 0x1403A6890 (HalpMaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CD46C (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EF6C4 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x1404BB1A0 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404BB810 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRequestInterrupt @ 0x1404BC6A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BDAEC (HalpInterruptServiceActiveBoth.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404C0650 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404C0800 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404C09E4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404C0AD0 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404D0770 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x1404D08E0 (HalpCreateSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntry @ 0x1404D0B98 (HalpFindSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x1404D0C6C (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpInsertSecondarySignalList @ 0x1404D0E40 (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x1404D0F30 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x1404D11C0 (HalpProcessSecondarySignalList.c)
 *     EmonAddProfileSource @ 0x1404D2D00 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x1404D3430 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x1404D4370 (EmonRemoveProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DD400 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1404DD860 (Amd64EnableMonitoring.c)
 *     Amd64QueryInformation @ 0x1404DDCE0 (Amd64QueryInformation.c)
 *     Amd64RemoveProfileSource @ 0x1404DDF60 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x1404DE140 (Amd64SetInterval.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E2000 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E34D0 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140229570 (KxAcquireSpinLock.c)
 */

unsigned __int8 __fastcall HalpAcquireHighLevelLock(PKSPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  KxAcquireSpinLock(SpinLock);
  return CurrentIrql;
}
