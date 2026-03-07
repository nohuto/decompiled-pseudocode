__int64 __fastcall PopDeepSleepPowerSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v4 = -1073741811;
  v5 = *(_QWORD *)&GUID_DEEP_SLEEP_ENABLED.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DEEP_SLEEP_ENABLED.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_DEEP_SLEEP_ENABLED.Data4 - a1[1];
  if ( !v5 && a3 == 4 && a2 )
  {
    PopAcquirePolicyLock((_DWORD)a1);
    PopDeepSleepIsEnabled = *a2 != 0;
    PopCheckResiliencyScenarios();
    PopReleasePolicyLock(v7, v6, v8);
    return 0;
  }
  return v4;
}
