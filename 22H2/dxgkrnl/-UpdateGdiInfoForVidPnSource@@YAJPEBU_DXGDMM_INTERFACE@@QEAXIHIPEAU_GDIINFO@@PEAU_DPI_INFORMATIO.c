/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01DAF30
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C01DABA0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EE4 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00049B8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ @ 0x1C00071EC (--1-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000882C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A660 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0013A90 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C0013C00 (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C0013C1C (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0013C40 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0013DA4 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@@Q6AJPEAX0@Z1@Z @ 0x1C0013E1C (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x1C0013F84 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x1C0014034 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C0015228 (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C004CC68 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01863EC (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C019E0C4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C01DB968 (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C01DB9FC (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C01DBABC (MonitorGetDpiInfoFromDescriptor.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C01DBC70 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C01DBD84 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C01DBEAC (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C01DBF78 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C01DBFF8 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C01DC0A8 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C01FFF2C (DpiReadPnpRegistryValue.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C0302B58 (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        struct _GDIINFO *a6,
        D3DDDI_GAMMA_RAMP_RGB256x3x16 *a7)
{
  __int64 v9; // r15
  DXGPROCESS *Current; // rax
  struct _LUID *v11; // rdx
  bool IsRemoteConnection; // al
  char v13; // r11
  __int64 v14; // rcx
  char IsAdapterSessionized; // bl
  char v16; // r11
  __int64 (__fastcall *v17)(char *, UINT *, UCHAR *); // rax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // r14
  int v21; // eax
  int v22; // eax
  __int64 v23; // rsi
  int CurrentContentResolution; // ebx
  _DWORD *v25; // rdi
  int Win32DpiValues; // eax
  __int64 v27; // rbx
  unsigned int v28; // ebx
  int v29; // eax
  int v30; // edi
  D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v31; // edi
  int v32; // eax
  unsigned __int64 v33; // rdx
  unsigned int v34; // r14d
  int v35; // eax
  __int64 (__fastcall *v36)(_QWORD, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH *); // rax
  int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // ebx
  bool v40; // si
  int VideoOutputTechnology; // eax
  int v42; // edi
  int DpiInfoFromDescriptor; // eax
  int v44; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_SCALING Scaling; // edx
  LONG v46; // eax
  int v47; // r12d
  int v48; // r14d
  int v49; // esi
  int PreferredMonitorSourceModeOnTarget; // eax
  UINT RotationSupport; // edx
  UINT cx; // ecx
  DpiInternal *v53; // rsi
  D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId; // eax
  int v55; // esi
  UINT v56; // ebx
  UINT v57; // r14d
  __int64 v58; // r12
  int v59; // edx
  int v60; // ecx
  int v61; // ecx
  int v62; // r8d
  unsigned int v63; // ecx
  int v64; // r8d
  unsigned int v65; // r9d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v66; // r10d
  unsigned int v67; // r8d
  struct tagSIZE v68; // rdx
  bool v69; // si
  char v70; // cl
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *p_RotationSupport; // r9
  unsigned __int8 v72; // al
  unsigned int v73; // r14d
  char v74; // r12
  int v75; // eax
  bool PreferredScaleFactorForMonitor; // al
  unsigned int v77; // ebx
  struct tagSIZE v78; // rdx
  struct tagSIZE v79; // rdx
  int v80; // eax
  int v81; // r8d
  __int64 v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rbx
  NTSTATUS v89; // esi
  unsigned int *v90; // r8
  __m128i v91; // xmm1
  int v92; // ecx
  unsigned int v93; // eax
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rax
  __int128 v95; // xmm1
  __int128 v96; // xmm0
  int CurrentProcessSessionId; // eax
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rbx
  __int64 v102; // rbx
  __int64 v103; // rbx
  int PhysicalDisplaySizeOverride; // eax
  struct tagSIZE v105; // rcx
  UINT v106; // eax
  int v107; // eax
  unsigned __int32 v108; // r8d
  unsigned int v109; // ecx
  unsigned __int32 v110; // eax
  bool v111; // zf
  bool v112; // zf
  __int64 v113; // r8
  __int64 v114; // rdi
  __int64 v115; // r14
  int v116; // edx
  int v117; // eax
  __int64 v118; // rdx
  int v119; // eax
  __int64 v120; // rcx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v121; // r9
  struct _D3DKMDT_2DREGION *p_ContentTransformation; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v123; // [rsp+20h] [rbp-E0h]
  unsigned int v124; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v125; // [rsp+28h] [rbp-D8h]
  char v126; // [rsp+50h] [rbp-B0h]
  struct _D3DKMDT_2DREGION v127; // [rsp+54h] [rbp-ACh] BYREF
  bool v128; // [rsp+5Ch] [rbp-A4h]
  char v129; // [rsp+5Dh] [rbp-A3h]
  int v130; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v131; // [rsp+64h] [rbp-9Ch]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY VidPnSourceId; // [rsp+68h] [rbp-98h] BYREF
  struct tagSIZE v133; // [rsp+70h] [rbp-90h] BYREF
  D3DKMDT_VIDPN_PRESENT_PATH_SCALING cy; // [rsp+78h] [rbp-88h]
  unsigned int v135; // [rsp+7Ch] [rbp-84h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v136; // [rsp+80h] [rbp-80h] BYREF
  __int128 v137; // [rsp+1E8h] [rbp+E8h]
  _OWORD v138[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v139; // [rsp+220h] [rbp+120h] BYREF
  __int64 v140; // [rsp+280h] [rbp+180h] BYREF
  int v141; // [rsp+288h] [rbp+188h]
  _OWORD v142[6]; // [rsp+290h] [rbp+190h] BYREF
  unsigned __int16 v143[128]; // [rsp+2F0h] [rbp+1F0h] BYREF

  *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[140] = a6;
  v9 = a3;
  v136.GammaRamp.Data.pRgb256x3x16 = a7;
  *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[48] = a4;
  *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[28] = a3;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current || (IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current), v13 = 1, !IsRemoteConnection) )
    v13 = 0;
  v126 = v13;
  v135 = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)a2, v11, &v135, 0LL);
  if ( v16 != IsAdapterSessionized )
  {
    WdLogSingleEntry1(1LL, 1648LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsRemote == IsAdapterSessionized",
      1648LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( IsAdapterSessionized )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
    if ( v135 != CurrentProcessSessionId )
    {
      WdLogSingleEntry1(1LL, 1649LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!IsAdapterSessionized || (TargetSession == PsGetCurrentProcessSessionId())",
        1649LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v17 = (__int64 (__fastcall *)(char *, UINT *, UCHAR *))*((_QWORD *)a1 + 6);
  *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[60] = 0LL;
  memset(&v136.VidPnTargetColorCoeffDynamicRanges.ThirdChannel, 0, 28);
  LOBYTE(v136.VidPnTargetColorCoeffDynamicRanges.FirstChannel) = 0;
  *(_QWORD *)&v136.VisibleFromActiveBROffset.cy = 0LL;
  v18 = v17(a2, &v136.VisibleFromActiveBROffset.cy, &v136.CopyProtection.OEMCopyProtection[60]);
  v19 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
      (__int64)a2,
      v19,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v19;
  }
  DXGDMM::AutoRelease<D3DKMDT_HVIDPN__ *,long (*)(void *,D3DKMDT_HVIDPN__ *),void *>::Own(
    (__int64)&v136.VidPnTargetColorCoeffDynamicRanges,
    *(__int64 *)&v136.VisibleFromActiveBROffset.cy,
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v20 = *(_QWORD *)&v136.VidPnTargetColorCoeffDynamicRanges.ThirdChannel;
  *(_QWORD *)&v136.ContentTransformation.ScalingSupport = 0LL;
  *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[36] = 0LL;
  v21 = (**(__int64 (__fastcall ***)(_QWORD, D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *, UCHAR *))&v136.CopyProtection.OEMCopyProtection[60])(
          *(_QWORD *)&v136.VidPnTargetColorCoeffDynamicRanges.ThirdChannel,
          &v136.ContentTransformation.ScalingSupport,
          &v136.CopyProtection.OEMCopyProtection[36]);
  v19 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry2(2LL, v20, v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire topology for VidPN 0x%I64x (status = 0x%I64x)",
      v20,
      v19,
      0LL,
      0LL,
      0LL);
    if ( LOBYTE(v136.VidPnTargetColorCoeffDynamicRanges.FirstChannel) )
      (*(void (__fastcall **)(_QWORD, __int64))&v136.Content)(*(_QWORD *)&v136.CopyProtection.APSTriggerBits, v20);
    return (unsigned int)v19;
  }
  *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[124] = 0LL;
  v22 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, UCHAR *))&v136.CopyProtection.OEMCopyProtection[36])(
          *(_QWORD *)&v136.ContentTransformation.ScalingSupport,
          (unsigned int)v9,
          &v136.CopyProtection.OEMCopyProtection[124]);
  v23 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry3(2LL, v9, *(_QWORD *)&v136.ContentTransformation.ScalingSupport, v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
      v9,
      *(__int64 *)&v136.ContentTransformation.ScalingSupport,
      v23,
      0LL,
      0LL);
    if ( LOBYTE(v136.VidPnTargetColorCoeffDynamicRanges.FirstChannel) )
    {
      v99 = v20;
      goto LABEL_117;
    }
    return (unsigned int)v23;
  }
  else
  {
    *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[116] = 0LL;
    v135 = 0;
    *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[12] = 0LL;
    CurrentContentResolution = GetCurrentContentResolution(
                                 a2,
                                 v9,
                                 (const struct tagRECT **)&v136.CopyProtection.OEMCopyProtection[116],
                                 (struct tagRECT *)&v136.CopyProtection.OEMCopyProtection[12],
                                 &v135);
    if ( CurrentContentResolution < 0 )
    {
      if ( LOBYTE(v136.VidPnTargetColorCoeffDynamicRanges.FirstChannel) )
      {
        v100 = v20;
LABEL_121:
        (*(void (__fastcall **)(_QWORD, __int64))&v136.Content)(*(_QWORD *)&v136.CopyProtection.APSTriggerBits, v100);
      }
      return (unsigned int)CurrentContentResolution;
    }
    else
    {
      v25 = *(_DWORD **)&v136.CopyProtection.OEMCopyProtection[116];
      if ( !*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[116] )
      {
        WdLogSingleEntry1(1LL, 1706LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContentRect != NULL", 1706LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v25[2] - *v25 <= 0 || v25[3] - v25[1] <= 0 )
      {
        WdLogSingleEntry1(1LL, 1709LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pContentRect->right - pContentRect->left > 0) && (pContentRect->bottom - pContentRect->top > 0)",
          1709LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v136.ImportanceOrdinal = D3DKMDT_VPPI_UNINITIALIZED;
      memset(v138, 0, sizeof(v138));
      Win32DpiValues = QueryWin32DpiValues(
                         (unsigned int *)&v136.ImportanceOrdinal,
                         (struct _DPI_SCALE_FACTOR_COLLECTION *)v138);
      v27 = Win32DpiValues;
      if ( Win32DpiValues < 0 )
      {
        WdLogSingleEntry1(1LL, 1715LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(ntStatus)", 1715LL, 0LL, 0LL, 0LL, 0LL);
        WdLogSingleEntry1(2LL, v27);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Could not retrieve Win8StyleOverride and/or ScaleFactorCollection from Win32. (0x%I64x)",
          v27,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v28 = 0;
      *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[56] = 0;
      memset(&v136.CopyProtection.OEMCopyProtection[164], 0, 0x5CuLL);
      if ( *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[124] > 1uLL || (v29 = 0, v135 > 1) )
        v29 = 1;
      if ( *v25 || (v111 = v25[1] == 0, v30 = 32, !v111) )
        v30 = 0;
      v31 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(v29 | v30);
      v32 = dword_1C01403E4;
      v33 = 0LL;
      v136.CopyProtection.CopyProtectionSupport = v31;
      if ( *(unsigned int *)&v31 >= 0x20 )
        v32 = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[48];
      dword_1C01403E4 = v32;
      *(_QWORD *)&v136.VisibleFromActiveBROffset.cy = 0LL;
      v137 = *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[228];
      if ( *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[124] )
      {
        v34 = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[28];
        *(_OWORD *)&v136.GammaRamp.Type = *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[180];
        while ( 1 )
        {
          v127.cx = -1;
          v128 = 0;
          v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, struct _D3DKMDT_2DREGION *))(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[36] + 8LL))(
                  *(_QWORD *)&v136.ContentTransformation.ScalingSupport,
                  v34,
                  v33,
                  &v127);
          v23 = v35;
          if ( v35 < 0 )
          {
            v113 = v34;
            v114 = v34;
            v115 = *(_QWORD *)&v136.VisibleFromActiveBROffset.cy;
            WdLogSingleEntry3(2LL, *(_QWORD *)&v136.VisibleFromActiveBROffset.cy, v113, v35);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)",
              v115,
              v114,
              v23,
              0LL,
              0LL);
            v112 = LOBYTE(v136.VidPnTargetColorCoeffDynamicRanges.FirstChannel) == 0;
LABEL_186:
            if ( v112 )
              return (unsigned int)v23;
            v99 = *(_QWORD *)&v136.VidPnTargetColorCoeffDynamicRanges.ThirdChannel;
LABEL_117:
            (*(void (__fastcall **)(_QWORD, __int64))&v136.Content)(*(_QWORD *)&v136.CopyProtection.APSTriggerBits, v99);
            return (unsigned int)v23;
          }
          *(_QWORD *)&v136.VidPnSourceId = 0LL;
          v36 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH *))(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[36] + 24LL);
          memset(&v136.CopyProtection.OEMCopyProtection[84], 0, 28);
          v136.CopyProtection.OEMCopyProtection[76] = 0;
          v37 = v36(*(_QWORD *)&v136.ContentTransformation.ScalingSupport, v34, v127.cx, &v136);
          v23 = v37;
          if ( v37 < 0 )
          {
            WdLogSingleEntry3(2LL, v34, v127.cx, v37);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to acquire info of path (0x%I64x, 0x%I64x) (status = 0x%I64x)",
              v34,
              v127.cx,
              v23,
              0LL,
              0LL);
            v112 = LOBYTE(v136.VidPnTargetColorCoeffDynamicRanges.FirstChannel) == 0;
            goto LABEL_186;
          }
          v38 = *(_QWORD *)&v136.VidPnSourceId;
          if ( !*(_QWORD *)&v136.VidPnSourceId )
          {
            WdLogSingleEntry1(1LL, 1779LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pVidPnPresentPathInfo != NULL",
              1779LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v38 = *(_QWORD *)&v136.VidPnSourceId;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
            (__int64)&v136.CopyProtection.OEMCopyProtection[76],
            v38,
            *(_QWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[36] + 32LL),
            *(__int64 *)&v136.ContentTransformation.ScalingSupport);
          v131 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[84]
                                                            + 20LL));
          BYTE2(v127.cy) = 0;
          v39 = v131;
          VidPnSourceId = D3DKMDT_VOT_UNINITIALIZED;
          v40 = 0;
          VideoOutputTechnology = DmmGetVideoOutputTechnology(a2, v127.cx, &VidPnSourceId, 0LL);
          if ( VideoOutputTechnology < 0 )
          {
            v101 = VideoOutputTechnology;
            WdLogSingleEntry3(2LL, a2, v127.cx, VideoOutputTechnology);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get video output technology from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
              (__int64)a2,
              v127.cx,
              v101,
              0LL,
              0LL);
            v39 = v131;
          }
          else
          {
            v40 = IsInternalVideoOutput(VidPnSourceId);
            BYTE2(v127.cy) = v40;
          }
          *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[132] = v40;
          v133 = 0LL;
          *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[52] = 0;
          BYTE1(v127.cy) = 0;
          v129 = 0;
          v140 = 0LL;
          v141 = 0;
          *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[44] = 0;
          v136.ContentTransformation.Scaling = D3DKMDT_VPPS_UNINITIALIZED;
          v42 = (*(_BYTE *)&v31 ^ (unsigned __int8)(*(_BYTE *)&v31 | (4 * v40))) & 4 ^ *(_DWORD *)&v31;
          v125 = (unsigned __int8 *)&v127.cy + 1;
          p_ContentTransformation = (struct _D3DKMDT_2DREGION *)&v136.ContentTransformation;
          DpiInfoFromDescriptor = MonitorGetDpiInfoFromDescriptor(a2, v127.cx, &v140);
          if ( DpiInfoFromDescriptor < 0 )
            break;
          if ( !BYTE1(v127.cy) )
          {
            v102 = DpiInfoFromDescriptor;
            WdLogSingleEntry3(2LL, a2, v127.cx, DpiInfoFromDescriptor);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get preferred mode from monitor EDID or DisplayID on adapter 0x%I64x, target 0x%I64x (s"
                        "tatus = 0x%I64x)",
              (__int64)a2,
              v127.cx,
              v102,
              0LL,
              0LL);
            v39 = v131;
          }
          v44 = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[44];
          Scaling = v136.ContentTransformation.Scaling;
          v130 = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[44];
          v133.cx = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[44];
          cy = v136.ContentTransformation.Scaling;
          v133.cy = v136.ContentTransformation.Scaling;
          if ( ((v39 - 2) & 0xFFFFFFFD) == 0 )
          {
            Scaling = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[44];
            cy = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[44];
            v133.cy = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[44];
            v44 = v136.ContentTransformation.Scaling;
            v130 = v136.ContentTransformation.Scaling;
            v133.cx = v136.ContentTransformation.Scaling;
          }
          if ( !v44 || Scaling == D3DKMDT_VPPS_UNINITIALIZED )
            goto LABEL_37;
          if ( v44 * Scaling <= 16000 && !v40 )
          {
            v42 |= 0x40u;
            *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[52] = 1;
LABEL_37:
            v46 = 0;
            v44 = 0;
            v133.cy = 0;
            v133.cx = 0;
LABEL_38:
            cy = v46;
            v130 = v44;
          }
          if ( !v44 )
            v128 = (a2[436] & 0x20) != 0;
          v47 = HIDWORD(v140);
          v48 = v140;
          *(_QWORD *)&v136.ContentTransformation.RotationSupport = 0LL;
          v49 = HIDWORD(v140);
          *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[68] = v140;
          memset(&v139, 0, sizeof(v139));
          LOBYTE(v127.cy) = 0;
          PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(
                                                 (DXGADAPTER *)a2,
                                                 v127.cx,
                                                 &v139);
          if ( PreferredMonitorSourceModeOnTarget < 0 )
          {
            v103 = PreferredMonitorSourceModeOnTarget;
            WdLogSingleEntry3(2LL, a2, v127.cx, PreferredMonitorSourceModeOnTarget);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get preferred monitor source mode from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
              (__int64)a2,
              v127.cx,
              v103,
              0LL,
              0LL);
            cx = v136.VisibleFromActiveTLOffset.cx;
            RotationSupport = (UINT)v136.ContentTransformation.RotationSupport;
            v39 = v131;
          }
          else
          {
            RotationSupport = v139.VideoSignalInfo.ActiveSize.cx;
            cx = v139.VideoSignalInfo.ActiveSize.cy;
            v136.ContentTransformation.RotationSupport = (D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT)v139.VideoSignalInfo.ActiveSize.cx;
            v136.VisibleFromActiveTLOffset.cx = v139.VideoSignalInfo.ActiveSize.cy;
            LOBYTE(v127.cy) = 1;
          }
          if ( ((v39 - 2) & 0xFFFFFFFD) == 0
            && (*(_DWORD *)&v136.CopyProtection.OEMCopyProtection[72] = v48,
                v47 = v48,
                *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[68] = v49,
                v48 = v49,
                v39 == 2)
            || v39 == 4 )
          {
            v136.ContentTransformation.RotationSupport = (D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT)cx;
            v136.VisibleFromActiveTLOffset.cx = RotationSupport;
          }
          v53 = *(DpiInternal **)&v136.VidPnTargetColorCoeffDynamicRanges.ThirdChannel;
          *(_QWORD *)&v136.VisibleFromActiveTLOffset.cy = 0LL;
          CurrentContentResolution = DpiInternal::GetCurrentSourceResolution(
                                       *(DpiInternal **)&v136.VidPnTargetColorCoeffDynamicRanges.ThirdChannel,
                                       *(struct D3DKMDT_HVIDPN__ *const *)&v136.CopyProtection.OEMCopyProtection[60],
                                       *(const struct _DXGDMM_VIDPN_INTERFACE **)&v136.CopyProtection.OEMCopyProtection[84],
                                       (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v136.VisibleFromActiveTLOffset.cy,
                                       p_ContentTransformation);
          if ( CurrentContentResolution < 0 )
          {
            if ( v136.CopyProtection.OEMCopyProtection[76] )
              (*(void (__fastcall **)(_QWORD, _QWORD))&v136.CopyProtection.OEMCopyProtection[92])(
                *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[100],
                *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[84]);
            v111 = LOBYTE(v136.VidPnTargetColorCoeffDynamicRanges.FirstChannel) == 0;
            goto LABEL_182;
          }
          *(_QWORD *)&v136.VidPnSourceId = 0LL;
          HIBYTE(v127.cy) = 0;
          CurrentContentResolution = DpiInternal::GetCurrentTargetResolution(
                                       v53,
                                       *(struct D3DKMDT_HVIDPN__ *const *)&v136.CopyProtection.OEMCopyProtection[60],
                                       *(const struct _DXGDMM_VIDPN_INTERFACE **)&v136.CopyProtection.OEMCopyProtection[84],
                                       &v136,
                                       (struct _D3DKMDT_2DREGION *)((char *)&v127.cy + 3),
                                       v125);
          if ( CurrentContentResolution < 0 )
          {
            if ( v136.CopyProtection.OEMCopyProtection[76] )
              (*(void (__fastcall **)(_QWORD, _QWORD))&v136.CopyProtection.OEMCopyProtection[92])(
                *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[100],
                *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[84]);
            v111 = LOBYTE(v136.VidPnTargetColorCoeffDynamicRanges.FirstChannel) == 0;
LABEL_182:
            if ( v111 )
              return (unsigned int)CurrentContentResolution;
            v100 = (__int64)v53;
            goto LABEL_121;
          }
          VidPnTargetId = v136.VidPnTargetId;
          if ( ((v131 - 2) & 0xFFFFFFFD) != 0 )
          {
            VidPnSourceId = v136.VidPnTargetId;
            VidPnTargetId = v136.VidPnSourceId;
          }
          else
          {
            VidPnSourceId = v136.VidPnSourceId;
          }
          v131 = VidPnTargetId;
          if ( *((_DWORD *)a2 + 108) == 4 )
          {
            *(_QWORD *)&v136.VidPnSourceId = 0LL;
            PhysicalDisplaySizeOverride = GetPhysicalDisplaySizeOverride((struct tagSIZE *)&v136);
            v105 = v133;
            if ( PhysicalDisplaySizeOverride >= 0 )
              v105 = *(struct tagSIZE *)&v136.VidPnSourceId;
            v133 = v105;
            v55 = v105.cx;
            cy = v105.cy;
          }
          else
          {
            v55 = v130;
          }
          if ( (v42 & 1) != 0 && v135 <= 1 && v48 && v47 )
          {
            v56 = v136.VisibleFromActiveBROffset.cx;
            if ( HIBYTE(v127.cy) )
              v56 = v136.VisibleFromActiveBROffset.cx >> 1;
            v106 = 2 * v48;
            v57 = v136.VisibleFromActiveTLOffset.cy;
            if ( v136.VisibleFromActiveTLOffset.cy >= v106 || (v107 = 0, v56 >= 2 * v47) )
              v107 = 2;
            v42 ^= (v42 ^ (v42 | v107)) & 2;
            if ( HIBYTE(v127.cy) )
              v56 *= 2;
          }
          else
          {
            v56 = v136.VisibleFromActiveBROffset.cx;
            v57 = v136.VisibleFromActiveTLOffset.cy;
          }
          memset(v142, 0, sizeof(v142));
          v58 = *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[84];
          DWORD1(v142[5]) = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[48];
          v59 = *(_DWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[84] + 20LL);
          if ( v59 >= 5 )
          {
            if ( v59 > 16 )
              goto LABEL_56;
            v59 = (v59 - 1) % 4 + 1;
          }
          if ( v59 != 2 && v59 != 4 )
          {
LABEL_56:
            v60 = 0;
            goto LABEL_57;
          }
          v60 = 128;
LABEL_57:
          v31 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(v60 | v42 & 0xFFFFFF7F);
          v136.CopyProtection.CopyProtectionSupport = v31;
          v61 = *(_DWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[116] + 8LL)
              - **(_DWORD **)&v136.CopyProtection.OEMCopyProtection[116];
          LODWORD(v142[2]) = v61;
          v62 = *(_DWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[116] + 12LL)
              - *(_DWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[116] + 4LL);
          DWORD1(v142[2]) = v62;
          if ( ((v59 - 2) & 0xFFFFFFFD) == 0 )
            *(_QWORD *)&v142[2] = __PAIR64__(v61, v62);
          switch ( *(_DWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[84] + 12LL) )
          {
            case 1:
            case 2:
              goto LABEL_60;
            case 3:
              v65 = v131;
              v66 = VidPnSourceId;
              v63 = v131
                  * (*(_DWORD *)&v136.CopyProtection.OEMCopyProtection[20]
                   - *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[12])
                  / v57;
              v110 = VidPnSourceId
                   * (*(_DWORD *)&v136.CopyProtection.OEMCopyProtection[24]
                    - *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[16]);
LABEL_163:
              v64 = v110 / v56;
              goto LABEL_61;
            case 4:
              v66 = VidPnSourceId;
              v65 = v131;
              if ( v56 * v131 <= v57 * VidPnSourceId )
              {
                v109 = v131;
                v108 = v56 * v131 / v57;
              }
              else
              {
                v108 = VidPnSourceId;
                v109 = v57 * VidPnSourceId / v56;
              }
              v63 = v109
                  * (*(_DWORD *)&v136.CopyProtection.OEMCopyProtection[20]
                   - *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[12])
                  / v57;
              v110 = v108
                   * (*(_DWORD *)&v136.CopyProtection.OEMCopyProtection[24]
                    - *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[16]);
              goto LABEL_163;
            case 5:
              goto LABEL_157;
          }
          if ( *(_DWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[84] + 12LL) != 255 )
          {
            WdLogSingleEntry1(1LL, *(int *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[84] + 12LL));
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Invalid scaling %I64d",
              *(int *)(v58 + 12),
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_157:
            v31 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(*(_DWORD *)&v31 | 0x100);
            v136.CopyProtection.CopyProtectionSupport = v31;
          }
LABEL_60:
          v63 = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[20]
              - *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[12];
          v64 = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[24]
              - *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[16];
          v65 = v131;
          v66 = VidPnSourceId;
LABEL_61:
          v67 = cy * v64;
          DWORD2(v142[1]) = v55 * v63 / v65;
          v68 = (struct tagSIZE)(v67 % v66);
          HIDWORD(v142[1]) = v67 / v66;
          if ( (*(_BYTE *)&v31 & 2) != 0 || (LOBYTE(v68.cx) = 0, !LOBYTE(v127.cy)) )
            LOBYTE(v68.cx) = 1;
          v69 = v128;
          if ( v128 || *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[52] || !v129 )
            goto LABEL_165;
          v70 = v127.cy;
          if ( LOBYTE(v68.cx) )
            v70 = BYTE1(v127.cy);
          if ( !v70 )
          {
LABEL_165:
            LODWORD(v142[4]) = 0;
          }
          else
          {
            p_RotationSupport = &v136.ContentTransformation.RotationSupport;
            if ( LOBYTE(v68.cx) )
              p_RotationSupport = (D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)&v136.CopyProtection.OEMCopyProtection[68];
            v31 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(*(_DWORD *)&v31 & 0xFFFFFFEF | (16 * DetermineViewDistance(a2, &v133, *(int *)&v136.CopyProtection.OEMCopyProtection[132], (const struct tagSIZE *)p_RotationSupport, (unsigned int *)&v142[4])));
            v136.CopyProtection.CopyProtectionSupport = v31;
            if ( !LODWORD(v142[4]) )
            {
              WdLogSingleEntry1(1LL, 2047LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"CurrentDpiInfo.ViewDistTenthsOfInch != 0",
                2047LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          v72 = v126;
          v73 = 0;
          v130 = 0;
          if ( v126 && v136.ImportanceOrdinal )
          {
            v74 = BYTE2(v127.cy);
          }
          else
          {
            v74 = BYTE2(v127.cy);
            if ( BYTE2(v127.cy)
              && (LODWORD(v123) = 2,
                  (int)DpiReadPnpRegistryValue(*((_QWORD *)a2 + 27), L"PreferredScaleFactor", &v130, 4LL) >= 0) )
            {
              v73 = v130;
              v75 = 4096;
            }
            else
            {
              v130 = 0;
              v75 = 0;
            }
            v31 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(v75 | *(_DWORD *)&v31 & 0xFFFFEFFF);
            v136.CopyProtection.CopyProtectionSupport = v31;
            if ( (*(_WORD *)&v31 & 0x1000) == 0 )
            {
              PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                                 (DpiInternal *)a2,
                                                 (void *const)v127.cx,
                                                 (*(unsigned int *)&v31 >> 5) & 1,
                                                 (int)&v130,
                                                 (unsigned int *)v123);
              v73 = v130;
              v77 = *(_DWORD *)&v31 & 0xFFFFF7FF;
              v31 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(*(_DWORD *)&v31 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11));
              v136.CopyProtection.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(v77 | (PreferredScaleFactorForMonitor << 11));
            }
            v72 = v126;
          }
          if ( v69 && v74 && !v73 )
          {
            DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
              *(DpiInternal **)&v142[2],
              v68,
              (__int64)v138,
              (const struct _DPI_SCALE_FACTOR_COLLECTION *)v142);
            LODWORD(v123) = 0;
            DpiInternal::FillOverridesAndAdjustedScaleFactor(
              (DpiInternal *)(unsigned int)v136.ImportanceOrdinal,
              0,
              (int *)v138,
              (const struct _DPI_SCALE_FACTOR_COLLECTION *)v142,
              (struct _DPI_INFORMATION *)v123);
            v31 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(*(_DWORD *)&v31 | 0x400);
            v136.CopyProtection.CopyProtectionSupport = v31;
          }
          else
          {
            LODWORD(v123) = v136.ImportanceOrdinal;
            FillDpiInfo(
              (const struct tagSIZE *)&v142[1] + 1,
              (struct tagSIZE *)&v142[2],
              (const struct tagSIZE *)v138,
              v142[4],
              (DpiInternal *)v123,
              v73,
              v72,
              (struct _DPI_INFORMATION *)v142);
          }
          if ( HIDWORD(v142[5]) )
          {
            WdLogSingleEntry1(1LL, 2093LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"CurrentDpiInfo.FlagsUnion.AllFlags == 0",
              2093LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          HIDWORD(v142[5]) = v31;
          if ( v74
            || (*(_BYTE *)&v31 & 4) == 0
            && (DpiInternal::AvgXY(*(DpiInternal **)&v136.CopyProtection.OEMCopyProtection[220], v78),
                v80 = DpiInternal::AvgXY(*((DpiInternal **)&v142[3] + 1), v79),
                v81 <= v80) )
          {
            *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[164] = v142[0];
            *(_OWORD *)&v136.GammaRamp.Type = v142[1];
            *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[196] = v142[2];
            v137 = v142[4];
            *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[244] = v142[5];
            v31 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)HIDWORD(v142[5]);
            *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[212] = v142[3];
          }
          memset(v143, 0, sizeof(v143));
          v82 = v127.cx;
          v87 = WdLogNewEntry5_WdTrace(v84, v83, v85, v86);
          *(_QWORD *)(v87 + 24) = v82;
          *(_QWORD *)(v87 + 32) = a2;
          if ( (_DWORD)v82 == -1 )
          {
            v89 = -1073741811;
            goto LABEL_175;
          }
          MONITOR_MGR::AcquireMonitorShared(
            (struct DXGMONITOR **)&v136.CopyProtection.OEMCopyProtection[148],
            (__int64)a2,
            v82);
          v88 = *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[148];
          if ( !*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[148] )
          {
            WdLogSingleEntry1(2LL, -1073741632LL);
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v136.CopyProtection.OEMCopyProtection[148]);
            v89 = -1073741632;
LABEL_175:
            WdLogSingleEntry3(2LL, a2, v127.cx, v89);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"MonitorGetMonitorDeviceInterfaceName failed for adapter: 0x%I64x, target: 0x%I64x, with status: 0x%I64x",
              (__int64)a2,
              v127.cx,
              v89,
              0LL,
              0LL);
            v143[0] = 0;
            goto LABEL_93;
          }
          v89 = RtlStringCchCopyUnicodeString(
                  (char *)v143,
                  128LL,
                  (const struct _UNICODE_STRING *)(*(_QWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[148]
                                                             + 200LL)
                                                 + 48LL));
          if ( v89 >= 0 )
            v143[1] = 92;
          ExReleaseResourceLite((PERESOURCE)(v88 + 24));
          KeLeaveCriticalRegion();
          if ( v89 < 0 )
            goto LABEL_175;
          ScaleOverrideTestHook(
            (DpiInternal *)v143,
            (unsigned __int16 *)&v136.CopyProtection.OEMCopyProtection[56],
            v90);
LABEL_93:
          v124 = v73;
          v34 = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[28];
          TraceLogDpiInfo(
            (struct _DPI_INFORMATION *)v142,
            v143,
            (const struct _LUID *)(a2 + 404),
            *(unsigned int *)&v136.CopyProtection.OEMCopyProtection[28],
            v124);
          LogScaleFactor(*(struct _LUID *)(a2 + 404), v34, v136.ImportanceOrdinal, (struct _DPI_INFORMATION *)v142);
          if ( v136.CopyProtection.OEMCopyProtection[76] )
            (*(void (__fastcall **)(_QWORD, _QWORD))&v136.CopyProtection.OEMCopyProtection[92])(
              *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[100],
              *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[84]);
          v33 = *(_QWORD *)&v136.VisibleFromActiveBROffset.cy + 1LL;
          *(_QWORD *)&v136.VisibleFromActiveBROffset.cy = v33;
          if ( v33 >= *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[124] )
          {
            v28 = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[56];
            v91 = *(__m128i *)&v136.GammaRamp.Type;
            v20 = *(_QWORD *)&v136.VidPnTargetColorCoeffDynamicRanges.ThirdChannel;
            goto LABEL_97;
          }
        }
        v42 |= 8u;
        *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[196] = *(_DWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[140]
                                                                           + 16LL);
        v44 = v133.cx;
        *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[200] = *(_DWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[140]
                                                                           + 20LL);
        v46 = v133.cy;
        goto LABEL_38;
      }
      v91 = *(__m128i *)&v136.CopyProtection.OEMCopyProtection[180];
      *(_OWORD *)&v136.GammaRamp.Type = *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[180];
LABEL_97:
      v92 = _mm_cvtsi128_si32(_mm_srli_si128(v91, 8));
      if ( v92 )
      {
        v116 = _mm_cvtsi128_si32(_mm_srli_si128(v91, 12));
        if ( v116 )
        {
          if ( *(_BYTE *)&v31 >= 0 )
          {
            v119 = 1000 * v92;
            v120 = *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[140];
            *(_DWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[140] + 8LL) = v119;
            *(_DWORD *)(v120 + 12) = 1000 * v116;
          }
          else
          {
            v117 = 1000 * v116;
            v118 = *(_QWORD *)&v136.CopyProtection.OEMCopyProtection[140];
            *(_DWORD *)(*(_QWORD *)&v136.CopyProtection.OEMCopyProtection[140] + 8LL) = v117;
            *(_DWORD *)(v118 + 12) = 1000 * v92;
          }
        }
      }
      if ( (*(_BYTE *)&v31 & 2) == 0
        || (v121 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                                _mm_srli_si128(
                                                                                  _mm_load_si128((const __m128i *)&v136.CopyProtection.OEMCopyProtection[244]),
                                                                                  4)),
            (_DWORD)v121 == 1234568) )
      {
        v93 = *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[172];
      }
      else
      {
        v93 = DpiInternal::AdjustDesktopScaleFactorForOverride(
                (DpiInternal *)0x64,
                *(int *)&v136.CopyProtection.OEMCopyProtection[196],
                (struct tagSIZE)v138,
                v121,
                0);
        *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[172] = v93;
      }
      if ( v28 )
      {
        v93 = v28;
        *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[172] = v28;
        *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[248] = 1234567;
      }
      if ( !v93 )
      {
        WdLogSingleEntry1(1LL, 2161LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"DpiInfo.DesktopScaleFactor != DESKTOP_SCALE_INVALID",
          2161LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      pRgb256x3x16 = v136.GammaRamp.Data.pRgb256x3x16;
      v95 = *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[212];
      *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[164] = 100;
      *(_DWORD *)&v136.CopyProtection.OEMCopyProtection[168] = 100;
      *(_OWORD *)v136.GammaRamp.Data.pRgb256x3x16 = *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[164];
      *(_OWORD *)&pRgb256x3x16->Red[8] = *(_OWORD *)&v136.GammaRamp.Type;
      *(_OWORD *)&pRgb256x3x16->Red[16] = *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[196];
      v96 = v137;
      *(_OWORD *)&pRgb256x3x16->Red[24] = v95;
      *(_OWORD *)&pRgb256x3x16->Red[32] = v96;
      *(_OWORD *)&pRgb256x3x16->Red[40] = *(_OWORD *)&v136.CopyProtection.OEMCopyProtection[244];
      if ( LOBYTE(v136.VidPnTargetColorCoeffDynamicRanges.FirstChannel) )
        (*(void (__fastcall **)(_QWORD, __int64))&v136.Content)(*(_QWORD *)&v136.CopyProtection.APSTriggerBits, v20);
      return 0LL;
    }
  }
}
