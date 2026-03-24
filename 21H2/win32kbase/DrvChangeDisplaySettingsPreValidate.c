/*
 * XREFs of DrvChangeDisplaySettingsPreValidate @ 0x1C001A714
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C001845C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C00189C0 (DrvChangeDisplaySettings.c)
 * Callees:
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C0017804 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C001A66C (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C001DEB0 (UserIsWddmConnectedSession.c)
 *     DrvGetDeviceFromName @ 0x1C0021400 (DrvGetDeviceFromName.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  wchar_t *i; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v7 = 0;
  DeviceFromName = a2;
  if ( a4 == 1 )
  {
    if ( a5 && a3 && DrvIsPermanentSettingChangesDisabled() )
    {
      v17 = WdLogNewEntry5_WdTrace(v13, v12);
      WdLogEvent5_WdTrace(v17);
      return 4294967293LL;
    }
    if ( DrvIsTemporarySettingChangeDisabled() )
    {
      v18 = WdLogNewEntry5_WdTrace(String1, a2);
      WdLogEvent5_WdTrace(v18);
      return 0xFFFFFFFFLL;
    }
  }
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
    if ( DeviceFromName )
    {
LABEL_8:
      if ( (unsigned int)UserIsWddmConnectedSession(String1, a2) )
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
      v19 = WdLogNewEntry5_WdTrace(i, v14);
      *(_QWORD *)(v19 + 24) = 2LL;
      goto LABEL_25;
    }
    v19 = WdLogNewEntry5_WdTrace(String1, a2);
    *(_QWORD *)(v19 + 24) = 0LL;
  }
  else
  {
    if ( !a3 )
    {
      DeviceFromName = 0LL;
      goto LABEL_8;
    }
    if ( DeviceFromName )
      DeviceFromName = *(_QWORD *)(DeviceFromName + 2576);
    if ( DeviceFromName )
      goto LABEL_8;
    v19 = WdLogNewEntry5_WdTrace(String1, a2);
    *(_QWORD *)(v19 + 24) = 1LL;
  }
LABEL_25:
  WdLogEvent5_WdTrace(v19);
  return 4294967291LL;
}
