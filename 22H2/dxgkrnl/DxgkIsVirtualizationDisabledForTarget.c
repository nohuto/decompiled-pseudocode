/*
 * XREFs of DxgkIsVirtualizationDisabledForTarget @ 0x1C0169720
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0135B50 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C0137450 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C013C858 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C014A364 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EF524 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C012E86C (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C012F130 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0133224 (IsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall DxgkIsVirtualizationDisabledForTarget(
        struct _LUID a1,
        __int64 a2,
        bool *a3,
        bool *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        _DWORD *a7)
{
  unsigned int v9; // esi
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGADAPTER *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  int VideoOutputTechnology; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v27[8]; // [rsp+28h] [rbp-30h] BYREF
  DXGADAPTER *v28; // [rsp+30h] [rbp-28h]
  char v29; // [rsp+38h] [rbp-20h]
  LONG HighPart; // [rsp+64h] [rbp+Ch]

  HighPart = a1.HighPart;
  v9 = a2;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, a2);
  v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v26);
  v15 = v12;
  if ( v12 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v12) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v24 + 24) = 8255LL;
      WdLogEvent5_WdAssertion(v24);
    }
    v28 = v15;
    v29 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    DXGADAPTER::ReleaseReference(v15);
    if ( *((_DWORD *)v15 + 50) == 1 )
    {
      if ( a5
        && (VideoOutputTechnology = DmmGetVideoOutputTechnology(v15, v9, a5, a6),
            v18 = VideoOutputTechnology,
            VideoOutputTechnology < 0) )
      {
        v25 = WdLogNewEntry5_WdError(v22, v21);
        *(_QWORD *)(v25 + 24) = v15;
        *(_QWORD *)(v25 + 32) = v18;
        WdLogEvent5_WdError(v25);
      }
      else
      {
        if ( a7 )
          *a7 = DmmGetTargetUsage((__int64)v15, v9, 0LL);
        LODWORD(v18) = IsVirtualizationDisabledForTarget((__int64)v15, v9, a3, a4);
      }
    }
    else
    {
      LODWORD(v18) = -1073741130;
    }
    if ( v29 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    return (unsigned int)v18;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v23 + 24) = HighPart;
    *(_QWORD *)(v23 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
}
