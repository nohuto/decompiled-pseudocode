/*
 * XREFs of ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C02382B8
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 */

bool __fastcall IsNonClientDpiScalingEnabledX(struct tagWND *a1)
{
  char v1; // r9

  v1 = 0;
  if ( (*((_DWORD *)a1 + 80) & 0x80000) != 0 )
    return IsTopLevelWindow((__int64)a1);
  return v1;
}
