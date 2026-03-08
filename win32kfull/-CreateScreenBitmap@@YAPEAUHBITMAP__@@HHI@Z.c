/*
 * XREFs of ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C01FEA38
 * Callers:
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01FF654 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 */

__int64 __fastcall CreateScreenBitmap(__int64 a1, __int64 a2, int a3)
{
  if ( a3 == 1 )
    return GreCreateBitmap(a1, a2, 1LL, 1LL, 0LL);
  else
    return GreCreateCompatibleBitmapInternal(*(_QWORD *)(gpDispInfo + 56LL), a1, a2, 0, 0LL, 0LL);
}
