/*
 * XREFs of HvlpAcquireHypercallPage @ 0x14053E3C0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 *     HvlGetCoverageData @ 0x14053D1C8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x14053D328 (HvlGetCoverageInfo.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14053D65C (HvlQueryHypervisorTscAdjustment.c)
 *     HvlResetCoverageVector @ 0x14053D84C (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x14053DE50 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x14053E1E0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x14053E7A4 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x14053EAB4 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x14053EBC8 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x14053EE40 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x14053FBE4 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x14053FDA0 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x14053FE30 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x14053FF84 (HvlpStartVirtualProcessor.c)
 *     HvlpWithdrawPages @ 0x140540080 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140540384 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140540DE0 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140540EE0 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140541020 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405412E0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1405416E0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x1405419C0 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140541A90 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x140542050 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405422B0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1405423F0 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1405424F0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x140542640 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x140542730 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1405427C0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140542A34 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140542AC0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140542B90 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140542C28 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140542D90 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140542EC0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1405431C0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1405435A0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140543734 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x140543880 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1405439B0 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140543A50 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x140543BC0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140543EF8 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140543FBC (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1405440CC (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x14054453C (HvlNotifyAcpiReenabled.c)
 *     HvlParkedVirtualProcessors @ 0x1405445A8 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x140544744 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x14054486C (HvlPrepareForSecureHibernate.c)
 *     HvlpInitializePowerStatistics @ 0x140544B4C (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x140544E50 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x140545434 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140546060 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405461EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140546558 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140546B64 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x140547138 (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1405477B4 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14054785C (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x140547974 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140547AF8 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x140547EC8 (HvlpInvokeGetPageListHypercall.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1406767D0 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1406768F8 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140676A60 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140676BD4 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140676D34 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14093E334 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x14093E4E0 (HvlpLpCpuid.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 */

PHYSICAL_ADDRESS *__fastcall HvlpAcquireHypercallPage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  volatile signed __int32 *v9; // rdx
  struct _KPRCB *v10; // rax
  PHYSICAL_ADDRESS *result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  PSLIST_ENTRY v13; // rax
  PHYSICAL_ADDRESS *HypercallCachedPages; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v19; // dl
  _DWORD *SchedulerAssist; // r10
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  volatile signed __int32 *v22; // rdx
  struct _KPRCB *v23; // rax
  __int16 v24; // [rsp+40h] [rbp-8h]

  v4 = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = (PHYSICAL_ADDRESS *)v13;
    if ( v13 )
    {
      *(_DWORD *)a1 = 1;
      *(_QWORD *)(a1 + 8) = CurrentPrcb;
      *(_QWORD *)(a1 + 16) = v13;
      *(_QWORD *)(a1 + 24) = v13[1].Next;
    }
    else
    {
      LODWORD(v15) = 4;
      if ( (a2 & 4) != 0 )
        return 0LL;
      if ( a3 )
      {
        v16 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v17 = v16 + a4 - 1;
        HypercallCachedPages = (PHYSICAL_ADDRESS *)(v17 & 0xFFFFFFFFFFFFF000uLL);
        if ( ((v16 ^ v17) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          HypercallCachedPages = (PHYSICAL_ADDRESS *)((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        *(_DWORD *)a1 = 2;
        CurrentIrql = KeGetCurrentIrql();
        *(_BYTE *)(a1 + 8) = CurrentIrql;
        if ( CurrentIrql < 2u )
        {
          v19 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              if ( v19 != 2 )
                v15 = (-1LL << (v19 + 1)) & 4;
              SchedulerAssist[5] |= v15;
            }
          }
        }
        PhysicalAddress = MmGetPhysicalAddress(HypercallCachedPages);
      }
      else
      {
        *(_DWORD *)a1 = 4;
        _disable();
        v22 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
        if ( v22 )
          _InterlockedOr(v22, 0x200000u);
        *(_DWORD *)(a1 + 12) = a2;
        *(_BYTE *)(a1 + 8) = (v24 & 0x200) != 0;
        v23 = KeGetCurrentPrcb();
        if ( (a2 & 1) != 0 )
        {
          HypercallCachedPages = (PHYSICAL_ADDRESS *)v23->HypercallCachedPages;
        }
        else if ( (a2 & 2) != 0 )
        {
          HypercallCachedPages = (PHYSICAL_ADDRESS *)((char *)v23->HypercallCachedPages + 4096);
        }
        PhysicalAddress = HypercallCachedPages[2];
      }
      *(PHYSICAL_ADDRESS *)(a1 + 24) = PhysicalAddress;
    }
    return HypercallCachedPages;
  }
  else
  {
    *(_DWORD *)a1 = 4;
    _disable();
    v9 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( v9 )
      _InterlockedOr(v9, 0x200000u);
    *(_DWORD *)(a1 + 12) = a2;
    *(_BYTE *)(a1 + 8) = (v24 & 0x200) != 0;
    v10 = KeGetCurrentPrcb();
    if ( (a2 & 1) != 0 )
    {
      v4 = (__int64)v10->HypercallCachedPages;
    }
    else if ( (a2 & 2) != 0 )
    {
      v4 = (__int64)v10->HypercallCachedPages + 4096;
    }
    result = (PHYSICAL_ADDRESS *)v4;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 16);
  }
  return result;
}
