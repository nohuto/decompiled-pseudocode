__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::FindClosestTargetMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMT_DISPLAYMODE *a2,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _D3DKMDT_VIDPN_TARGET_MODE *a6)
{
  struct _D3DKMDT_VIDPN_TARGET_MODE *v6; // rsi
  DMMVIDPNTARGETMODESET *v7; // rax
  __int64 v8; // rdx
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r9
  struct _D3DDDI_RATIONAL *v11; // r10
  DMMVIDPNTARGETMODESET *v12; // rbx
  const struct DMMVIDPNTARGETMODE *ClosestTargetMode; // rax
  int v15; // edi
  struct _D3DKMDT_VIDPN_TARGET_MODE *v16; // rbx

  v6 = a6;
  if ( a6 && this )
  {
    *(_QWORD *)&a6->Id = 0LL;
    v7 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)a2);
    v12 = v7;
    if ( !v7 )
    {
      WdLogSingleEntry1(2LL, v8);
      return 3223192329LL;
    }
    ClosestTargetMode = DMMVIDPNTARGETMODESET::FindClosestTargetMode(
                          v7,
                          v11->Numerator,
                          v11->Denominator,
                          v11[2],
                          (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)v11[3].Numerator,
                          v9,
                          v10,
                          a5);
    if ( !ClosestTargetMode )
      return 0LL;
    a6 = 0LL;
    v15 = DMMVIDPNTARGETMODESET::AcquireCachedModeInfoFromTargetMode(
            v12,
            ClosestTargetMode,
            (const struct _D3DKMDT_VIDPN_TARGET_MODE **)&a6);
    if ( v15 == -1071774902 )
    {
      WdLogSingleEntry1(3LL, v12);
      if ( a6 )
        WdLogSingleEntry0(1LL);
      return 1075708747LL;
    }
    else
    {
      if ( v15 >= 0 )
      {
        v16 = a6;
        if ( !a6 )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)&v6->Id = v16;
        return 0LL;
      }
      WdLogSingleEntry1(7LL, v12);
      return (unsigned int)v15;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    return 3221225485LL;
  }
}
