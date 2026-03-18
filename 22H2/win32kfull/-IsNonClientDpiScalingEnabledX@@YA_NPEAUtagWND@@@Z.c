/*
 * XREFs of ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C021F6CC
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

bool __fastcall IsNonClientDpiScalingEnabledX(struct tagWND *a1)
{
  char v1; // r8

  v1 = 0;
  if ( (*((_DWORD *)a1 + 80) & 0x80000) != 0 )
    return IsTopLevelWindow((__int64)a1);
  return v1;
}
