/*
 * XREFs of ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1802103A8
 * Callers:
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x1801ADDE0 (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800615C0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1802102F0 (-GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z @ 0x180210698 (-IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x18021092C (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

__int64 __fastcall CPolygon::HitTestWithTransformation(
        CPolygon *this,
        const struct D2D_POINT_2F *a2,
        const struct CMILMatrix *a3,
        __m128 *a4,
        const enum MilBackfaceVisibility::Enum *a5,
        bool *a6)
{
  struct ID2D1Geometry *v7; // rcx
  unsigned int v8; // ebx
  __m128 v10; // xmm1
  int v11; // eax
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm1
  __m128 v15; // xmm3
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  __m128 v18; // xmm6
  __m128 v19; // xmm1
  __m128 v20; // xmm6
  bool IsPointInPolygon; // al
  __int64 v22; // rdx
  CGeometry *v23; // rcx
  int ShapeData; // eax
  const struct CMILMatrix *v25; // rdx
  __int64 v26; // rcx
  int D2DGeometry; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  struct ID2D1Geometry *v32; // [rsp+38h] [rbp-D0h] BYREF
  union __m128 v33; // [rsp+48h] [rbp-C0h] BYREF
  int v34; // [rsp+58h] [rbp-B0h]
  __m128 v35; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v36; // [rsp+78h] [rbp-90h]
  __m128 v37; // [rsp+88h] [rbp-80h]
  __m128 v38; // [rsp+98h] [rbp-70h]
  int v39; // [rsp+A8h] [rbp-60h]

  v7 = 0LL;
  v8 = 0;
  v32 = 0LL;
  *a6 = 0;
  if ( !*((_BYTE *)this + 241) && (*((_BYTE *)this + 240) || !*(_DWORD *)a5) )
  {
    v10 = a4[1];
    v11 = a4[4].m128_i32[0];
    v35 = *a4;
    v12 = a4[2];
    v36 = v10;
    v13 = a4[3];
    v37 = v12;
    v38 = v13;
    v39 = v11;
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)&v35, (struct CMILMatrix *)&v35);
    v16.m128_u64[1] = v35.m128_u64[1];
    v14 = v36;
    v15 = v38;
    *(double *)v16.m128_u64 = DirectX::XMMatrixInverse(0LL);
    if ( !_mm_movemask_ps(
            _mm_or_ps(
              _mm_or_ps(
                _mm_cmpeq_ps(_mm_and_ps(v15, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
                _mm_cmpeq_ps(_mm_and_ps((__m128)_xmm, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)),
              _mm_or_ps(
                _mm_cmpeq_ps(_mm_and_ps(v14, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
                _mm_cmpeq_ps(_mm_and_ps(v16, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)))) )
    {
      v17 = _mm_movelh_ps((__m128)*(_QWORD *)a2, (__m128)_xmm);
      v18 = _mm_add_ps(
              _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v17, v17, 255), v15),
                  _mm_mul_ps(_mm_shuffle_ps(v17, v17, 170), (__m128)_xmm)),
                _mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v14)),
              _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v16));
      v19 = _mm_shuffle_ps(v18, v18, 255);
      v20 = _mm_div_ps(v18, _mm_shuffle_ps(v19, v19, 0));
      v33 = v20;
      IsPointInPolygon = CPolygon::IsPointInPolygon(this, &v33);
      *a6 = IsPointInPolygon;
      if ( !IsPointInPolygon )
        goto LABEL_11;
      v22 = *((_QWORD *)this + 27);
      v23 = *(CGeometry **)(v22 + 248);
      if ( !v23 || (*(_BYTE *)(v22 + 102) & 1) != 0 )
        goto LABEL_11;
      v33.m128_u64[0] = 0LL;
      v33.m128_i8[8] = 0;
      ShapeData = CGeometry::GetShapeData(v23, (const struct D2D_SIZE_F *)(v22 + 140), (struct CShapePtr *)&v33);
      v8 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, ShapeData, 0x1D8u, 0LL);
      }
      else
      {
        D2DGeometry = CShapePtr::GetD2DGeometry((CShapePtr *)&v33, v25, &v32);
        v8 = D2DGeometry;
        if ( D2DGeometry >= 0 )
        {
          CShapePtr::Release((CShapePtr *)&v33);
LABEL_11:
          if ( !v32 )
            return v8;
          v29 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, unsigned __int64, _QWORD))(*(_QWORD *)v32 + 56LL))(
                  v32,
                  _mm_unpacklo_ps(v20, _mm_shuffle_ps(v20, v20, 85)).m128_u64[0],
                  0LL);
          v8 = v29;
          if ( v29 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x1E5u, 0LL);
          else
            *a6 = v34 != 0;
          goto LABEL_18;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, D2DGeometry, 0x1D9u, 0LL);
      }
      CShapePtr::Release((CShapePtr *)&v33);
    }
LABEL_18:
    v7 = v32;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Geometry *, const struct D2D_POINT_2F *, const struct CMILMatrix *, __m128 *))(*(_QWORD *)v7 + 16LL))(
      v7,
      a2,
      a3,
      a4);
  return v8;
}
