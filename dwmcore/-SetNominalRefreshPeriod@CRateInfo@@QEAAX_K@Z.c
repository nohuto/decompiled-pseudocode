void __fastcall CRateInfo::SetNominalRefreshPeriod(CRateInfo *this, __int64 a2, __int64 a3, int a4)
{
  CRateInfo *v5; // rdi
  __m128d v6; // xmm0

  v5 = this;
  if ( a2 != *(_QWORD *)this )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v6 = 0LL;
      if ( a2 < 0 )
      {
        this = (CRateInfo *)(a2 & 1 | ((unsigned __int64)a2 >> 1));
        v6.m128d_f64[0] = (double)(int)this + (double)(int)this;
      }
      else
      {
        v6.m128d_f64[0] = (double)(int)a2;
      }
      v6.m128d_f64[0] = v6.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
      McTemplateU0qff_EventWriteTransfer(
        (_DWORD)this,
        (unsigned int)&EVTDESC_SCHEDULE_NEW_NOMINAL_REFRESH_PERIOD,
        1,
        a4,
        _mm_cvtpd_ps(v6).m128_i8[0]);
    }
    *(_QWORD *)v5 = a2;
    *((_BYTE *)v5 + 16) = 1;
  }
}
