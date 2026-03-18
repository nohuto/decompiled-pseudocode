/*
 * XREFs of PopInitializeHeteroProcessors @ 0x140849B04
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140849940 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1403CF1BC (PpmHeteroGetHgsPlusParkingEnablementStatus.c)
 *     PpmHeteroDetectHgsCores @ 0x1403CF218 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403CF26C (PpmHeteroUpdateHgsConfiguration.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x14045DCDA (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PsEnumProcesses @ 0x1406BF0AC (PsEnumProcesses.c)
 *     PpmEventHeteroPolicy @ 0x140849D6C (PpmEventHeteroPolicy.c)
 *     PpmEventHeteroConfigUpdate @ 0x140849DF0 (PpmEventHeteroConfigUpdate.c)
 *     PopConfigureHeteroPolicies @ 0x140849E68 (PopConfigureHeteroPolicies.c)
 *     PpmHeteroDetectFavoredCores @ 0x14084A5BC (PpmHeteroDetectFavoredCores.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x14084A618 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14084A750 (PpmHeteroComputeRelativePerformance.c)
 *     KeConfigureHeteroProcessors @ 0x14095FD08 (KeConfigureHeteroProcessors.c)
 */

char __fastcall PopInitializeHeteroProcessors(char a1, __int64 a2)
{
  _DWORD *v2; // rdi
  int v3; // ebp
  char v4; // al
  char v5; // r12
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // al
  unsigned int v8; // esi
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // r13
  char v12; // r14
  __int64 v13; // rax
  SIZE_T v14; // r13
  char v15; // al
  void **v16; // rsi
  unsigned int v17; // edi
  unsigned int v18; // ebx
  bool v20; // cf
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = PpmHeteroCapabilityTest;
  v3 = 0;
  v4 = a1;
  if ( !PpmHeteroCapabilityTest )
    return 0;
  v5 = 0;
  if ( PpmBackgroundProfile || PpmEntryLevelPerfProfile || PpmMultimediaQosProfile || PpmPerfAlwaysComputeQosEnabled )
  {
    if ( PpmPerfSchedulerDirectedPerfStatesSupported )
    {
      v20 = KeQueryActiveProcessorCountEx(0) < 2;
      v4 = a1;
      if ( !v20 )
        v5 = 1;
    }
  }
  if ( PpmPerfVmQosSupported )
  {
    v5 = 1;
  }
  else if ( !v5 )
  {
LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
  v6 = 1;
  if ( PpmPerfQosGroupPolicyDisable )
    goto LABEL_8;
LABEL_9:
  if ( v4 )
  {
    *((_DWORD *)PpmHeteroCapabilityTest + 1) = PpmHeteroWorkloadClasses;
    memset(v2 + 6, 0, 3LL * (unsigned int)(*v2 * v2[1]));
    PpmHeteroComputeRelativePerformance();
    PpmHeteroUpdateHgsConfiguration();
    v7 = PopDetectSimulatedHeteroProcessors(v2);
    v22 = v7;
    v8 = v7 != 0;
    if ( !v7 )
    {
      v9 = PpmHeteroDetectHgsCores((__int64)v2);
      v22 = v9;
      if ( v9 )
      {
        v8 = 5;
      }
      else
      {
        v10 = PpmHeteroDetectFavoredCores(v2);
        v22 = v10;
        if ( v10 )
        {
          v8 = 3;
        }
        else if ( v6 )
        {
          v22 = 1;
          v8 = 4;
        }
      }
    }
    if ( v8 != PopHeteroSystem
      || (v11 = (unsigned int)v2[1],
          v12 = 0,
          v13 = (unsigned int)(v11 * *v2),
          v14 = 2 * v11,
          RtlCompareMemory(v2 + 6, (char *)PpmHeteroCapability + 24, 3 * v13) != 3 * v13)
      || RtlCompareMemory(*((const void **)v2 + 2), *((const void **)PpmHeteroCapability + 2), v14) != v14 )
    {
      v12 = 1;
    }
  }
  else
  {
    v8 = PopHeteroSystem;
    v2 = PpmHeteroCapability;
    v12 = 0;
    v22 = PopHeteroSystem != 0;
  }
  LOBYTE(a2) = a1;
  v15 = PopConfigureHeteroPolicies(v8, a2);
  if ( (v12 || v8 && v15 || PpmPerfQosSupportedAndAllowed != v6)
    && (unsigned int)KeConfigureHeteroProcessors(v2, v6, &v22) )
  {
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  }
  if ( v22 )
  {
    PopHeteroSystem = v8;
    if ( v2 != PpmHeteroCapability )
      memmove(PpmHeteroCapability, v2, 3 * (*v2 * v2[1] + 8));
    if ( v6 )
      PpmIdleEnableIdleDurationExpirationTimeout();
  }
  else
  {
    v16 = (void **)PpmHeteroCapability;
    PopHeteroSystem = 0;
    v17 = *(_DWORD *)PpmHeteroCapability;
    v18 = *((_DWORD *)PpmHeteroCapability + 1);
    memset((char *)PpmHeteroCapability + 24, 0, 3LL * v18 * *(_DWORD *)PpmHeteroCapability);
    memset(v16[2], 0, 2LL * v18);
    memset(v16[1], 0, v17);
    if ( !v5 )
      goto LABEL_23;
  }
  PpmPerfQosSupportedAndConfigured = 1;
LABEL_23:
  if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 || PopHeteroSystem == 6 )
    PpmHeteroPolicy = 0;
  else
    PpmHeteroPolicy = PpmHeteroDesiredPolicy;
  if ( PpmPerfArtificialDomainSetting == -1 )
  {
    LOBYTE(v3) = PopHeteroSystem != 0;
    PpmPerfArtificialDomainEnabled = v3;
  }
  PpmHeteroHgsParkingEnabled = PpmHeteroGetHgsPlusParkingEnablementStatus();
  PpmEventHeteroConfigUpdate();
  PpmEventHeteroPolicy(0LL);
  PpmPerfQosSupportedAndAllowed = v6;
  return v12;
}
