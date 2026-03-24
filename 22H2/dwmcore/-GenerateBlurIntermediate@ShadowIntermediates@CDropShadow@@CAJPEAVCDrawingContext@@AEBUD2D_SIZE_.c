/*
 * XREFs of ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000F6C8
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180008824 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1801BF350 (-UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000D460 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18000D560 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D180 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180040870 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180040A2C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D0818 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDropShadow::ShadowIntermediates::GenerateBlurIntermediate(
        struct CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct IBitmapRealization *a3,
        double a4,
        struct IRenderTargetBitmap **a5)
{
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(struct IBitmapRealization *, char *, __int64 *, _QWORD); // rbx
  int v12; // eax
  unsigned int v13; // ecx
  int CachedEffectNoRef; // eax
  unsigned int v15; // ecx
  struct ID2D1Effect *v16; // rsi
  int v17; // eax
  unsigned int v18; // ecx
  struct IRenderTargetBitmap *v19; // rdx
  char v21; // [rsp+20h] [rbp-40h]
  const char *v22; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+38h] [rbp-28h]
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  struct IRenderTargetBitmap *v25; // [rsp+48h] [rbp-18h] BYREF

  v25 = 0LL;
  v23 = 19;
  v22 = "DWM DropShadow Blur";
  v21 = 0;
  v7 = CDrawingContext::PushOffScreenRenderingLayer(this, &v22, a2, DisplayId::None, v21, &v25);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3C5u, 0LL);
  }
  else
  {
    v10 = *(_QWORD *)a3;
    v24 = 0LL;
    v11 = *(__int64 (__fastcall **)(struct IBitmapRealization *, char *, __int64 *, _QWORD))(v10 + 56);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v24);
    v12 = v11(a3, (char *)this + 56, &v24, 0LL);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3CFu, 0LL);
    }
    else
    {
      CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*((_QWORD *)this + 5) + 16LL, 6u, &v22);
      v9 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, CachedEffectNoRef, 0x3D4u, 0LL);
      }
      else
      {
        v16 = (struct ID2D1Effect *)v22;
        (*(void (__fastcall **)(const char *, _QWORD, __int64, __int64))(*(_QWORD *)v22 + 112LL))(v22, 0LL, v24, 1LL);
        *(float *)&v22 = *(float *)&a4 / 3.0;
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, const char **, int))(*(_QWORD *)v16 + 72LL))(
          v16,
          0LL,
          0LL,
          &v22,
          4);
        LODWORD(v22) = 1;
        (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, const char **, int))(*(_QWORD *)v16 + 72LL))(
          v16,
          1LL,
          0LL,
          &v22,
          4);
        LODWORD(v22) = 0;
        (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, const char **, int))(*(_QWORD *)v16 + 72LL))(
          v16,
          2LL,
          0LL,
          &v22,
          4);
        v22 = (const char *)_mm_unpacklo_ps(*(__m128 *)&a4, *(__m128 *)&a4).m128_u64[0];
        v17 = CDrawingContext::FillEffect(this, v16, 0LL, (const struct D2D_POINT_2F *)&v22, 1);
        v9 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x3E8u, 0LL);
        }
        else
        {
          v19 = v25;
          v25 = 0LL;
          *a5 = v19;
        }
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v16 + 112LL))(
          v16,
          0LL,
          0LL,
          1LL);
      }
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v24);
    CDrawingContext::PopLayer(this);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
  return v9;
}
