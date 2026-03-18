/*
 * XREFs of GetActiveTrackPwnd @ 0x1C01DCBDC
 * Callers:
 *     xxxTrackMouseMove @ 0x1C007E59C (xxxTrackMouseMove.c)
 *     xxxSystemTimerProc @ 0x1C010B7C0 (xxxSystemTimerProc.c)
 *     xxxActiveWindowTracking @ 0x1C01DD47C (xxxActiveWindowTracking.c)
 *     zzzActiveCursorTracking @ 0x1C01DD5E8 (zzzActiveCursorTracking.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00024C8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00BAE1C (IsModelessMenuNotificationWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C023F45C (DWP_GetEnabledPopup.c)
 */

const struct tagWND *__fastcall GetActiveTrackPwnd(const struct tagWND *a1)
{
  const struct tagWND *EnabledPopup; // rbx
  __int64 v2; // rcx

  EnabledPopup = a1;
  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    return 0LL;
  for ( ;
        (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0xC0) == 0x40;
        EnabledPopup = (const struct tagWND *)*((_QWORD *)EnabledPopup + 13) )
  {
    ;
  }
  if ( (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 8) != 0 )
    EnabledPopup = (const struct tagWND *)DWP_GetEnabledPopup(EnabledPopup);
  if ( !EnabledPopup )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0x10) == 0 )
    return 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)EnabledPopup + 2) + 432LL);
  if ( v2 == gpqForeground
    && (EnabledPopup == *(const struct tagWND **)(v2 + 120) || (unsigned int)IsModelessMenuNotificationWindow()) )
  {
    return 0LL;
  }
  if ( EnabledPopup == *(const struct tagWND **)(*(_QWORD *)(*((_QWORD *)EnabledPopup + 3) + 8LL) + 168LL) )
    return 0LL;
  else
    return EnabledPopup;
}
