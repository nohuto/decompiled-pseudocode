__int64 __fastcall CRadialGradientBrush::GetD2DBrush(
        CRadialGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Brush **a4)
{
  float v5; // xmm0_4
  __m128 v6; // xmm6
  __m128 v8; // xmm7
  __m128 v11; // xmm10
  __m128 v12; // xmm11
  int CurrentD2DRadialGradientBrush; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  struct ID2D1Brush *v16; // rbx
  __int64 v17; // rcx
  struct ID2D1RadialGradientBrush *v19; // [rsp+38h] [rbp-59h] BYREF
  float v20; // [rsp+40h] [rbp-51h] BYREF
  float v21; // [rsp+44h] [rbp-4Dh]
  __int128 v22; // [rsp+48h] [rbp-49h] BYREF
  int v23; // [rsp+58h] [rbp-39h]
  int v24; // [rsp+5Ch] [rbp-35h]

  v5 = a3->right - a3->left;
  v6 = (__m128)*((unsigned int *)this + 60);
  v8 = (__m128)*((unsigned int *)this + 61);
  v11 = (__m128)*((unsigned int *)this + 64);
  v12 = (__m128)*((unsigned int *)this + 65);
  v19 = 0LL;
  v20 = v5;
  v21 = a3->bottom - a3->top;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  CurrentD2DRadialGradientBrush = CGradientBrush::GetCurrentD2DRadialGradientBrush(this, a2, &v19);
  v15 = CurrentD2DRadialGradientBrush;
  if ( CurrentD2DRadialGradientBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CurrentD2DRadialGradientBrush, 0xDCu, 0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 39) == 1 )
    {
      v6.m128_f32[0] = (float)(v6.m128_f32[0] * v20) + a3->left;
      v8.m128_f32[0] = (float)(v8.m128_f32[0] * v21) + a3->top;
      v11.m128_f32[0] = v11.m128_f32[0] * v20;
      v12.m128_f32[0] = v12.m128_f32[0] * v21;
    }
    v16 = v19;
    (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *, unsigned __int64))(*(_QWORD *)v19 + 64LL))(
      v19,
      _mm_unpacklo_ps(v6, v8).m128_u64[0]);
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v16 + 80LL))(v16);
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v16 + 88LL))(v16);
    (*(void (__fastcall **)(struct ID2D1Brush *, unsigned __int64))(*(_QWORD *)v16 + 72LL))(
      v16,
      _mm_unpacklo_ps(v11, v12).m128_u64[0]);
    v17 = *((_QWORD *)this + 27);
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v17 + 208LL))(v17, &v20, &v22);
    }
    else
    {
      v23 = 0;
      v24 = 0;
      v22 = *(_OWORD *)&_xmm;
    }
    (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v16 + 40LL))(v16, &v22);
    v19 = 0LL;
    *a4 = v16;
    v15 = 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  return v15;
}
