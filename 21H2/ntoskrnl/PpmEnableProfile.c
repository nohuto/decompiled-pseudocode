/*
 * XREFs of PpmEnableProfile @ 0x14083113C
 * Callers:
 *     PdcPoPpmResetProfile @ 0x1408310F0 (PdcPoPpmResetProfile.c)
 *     PpmRegisterSpmSettings @ 0x14099DB50 (PpmRegisterSpmSettings.c)
 *     PpmInitPolicyConfiguration @ 0x140B151EC (PpmInitPolicyConfiguration.c)
 * Callees:
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmEventTraceProfileEnable @ 0x14083120C (PpmEventTraceProfileEnable.c)
 *     PpmReinitializeHeteroEngine @ 0x140848BE8 (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PpmEnableProfile(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  *(_DWORD *)(a1 + 28) |= 1u;
  v2 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
  v3 = *(_BYTE *)(a1 + 8);
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
  if ( !v2 )
  {
    PpmLowPowerProfile = a1;
    goto LABEL_16;
  }
  v4 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_BACKGROUND.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_BACKGROUND.Data4;
  if ( !v4 )
  {
    PpmBackgroundProfile = a1;
LABEL_22:
    LOBYTE(a1) = 1;
    PpmReinitializeHeteroEngine(a1);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    goto LABEL_16;
  }
  v5 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_ENTRY_LEVEL_PERF.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_ENTRY_LEVEL_PERF.Data4;
  if ( !v5 )
  {
    PpmEntryLevelPerfProfile = a1;
    goto LABEL_22;
  }
  v6 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_QOS_MULTIMEDIA.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_QOS_MULTIMEDIA.Data4;
  if ( !v6 )
  {
    PpmMultimediaQosProfile = a1;
    goto LABEL_16;
  }
  v7 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_QOS_ECO.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_QOS_ECO.Data4;
  if ( !v7 )
  {
    PpmEcoQosProfile = a1;
    goto LABEL_22;
  }
LABEL_16:
  LOBYTE(a2) = 1;
  LOBYTE(a1) = v3;
  return PpmEventTraceProfileEnable(a1, a2);
}
