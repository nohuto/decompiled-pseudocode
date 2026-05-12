/*
 * XREFs of RaidUnitPowerSettingCallback @ 0x1C003FCF0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0005E64 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006380 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitMaintenanceTime @ 0x1C003FB34 (RaidUnitMaintenanceTime.c)
 */

__int64 __fastcall RaidUnitPowerSettingCallback(
        LPCGUID SettingGuid,
        unsigned __int8 *Value,
        ULONG ValueLength,
        __int64 Context)
{
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // r8

  v5 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
    v5 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
  if ( v5 )
    return 0LL;
  if ( ValueLength == 4 && Value )
  {
    v6 = *Value;
    if ( RaidUnitCheckAndAcquirePoFx(Context) )
    {
      v7 = *(_QWORD *)(Context + 1744);
      if ( ((*(_DWORD *)(v7 + 32) >> 11) & 1) != v6 )
      {
        *(_DWORD *)(v7 + 32) ^= ((unsigned __int16)*(_DWORD *)(v7 + 32) ^ (unsigned __int16)((_WORD)v6 << 11)) & 0x800;
        if ( (*(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) & 0x100) != 0 )
        {
          RaidUnitMaintenanceTime(Context);
          RaidUnitAdaptiveIdleTimeout(Context);
        }
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736));
    }
    return 0LL;
  }
  return 3221225485LL;
}
