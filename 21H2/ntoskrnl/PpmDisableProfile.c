/*
 * XREFs of PpmDisableProfile @ 0x14099D66C
 * Callers:
 *     PdcPoPpmResetProfile @ 0x1408310F0 (PdcPoPpmResetProfile.c)
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmResetProfileSettings @ 0x1403D6EC0 (PpmResetProfileSettings.c)
 *     PpmEventTraceProfileEnable @ 0x14083120C (PpmEventTraceProfileEnable.c)
 *     PpmReinitializeHeteroEngine @ 0x140848BE8 (PpmReinitializeHeteroEngine.c)
 */

void __fastcall PpmDisableProfile(__int64 a1)
{
  char v2; // si
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = *(_BYTE *)(a1 + 8);
  *(_DWORD *)(a1 + 28) &= ~1u;
  v3 = 1;
  PpmResetProfileSettings(a1);
  v4 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
  if ( !v4 )
  {
    PpmLowPowerProfile = 0LL;
    goto LABEL_22;
  }
  v5 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_BACKGROUND.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_BACKGROUND.Data4;
  if ( !v5 )
  {
    PpmBackgroundProfile = 0LL;
LABEL_21:
    PpmReinitializeHeteroEngine(1);
    v3 = 0;
    goto LABEL_22;
  }
  v6 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_ENTRY_LEVEL_PERF.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_ENTRY_LEVEL_PERF.Data4;
  if ( !v6 )
  {
    PpmEntryLevelPerfProfile = 0LL;
    goto LABEL_21;
  }
  v7 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_QOS_MULTIMEDIA.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_QOS_MULTIMEDIA.Data4;
  if ( !v7 )
  {
    PpmMultimediaQosProfile = 0LL;
    goto LABEL_21;
  }
  v8 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_QOS_ECO.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_QOS_ECO.Data4;
  if ( !v8 )
  {
    PpmEcoQosProfile = 0LL;
    goto LABEL_21;
  }
LABEL_22:
  PpmEventTraceProfileEnable(v2, 0);
  if ( v3 )
    PpmReleaseLock(&PpmPerfPolicyLock);
}
