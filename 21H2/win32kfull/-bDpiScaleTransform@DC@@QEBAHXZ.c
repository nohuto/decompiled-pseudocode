/*
 * XREFs of ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C011A1AC
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C0030EE4 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C0139224 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C016EAE6 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     GreScaleRgn @ 0x1C029D89C (GreScaleRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaleTransform(DC *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 130);
  result = 1LL;
  if ( (v1 & 1) == 0 || (v1 & 2) != 0 )
    return 0LL;
  return result;
}
