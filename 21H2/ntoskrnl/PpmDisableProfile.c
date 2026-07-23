/*
 * XREFs of PpmDisableProfile @ 0x1408F5DC8
 * Callers:
 *     PdcPoPpmResetProfile @ 0x1408EFAB0 (PdcPoPpmResetProfile.c)
 * Callees:
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     PpmResetProfileSettings @ 0x1403C8B84 (PpmResetProfileSettings.c)
 *     PpmReinitializeHeteroEngine @ 0x1407BA278 (PpmReinitializeHeteroEngine.c)
 *     PpmEventTraceProfileEnable @ 0x1407C61DC (PpmEventTraceProfileEnable.c)
 */

char __fastcall PpmDisableProfile(__int64 a1)
{
  char v2; // si
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  char result; // al

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
    goto LABEL_18;
  }
  v5 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_BACKGROUND.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_BACKGROUND.Data4;
  if ( !v5 )
  {
    PpmBackgroundProfile = 0LL;
LABEL_17:
    PpmReinitializeHeteroEngine(1);
    v3 = 0;
    goto LABEL_18;
  }
  v6 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_ENTRY_LEVEL_PERF.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_ENTRY_LEVEL_PERF.Data4;
  if ( !v6 )
  {
    PpmEntryLevelPerfProfile = 0LL;
    goto LABEL_17;
  }
  v7 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_QOS_MULTIMEDIA.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_QOS_MULTIMEDIA.Data4;
  if ( !v7 )
  {
    PpmMultimediaQosProfile = 0LL;
    goto LABEL_17;
  }
LABEL_18:
  result = PpmEventTraceProfileEnable(v2, 0);
  if ( v3 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  return result;
}
