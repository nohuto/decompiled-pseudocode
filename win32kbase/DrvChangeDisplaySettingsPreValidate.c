/*
 * XREFs of DrvChangeDisplaySettingsPreValidate @ 0x1C019288C
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015DB90 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C019249C (DrvChangeDisplaySettings.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C0022420 (UserIsWddmConnectedSession.c)
 *     DrvGetDeviceFromName @ 0x1C003C370 (DrvGetDeviceFromName.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C018E3F0 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C018E498 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsPreValidate(
        PCUNICODE_STRING String1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 *a6,
        int *a7)
{
  int v7; // edi
  __int64 DeviceFromName; // rbx
  __int64 v13; // rcx
  __int64 i; // rdx

  v7 = 0;
  DeviceFromName = a3;
  if ( a4 == 1 )
  {
    if ( a5 && a3 && DrvIsPermanentSettingChangesDisabled() )
    {
      WdLogSingleEntry0(5LL);
      return 4294967293LL;
    }
    if ( DrvIsTemporarySettingChangeDisabled() )
    {
      WdLogSingleEntry0(5LL);
      return 0xFFFFFFFFLL;
    }
  }
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
    if ( !DeviceFromName )
    {
      WdLogSingleEntry1(5LL, 0LL);
      return 4294967291LL;
    }
  }
  else if ( DeviceFromName )
  {
    if ( !a2 || (DeviceFromName = *(_QWORD *)(a2 + 2552)) == 0 )
    {
      WdLogSingleEntry1(5LL, 1LL);
      return 4294967291LL;
    }
  }
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    if ( DeviceFromName )
    {
      v7 = (*(_DWORD *)(DeviceFromName + 160) >> 23) & 1;
    }
    else
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v13) + 24) + 1264LL); i; i = *(_QWORD *)(i + 128) )
      {
        if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
        {
          v7 = 1;
          break;
        }
      }
    }
  }
  if ( a4
    && DeviceFromName
    && !*(_QWORD *)(DeviceFromName + 136)
    && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
  {
    WdLogSingleEntry1(5LL, 2LL);
    return 4294967291LL;
  }
  *a6 = DeviceFromName;
  *a7 = v7;
  return 0LL;
}
