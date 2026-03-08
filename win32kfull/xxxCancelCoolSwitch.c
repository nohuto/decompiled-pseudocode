/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C0146A72
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C00EC610 (EditionHandleAltTabCancel.c)
 *     EditionHandleAltTab @ 0x1C00F54C0 (EditionHandleAltTab.c)
 *     EditionCancelCoolSwitch @ 0x1C0146A50 (EditionCancelCoolSwitch.c)
 *     xxxNextWindow @ 0x1C01CB604 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CBDC8 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01CC6D0 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 */

__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  __int64 *v1; // rax

  if ( gspwndAltTab )
    v0 = *((_QWORD *)gspwndAltTab + 2);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, gspwndAltTab, -4, 0, 1);
  v1 = (__int64 *)HMAssignmentUnlock(&gspwndAltTab);
  if ( !v1 )
    return 0LL;
  xxxDestroyWindow(v1);
  return 1LL;
}
