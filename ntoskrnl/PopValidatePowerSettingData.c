/*
 * XREFs of PopValidatePowerSettingData @ 0x14068D570
 * Callers:
 *     PopSetPowerSettingValue @ 0x14068CFA0 (PopSetPowerSettingValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopValidatePowerSettingData(_QWORD *a1, int a2, _DWORD *a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = -1073741275;
  v5 = *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_DISK_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( !v5 && a2 == 4 && a3 && *a3 && *a3 < 0xFu && !PopPlatformAoAc )
  {
    *a3 = 15;
    v4 = 0;
  }
  v6 = *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_STANDBY_TIMEOUT.Data4 - a1[1];
  if ( !v6 && a2 == 4 && a3 && (unsigned int)(*a3 - 1) <= 0x1C )
  {
    *a3 = 30;
    v4 = 0;
  }
  v7 = *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_HIBERNATE_TIMEOUT.Data4 - a1[1];
  if ( !v7 && a2 == 4 && a3 && (unsigned int)(*a3 - 1) <= 0x3A )
  {
    *a3 = 60;
    return 0;
  }
  return v4;
}
