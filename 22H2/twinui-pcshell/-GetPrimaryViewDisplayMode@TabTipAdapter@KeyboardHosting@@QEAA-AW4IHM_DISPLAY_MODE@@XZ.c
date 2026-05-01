/*
 * XREFs of ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x1803CD250
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x18005D910 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x1803B8BD8 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1803B8CE8 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ?GetPrimaryViewLastRequest@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@XZ @ 0x1803D784C (-GetPrimaryViewLastRequest@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AUCoreKeyboardPositionAndSi.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(__int64 a1)
{
  __int64 result; // rax
  _DWORD v2[9]; // [rsp+20h] [rbp-48h] BYREF
  char v3; // [rsp+44h] [rbp-24h]
  char v4; // [rsp+45h] [rbp-23h]

  KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewLastRequest(*(_QWORD *)(a1 + 104), v2);
  result = 2LL;
  if ( v2[0] != 2 )
  {
    if ( v2[0] == 1 )
    {
      if ( !v3 && !v4 )
        return 3LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
