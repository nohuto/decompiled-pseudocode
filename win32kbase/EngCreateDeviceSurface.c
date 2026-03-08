/*
 * XREFs of EngCreateDeviceSurface @ 0x1C00A3D40
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00A3CE0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C018BB00 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005B3C4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

HSURF __stdcall EngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (iFormatCompat & 0xFFFF7FFF) != 1
    && (iFormatCompat & 0xFFFF7FFF) != 2
    && (iFormatCompat & 0xFFFF7FFF) != 3
    && (iFormatCompat & 0xFFFF7FFF) != 4
    && (iFormatCompat & 0xFFFF7FFF) - 5 >= 2 )
  {
    iFormatCompat = iFormatCompat & 0x8000 | 1;
  }
  return (HSURF)hbmCreateDriverSurface(1, dhsurf, sizl, 0, iFormatCompat, 0, (void *)0xDEADBEEFLL);
}
