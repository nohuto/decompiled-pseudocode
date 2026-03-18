/*
 * XREFs of ?GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1801EAE1C
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@@Z @ 0x1801EB2A8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180061AA4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2F90 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 */

int *__fastcall CRemoteAppRenderTarget::GetRailWindowDeviceBounds(__int64 a1, int *a2, CMILMatrix *a3)
{
  __int64 i; // rdx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  float v7[4]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v7[i] = (float)*(int *)(a1 + 4 * i + 264);
  v6 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(a3, (struct MilRectF *)v7, (float *)&v6);
  PixelAlign(a2, (float *)&v6);
  return a2;
}
