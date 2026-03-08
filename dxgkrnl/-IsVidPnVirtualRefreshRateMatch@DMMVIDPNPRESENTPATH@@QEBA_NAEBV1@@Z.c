/*
 * XREFs of ?IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C03B51C4
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C017E6B8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0002890 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsVidPnVirtualRefreshRateMatch(DMMVIDPNTARGET **this, DMMVIDPNTARGET **a2)
{
  struct DMMVIDPNTARGETMODESET *v3; // rdi
  char v4; // si
  const struct _D3DDDI_RATIONAL *v5; // r14
  struct DMMVIDPNTARGETMODESET *v6; // rbx
  const struct _D3DDDI_RATIONAL *v7; // rbp

  v3 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v4 = 1;
  v5 = (const struct _D3DDDI_RATIONAL *)*((_QWORD *)v3 + 18);
  if ( !v5 )
    WdLogSingleEntry0(1LL);
  v6 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[12]);
  v7 = (const struct _D3DDDI_RATIONAL *)*((_QWORD *)v6 + 18);
  if ( !v7 )
    WdLogSingleEntry0(1LL);
  if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(v5 + 19, v7 + 19, 0) || v5[20].Numerator != v7[20].Numerator )
    v4 = 0;
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v6 + 88));
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v3 + 88));
  return v4;
}
