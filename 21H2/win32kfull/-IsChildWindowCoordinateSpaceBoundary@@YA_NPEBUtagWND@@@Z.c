/*
 * XREFs of ?IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C0118D5C
 * Callers:
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 */

char __fastcall IsChildWindowCoordinateSpaceBoundary(const struct tagWND *a1)
{
  char v1; // r9
  __int64 v2; // r10
  __int64 v3; // r11

  v1 = 0;
  if ( *((_QWORD *)a1 + 13)
    && !IsTopLevelWindow((__int64)a1)
    && (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v2 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v3 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
  {
    return 1;
  }
  return v1;
}
