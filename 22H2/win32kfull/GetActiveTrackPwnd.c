/*
 * XREFs of GetActiveTrackPwnd @ 0x1C01E16AC
 * Callers:
 *     xxxSystemTimerProc @ 0x1C002AE80 (xxxSystemTimerProc.c)
 *     xxxTrackMouseMove @ 0x1C002D520 (xxxTrackMouseMove.c)
 *     xxxActiveWindowTracking @ 0x1C01E246C (xxxActiveWindowTracking.c)
 *     zzzActiveCursorTracking @ 0x1C01E25D8 (zzzActiveCursorTracking.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C00071D0 (DWP_GetEnabledPopup.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000798C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00DC9D0 (IsModelessMenuNotificationWindow.c)
 */

_QWORD *__fastcall GetActiveTrackPwnd(const struct tagWND *a1)
{
  _QWORD *EnabledPopup; // rbx
  __int64 v2; // rcx

  EnabledPopup = a1;
  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    return 0LL;
  for ( ; (*(_BYTE *)(EnabledPopup[5] + 31LL) & 0xC0) == 0x40; EnabledPopup = (_QWORD *)EnabledPopup[13] )
    ;
  if ( (*(_BYTE *)(EnabledPopup[5] + 31LL) & 8) != 0 )
    EnabledPopup = DWP_GetEnabledPopup(EnabledPopup);
  if ( !EnabledPopup )
    return 0LL;
  if ( (*(_BYTE *)(EnabledPopup[5] + 31LL) & 0x10) == 0 )
    return 0LL;
  v2 = *(_QWORD *)(EnabledPopup[2] + 432LL);
  if ( v2 == gpqForeground
    && (EnabledPopup == *(_QWORD **)(v2 + 120) || (unsigned int)IsModelessMenuNotificationWindow((__int64)EnabledPopup)) )
  {
    return 0LL;
  }
  if ( EnabledPopup == *(_QWORD **)(*(_QWORD *)(EnabledPopup[3] + 8LL) + 168LL) )
    return 0LL;
  else
    return EnabledPopup;
}
