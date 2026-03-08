/*
 * XREFs of HvlpReleaseHypercallPage @ 0x14053F010
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
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HvlpReleaseHypercallPage(__int64 a1)
{
  __int64 v1; // rax
  __int64 HypercallCachedPages; // rdx
  struct _SLIST_ENTRY *v3; // rdx
  unsigned __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  struct _KPRCB *v8; // rax
  int v9; // r8d
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // r8
  int v12; // ett

  LODWORD(v1) = *(_DWORD *)a1;
  HypercallCachedPages = 0LL;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    v3 = *(struct _SLIST_ENTRY **)(a1 + 16);
    v3[1].Next = *(_SLIST_ENTRY **)(a1 + 24);
    LOBYTE(v1) = (unsigned __int8)RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 8) + 34496LL), v3);
  }
  else if ( (v1 & 2) != 0 )
  {
    v4 = *(unsigned __int8 *)(a1 + 8);
    if ( (unsigned __int8)v4 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v1) = v1 - 2;
          if ( (unsigned __int8)v1 <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            LODWORD(v1) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v7 = ((unsigned int)v1 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v1;
            if ( v7 )
              LOBYTE(v1) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
    }
  }
  else
  {
    v8 = KeGetCurrentPrcb();
    v9 = *(_DWORD *)(a1 + 12);
    if ( (v9 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v8->HypercallCachedPages;
    }
    else if ( (v9 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v8->HypercallCachedPages + 4096;
    }
    v1 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(HypercallCachedPages + 16) = v1;
    if ( *(_BYTE *)(a1 + 8) )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      if ( v11 )
      {
        _m_prefetchw(v11);
        LODWORD(v1) = *v11;
        do
        {
          v12 = v1;
          LODWORD(v1) = _InterlockedCompareExchange(v11, v1 & 0xFFDFFFFF, v1);
        }
        while ( v12 != (_DWORD)v1 );
        if ( (v1 & 0x200000) != 0 )
          LOBYTE(v1) = KiRemoveSystemWorkPriorityKick(v10);
      }
      _enable();
    }
  }
  return v1;
}
