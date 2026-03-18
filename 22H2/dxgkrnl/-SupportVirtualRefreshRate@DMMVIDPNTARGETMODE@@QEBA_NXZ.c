/*
 * XREFs of ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1C01735E4
 * Callers:
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C0173444 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01734B8 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESE.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C01762D4 (BmlCompareTargetModesWithConstraint.c)
 *     BmlGetNextBestTargetMode @ 0x1C0177670 (BmlGetNextBestTargetMode.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0206E40 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x1C03BDE08 (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03BE48C (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EE4 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014680 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

bool __fastcall DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(DMMVIDPNTARGETMODE *this)
{
  __int64 v3; // rbx
  __int64 v4; // rbx

  if ( !*((_BYTE *)this + 140) )
    return 0;
  if ( !*((_QWORD *)this + 5) )
    WdLogSingleEntry0(1LL);
  v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 112LL);
  if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(v3 + 96) + 80LL)) )
    return 1;
  if ( !*(_QWORD *)(v3 + 40) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v3 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v4 + 8) )
    WdLogSingleEntry0(1LL);
  return *(_DWORD *)(*(_QWORD *)(v4 + 8) + 528LL) != 0;
}
