/*
 * XREFs of ?IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C0016AA8
 * Callers:
 *     UpdateWindowMonitor @ 0x1C00AE6B0 (UpdateWindowMonitor.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 */

char __fastcall IsChildWindowCoordinateSpaceBoundary(const struct tagWND *a1)
{
  char v1; // r8
  __int64 v2; // rcx
  __int64 v3; // r9

  v1 = 0;
  if ( *((_QWORD *)a1 + 13)
    && !(unsigned int)IsTopLevelWindow(a1)
    && (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v2 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v3 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
  {
    return 1;
  }
  return v1;
}
