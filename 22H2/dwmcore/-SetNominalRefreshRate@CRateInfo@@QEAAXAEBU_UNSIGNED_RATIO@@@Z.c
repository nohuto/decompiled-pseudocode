/*
 * XREFs of ?SetNominalRefreshRate@CRateInfo@@QEAAXAEBU_UNSIGNED_RATIO@@@Z @ 0x18006DB2C
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006F7D0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     McTemplateU0qff_EventWriteTransfer @ 0x1801623C8 (McTemplateU0qff_EventWriteTransfer.c)
 */

void __fastcall CRateInfo::SetNominalRefreshRate(CRateInfo *this, const struct _UNSIGNED_RATIO *a2)
{
  CRateInfo *v3; // rdi
  LONGLONG v4; // rax
  __int64 v5; // r9
  LONGLONG v6; // rbx
  __m128d v7; // xmm0
  char v8; // xmm4_1

  v3 = this;
  v4 = g_qpcFrequency.QuadPart * a2->uiDenominator / a2->uiNumerator;
  v5 = *(_QWORD *)this;
  v6 = v4;
  if ( v4 != *(_QWORD *)this )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v7 = 0LL;
      if ( v4 < 0 )
      {
        this = (CRateInfo *)(v4 & 1 | ((unsigned __int64)v4 >> 1));
        v7.m128d_f64[0] = (double)(int)this + (double)(int)this;
      }
      else
      {
        v7.m128d_f64[0] = (double)(int)v4;
      }
      v7.m128d_f64[0] = v7.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
      v8 = _mm_cvtpd_ps(v7).m128_u8[0];
      if ( v5 < 0 )
        LODWORD(v5) = v5 & 1;
      McTemplateU0qff_EventWriteTransfer(
        (_DWORD)this,
        (unsigned int)&EVTDESC_SCHEDULE_NEW_NOMINAL_REFRESH_PERIOD,
        1,
        v5,
        v8);
    }
    *((struct _UNSIGNED_RATIO *)v3 + 1) = *a2;
    *(_QWORD *)v3 = v6;
    *((_BYTE *)v3 + 24) = 1;
  }
}
