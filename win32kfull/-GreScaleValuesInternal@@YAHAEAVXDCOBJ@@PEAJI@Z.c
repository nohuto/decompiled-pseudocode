/*
 * XREFs of ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C02A9FFC
 * Callers:
 *     GreScaleValues @ 0x1C02AA82C (GreScaleValues.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02AABB4 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02AB5A0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02ABB30 (NtGdiFrameRgn.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00E90D4 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GreScaleValuesInternal(DC **a1, int *a2, unsigned int a3)
{
  int v6; // r8d
  __int64 v7; // rbx
  int *i; // rdi

  if ( !(unsigned int)DC::bDpiScaleTransform(*a1) )
    return 1LL;
  v7 = 0LL;
  if ( !v6 )
    return 1LL;
  for ( i = a2; (unsigned int)bFToL((float)*i * *((float *)*a1 + 131), &a2[v7], 6u); ++i )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= a3 )
      return 1LL;
  }
  return 0LL;
}
