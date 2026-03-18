/*
 * XREFs of DrvChangeDisplaySettingsPreValidate @ 0x1C0067580
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065210 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C00658C4 (DrvChangeDisplaySettings.c)
 * Callees:
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C0067688 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C00681FC (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     DrvGetDeviceFromName @ 0x1C00719F0 (DrvGetDeviceFromName.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
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
  wchar_t *i; // rcx

  v7 = 0;
  if ( a4 == 1 )
  {
    if ( a5 && a3 && (unsigned int)DrvIsPermanentSettingChangesDisabled() )
    {
      WdLogSingleEntry0(5LL);
      return 4294967293LL;
    }
    if ( (unsigned int)DrvIsTemporarySettingChangeDisabled() )
    {
      WdLogSingleEntry0(5LL);
      return 0xFFFFFFFFLL;
    }
  }
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
    if ( DeviceFromName )
    {
LABEL_8:
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        if ( DeviceFromName )
        {
          v7 = (*(_DWORD *)(DeviceFromName + 160) >> 23) & 1;
        }
        else
        {
          for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
          {
            if ( (*((_DWORD *)i + 40) & 0x800000) != 0 )
            {
              v7 = 1;
              break;
            }
          }
        }
      }
      if ( !a4
        || !DeviceFromName
        || *(_QWORD *)(DeviceFromName + 136)
        || (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) != 0 )
      {
        *a6 = DeviceFromName;
        *a7 = v7;
        return 0LL;
      }
      WdLogSingleEntry1(5LL, 2LL);
      return 4294967291LL;
    }
    WdLogSingleEntry1(5LL, 0LL);
  }
  else
  {
    if ( !a3 )
    {
      DeviceFromName = 0LL;
      goto LABEL_8;
    }
    if ( a2 )
    {
      DeviceFromName = *(_QWORD *)(a2 + 2552);
      if ( DeviceFromName )
        goto LABEL_8;
    }
    WdLogSingleEntry1(5LL, 1LL);
  }
  return 4294967291LL;
}
