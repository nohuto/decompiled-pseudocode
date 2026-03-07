char __fastcall KeInitSystem(int a1)
{
  struct _KPRCB *v1; // r10
  unsigned __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r10
  int v5; // eax
  ULONG ActiveProcessorCount; // eax
  __int64 v7; // rcx
  ULONG v8; // r14d
  __int64 v9; // rdx
  int v10; // ecx
  unsigned int v11; // eax
  ULONG v12; // edi
  __int64 *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 *v22; // rdx
  int v23; // r8d
  int v24; // eax
  int v26; // r9d
  __int64 Pool2; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v36; // r8
  int v37; // eax
  bool v38; // zf
  int v39; // [rsp+38h] [rbp-19h] BYREF
  __int64 v40; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+48h] [rbp-9h] BYREF
  int *v42; // [rsp+68h] [rbp+17h]
  __int64 v43; // [rsp+70h] [rbp+1Fh]
  __int64 *v44; // [rsp+78h] [rbp+27h]
  __int64 v45; // [rsp+80h] [rbp+2Fh]

  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
          (char *)&dword_140C02F60,
          (__int64)KiTraceLogControlCallback,
          (__int64)&dword_140C02F60);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C02F28, 0LL, 0LL);
        if ( KiDisablePointerParameterAlignmentValidation
          && (unsigned int)dword_140C02F60 > 5
          && tlgKeywordOn((__int64)&dword_140C02F60, 0x400000000000LL) )
        {
          v39 = v26;
          v42 = &v39;
          v44 = &v40;
          v43 = 4LL;
          v40 = 0x1000000LL;
          v45 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02F60,
            (unsigned __int8 *)byte_14003A4B9,
            0LL,
            0LL,
            4u,
            &v41);
        }
        KiIntSteerInit(2LL);
      }
      else if ( a1 == 3 )
      {
        KiInitializeReservedCpuSets();
      }
      else
      {
        ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
        MmFreeLoaderBlock();
        KeLoaderBlock_0 = 0LL;
        ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
        Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage();
        KiForegroundBoostTicks = 1;
        if ( KiSchedulerForegroundBoostDecayPolicy != 1 )
        {
          Feature_SchedulerRemoveForegroundBoostDecay__private_ReportDeviceUsage();
          KiVelocityFlags |= 0x8000u;
        }
        KiInitializeNormalPriorityAntiStarvationPolicies();
        if ( KiForceBugcheckForDpcWatchdog || !HviIsAnyHypervisorPresent() )
          KeEnableWatchdogTimeout = 1;
        v40 = 0LL;
        v39 = 0;
        if ( (HvlpFlags & 0x100000) != 0 )
        {
          Pool2 = ExAllocatePool2(64LL, 0x4A0uLL, 0x4850654Bu);
          KiEpfHashTable = Pool2;
          if ( Pool2 )
          {
            v30 = 37LL;
            do
            {
              *(_QWORD *)(Pool2 + 8) = Pool2;
              *(_QWORD *)Pool2 = Pool2;
              *(_QWORD *)(Pool2 + 16) = 0LL;
              *(_DWORD *)(Pool2 + 24) = 0;
              Pool2 += 32LL;
              --v30;
            }
            while ( v30 );
            LODWORD(KiEpfCompletionDpc) = 275;
            qword_140C413B8 = (__int64)KiEpfCompletionDpcRoutine;
            qword_140C413C0 = 0LL;
            qword_140C413D8 = 0LL;
            qword_140C413B0 = 0LL;
            if ( (int)HvlSetupPhysicalFaultNotificationQueue(&v40, &v39, v28, v29) >= 0 )
            {
              KiEpfCompletionQueueSize = (unsigned int)(v39 - 16) >> 3;
              KiEpfCompletionQueue = v40;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                v33 = 4;
                if ( CurrentIrql != 2 )
                  v33 = (-1LL << (CurrentIrql + 1)) & 4;
                SchedulerAssist[5] |= v33;
              }
              KiEpfDrainCompletionQueue();
              if ( KiIrqlFlags )
              {
                v34 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v36 = CurrentPrcb->SchedulerAssist;
                  v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v38 = (v37 & v36[5]) == 0;
                  v36[5] &= v37;
                  if ( v38 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
              __writecr8(CurrentIrql);
            }
          }
        }
        KeFreeInitializationCode();
      }
      return 1;
    }
    KiInitDynamicTraceSupport();
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v7 = (unsigned int)KeMaximumIncrement;
    v8 = ActiveProcessorCount;
    KiDpcWatchdogConfigurationLock = 0LL;
    v9 = (ActiveProcessorCount + (KeMaximumIncrement + 29999999) / (unsigned int)KeMaximumIncrement - 1)
       % ActiveProcessorCount;
    KiClockKeepAliveCycle = (ActiveProcessorCount
                           + (KeMaximumIncrement + 29999999) / (unsigned int)KeMaximumIncrement
                           - 1)
                          / ActiveProcessorCount;
    if ( !KiForceBugcheckForDpcWatchdog && HviIsAnyHypervisorPresent() )
    {
      if ( !HvlHypervisorConnected || (HvlEnlightenments & 0x20) != 0 )
      {
        v10 = 1;
        KeDpcWatchdogPeriodMs = 0;
        KeDpcTimeoutMs = 0;
        KeDpcSoftTimeoutMs = 0;
        KeDpcCumulativeSoftTimeoutMs = 0;
        KeDpcWatchdogProfileCumulativeDpcThresholdMs = 0;
        KeDpcWatchdogProfileSingleDpcThresholdMs = 0;
      }
      else
      {
        v10 = 0;
      }
      KeRelaxTimingConstraints(v10);
    }
    KiInitDpcThresholds(v7, v9);
    if ( ViVerifierEnabled )
    {
      v11 = KeVerifierDpcScalingFactor;
      if ( !KeVerifierDpcScalingFactor )
      {
        v11 = 1;
        KeVerifierDpcScalingFactor = 1;
      }
      if ( v11 > 0x64 )
        KeVerifierDpcScalingFactor = 100;
      KiApplyDpcVerificationScaleSettings();
    }
    v12 = 0;
    if ( v8 )
    {
      v13 = KiProcessorBlock;
      while ( 1 )
      {
        v14 = *v13;
        KiInitializeProcessor(*v13);
        if ( KeThreadDpcEnable )
        {
          if ( (int)KiStartDpcThread(v14) < 0 )
            break;
        }
        ++v12;
        ++v13;
        if ( v12 >= v8 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      if ( (unsigned __int8)KiComputeNumaCosts()
        && (int)KiComputeDispatchInterruptCost() >= 0
        && (int)KiInitializeDpcRuntimeHistoryHashTables() >= 0 )
      {
        if ( (_BYTE)KiKernelCetEnabled )
        {
          LOBYTE(KiKernelCetLogging) = 1;
          dword_140D1F230 = 10;
        }
        SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x650000u);
        KiIntSteerInit(1LL);
        KiInitSupervisorStateExtensionHost(v16, v15);
        if ( KiInitMachineDependent() )
        {
          v17 = *(unsigned int *)(KiProcessorBlock[0] + 68);
          v18 = v17 * (unsigned __int64)(unsigned int)KeMaximumIncrement / 0xA;
          KiShortExecutionCycles = v18 / 0xF0;
          KiCyclesPerClockQuantum = v18 / 3;
          KiDirectQuantumTarget = v18 / 3;
          v19 = KiLongDpcRuntimeThreshold;
          KiLockQuantumTarget = 3 * KiCyclesPerClockQuantum;
          _BitScanReverse64(&v18, 6000000 * v17);
          KiFavoredCoreCycleTimeBits = v18;
          if ( (unsigned int)KiLongDpcRuntimeThreshold < 0x32 )
          {
            v19 = 50;
            KiLongDpcRuntimeThreshold = 50;
          }
          if ( (unsigned int)KiLongDpcQueueThreshold < 2 )
            KiLongDpcQueueThreshold = 2;
          v20 = *(unsigned int *)(KiProcessorBlock[0] + 68);
          KiLongDpcRuntimeThresholdCycles = v19 * *(_DWORD *)(KiProcessorBlock[0] + 68);
          qword_140D1D368 = v20 * HIDWORD(KiHgsPlusConfiguration);
          qword_140D1D378 = *(unsigned int *)(KiProcessorBlock[0] + 68)
                          * (unsigned __int64)(unsigned int)dword_140D1D370;
          if ( KdpBootedNodebug )
          {
            v21 = KiWaitNever;
            v22 = (__int64 *)&KdDebuggerDataBlock;
            KdpDataBlockEncoded = 1;
            v23 = 116;
            do
            {
              *v22 = v21 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(KiWaitAlways ^ *v22), v21);
              ++v22;
              --v23;
            }
            while ( v23 );
          }
          v24 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))KiVerifyScopesExecute,
                  0LL,
                  49152,
                  2,
                  0LL);
          if ( v24 < 0 )
            KeBugCheckEx(0x32u, v24, 0x5356694BuLL, 0LL, 0LL);
          KiInitializeIdealProcessorRebalancer();
          KiPristineTriageDumpSize = 268288;
          qword_140C41078 = (__int64)KiPristineTriageDumpAllocationWorker;
          LODWORD(KiPristineTriageDumpAllocationDpc) = 275;
          qword_140C41080 = 0LL;
          qword_140C41098 = 0LL;
          qword_140C41070 = 0LL;
          return 1;
        }
      }
    }
    return 0;
  }
  v1 = KeGetCurrentPrcb();
  if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx && (v1->MsrIa32TsxCtrl & 3) != 3 )
  {
    v2 = v1->MsrIa32TsxCtrl | 3;
    v1->MsrIa32TsxCtrl = v2;
    __writemsr(0x122u, v2);
  }
  KiTsxSupported = KiDetectTsx();
  KeInitializeSchedulerAssist(v3);
  KeInitializeCatRegisters();
  v5 = KeInitializeTimerTable(v4);
  if ( v5 < 0 )
    KeBugCheckEx(0x31u, v5, 1uLL, 0LL, 0LL);
  return 1;
}
