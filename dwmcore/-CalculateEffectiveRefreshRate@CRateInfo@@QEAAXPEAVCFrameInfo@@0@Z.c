void __fastcall CRateInfo::CalculateEffectiveRefreshRate(CRateInfo *this, struct CFrameInfo *a2, struct CFrameInfo *a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // r14
  struct CFrameInfo *v6; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rbx
  __m128d v17; // xmm0
  double LowPart; // xmm1_8
  char v19; // xmm2_1
  __m128d v20; // xmm0
  unsigned __int64 v21; // rax
  __m128d v22; // xmm0
  __int64 v23; // rcx
  char v24; // xmm2_1

  v3 = *((unsigned int *)a2 + 32);
  v5 = *((unsigned int *)a3 + 32);
  v6 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
    a2);
  v9 = *((_QWORD *)v6 + 20);
  v10 = *((_QWORD *)a3 + 20);
  if ( v9 && v10 > v9 && v5 != v3 )
  {
    v11 = v10 - v9;
    v12 = (unsigned int)v5 - v3;
    if ( v5 <= v3 )
      v12 += 0x100000000LL;
    v13 = (v11 + (*((_QWORD *)this + 1) >> 1)) / *((_QWORD *)this + 1);
    v14 = v11 % v12;
    v15 = v11 / v12;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v17 = 0LL;
      LowPart = (double)(int)g_qpcFrequency.LowPart;
      if ( v15 < 0 )
      {
        v8 = (v11 / v12) & 1 | ((unsigned __int64)v15 >> 1);
        v17.m128d_f64[0] = (double)(int)v8 + (double)(int)v8;
      }
      else
      {
        v17.m128d_f64[0] = (double)(int)v15;
      }
      v17.m128d_f64[0] = v17.m128d_f64[0] * 1000.0 / LowPart;
      v19 = _mm_cvtpd_ps(v17).m128_u8[0];
      v20 = 0LL;
      if ( (v11 & 0x8000000000000000uLL) != 0LL )
      {
        v21 = v11;
        LODWORD(v11) = v11 & 1;
        v20.m128d_f64[0] = (double)(int)(v11 | (v21 >> 1)) + (double)(int)(v11 | (v21 >> 1));
      }
      else
      {
        v20.m128d_f64[0] = (double)(int)v11;
      }
      v20.m128d_f64[0] = v20.m128d_f64[0] * 1000.0 / LowPart;
      McTemplateU0qxxff_EventWriteTransfer(v8, v14, v11, v12, v13, _mm_cvtpd_ps(v20).m128_i8[0], v19);
    }
    if ( v15 && v13 <= 3 )
    {
      if ( *((_BYTE *)this + 16) )
      {
        v16 = *(_QWORD *)this;
        *((_BYTE *)this + 16) = 0;
      }
      else
      {
        v16 = (unsigned __int64)(v15 + 15LL * *((_QWORD *)this + 1)) >> 4;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
      {
        v22 = 0LL;
        if ( v16 < 0 )
          v22.m128d_f64[0] = (double)(int)(v16 & 1 | ((unsigned __int64)v16 >> 1))
                           + (double)(int)(v16 & 1 | ((unsigned __int64)v16 >> 1));
        else
          v22.m128d_f64[0] = (double)(int)v16;
        v23 = *((_QWORD *)this + 1);
        v22.m128d_f64[0] = v22.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
        v24 = _mm_cvtpd_ps(v22).m128_u8[0];
        if ( v23 < 0 )
          v23 = *((_QWORD *)this + 1) & 1LL;
        McTemplateU0qff_EventWriteTransfer(
          v23,
          (unsigned int)&EVTDESC_SCHEDULE_NEW_EFFECTIVE_REFRESH_PERIOD,
          0,
          v12,
          v24);
      }
      if ( v16 )
        *((_QWORD *)this + 1) = v16;
    }
  }
}
