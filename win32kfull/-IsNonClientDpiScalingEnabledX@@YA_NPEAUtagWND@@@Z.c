/*
 * XREFs of ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C02223D4
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 */

bool __fastcall IsNonClientDpiScalingEnabledX(struct tagWND *a1)
{
  char v1; // r8

  v1 = 0;
  if ( (*((_DWORD *)a1 + 80) & 0x80000) != 0 )
    return IsTopLevelWindow((__int64)a1);
  return v1;
}
