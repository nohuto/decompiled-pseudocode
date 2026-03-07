__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::IsCompatibleWithMonitorMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *a3,
        char *a4)
{
  char v4; // bl

  v4 = 0;
  if ( this && a4 )
  {
    if ( *((_DWORD *)this + 5) == a2->VideoSignalInfo.ActiveSize.cx
      && *((_DWORD *)this + 6) == a2->VideoSignalInfo.ActiveSize.cy
      && ((_BYTE)a3
       || DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
            (const struct _D3DDDI_RATIONAL *)((char *)this + 28),
            &a2->VideoSignalInfo.VSyncFreq,
            50)) )
    {
      v4 = 1;
    }
    *a4 = v4;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    return 3221225485LL;
  }
}
