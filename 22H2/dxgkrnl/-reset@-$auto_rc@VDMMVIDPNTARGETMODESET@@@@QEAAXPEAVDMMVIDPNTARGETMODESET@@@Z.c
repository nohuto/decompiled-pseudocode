/*
 * XREFs of ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0007078
 * Callers:
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0001A18 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x1C000701C (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0009560 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ??_EDMMVIDPNTARGET@@UEAAPEAXI@Z @ 0x1C0009F70 (--_EDMMVIDPNTARGET@@UEAAPEAXI@Z.c)
 *     ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C001335C (-ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0015E0C (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C00697E4 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C016E078 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C016F150 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     BmlPinNextBestTargetMode @ 0x1C016F54C (BmlPinNextBestTargetMode.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C016FF6C (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C0170438 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C0170670 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0173E94 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01768D8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0178EE0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C019ADDC (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01B1330 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 *     ?ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C01D80E0 (-ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNT.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C01E19B0 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0211244 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C03ACE24 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z @ 0x1C03AE4D8 (-DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03AF3A8 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C03AF934 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C03B6D04 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03B7228 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C03B8F40 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x1C03B96B8 (-GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03B9C80 (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C03BD9D4 (BmlUnPinPartialPathModalityOnPath.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03BE48C (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall auto_rc<DMMVIDPNTARGETMODESET>::reset(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rsi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  v4 = *a1;
  if ( v4 && a2 != v4 )
  {
    v5 = v4 + 88;
    v6 = _InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
    if ( v6 )
    {
      if ( v6 < 0 )
      {
        v7 = v6;
        WdLogSingleEntry1(2LL, v6);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v9,
              v8,
              v10,
              0,
              0,
              -1,
              (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
              v7,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
    else if ( v5 )
    {
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
    }
  }
  *a1 = a2;
}
