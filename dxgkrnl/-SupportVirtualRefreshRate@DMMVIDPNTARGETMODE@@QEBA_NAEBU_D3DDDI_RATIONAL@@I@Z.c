/*
 * XREFs of ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C016E0C8
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C016E26C (BmlGetNextBestTargetMode.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C016E538 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C017116C (BmlCompareTargetModesWithConstraint.c)
 *     ?VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IPEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C03B1C30 (-VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTAR.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x1C03B9548 (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03B9BCC (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0002890 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1C01713B0 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 */

bool __fastcall DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
        DMMVIDPNTARGETMODE *this,
        const struct _D3DDDI_RATIONAL *a2,
        int a3)
{
  int v6; // ecx
  struct _D3DDDI_RATIONAL v7; // rbx
  __int64 Denominator; // rdx
  __int64 Numerator; // r8
  struct _D3DDDI_RATIONAL v11; // [rsp+40h] [rbp+8h]
  struct _D3DDDI_RATIONAL v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = (*((_DWORD *)this + 30) >> 3) & 0x3F;
  if ( v6 )
  {
    v11.Numerator = *(_QWORD *)((char *)this + 92);
    v11.Denominator = v6 * HIDWORD(*(_QWORD *)((char *)this + 92));
    v7 = v11;
  }
  else
  {
    v7 = *(struct _D3DDDI_RATIONAL *)((char *)this + 92);
  }
  v12 = v7;
  if ( !DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(this) )
  {
    if ( a3 == 1 )
      return DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(a2, &v12, 0);
    return 0;
  }
  Denominator = a2->Denominator;
  Numerator = a2->Numerator;
  return Numerator * (unsigned __int64)(a3 * v7.Denominator) <= Denominator * (unsigned __int64)v7.Numerator
      && Numerator * (unsigned __int64)*((unsigned int *)this + 37) >= Denominator
                                                                     * (unsigned __int64)*((unsigned int *)this + 36);
}
