/*
 * XREFs of ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180175370
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C25A8 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180040940 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800415F0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800803D0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008D0E8 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x1801747E4 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180177590 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ??$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ @ 0x180210AC0 (--$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x18023B600 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 */

__int64 __fastcall CDrawingContext::DrawGenericInk(
        CDrawingContext *this,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        bool a3)
{
  unsigned __int64 v3; // r14
  char v7; // bp
  const struct CMILMatrix *TopByReference; // rax
  __int128 *v9; // rcx
  __int128 v10; // xmm0
  CDrawingContext *v11; // rsi
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  float v21; // xmm0_4
  enum D2D1_PRIMITIVE_BLEND v22; // eax
  __int64 v23; // r10
  int v24; // eax
  __int64 v25; // rcx
  _OWORD v27[4]; // [rsp+40h] [rbp-A8h] BYREF
  int v28; // [rsp+80h] [rbp-68h]
  __int128 v29; // [rsp+C0h] [rbp-28h]

  v3 = (unsigned __int64)this + 8;
  v7 = 0;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 392));
    if ( !(unsigned __int8)CMILMatrix::Is2DTransformExceptForZTranslation<1>(TopByReference) )
    {
      v17 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, -2147467263, 0x2F7u, 0LL);
      return v17;
    }
    v10 = v9[3];
    v28 = 0;
    v11 = (CDrawingContext *)((char *)this - 16);
    v12 = *v9;
    v13 = v9[1];
    v14 = v9[2];
    v29 = v10;
    DWORD2(v29) = 0;
    v27[3] = v29;
    v27[0] = v12;
    v27[1] = v13;
    v27[2] = v14;
    v15 = CDrawingContext::PushTransformInternal(
            (CDrawingContext *)((char *)this - 16),
            0LL,
            (const struct CMILMatrix *)v27,
            0,
            1);
    v17 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2F2u, 0LL);
      return v17;
    }
    v7 = 1;
  }
  else
  {
    v11 = (CDrawingContext *)((char *)this - 16);
  }
  v18 = CDrawingContext::ApplyRenderStateInternal(v11, 0);
  v17 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x2FBu, 0LL);
  }
  else
  {
    v20 = *((_DWORD *)this + 804);
    if ( v20 )
      v21 = *(float *)(*((_QWORD *)this + 404) + 4LL * (unsigned int)(v20 - 1));
    else
      v21 = *(float *)&FLOAT_1_0;
    v22 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 66));
    v24 = CD2DContext::DrawGenericInk(
            (CD2DContext *)(v23 + 16),
            (const struct ID2DContextOwner *)(v3 & -(__int64)(v11 != 0LL)),
            a2,
            (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 65) != 0),
            v22,
            v21,
            a3);
    v17 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x302u, 0LL);
  }
  if ( v7 )
    CDrawingContext::PopTransformInternal(v11, 1);
  return v17;
}
