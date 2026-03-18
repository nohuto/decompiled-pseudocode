/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C01110F4
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C010BC10 (EditionHandleAltTabCancel.c)
 *     EditionCancelCoolSwitch @ 0x1C01110D0 (EditionCancelCoolSwitch.c)
 *     EditionHandleAltTab @ 0x1C0121AA0 (EditionHandleAltTab.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01EF940 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 */

__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  _QWORD *v2; // rax

  if ( gspwndAltTab )
    v0 = *(_QWORD *)(gspwndAltTab + 16);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, (struct tagWND *)gspwndAltTab, -4, 0, 1);
  v2 = (_QWORD *)HMAssignmentUnlock(&gspwndAltTab);
  if ( !v2 )
    return 0LL;
  xxxDestroyWindow(v2);
  return 1LL;
}
