/*
 * XREFs of EngCreateRedirectionDeviceBitmap @ 0x1C00A26A0
 * Callers:
 *     <none>
 * Callees:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00A2714 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

HBITMAP __stdcall EngCreateRedirectionDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  return hbmCreateDriverSurface(3u, dhsurf, sizl, 0, iFormatCompat, 0x800u, (void *)0xDEADBEEFLL);
}
