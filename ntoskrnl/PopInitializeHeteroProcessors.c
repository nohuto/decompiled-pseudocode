/*
 * XREFs of PopInitializeHeteroProcessors @ 0x140826970
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1408261A0 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeGetActualProcessorEfficiencyClass @ 0x14036A2F8 (KeGetActualProcessorEfficiencyClass.c)
 *     PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x14038E3D8 (PpmHeteroGetHgsPlusParkingEnablementStatus.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14038F314 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmHeteroDetectHgsCores @ 0x14038F40C (PpmHeteroDetectHgsCores.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PoHeteroIsArchFavoredCoreSupported @ 0x14040B854 (PoHeteroIsArchFavoredCoreSupported.c)
 *     PpmHeteroReevaluateMultiCoreFeatures @ 0x14040B868 (PpmHeteroReevaluateMultiCoreFeatures.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x14045A776 (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     KeDetectHeterogeneousSets @ 0x14067C998 (KeDetectHeterogeneousSets.c)
 *     PsEnumProcesses @ 0x1407809CC (PsEnumProcesses.c)
 *     PpmHeteroDetectFavoredCores @ 0x14079C25C (PpmHeteroDetectFavoredCores.c)
 *     PopIsSimulateHeteroProcessorsPresent @ 0x14079C600 (PopIsSimulateHeteroProcessorsPresent.c)
 *     PpmEventHeteroPolicy @ 0x140826ED0 (PpmEventHeteroPolicy.c)
 *     PpmEventTraceHeteroSets @ 0x140826F54 (PpmEventTraceHeteroSets.c)
 *     PopConfigureHeteroPolicies @ 0x1408273AC (PopConfigureHeteroPolicies.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140828BE8 (PpmHeteroComputeRelativePerformance.c)
 *     KeConfigureHeteroProcessors @ 0x14096F978 (KeConfigureHeteroProcessors.c)
 */

char __fastcall PopInitializeHeteroProcessors(char a1)
{
  unsigned int *v1; // rsi
  char v2; // r12
  char v3; // r15
  char v4; // r14
  unsigned __int8 v5; // r13
  __int64 v6; // r8
  unsigned int v7; // edi
  unsigned __int8 IsSimulateHeteroProcessorsPresent; // al
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  SIZE_T v14; // r12
  SIZE_T v15; // rbx
  unsigned __int8 v16; // r8
  unsigned __int8 *v17; // rcx
  __int64 v18; // r10
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  int v21; // r11d
  char v22; // al
  void **v23; // rsi
  __int64 v24; // rbx
  unsigned int v25; // edi
  int v26; // edx
  int v27; // ecx
  __int64 Prcb; // rax
  __int64 v29; // rcx
  char ActualProcessorEfficiencyClass; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v32; // [rsp+3Ch] [rbp-55h] BYREF
  __int16 v33; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int16 *v34[2]; // [rsp+48h] [rbp-49h] BYREF
  __int16 v35; // [rsp+58h] [rbp-39h]
  int v36; // [rsp+5Ah] [rbp-37h]
  __int16 v37; // [rsp+5Eh] [rbp-33h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  __int64 v39; // [rsp+78h] [rbp-19h]
  __int64 v40; // [rsp+80h] [rbp-11h]
  char *p_ActualProcessorEfficiencyClass; // [rsp+88h] [rbp-9h]
  __int64 v42; // [rsp+90h] [rbp-1h]
  __int64 v43; // [rsp+98h] [rbp+7h]
  __int64 v44; // [rsp+A0h] [rbp+Fh]
  __int64 v45; // [rsp+A8h] [rbp+17h]
  __int64 v46; // [rsp+B0h] [rbp+1Fh]

  v1 = (unsigned int *)PpmHeteroCapabilityTest;
  ActualProcessorEfficiencyClass = a1;
  v2 = a1;
  if ( !PpmHeteroCapabilityTest )
    return 0;
  v3 = 1;
  v4 = 0;
  if ( (PpmBackgroundProfile || PpmEntryLevelPerfProfile || PpmMultimediaQosProfile || PpmPerfAlwaysComputeQosEnabled)
    && PpmPerfSchedulerDirectedPerfStatesSupported
    && KeQueryActiveProcessorCountEx(0) >= 2 )
  {
    v4 = 1;
  }
  if ( PpmPerfVmQosSupported )
  {
    v4 = 1;
    goto LABEL_13;
  }
  if ( v4 )
  {
LABEL_13:
    v5 = 1;
    if ( !PpmPerfQosGroupPolicyDisable )
      goto LABEL_15;
  }
  v5 = 0;
LABEL_15:
  if ( !v2 )
  {
    v7 = PopHeteroSystem;
    v1 = (unsigned int *)PpmHeteroCapability;
    v3 = 0;
    v32 = PopHeteroSystem != 0;
    goto LABEL_40;
  }
  v6 = PpmHeteroWorkloadClasses * *v1;
  v1[1] = PpmHeteroWorkloadClasses;
  memset(v1 + 6, 0, 4 * v6);
  PpmHeteroComputeRelativePerformance();
  PpmHeteroUpdateHgsConfiguration();
  v7 = 0;
  if ( PoHeteroIsArchFavoredCoreSupported() )
  {
    IsSimulateHeteroProcessorsPresent = PopIsSimulateHeteroProcessorsPresent((__int64)v1);
    v32 = IsSimulateHeteroProcessorsPresent;
    if ( IsSimulateHeteroProcessorsPresent )
    {
      v7 = PpmHeteroDetectFavoredCores((__int64)v1) != 0 ? 6 : 1;
      goto LABEL_35;
    }
    v9 = PpmHeteroDetectHgsCores((__int64)v1);
    v32 = v9;
    if ( v9 )
      goto LABEL_20;
    v32 = KeDetectHeterogeneousSets((__int64)v1);
    v10 = (__int64)v1;
    if ( v32 )
    {
      if ( PpmHeteroDetectFavoredCores((__int64)v1) )
      {
        v7 = 6;
      }
      else
      {
        v7 = 2;
        if ( KeGetCurrentPrcb()->CpuVendor == 1 )
          v7 = 6;
      }
      goto LABEL_35;
    }
    goto LABEL_27;
  }
  v12 = PopIsSimulateHeteroProcessorsPresent((__int64)v1);
  v32 = v12;
  if ( !v12 )
  {
    v13 = PpmHeteroDetectHgsCores((__int64)v1);
    v32 = v13;
    if ( v13 )
    {
LABEL_20:
      v7 = 5;
      goto LABEL_35;
    }
    v10 = (__int64)v1;
LABEL_27:
    v11 = PpmHeteroDetectFavoredCores(v10);
    v32 = v11;
    if ( v11 )
    {
      v7 = 3;
    }
    else if ( v5 )
    {
      v32 = 1;
      v7 = 4;
    }
    goto LABEL_35;
  }
  v7 = 1;
LABEL_35:
  if ( v7 == PopHeteroSystem )
  {
    v3 = 0;
    v14 = 2LL * v1[1];
    v15 = 4LL * *v1 * v1[1];
    if ( RtlCompareMemory(v1 + 6, (char *)PpmHeteroCapability + 24, v15) != v15
      || RtlCompareMemory(*((const void **)v1 + 2), *((const void **)PpmHeteroCapability + 2), v14) != v14 )
    {
      v3 = 1;
    }
    v2 = ActualProcessorEfficiencyClass;
  }
LABEL_40:
  v16 = 0;
  if ( *v1 )
  {
    v17 = (unsigned __int8 *)*((_QWORD *)v1 + 1);
    v18 = *v1;
    do
    {
      v19 = v16;
      v16 = *v17;
      if ( v19 > *v17 )
        v16 = v19;
      ++v17;
      --v18;
    }
    while ( v18 );
  }
  if ( (unsigned int)v16 + 1 > (unsigned __int8)PpmMaxCoreClasses )
    PpmMaxCoreClasses = v16 + 1;
  if ( PoHeteroIsArchFavoredCoreSupported() )
  {
    if ( v7 == v21 )
      PpmHeteroReevaluateMultiCoreFeatures();
  }
  else if ( v7 == v21 )
  {
    v7 = 2;
  }
  LOBYTE(v20) = v2;
  v22 = PopConfigureHeteroPolicies(v7, v20);
  if ( (v3 || v7 && v22 || PpmPerfQosSupportedAndAllowed != v5)
    && (unsigned int)KeConfigureHeteroProcessors(v1, v5, &v32) )
  {
    PsEnumProcesses((__int64 (__fastcall *)(__int64 *, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  }
  if ( v32 )
  {
    PopHeteroSystem = v7;
    if ( v1 != PpmHeteroCapability )
      memmove(PpmHeteroCapability, v1, (int)(4 * *v1 * v1[1] + 24));
    if ( v5 )
      PpmIdleEnableIdleDurationExpirationTimeout();
    goto LABEL_66;
  }
  v23 = (void **)PpmHeteroCapability;
  PopHeteroSystem = 0;
  v24 = *((unsigned int *)PpmHeteroCapability + 1);
  v25 = *(_DWORD *)PpmHeteroCapability;
  memset((char *)PpmHeteroCapability + 24, 0, 4LL * (unsigned int)(v24 * *(_DWORD *)PpmHeteroCapability));
  memset(v23[2], 0, 2 * v24);
  memset(v23[1], 0, v25);
  if ( v4 )
LABEL_66:
    PpmPerfQosSupportedAndConfigured = 1;
  if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 )
  {
    PpmHeteroPolicy = 0;
    v26 = 0;
  }
  else
  {
    v26 = PpmHeteroDesiredPolicy;
    PpmHeteroPolicy = PpmHeteroDesiredPolicy;
  }
  if ( v2 && KiIntPartInitialized )
  {
    if ( *(_BYTE *)KiInterruptEfficiencyClassGroup <= 1u )
    {
      v27 = 0;
    }
    else
    {
      v27 = 1;
      if ( KeGetCurrentPrcb()->CpuVendor == 2 )
        v27 = 3 - (v26 != 0);
    }
    KiIntPartProcessorPriority = v27;
  }
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = PopHeteroSystem != 0;
  PpmHeteroHgsParkingEnabled = PpmHeteroGetHgsPlusParkingEnablementStatus();
  v36 = 0;
  v37 = 0;
  v32 = 0;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE) )
  {
    v34[1] = (unsigned __int16 *)qword_140C0BD78[0];
    v34[0] = (unsigned __int16 *)&PpmCheckRegistered;
    v35 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v32, v34) )
    {
      Prcb = KeGetPrcb(v32);
      ActualProcessorEfficiencyClass = KeGetActualProcessorEfficiencyClass(Prcb);
      v33 = *(unsigned __int8 *)(v29 + 208);
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v33;
      v39 = v29 + 209;
      p_ActualProcessorEfficiencyClass = &ActualProcessorEfficiencyClass;
      v43 = v29 + 34057;
      v45 = v29 + 34058;
      v40 = 1LL;
      v42 = 1LL;
      v44 = 1LL;
      v46 = 1LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE, 0LL, 5u, &UserData);
    }
  }
  PpmEventHeteroPolicy(0LL);
  PpmEventTraceHeteroSets(0LL);
  PpmPerfQosSupportedAndAllowed = v5;
  return v3;
}
