/*
 * XREFs of ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x18026E6DC
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180017450 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18026DCC0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

void __fastcall AddTransformedRectToD2DRgnGeometrySink(
        const struct MilRectF *a1,
        const struct CMILMatrix *a2,
        struct ID2D1GeometrySink *a3)
{
  __m128 v3; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm6
  __m128 v7; // xmm7
  __m128 v8; // xmm8
  __m128 v9; // xmm9
  __m128 v10; // xmm10
  __m128 v11; // xmm11
  _DWORD v12[8]; // [rsp+28h] [rbp-59h] BYREF
  _DWORD v13[8]; // [rsp+48h] [rbp-39h] BYREF

  v3 = (__m128)*(unsigned int *)a1;
  v5 = (__m128)*((unsigned int *)a1 + 1);
  v6 = (__m128)*((unsigned int *)a1 + 2);
  v7 = (__m128)*((unsigned int *)a1 + 3);
  v12[0] = v3.m128_i32[0];
  v12[1] = v5.m128_i32[0];
  v12[2] = v6.m128_i32[0];
  v12[3] = v5.m128_i32[0];
  v12[4] = v6.m128_i32[0];
  v12[5] = v7.m128_i32[0];
  v12[6] = v3.m128_i32[0];
  v12[7] = v7.m128_i32[0];
  if ( a2 )
  {
    CMILMatrix::Transform(a2, (const struct MilPoint2F *)v12, (struct MilPoint2F *)v13, 4);
    v3 = (__m128)v13[0];
    v5 = (__m128)v13[1];
    v6 = (__m128)v13[2];
    v8 = (__m128)v13[3];
    v9 = (__m128)v13[4];
    v7 = (__m128)v13[5];
    v10 = (__m128)v13[6];
    v11 = (__m128)v13[7];
  }
  else
  {
    v8 = v5;
    v9 = v6;
    v10 = v3;
    v11 = v7;
  }
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(*(_QWORD *)a3 + 40LL))(
    a3,
    _mm_unpacklo_ps(v3, v5).m128_u64[0],
    0LL);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(*(_QWORD *)a3 + 80LL))(
    a3,
    _mm_unpacklo_ps(v6, v8).m128_u64[0]);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(*(_QWORD *)a3 + 80LL))(
    a3,
    _mm_unpacklo_ps(v9, v7).m128_u64[0]);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(*(_QWORD *)a3 + 80LL))(
    a3,
    _mm_unpacklo_ps(v10, v11).m128_u64[0]);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a3 + 64LL))(a3, 1LL);
}
