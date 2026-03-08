/*
 * XREFs of ?RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F11C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000FCAC (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18001C268 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180073854 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x180219440 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 */

__int64 __fastcall CFilterEffectLayer::RenderLayer(CFilterEffectLayer *this, struct CDrawingContext *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  CFilterEffect *v11; // rcx
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  FLOAT v15; // xmm3_4
  float v16; // xmm0_4
  FLOAT v17; // xmm1_4
  float v18; // xmm0_4
  FLOAT v19; // xmm1_4
  __int64 v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-50h]
  struct ID2D1Effect *v23; // [rsp+30h] [rbp-40h] BYREF
  struct ID2D1Bitmap1 *v24; // [rsp+38h] [rbp-38h] BYREF
  struct D2D_POINT_2F v25; // [rsp+40h] [rbp-30h] BYREF
  float v26; // [rsp+48h] [rbp-28h]
  float v27; // [rsp+4Ch] [rbp-24h]
  struct D2D_RECT_F v28; // [rsp+50h] [rbp-20h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 1);
  v5 = *v4;
  v24 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, struct ID2D1Bitmap1 **, _QWORD))(v5 + 72))(v4, &v24, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    v22 = 96;
    goto LABEL_10;
  }
  if ( g_LockAndReadLayer )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
    v10 = *(int *)(*(_QWORD *)(v9 + 8) + 16LL) + v9 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 24LL))(
      v10,
      ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  }
  v11 = (CFilterEffect *)*((_QWORD *)this + 15);
  v23 = 0LL;
  CFilterEffect::GetD2DEffectNoRef(v11, a2, v24, &v23);
  if ( v23 )
  {
    v12 = *((float *)this + 33);
    v13 = *((float *)this + 34);
    v14 = (float)*((int *)this + 4);
    v25.x = *((FLOAT *)this + 32);
    v15 = v25.x - v14;
    v25.y = v12;
    v16 = (float)*((int *)this + 5);
    v28.left = v15;
    v17 = v12 - v16;
    v18 = *((float *)this + 35);
    v28.right = v15 + v13;
    v28.top = v17;
    v26 = v13 + v25.x;
    v28.bottom = v17 + v18;
    v27 = v18 + v12;
    v6 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v25, D2D1_ANTIALIAS_MODE_ALIASED, 0);
    v8 = v6;
    if ( v6 >= 0 )
    {
      v19 = *((float *)this + 33);
      v25.x = *((FLOAT *)this + 32);
      v25.y = v19;
      v8 = CDrawingContext::FillEffect(a2, v23, &v28, &v25, 1);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v8, 0x90u, 0LL);
      goto LABEL_11;
    }
    v22 = 130;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v22, 0LL);
  }
LABEL_11:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v24);
  return (unsigned int)v8;
}
