void __fastcall CComputeScribbleScheduler::GetWakeupTimeBeforeVBlank(
        CComputeScribbleScheduler *this,
        struct CComputeScribble *a2,
        double *a3,
        double *a4)
{
  double v4; // xmm6_8
  double v8; // xmm7_8
  __m128i v9; // xmm0
  int v10; // eax
  double v11; // xmm3_8
  float v12; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v13[4]; // [rsp+38h] [rbp-50h] BYREF
  int v14; // [rsp+3Ch] [rbp-4Ch]

  v4 = *((double *)this + 6) - *((double *)this + 7);
  v8 = fminf((float)CCommonRegistryData::SuperWetTiming::RefreshRatePercentage / 100.0, 0.5) * *((double *)this + 6);
  (*(void (__fastcall **)(struct CComputeScribble *, struct CComputeScribble *, _BYTE *, float *))(*(_QWORD *)a2 + 32LL))(
    a2,
    a2,
    v13,
    &v12);
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 11));
  v10 = v14;
  if ( v14 < 0 )
    v10 = 0;
  v11 = v12;
  *a3 = (1.0 - (double)v10 / _mm_cvtepi32_pd(v9).m128d_f64[0]) * v4 + v8 + v12 + *((double *)this + 7) + *(double *)this;
  *a4 = v11 + *(double *)this;
}
