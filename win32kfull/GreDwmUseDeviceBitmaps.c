/*
 * XREFs of GreDwmUseDeviceBitmaps @ 0x1C007CA44
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0013394 (GreCreateBitmapFromDxSurface.c)
 *     xxxDwmStopRedirection @ 0x1C007B850 (xxxDwmStopRedirection.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C007C5E0 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0128D34 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 */

__int64 __fastcall GreDwmUseDeviceBitmaps(Gre::Base *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx

  v1 = 0;
  if ( IsDwmActive(a1) )
    return *(unsigned int *)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 8688LL);
  return v1;
}
