/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C01537A2
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C00B4670 (EditionHandleAltTabCancel.c)
 *     EditionHandleAltTab @ 0x1C00BDAD0 (EditionHandleAltTab.c)
 *     EditionCancelCoolSwitch @ 0x1C0153780 (EditionCancelCoolSwitch.c)
 *     xxxNextWindow @ 0x1C01CA504 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01CB5E0 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 */

__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  __int64 *v1; // rax

  if ( gspwndAltTab )
    v0 = *(_QWORD *)(gspwndAltTab + 16);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, (struct tagWND *)gspwndAltTab, -4, 0, 1);
  v1 = (__int64 *)HMAssignmentUnlock(&gspwndAltTab);
  if ( !v1 )
    return 0LL;
  xxxDestroyWindow(v1);
  return 1LL;
}
