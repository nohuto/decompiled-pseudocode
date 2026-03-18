/*
 * XREFs of ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C016EAE6
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C0027F30 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C00DC470 (GreHintDCWnd.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C016EA98 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C011A1AC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

void __fastcall DC::vUpdateCachedDPIScaleValue(DC *this)
{
  int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ecx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v6 = 1;
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    v4 = bFToL(*(float *)(v3 + 524), &v6, 6u);
    v5 = v6;
    if ( !v4 )
      v5 = 1;
    v1 = v5;
  }
  DC::SetCachedDpiScaleValue(this, v1);
}
