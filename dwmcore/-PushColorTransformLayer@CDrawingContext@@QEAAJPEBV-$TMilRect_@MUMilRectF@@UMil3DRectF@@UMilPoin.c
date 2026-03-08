/*
 * XREFs of ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCColorTransformResource@@@Z @ 0x1801D33F0
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E6D30 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18007EBC8 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180090D28 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x1801CFED0 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCColorTransformResource@@PEAPEAV1@@Z @ 0x1801F0450 (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCColorTransformRes.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPointAndSizeL@@@Z @ 0x18026FF50 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 */

__int64 __fastcall CDrawingContext::PushColorTransformLayer(
        struct IDeviceTarget **this,
        __int64 a2,
        struct CColorTransformResource *a3)
{
  CColorSpaceLayer *v3; // rdi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  struct CLayer *v14; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h] BYREF

  v3 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v16);
  v6 = AlignRectFToPointAndSizeL(&v16, v15);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xE5Eu, 0LL);
  }
  else
  {
    v9 = CColorTransformLayer::Create(this[4], (const struct MilPointAndSizeL *)v15, a3, &v14);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xE63u, 0LL);
      v3 = v14;
    }
    else
    {
      v3 = v14;
      v11 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v14, 1, 1);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xE69u, 0LL);
      else
        v3 = 0LL;
    }
  }
  if ( v3 )
    CColorSpaceLayer::`vector deleting destructor'(v3, 1);
  return v8;
}
