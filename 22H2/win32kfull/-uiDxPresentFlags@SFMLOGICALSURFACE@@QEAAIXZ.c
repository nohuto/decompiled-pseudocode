/*
 * XREFs of ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C000B0D4
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C000AE98 (GreGetDxSharedSurface.c)
 *     GreGetHwndUpdateIds @ 0x1C0267938 (GreGetHwndUpdateIds.c)
 * Callees:
 *     GreDwmUseDeviceBitmapsForMultiAdapter @ 0x1C000B12C (GreDwmUseDeviceBitmapsForMultiAdapter.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::uiDxPresentFlags(SFMLOGICALSURFACE *this)
{
  int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  if ( (unsigned int)GreDwmUseDeviceBitmapsForMultiAdapter()
    && (unsigned int)IsDwmActive()
    && *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 8724LL) )
  {
    v2 = 8;
  }
  return *((_DWORD *)this + 53) | (unsigned int)v2;
}
