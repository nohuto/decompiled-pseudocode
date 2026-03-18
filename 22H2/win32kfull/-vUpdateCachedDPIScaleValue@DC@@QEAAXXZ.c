/*
 * XREFs of ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0159D32
 * Callers:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1C002F2A0 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C008EF30 (GreHintDCWnd.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0159CE4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00B0514 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
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
