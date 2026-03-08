/*
 * XREFs of EngCreateRedirectionDeviceBitmap @ 0x1C00C8060
 * Callers:
 *     <none>
 * Callees:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005B3C4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

HBITMAP __stdcall EngCreateRedirectionDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  return (HBITMAP)hbmCreateDriverSurface(3, dhsurf, sizl, 0, iFormatCompat, 0x800u, (void *)0xDEADBEEFLL);
}
