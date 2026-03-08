/*
 * XREFs of ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801E5208
 * Callers:
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801E5AE4 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E5DF4 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180287CD0 (-NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 */

__int64 __fastcall CDDisplayRenderTarget::NotifyRenderedRect(__int64 a1, struct MilRectF *a2, char a3)
{
  bool v4; // cf
  int *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 )
  {
    if ( !a3 )
    {
      v4 = *(_BYTE *)(a1 + 11217) != 0;
      v8 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + (v4 ? 18344LL : 18208LL)), a2, (float *)&v8);
      a2 = (struct MilRectF *)&v8;
    }
    v5 = PixelAlign(v9, (float *)a2);
    v6 = *(_QWORD *)(a1 + 184);
    a2 = (struct MilRectF *)&v8;
    v8 = *(_OWORD *)v5;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 184);
  }
  result = CDDisplaySwapChain::NotifyRenderedRect(v6, a2);
  *(_BYTE *)(a1 + 18664) = 1;
  return result;
}
