/*
 * XREFs of ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C0139224
 * Callers:
 *     NtGdiFillRgn @ 0x1C012E830 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C0132220 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0138E34 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     GreScaleValues @ 0x1C029D9E4 (GreScaleValues.c)
 * Callees:
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C011A1AC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GreScaleValuesInternal(DC **a1, int *a2, unsigned int a3)
{
  __int64 v7; // rbx
  int *i; // rdi

  if ( !(unsigned int)DC::bDpiScaleTransform(*a1) )
    return 1LL;
  v7 = 0LL;
  if ( !a3 )
    return 1LL;
  for ( i = a2; (unsigned int)bFToL((float)*i * *((float *)*a1 + 131), &a2[v7], 6u); ++i )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= a3 )
      return 1LL;
  }
  return 0LL;
}
