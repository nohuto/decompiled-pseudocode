/*
 * XREFs of DxgkEngNotifyDisplayChange @ 0x1C007F550
 * Callers:
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserNotifyDisplayChange @ 0x1C0078BB0 (UserNotifyDisplayChange.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C1E50 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall DxgkEngNotifyDisplayChange(char a1)
{
  if ( a1 )
  {
    if ( gpGdiSharedMemory )
    {
      _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393380);
      DisplayScenarioJournalDisplayUniquenessIncremented();
    }
  }
  else
  {
    GreIncrementDisplaySettingsUniqueness();
  }
  return UserNotifyDisplayChange();
}
