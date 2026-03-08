/*
 * XREFs of ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801E7B98
 * Callers:
 *     ?GetTreeClientBounds@CRemoteAppRenderTarget@@UEBA_NPEAUMilRectF@@@Z @ 0x1801E7C50 (-GetTreeClientBounds@CRemoteAppRenderTarget@@UEBA_NPEAUMilRectF@@@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E8350 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801E8770 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyR.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800E7548 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::GetTreeBounds(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v7; // r8
  _BYTE v9[64]; // [rsp+20h] [rbp-78h] BYREF
  int v10; // [rsp+60h] [rbp-38h]
  float v11[4]; // [rsp+70h] [rbp-28h] BYREF

  v2 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  v10 = 0;
  CVisual::GetRootTransform(*(CVisual **)(v5 + 64), (struct CMILMatrix *)v9, 0);
  CMILMatrix::Invert((CMILMatrix *)v9, v6, v7);
  do
  {
    v11[v2] = (float)*(int *)(a1 + 4 * v2 + 264);
    ++v2;
  }
  while ( v2 < 4 );
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v9, (struct MilRectF *)v11, (float *)a2);
  return a2;
}
