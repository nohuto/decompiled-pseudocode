/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180060A78
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067A20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000E21C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18005B5F4 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18005D0D0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DBE0 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B26B8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5000 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800C3C54 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z @ 0x1801D34FC (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1801D5D1C (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAVCColorTransformResource@@XZ @ 0x1801D5D6C (-GetColorTransform@CVisual@@QEBAPEAVCColorTransformResource@@XZ.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801D6534 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCColorTransformResource@@@Z @ 0x1801D6730 (-PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCColorTransformResource@@.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x1801D69A0 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 */

__int64 CDrawingContext::PushEffects(
        CDrawingContext *this,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        ...)
{
  _BYTE *v6; // rsi
  float v9; // xmm0_4
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // ecx
  char v14; // r15
  void *v15; // r12
  struct CFilterEffect **v17; // rax
  struct CFilterEffect *v18; // rcx
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  struct CColorTransformResource *ColorTransform; // rax
  CVisual *v24; // rcx
  struct CFilterEffect *EffectInternal; // rax
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  float v30; // xmm0_4
  float v31; // xmm0_4
  int v32; // eax
  unsigned int v33; // ecx
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  __int128 v35; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v36[96]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v37; // [rsp+100h] [rbp+67h] BYREF
  _BYTE *v38; // [rsp+118h] [rbp+7Fh] BYREF
  va_list va; // [rsp+118h] [rbp+7Fh]
  va_list va1; // [rsp+120h] [rbp+87h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v38 = va_arg(va1, _BYTE *);
  v37 = a4;
  v6 = v38;
  LODWORD(v9) = a2[4] & _xmm;
  *v38 = 0;
  v11 = 0;
  if ( v9 < 0.0000011920929 || COERCE_FLOAT(*((_DWORD *)a2 + 11) & _xmm) < 0.0000011920929 )
  {
    *v6 = 1;
    return v11;
  }
  if ( a2[1]
    || *((_BYTE *)a2 + 193)
    || *((_BYTE *)a2 + 194)
    || *((_BYTE *)a2 + 195)
    || *((_BYTE *)a2 + 196)
    || *((_DWORD *)a2 + 9)
    || *((_DWORD *)a2 + 10)
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 11) - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v12 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(this, a3, (__int64)a2, v6);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xD86u, 0LL);
      return v11;
    }
    if ( !*v6 )
    {
      v14 = 0;
      if ( *((_BYTE *)a2 + 193) )
      {
        ColorTransform = CVisual::GetColorTransform((CVisual *)*a2);
        CDrawingContext::PushColorTransformLayerForNode(this, (const struct CVisual *)*a2, ColorTransform);
        v14 = 1;
      }
      v15 = a6;
      if ( *((_BYTE *)a2 + 194) )
      {
        v24 = (CVisual *)*a2;
        LOBYTE(v37) = 0;
        EffectInternal = CVisual::GetEffectInternal(v24);
        v26 = CDrawingContext::PushEffectLayer(
                (struct IDeviceTarget **)this,
                (struct CVisual *)*a2,
                a3,
                a5,
                v15,
                EffectInternal,
                (char *)&v37);
        v11 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xDA4u, 0LL);
          return v11;
        }
        v14 = 1;
        *v6 |= v37;
      }
      if ( *((_BYTE *)a2 + 195) )
      {
        v17 = (struct CFilterEffect **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 216LL))(*a2);
        v18 = 0LL;
        LOBYTE(v37) = 0;
        if ( v17 )
          v18 = *v17;
        v19 = CDrawingContext::PushEffectLayer(
                (struct IDeviceTarget **)this,
                (struct CVisual *)*a2,
                a3,
                a5,
                v15,
                v18,
                (char *)&v37);
        v11 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xDBDu, 0LL);
          return v11;
        }
        v14 = 1;
        *v6 |= v37;
      }
      if ( *((_DWORD *)a2 + 10) )
      {
        v28 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)&v35);
        v11 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xDC6u, 0LL);
          return v11;
        }
        CMILMatrix::SetToIdentity((CMILMatrix *)v36);
        CMatrixStack::Top((CDrawingContext *)((char *)this + 400), (struct CMILMatrix *)v36);
        CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v36, (float *)&v37, (float *)va);
        v30 = *(float *)&v37 <= 1.0 ? 1.0 - *(float *)&v37 : *(float *)&v37 - 1.0;
        if ( v30 > 0.0000099999997
          || (*(float *)&v38 <= 1.0 ? (v31 = 1.0 - *(float *)&v38) : (v31 = *(float *)&v38 - 1.0), v31 > 0.0000099999997) )
        {
          v32 = CDrawingContext::PushResampleLayer(this, *a2, *((unsigned int *)a2 + 10), &v35, v37, (_DWORD)v38);
          v11 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xDD6u, 0LL);
            return v11;
          }
          v14 = 1;
        }
      }
      if ( *((_BYTE *)a2 + 196) )
      {
        ColorSpace = CVisual::GetColorSpace((CVisual *)*a2);
        CDrawingContext::PushColorSpaceLayer(this, (const struct CVisual *)*a2, ColorSpace);
      }
      else if ( !v14 )
      {
        return v11;
      }
      CMatrixStack::Top((CDrawingContext *)((char *)this + 400), (struct CMILMatrix *)(a2 + 6));
    }
  }
  else
  {
    *((_QWORD *)&v35 + 1) = *a2;
    LODWORD(v35) = 7;
    v21 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 92, &v35);
    v11 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xD80u, 0LL);
  }
  return v11;
}
