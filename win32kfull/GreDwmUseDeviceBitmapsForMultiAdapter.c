/*
 * XREFs of GreDwmUseDeviceBitmapsForMultiAdapter @ 0x1C000A4DC
 * Callers:
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C000A484 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x1C02B1430 (-MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z.c)
 * Callees:
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 */

__int64 GreDwmUseDeviceBitmapsForMultiAdapter()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  v0 = 0;
  if ( (unsigned int)IsDwmActive() )
    return *(unsigned int *)(*(_QWORD *)(SGDGetSessionState(v1) + 32) + 8700LL);
  return v0;
}
