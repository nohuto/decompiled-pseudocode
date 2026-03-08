/*
 * XREFs of DxgkIsVirtualizationDisabledForTarget @ 0x1C01D9870
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C01821A4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01ADBC0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C478C (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C03BD220 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C01B05BC (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B0684 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C01D9994 (IsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall DxgkIsVirtualizationDisabledForTarget(
        struct _LUID a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a7,
        _DWORD *a8)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v13; // rax
  DXGADAPTER *v14; // rdi
  int VideoOutputTechnology; // eax
  __int64 v16; // rsi
  unsigned __int64 v18; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v19[8]; // [rsp+58h] [rbp-40h] BYREF
  DXGADAPTER *v20; // [rsp+60h] [rbp-38h]
  char v21; // [rsp+68h] [rbp-30h]
  LONG HighPart; // [rsp+A4h] [rbp+Ch]

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal();
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v18);
  v14 = v13;
  if ( v13 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v13) )
    {
      WdLogSingleEntry1(1LL, 8655LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!pAdapterIn->IsCoreResourceSharedOwner()",
        8655LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v20 = v14;
    v21 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
    DXGADAPTER::ReleaseReference(v14);
    if ( *((_DWORD *)v14 + 50) == 1 )
    {
      if ( a6
        && (VideoOutputTechnology = DmmGetVideoOutputTechnology(v14, a2, a6, a7),
            v16 = VideoOutputTechnology,
            VideoOutputTechnology < 0) )
      {
        WdLogSingleEntry2(2LL, v14, VideoOutputTechnology);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to find output technology type for adapter 0x%I64x with status 0x%I64x",
          (__int64)v14,
          v16,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        if ( a8 )
          *a8 = DmmGetTargetUsage((__int64)v14, a2, 0LL);
        LODWORD(v16) = IsVirtualizationDisabledForTarget((_DWORD)v14, a2, a3, a4, a5);
      }
    }
    else
    {
      LODWORD(v16) = -1073741130;
    }
    if ( v21 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
    return (unsigned int)v16;
  }
  else
  {
    WdLogSingleEntry2(2LL, HighPart, a1.LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkIsVirtualModeDisabledForPath function.",
      HighPart,
      a1.LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
