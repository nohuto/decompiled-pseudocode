/*
 * XREFs of ?DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180283450
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180011970 (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180013400 (-SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008DE30 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18008E868 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DrawYCbCrBitmap(
        ID2D1DeviceContext **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 *a3,
        struct ID2D1Bitmap1 *a4,
        enum D2D1_YCBCR_CHROMA_SUBSAMPLING a5,
        const struct D2D_RECT_F *a6,
        float a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_COMPOSITE_MODE a9)
{
  const struct D2D_RECT_F *v9; // rsi
  __int64 v14; // rax
  int v15; // edi
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __m128i v20; // xmm0
  ID2D1DeviceContext *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  struct ID2D1Effect *v25; // [rsp+30h] [rbp-79h] BYREF
  __int64 v26; // [rsp+38h] [rbp-71h] BYREF
  __int64 v27; // [rsp+40h] [rbp-69h] BYREF
  float v28; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v29[20]; // [rsp+4Ch] [rbp-5Dh]
  int v30; // [rsp+60h] [rbp-49h]
  __m128i v31; // [rsp+68h] [rbp-41h] BYREF
  __int64 v32; // [rsp+78h] [rbp-31h]
  enum D2D1_INTERPOLATION_MODE v33; // [rsp+80h] [rbp-29h]
  _BYTE v34[24]; // [rsp+88h] [rbp-21h] BYREF

  v9 = a6;
  CD2DContext::FlushDrawList((CD2DContext *)this);
  v25 = 0LL;
  v14 = (__int64)(this + 134);
  v27 = 0LL;
  v26 = 0LL;
  if ( !this )
    v14 = 1088LL;
  v15 = *(_DWORD *)v14;
  if ( *(int *)v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(1088LL, 0LL, 0, v15, 0x3CFu, 0LL);
  }
  else
  {
    CD2DContext::EnsureBeginDraw((CD2DContext *)this);
    (*(void (__fastcall **)(const struct ID2DContextOwner *, _BYTE *))(*(_QWORD *)a2 + 8LL))(a2, v34);
    (*(void (__fastcall **)(ID2D1DeviceContext *, _BYTE *))(*(_QWORD *)this[25] + 240LL))(this[25], v34);
    v16 = (*((__int64 (__fastcall **)(ID2D1DeviceContext **, __int64, struct ID2D1Effect **))*this + 25))(
            this,
            5LL,
            &v25);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3D6u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v25 + 112LL))(
        v25,
        0LL,
        a3,
        1LL);
      (*(void (__fastcall **)(struct ID2D1Effect *, __int64, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v25 + 112LL))(
        v25,
        1LL,
        a4,
        1LL);
      v18 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, enum D2D1_YCBCR_CHROMA_SUBSAMPLING *, int))(*(_QWORD *)v25 + 72LL))(
              v25,
              0LL,
              0LL,
              &a5,
              4);
      v15 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3DAu, 0LL);
      }
      else if ( a9 )
      {
        ID2D1DeviceContext::DrawImage(this[25], v25, 0LL, v9, a8, a9);
      }
      else
      {
        CD2DContext::SetPrimitiveBlend((CD2DContext *)this, D2D1_PRIMITIVE_BLEND_SOURCE_OVER);
        (*(void (__fastcall **)(struct ID2D1Effect *, __int64 *))(*(_QWORD *)v25 + 144LL))(v25, &v26);
        *(_QWORD *)&v29[12] = 0LL;
        v20 = _mm_loadu_si128((const __m128i *)v9);
        v21 = this[25];
        v30 = 0;
        v31 = v20;
        v33 = a8;
        v32 = 0LL;
        v28 = a7;
        *(_OWORD *)v29 = *(_OWORD *)&_xmm;
        v22 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int64, __m128i *, float *, __int64 *))(*(_QWORD *)v21 + 520LL))(
                v21,
                v26,
                &v31,
                &v28,
                &v27);
        v15 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x3F0u, 0LL);
        else
          (*(void (__fastcall **)(ID2D1DeviceContext *, const struct D2D_RECT_F *, __int64))(*(_QWORD *)this[25] + 136LL))(
            this[25],
            v9,
            v27);
      }
    }
  }
  if ( v25 )
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v25 + 112LL))(v25, 0LL, 0LL, 1LL);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int64))(*(_QWORD *)v25 + 112LL))(
      v25,
      1LL,
      0LL,
      1LL);
  }
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((unsigned __int64)(this - 2) & -(__int64)(this != 0LL), v15, 0);
}
