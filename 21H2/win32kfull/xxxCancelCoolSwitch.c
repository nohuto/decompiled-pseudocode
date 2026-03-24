/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C0125DE4
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C0120A80 (EditionHandleAltTabCancel.c)
 *     EditionCancelCoolSwitch @ 0x1C0125DC0 (EditionCancelCoolSwitch.c)
 *     EditionHandleAltTab @ 0x1C0131FC0 (EditionHandleAltTab.c)
 *     xxxNextWindow @ 0x1C01F412C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F4970 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01F5240 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 */

__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  unsigned __int64 v2; // rax

  if ( gspwndAltTab )
    v0 = *((_QWORD *)gspwndAltTab + 2);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, gspwndAltTab, -4, 0, 1u);
  v2 = HMAssignmentUnlock(&gspwndAltTab);
  if ( !v2 )
    return 0LL;
  xxxDestroyWindow(v2);
  return 1LL;
}
