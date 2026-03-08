/*
 * XREFs of DxgkEngNotifyDisplayChange @ 0x1C000FDC0
 * Callers:
 *     xxxRemoteConnect @ 0x1C000F480 (xxxRemoteConnect.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015B374 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserNotifyDisplayChange @ 0x1C0016710 (UserNotifyDisplayChange.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00CCE70 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall DxgkEngNotifyDisplayChange(char a1)
{
  __int64 v1; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 1928LL);
    if ( v1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 1573520));
      DisplayScenarioJournalDisplayUniquenessIncremented();
    }
  }
  else
  {
    GreIncrementDisplaySettingsUniqueness();
  }
  return UserNotifyDisplayChange();
}
