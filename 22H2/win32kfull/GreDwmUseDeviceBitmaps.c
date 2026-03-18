/*
 * XREFs of GreDwmUseDeviceBitmaps @ 0x1C0058454
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C00140E4 (GreCreateBitmapFromDxSurface.c)
 *     xxxDwmStopRedirection @ 0x1C0057060 (xxxDwmStopRedirection.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0057ED0 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0134CF0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 */

__int64 GreDwmUseDeviceBitmaps()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  v0 = 0;
  if ( (unsigned int)IsDwmActive() )
    return *(unsigned int *)(*(_QWORD *)(SGDGetSessionState(v1) + 32) + 8688LL);
  return v0;
}
