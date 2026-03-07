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
  __int64 v14; // rdx
  __int64 v15; // rcx
  char IsAdapterSessionized; // bl
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // r11
  __int64 (__fastcall *v20)(char *, UINT *, UCHAR *); // rax
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // r14
  int v24; // eax
  int v25; // eax
  __int64 v26; // rsi
  int CurrentContentResolution; // ebx
  _DWORD *v28; // rdi
  int Win32DpiValues; // eax
  __int64 v30; // rbx
  unsigned int v31; // ebx
  int v32; // eax
  int v33; // edi
  D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v34; // edi
  int v35; // eax
  unsigned __int64 v36; // rdx
  unsigned int v37; // r14d
  int v38; // eax
  __int64 (__fastcall *v39)(_QWORD, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH *); // rax
  int v40; // eax
  __int64 v41; // rdx
  unsigned int v42; // ebx
  bool v43; // si
  int VideoOutputTechnology; // eax
  int v45; // edi
  int DpiInfoFromDescriptor; // eax
  int v47; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_SCALING Scaling; // edx
  LONG v49; // eax
  int v50; // r12d
  int v51; // r14d
  int v52; // esi
  int PreferredMonitorSourceModeOnTarget; // eax
  UINT RotationSupport; // edx
  UINT cx; // ecx
  DpiInternal *v56; // rsi
  D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId; // eax
  int v58; // esi
  UINT v59; // ebx
  UINT v60; // r14d
  __int64 v61; // r12
  int v62; // edx
  int v63; // ecx
  int v64; // ecx
  int v65; // r8d
  unsigned int v66; // ecx
  int v67; // r8d
  unsigned int v68; // r9d
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v69; // r10d
  unsigned int v70; // r8d
  struct tagSIZE v71; // rdx
  bool v72; // si
  char v73; // cl
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *p_RotationSupport; // r9
  unsigned __int8 v75; // al
  unsigned int v76; // r14d
  char v77; // r12
  int v78; // eax
  unsigned __int8 PreferredScaleFactorForMonitor; // al
  unsigned int v80; // ebx
  struct tagSIZE v81; // rdx
  struct tagSIZE v82; // rdx
  int v83; // eax
  int v84; // r8d
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  __int64 v91; // rbx
  NTSTATUS v92; // esi
  unsigned int *v93; // r8
  __m128i v94; // xmm1
  int v95; // ecx
  unsigned int v96; // eax
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rax
  __int128 v98; // xmm1
  __int128 v99; // xmm0
  int CurrentProcessSessionId; // eax
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rbx
  __int64 v105; // rbx
  __int64 v106; // rbx
  int PhysicalDisplaySizeOverride; // eax
  struct tagSIZE v108; // rcx
  UINT v109; // eax
  int v110; // eax
  unsigned __int32 v111; // r8d
  unsigned int v112; // ecx
  unsigned __int32 v113; // eax
  bool v114; // zf
  bool v115; // zf
  __int64 v116; // r8
  __int64 v117; // rdi
  __int64 v118; // r14
  int v119; // edx
  int v120; // eax
  __int64 v121; // rdx
  int v122; // eax
  __int64 v123; // rcx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v124; // r9
  struct _D3DKMDT_2DREGION *v125; // [rsp+20h] [rbp-E0h]
  unsigned int v126; // [rsp+20h] [rbp-E0h]
  char v127; // [rsp+50h] [rbp-B0h]
  struct _D3DKMDT_2DREGION v128; // [rsp+54h] [rbp-ACh] BYREF
  bool v129; // [rsp+5Ch] [rbp-A4h]
  bool v130; // [rsp+5Dh] [rbp-A3h] BYREF
  int v131; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v132; // [rsp+64h] [rbp-9Ch]
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY VidPnSourceId; // [rsp+68h] [rbp-98h] BYREF
  struct tagSIZE v134; // [rsp+70h] [rbp-90h] BYREF
  D3DKMDT_VIDPN_PRESENT_PATH_SCALING cy; // [rsp+78h] [rbp-88h]
  unsigned int v136; // [rsp+7Ch] [rbp-84h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v137; // [rsp+80h] [rbp-80h] BYREF
  __int128 v138; // [rsp+1E8h] [rbp+E8h]
  struct tagSIZE v139[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int128 v140; // [rsp+208h] [rbp+108h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v141; // [rsp+220h] [rbp+120h] BYREF
  __int64 v142; // [rsp+280h] [rbp+180h] BYREF
  int v143; // [rsp+288h] [rbp+188h]
  _OWORD v144[6]; // [rsp+290h] [rbp+190h] BYREF
  unsigned __int16 v145[128]; // [rsp+2F0h] [rbp+1F0h] BYREF

  *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[140] = a6;
  v9 = a3;
  v137.GammaRamp.Data.pRgb256x3x16 = a7;
  *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[48] = a4;
  *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[28] = a3;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current || (IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current), v13 = 1, !IsRemoteConnection) )
    v13 = 0;
  v127 = v13;
  v136 = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)a2, v11, &v136, 0LL);
  if ( v19 != IsAdapterSessionized )
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
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15, v14, v17, v18);
    if ( v136 != CurrentProcessSessionId )
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
  v20 = (__int64 (__fastcall *)(char *, UINT *, UCHAR *))*((_QWORD *)a1 + 6);
  *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[60] = 0LL;
  memset(&v137.VidPnTargetColorCoeffDynamicRanges.ThirdChannel, 0, 28);
  LOBYTE(v137.VidPnTargetColorCoeffDynamicRanges.FirstChannel) = 0;
  *(_QWORD *)&v137.VisibleFromActiveBROffset.cy = 0LL;
  v21 = v20(a2, &v137.VisibleFromActiveBROffset.cy, &v137.CopyProtection.OEMCopyProtection[60]);
  v22 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
      (__int64)a2,
      v22,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v22;
  }
  DXGDMM::AutoRelease<D3DKMDT_HVIDPN__ *,long (*)(void *,D3DKMDT_HVIDPN__ *),void *>::Own(
    (__int64)&v137.VidPnTargetColorCoeffDynamicRanges,
    *(__int64 *)&v137.VisibleFromActiveBROffset.cy,
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v23 = *(_QWORD *)&v137.VidPnTargetColorCoeffDynamicRanges.ThirdChannel;
  *(_QWORD *)&v137.ContentTransformation.ScalingSupport = 0LL;
  *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[36] = 0LL;
  v24 = (**(__int64 (__fastcall ***)(_QWORD, D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *, UCHAR *))&v137.CopyProtection.OEMCopyProtection[60])(
          *(_QWORD *)&v137.VidPnTargetColorCoeffDynamicRanges.ThirdChannel,
          &v137.ContentTransformation.ScalingSupport,
          &v137.CopyProtection.OEMCopyProtection[36]);
  v22 = v24;
  if ( v24 < 0 )
  {
    WdLogSingleEntry2(2LL, v23, v24);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire topology for VidPN 0x%I64x (status = 0x%I64x)",
      v23,
      v22,
      0LL,
      0LL,
      0LL);
    if ( LOBYTE(v137.VidPnTargetColorCoeffDynamicRanges.FirstChannel) )
      (*(void (__fastcall **)(_QWORD, __int64))&v137.Content)(*(_QWORD *)&v137.CopyProtection.APSTriggerBits, v23);
    return (unsigned int)v22;
  }
  *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[124] = 0LL;
  v25 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, UCHAR *))&v137.CopyProtection.OEMCopyProtection[36])(
          *(_QWORD *)&v137.ContentTransformation.ScalingSupport,
          (unsigned int)v9,
          &v137.CopyProtection.OEMCopyProtection[124]);
  v26 = v25;
  if ( v25 < 0 )
  {
    WdLogSingleEntry3(2LL, v9, *(_QWORD *)&v137.ContentTransformation.ScalingSupport, v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
      v9,
      *(__int64 *)&v137.ContentTransformation.ScalingSupport,
      v26,
      0LL,
      0LL);
    if ( LOBYTE(v137.VidPnTargetColorCoeffDynamicRanges.FirstChannel) )
    {
      v102 = v23;
      goto LABEL_117;
    }
    return (unsigned int)v26;
  }
  else
  {
    *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[116] = 0LL;
    v136 = 0;
    *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[12] = 0LL;
    CurrentContentResolution = GetCurrentContentResolution(
                                 a2,
                                 v9,
                                 (const struct tagRECT **)&v137.CopyProtection.OEMCopyProtection[116],
                                 (struct tagRECT *)&v137.CopyProtection.OEMCopyProtection[12],
                                 &v136);
    if ( CurrentContentResolution < 0 )
    {
      if ( LOBYTE(v137.VidPnTargetColorCoeffDynamicRanges.FirstChannel) )
      {
        v103 = v23;
LABEL_121:
        (*(void (__fastcall **)(_QWORD, __int64))&v137.Content)(*(_QWORD *)&v137.CopyProtection.APSTriggerBits, v103);
      }
      return (unsigned int)CurrentContentResolution;
    }
    else
    {
      v28 = *(_DWORD **)&v137.CopyProtection.OEMCopyProtection[116];
      if ( !*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[116] )
      {
        WdLogSingleEntry1(1LL, 1706LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContentRect != NULL", 1706LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v28[2] - *v28 <= 0 || v28[3] - v28[1] <= 0 )
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
      v137.ImportanceOrdinal = D3DKMDT_VPPI_UNINITIALIZED;
      *(_OWORD *)&v139[0].cx = 0LL;
      v140 = 0LL;
      Win32DpiValues = QueryWin32DpiValues(
                         (unsigned int *)&v137.ImportanceOrdinal,
                         (struct _DPI_SCALE_FACTOR_COLLECTION *)v139);
      v30 = Win32DpiValues;
      if ( Win32DpiValues < 0 )
      {
        WdLogSingleEntry1(1LL, 1715LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(ntStatus)", 1715LL, 0LL, 0LL, 0LL, 0LL);
        WdLogSingleEntry1(2LL, v30);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Could not retrieve Win8StyleOverride and/or ScaleFactorCollection from Win32. (0x%I64x)",
          v30,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v31 = 0;
      *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[56] = 0;
      memset(&v137.CopyProtection.OEMCopyProtection[164], 0, 0x5CuLL);
      if ( *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[124] > 1uLL || (v32 = 0, v136 > 1) )
        v32 = 1;
      if ( *v28 || (v114 = v28[1] == 0, v33 = 32, !v114) )
        v33 = 0;
      v34 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(v32 | v33);
      v35 = dword_1C013B3E4;
      v36 = 0LL;
      v137.CopyProtection.CopyProtectionSupport = v34;
      if ( *(unsigned int *)&v34 >= 0x20 )
        v35 = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[48];
      dword_1C013B3E4 = v35;
      *(_QWORD *)&v137.VisibleFromActiveBROffset.cy = 0LL;
      v138 = *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[228];
      if ( *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[124] )
      {
        v37 = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[28];
        *(_OWORD *)&v137.GammaRamp.Type = *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[180];
        while ( 1 )
        {
          v128.cx = -1;
          v129 = 0;
          v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, struct _D3DKMDT_2DREGION *))(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[36] + 8LL))(
                  *(_QWORD *)&v137.ContentTransformation.ScalingSupport,
                  v37,
                  v36,
                  &v128);
          v26 = v38;
          if ( v38 < 0 )
          {
            v116 = v37;
            v117 = v37;
            v118 = *(_QWORD *)&v137.VisibleFromActiveBROffset.cy;
            WdLogSingleEntry3(2LL, *(_QWORD *)&v137.VisibleFromActiveBROffset.cy, v116, v38);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)",
              v118,
              v117,
              v26,
              0LL,
              0LL);
            v115 = LOBYTE(v137.VidPnTargetColorCoeffDynamicRanges.FirstChannel) == 0;
LABEL_186:
            if ( v115 )
              return (unsigned int)v26;
            v102 = *(_QWORD *)&v137.VidPnTargetColorCoeffDynamicRanges.ThirdChannel;
LABEL_117:
            (*(void (__fastcall **)(_QWORD, __int64))&v137.Content)(
              *(_QWORD *)&v137.CopyProtection.APSTriggerBits,
              v102);
            return (unsigned int)v26;
          }
          *(_QWORD *)&v137.VidPnSourceId = 0LL;
          v39 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH *))(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[36] + 24LL);
          memset(&v137.CopyProtection.OEMCopyProtection[84], 0, 28);
          v137.CopyProtection.OEMCopyProtection[76] = 0;
          v40 = v39(*(_QWORD *)&v137.ContentTransformation.ScalingSupport, v37, v128.cx, &v137);
          v26 = v40;
          if ( v40 < 0 )
          {
            WdLogSingleEntry3(2LL, v37, v128.cx, v40);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to acquire info of path (0x%I64x, 0x%I64x) (status = 0x%I64x)",
              v37,
              v128.cx,
              v26,
              0LL,
              0LL);
            v115 = LOBYTE(v137.VidPnTargetColorCoeffDynamicRanges.FirstChannel) == 0;
            goto LABEL_186;
          }
          v41 = *(_QWORD *)&v137.VidPnSourceId;
          if ( !*(_QWORD *)&v137.VidPnSourceId )
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
            v41 = *(_QWORD *)&v137.VidPnSourceId;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
            (__int64)&v137.CopyProtection.OEMCopyProtection[76],
            v41,
            *(_QWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[36] + 32LL),
            *(__int64 *)&v137.ContentTransformation.ScalingSupport);
          v132 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[84]
                                                            + 20LL));
          BYTE2(v128.cy) = 0;
          v42 = v132;
          VidPnSourceId = D3DKMDT_VOT_UNINITIALIZED;
          v43 = 0;
          VideoOutputTechnology = DmmGetVideoOutputTechnology(a2, v128.cx, &VidPnSourceId, 0LL);
          if ( VideoOutputTechnology < 0 )
          {
            v104 = VideoOutputTechnology;
            WdLogSingleEntry3(2LL, a2, v128.cx, VideoOutputTechnology);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get video output technology from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
              (__int64)a2,
              v128.cx,
              v104,
              0LL,
              0LL);
            v42 = v132;
          }
          else
          {
            v43 = IsInternalVideoOutput(VidPnSourceId);
            BYTE2(v128.cy) = v43;
          }
          *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[132] = v43;
          v134 = 0LL;
          *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[52] = 0;
          BYTE1(v128.cy) = 0;
          v130 = 0;
          v142 = 0LL;
          v143 = 0;
          *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[44] = 0;
          v137.ContentTransformation.Scaling = D3DKMDT_VPPS_UNINITIALIZED;
          v45 = (*(_BYTE *)&v34 ^ (unsigned __int8)(*(_BYTE *)&v34 | (4 * v43))) & 4 ^ *(_DWORD *)&v34;
          DpiInfoFromDescriptor = MonitorGetDpiInfoFromDescriptor(
                                    (__int64)a2,
                                    v128.cx,
                                    (struct DISPLAY_PREFERRED_MODE_INFO *)&v142,
                                    (unsigned int *)&v137.CopyProtection.OEMCopyProtection[44],
                                    (unsigned int *)&v137.ContentTransformation,
                                    (bool *)&v128.cy + 1,
                                    &v130);
          if ( DpiInfoFromDescriptor < 0 )
            break;
          if ( !BYTE1(v128.cy) )
          {
            v105 = DpiInfoFromDescriptor;
            WdLogSingleEntry3(2LL, a2, v128.cx, DpiInfoFromDescriptor);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get preferred mode from monitor EDID or DisplayID on adapter 0x%I64x, target 0x%I64x (s"
                        "tatus = 0x%I64x)",
              (__int64)a2,
              v128.cx,
              v105,
              0LL,
              0LL);
            v42 = v132;
          }
          v47 = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[44];
          Scaling = v137.ContentTransformation.Scaling;
          v131 = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[44];
          v134.cx = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[44];
          cy = v137.ContentTransformation.Scaling;
          v134.cy = v137.ContentTransformation.Scaling;
          if ( ((v42 - 2) & 0xFFFFFFFD) == 0 )
          {
            Scaling = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[44];
            cy = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[44];
            v134.cy = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[44];
            v47 = v137.ContentTransformation.Scaling;
            v131 = v137.ContentTransformation.Scaling;
            v134.cx = v137.ContentTransformation.Scaling;
          }
          if ( !v47 || Scaling == D3DKMDT_VPPS_UNINITIALIZED )
            goto LABEL_37;
          if ( v47 * Scaling <= 16000 && !v43 )
          {
            v45 |= 0x40u;
            *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[52] = 1;
LABEL_37:
            v49 = 0;
            v47 = 0;
            v134.cy = 0;
            v134.cx = 0;
LABEL_38:
            cy = v49;
            v131 = v47;
          }
          if ( !v47 )
            v129 = (a2[436] & 0x20) != 0;
          v50 = HIDWORD(v142);
          v51 = v142;
          *(_QWORD *)&v137.ContentTransformation.RotationSupport = 0LL;
          v52 = HIDWORD(v142);
          *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[68] = v142;
          memset(&v141, 0, sizeof(v141));
          LOBYTE(v128.cy) = 0;
          PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(a2, v128.cx, &v141);
          if ( PreferredMonitorSourceModeOnTarget < 0 )
          {
            v106 = PreferredMonitorSourceModeOnTarget;
            WdLogSingleEntry3(2LL, a2, v128.cx, PreferredMonitorSourceModeOnTarget);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get preferred monitor source mode from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
              (__int64)a2,
              v128.cx,
              v106,
              0LL,
              0LL);
            cx = v137.VisibleFromActiveTLOffset.cx;
            RotationSupport = (UINT)v137.ContentTransformation.RotationSupport;
            v42 = v132;
          }
          else
          {
            RotationSupport = v141.VideoSignalInfo.ActiveSize.cx;
            cx = v141.VideoSignalInfo.ActiveSize.cy;
            v137.ContentTransformation.RotationSupport = (D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT)v141.VideoSignalInfo.ActiveSize.cx;
            v137.VisibleFromActiveTLOffset.cx = v141.VideoSignalInfo.ActiveSize.cy;
            LOBYTE(v128.cy) = 1;
          }
          if ( ((v42 - 2) & 0xFFFFFFFD) == 0
            && (*(_DWORD *)&v137.CopyProtection.OEMCopyProtection[72] = v51,
                v50 = v51,
                *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[68] = v52,
                v51 = v52,
                v42 == 2)
            || v42 == 4 )
          {
            v137.ContentTransformation.RotationSupport = (D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT)cx;
            v137.VisibleFromActiveTLOffset.cx = RotationSupport;
          }
          v56 = *(DpiInternal **)&v137.VidPnTargetColorCoeffDynamicRanges.ThirdChannel;
          *(_QWORD *)&v137.VisibleFromActiveTLOffset.cy = 0LL;
          CurrentContentResolution = DpiInternal::GetCurrentSourceResolution(
                                       *(DpiInternal **)&v137.VidPnTargetColorCoeffDynamicRanges.ThirdChannel,
                                       *(struct D3DKMDT_HVIDPN__ *const *)&v137.CopyProtection.OEMCopyProtection[60],
                                       *(const struct _DXGDMM_VIDPN_INTERFACE **)&v137.CopyProtection.OEMCopyProtection[84],
                                       (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v137.VisibleFromActiveTLOffset.cy);
          if ( CurrentContentResolution < 0 )
          {
            if ( v137.CopyProtection.OEMCopyProtection[76] )
              (*(void (__fastcall **)(_QWORD, _QWORD))&v137.CopyProtection.OEMCopyProtection[92])(
                *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[100],
                *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[84]);
            v114 = LOBYTE(v137.VidPnTargetColorCoeffDynamicRanges.FirstChannel) == 0;
            goto LABEL_182;
          }
          *(_QWORD *)&v137.VidPnSourceId = 0LL;
          HIBYTE(v128.cy) = 0;
          CurrentContentResolution = DpiInternal::GetCurrentTargetResolution(
                                       v56,
                                       *(struct D3DKMDT_HVIDPN__ *const *)&v137.CopyProtection.OEMCopyProtection[60],
                                       *(const struct _DXGDMM_VIDPN_INTERFACE **)&v137.CopyProtection.OEMCopyProtection[84],
                                       &v137,
                                       (struct _D3DKMDT_2DREGION *)((char *)&v128.cy + 3));
          if ( CurrentContentResolution < 0 )
          {
            if ( v137.CopyProtection.OEMCopyProtection[76] )
              (*(void (__fastcall **)(_QWORD, _QWORD))&v137.CopyProtection.OEMCopyProtection[92])(
                *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[100],
                *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[84]);
            v114 = LOBYTE(v137.VidPnTargetColorCoeffDynamicRanges.FirstChannel) == 0;
LABEL_182:
            if ( v114 )
              return (unsigned int)CurrentContentResolution;
            v103 = (__int64)v56;
            goto LABEL_121;
          }
          VidPnTargetId = v137.VidPnTargetId;
          if ( ((v132 - 2) & 0xFFFFFFFD) != 0 )
          {
            VidPnSourceId = v137.VidPnTargetId;
            VidPnTargetId = v137.VidPnSourceId;
          }
          else
          {
            VidPnSourceId = v137.VidPnSourceId;
          }
          v132 = VidPnTargetId;
          if ( *((_DWORD *)a2 + 108) == 4 )
          {
            *(_QWORD *)&v137.VidPnSourceId = 0LL;
            PhysicalDisplaySizeOverride = GetPhysicalDisplaySizeOverride((struct tagSIZE *)&v137);
            v108 = v134;
            if ( PhysicalDisplaySizeOverride >= 0 )
              v108 = *(struct tagSIZE *)&v137.VidPnSourceId;
            v134 = v108;
            v58 = v108.cx;
            cy = v108.cy;
          }
          else
          {
            v58 = v131;
          }
          if ( (v45 & 1) != 0 && v136 <= 1 && v51 && v50 )
          {
            v59 = v137.VisibleFromActiveBROffset.cx;
            if ( HIBYTE(v128.cy) )
              v59 = v137.VisibleFromActiveBROffset.cx >> 1;
            v109 = 2 * v51;
            v60 = v137.VisibleFromActiveTLOffset.cy;
            if ( v137.VisibleFromActiveTLOffset.cy >= v109 || (v110 = 0, v59 >= 2 * v50) )
              v110 = 2;
            v45 ^= (v45 ^ (v45 | v110)) & 2;
            if ( HIBYTE(v128.cy) )
              v59 *= 2;
          }
          else
          {
            v59 = v137.VisibleFromActiveBROffset.cx;
            v60 = v137.VisibleFromActiveTLOffset.cy;
          }
          memset(v144, 0, sizeof(v144));
          v61 = *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[84];
          DWORD1(v144[5]) = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[48];
          v62 = *(_DWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[84] + 20LL);
          if ( v62 >= 5 )
          {
            if ( v62 > 16 )
              goto LABEL_56;
            v62 = (v62 - 1) % 4 + 1;
          }
          if ( v62 != 2 && v62 != 4 )
          {
LABEL_56:
            v63 = 0;
            goto LABEL_57;
          }
          v63 = 128;
LABEL_57:
          v34 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(v63 | v45 & 0xFFFFFF7F);
          v137.CopyProtection.CopyProtectionSupport = v34;
          v64 = *(_DWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[116] + 8LL)
              - **(_DWORD **)&v137.CopyProtection.OEMCopyProtection[116];
          LODWORD(v144[2]) = v64;
          v65 = *(_DWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[116] + 12LL)
              - *(_DWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[116] + 4LL);
          DWORD1(v144[2]) = v65;
          if ( ((v62 - 2) & 0xFFFFFFFD) == 0 )
            *(_QWORD *)&v144[2] = __PAIR64__(v64, v65);
          switch ( *(_DWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[84] + 12LL) )
          {
            case 1:
            case 2:
              goto LABEL_60;
            case 3:
              v68 = v132;
              v69 = VidPnSourceId;
              v66 = v132
                  * (*(_DWORD *)&v137.CopyProtection.OEMCopyProtection[20]
                   - *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[12])
                  / v60;
              v113 = VidPnSourceId
                   * (*(_DWORD *)&v137.CopyProtection.OEMCopyProtection[24]
                    - *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[16]);
LABEL_163:
              v67 = v113 / v59;
              goto LABEL_61;
            case 4:
              v69 = VidPnSourceId;
              v68 = v132;
              if ( v59 * v132 <= v60 * VidPnSourceId )
              {
                v112 = v132;
                v111 = v59 * v132 / v60;
              }
              else
              {
                v111 = VidPnSourceId;
                v112 = v60 * VidPnSourceId / v59;
              }
              v66 = v112
                  * (*(_DWORD *)&v137.CopyProtection.OEMCopyProtection[20]
                   - *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[12])
                  / v60;
              v113 = v111
                   * (*(_DWORD *)&v137.CopyProtection.OEMCopyProtection[24]
                    - *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[16]);
              goto LABEL_163;
            case 5:
              goto LABEL_157;
          }
          if ( *(_DWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[84] + 12LL) != 255 )
          {
            WdLogSingleEntry1(1LL, *(int *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[84] + 12LL));
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Invalid scaling %I64d",
              *(int *)(v61 + 12),
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_157:
            v34 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(*(_DWORD *)&v34 | 0x100);
            v137.CopyProtection.CopyProtectionSupport = v34;
          }
LABEL_60:
          v66 = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[20]
              - *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[12];
          v67 = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[24]
              - *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[16];
          v68 = v132;
          v69 = VidPnSourceId;
LABEL_61:
          v70 = cy * v67;
          DWORD2(v144[1]) = v58 * v66 / v68;
          v71 = (struct tagSIZE)(v70 % v69);
          HIDWORD(v144[1]) = v70 / v69;
          if ( (*(_BYTE *)&v34 & 2) != 0 || (LOBYTE(v71.cx) = 0, !LOBYTE(v128.cy)) )
            LOBYTE(v71.cx) = 1;
          v72 = v129;
          if ( v129 || *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[52] || !v130 )
            goto LABEL_165;
          v73 = v128.cy;
          if ( LOBYTE(v71.cx) )
            v73 = BYTE1(v128.cy);
          if ( !v73 )
          {
LABEL_165:
            LODWORD(v144[4]) = 0;
          }
          else
          {
            p_RotationSupport = &v137.ContentTransformation.RotationSupport;
            if ( LOBYTE(v71.cx) )
              p_RotationSupport = (D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)&v137.CopyProtection.OEMCopyProtection[68];
            v34 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(*(_DWORD *)&v34 & 0xFFFFFFEF | (16 * (unsigned __int8)DetermineViewDistance(a2, &v134, *(int *)&v137.CopyProtection.OEMCopyProtection[132], (const struct tagSIZE *)p_RotationSupport, (unsigned int *)&v144[4])));
            v137.CopyProtection.CopyProtectionSupport = v34;
            if ( !LODWORD(v144[4]) )
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
          v75 = v127;
          v76 = 0;
          v131 = 0;
          if ( v127 && v137.ImportanceOrdinal )
          {
            v77 = BYTE2(v128.cy);
          }
          else
          {
            v77 = BYTE2(v128.cy);
            if ( BYTE2(v128.cy)
              && (int)DpiReadPnpRegistryValue(*((_QWORD *)a2 + 27), L"PreferredScaleFactor", &v131, 4LL, 2) >= 0 )
            {
              v76 = v131;
              v78 = 4096;
            }
            else
            {
              v131 = 0;
              v78 = 0;
            }
            v34 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(v78 | *(_DWORD *)&v34 & 0xFFFFEFFF);
            v137.CopyProtection.CopyProtectionSupport = v34;
            if ( (*(_WORD *)&v34 & 0x1000) == 0 )
            {
              PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                                 (DpiInternal *)a2,
                                                 (void *const)v128.cx,
                                                 (*(unsigned int *)&v34 >> 5) & 1,
                                                 &v131);
              v76 = v131;
              v80 = *(_DWORD *)&v34 & 0xFFFFF7FF;
              v34 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(*(_DWORD *)&v34 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11));
              v137.CopyProtection.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(v80 | (PreferredScaleFactorForMonitor << 11));
            }
            v75 = v127;
          }
          if ( v72 && v77 && !v76 )
          {
            DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
              *(DpiInternal **)&v144[2],
              v71,
              (__int64)v139,
              (const struct _DPI_SCALE_FACTOR_COLLECTION *)v144);
            LODWORD(v125) = 0;
            DpiInternal::FillOverridesAndAdjustedScaleFactor(
              (DpiInternal *)(unsigned int)v137.ImportanceOrdinal,
              0,
              (int *)v139,
              (const struct _DPI_SCALE_FACTOR_COLLECTION *)v144,
              (struct _DPI_INFORMATION *)v125);
            v34 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)(*(_DWORD *)&v34 | 0x400);
            v137.CopyProtection.CopyProtectionSupport = v34;
          }
          else
          {
            LODWORD(v125) = v137.ImportanceOrdinal;
            FillDpiInfo(
              (const struct tagSIZE *)&v144[1] + 1,
              (struct tagSIZE *)&v144[2],
              v139,
              v144[4],
              (DpiInternal *)v125,
              v76,
              v75,
              (struct _DPI_INFORMATION *)v144);
          }
          if ( HIDWORD(v144[5]) )
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
          HIDWORD(v144[5]) = v34;
          if ( v77
            || (*(_BYTE *)&v34 & 4) == 0
            && (DpiInternal::AvgXY(*(DpiInternal **)&v137.CopyProtection.OEMCopyProtection[220], v81),
                v83 = DpiInternal::AvgXY(*((DpiInternal **)&v144[3] + 1), v82),
                v84 <= v83) )
          {
            *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[164] = v144[0];
            *(_OWORD *)&v137.GammaRamp.Type = v144[1];
            *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[196] = v144[2];
            v138 = v144[4];
            *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[244] = v144[5];
            v34 = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)HIDWORD(v144[5]);
            *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[212] = v144[3];
          }
          memset(v145, 0, sizeof(v145));
          v85 = v128.cx;
          v90 = WdLogNewEntry5_WdTrace(v87, v86, v88, v89);
          *(_QWORD *)(v90 + 24) = v85;
          *(_QWORD *)(v90 + 32) = a2;
          if ( (_DWORD)v85 == -1 )
          {
            v92 = -1073741811;
            goto LABEL_175;
          }
          MONITOR_MGR::AcquireMonitorShared(
            (struct DXGMONITOR **)&v137.CopyProtection.OEMCopyProtection[148],
            (__int64)a2,
            v85);
          v91 = *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[148];
          if ( !*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[148] )
          {
            WdLogSingleEntry1(2LL, -1073741632LL);
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v137.CopyProtection.OEMCopyProtection[148]);
            v92 = -1073741632;
LABEL_175:
            WdLogSingleEntry3(2LL, a2, v128.cx, v92);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"MonitorGetMonitorDeviceInterfaceName failed for adapter: 0x%I64x, target: 0x%I64x, with status: 0x%I64x",
              (__int64)a2,
              v128.cx,
              v92,
              0LL,
              0LL);
            v145[0] = 0;
            goto LABEL_93;
          }
          v92 = RtlStringCchCopyUnicodeString(
                  (char *)v145,
                  128LL,
                  (const struct _UNICODE_STRING *)(*(_QWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[148]
                                                             + 200LL)
                                                 + 48LL));
          if ( v92 >= 0 )
            v145[1] = 92;
          ExReleaseResourceLite((PERESOURCE)(v91 + 24));
          KeLeaveCriticalRegion();
          if ( v92 < 0 )
            goto LABEL_175;
          ScaleOverrideTestHook(
            (DpiInternal *)v145,
            (const unsigned __int16 *)&v137.CopyProtection.OEMCopyProtection[56],
            v93);
LABEL_93:
          v126 = v76;
          v37 = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[28];
          TraceLogDpiInfo(
            (struct _DPI_INFORMATION *)v144,
            v145,
            (const struct _LUID *)(a2 + 404),
            *(unsigned int *)&v137.CopyProtection.OEMCopyProtection[28],
            v126);
          LogScaleFactor(
            *(struct _LUID *)(a2 + 404),
            v37,
            (unsigned int)v137.ImportanceOrdinal,
            (struct _DPI_INFORMATION *)v144);
          if ( v137.CopyProtection.OEMCopyProtection[76] )
            (*(void (__fastcall **)(_QWORD, _QWORD))&v137.CopyProtection.OEMCopyProtection[92])(
              *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[100],
              *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[84]);
          v36 = *(_QWORD *)&v137.VisibleFromActiveBROffset.cy + 1LL;
          *(_QWORD *)&v137.VisibleFromActiveBROffset.cy = v36;
          if ( v36 >= *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[124] )
          {
            v31 = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[56];
            v94 = *(__m128i *)&v137.GammaRamp.Type;
            v23 = *(_QWORD *)&v137.VidPnTargetColorCoeffDynamicRanges.ThirdChannel;
            goto LABEL_97;
          }
        }
        v45 |= 8u;
        *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[196] = *(_DWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[140]
                                                                           + 16LL);
        v47 = v134.cx;
        *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[200] = *(_DWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[140]
                                                                           + 20LL);
        v49 = v134.cy;
        goto LABEL_38;
      }
      v94 = *(__m128i *)&v137.CopyProtection.OEMCopyProtection[180];
      *(_OWORD *)&v137.GammaRamp.Type = *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[180];
LABEL_97:
      v95 = _mm_cvtsi128_si32(_mm_srli_si128(v94, 8));
      if ( v95 )
      {
        v119 = _mm_cvtsi128_si32(_mm_srli_si128(v94, 12));
        if ( v119 )
        {
          if ( *(_BYTE *)&v34 >= 0 )
          {
            v122 = 1000 * v95;
            v123 = *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[140];
            *(_DWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[140] + 8LL) = v122;
            *(_DWORD *)(v123 + 12) = 1000 * v119;
          }
          else
          {
            v120 = 1000 * v119;
            v121 = *(_QWORD *)&v137.CopyProtection.OEMCopyProtection[140];
            *(_DWORD *)(*(_QWORD *)&v137.CopyProtection.OEMCopyProtection[140] + 8LL) = v120;
            *(_DWORD *)(v121 + 12) = 1000 * v95;
          }
        }
      }
      if ( (*(_BYTE *)&v34 & 2) == 0
        || (v124 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                                _mm_srli_si128(
                                                                                  _mm_load_si128((const __m128i *)&v137.CopyProtection.OEMCopyProtection[244]),
                                                                                  4)),
            (_DWORD)v124 == 1234568) )
      {
        v96 = *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[172];
      }
      else
      {
        v96 = DpiInternal::AdjustDesktopScaleFactorForOverride(
                (DpiInternal *)0x64,
                *(int *)&v137.CopyProtection.OEMCopyProtection[196],
                (struct tagSIZE)v139,
                v124,
                0);
        *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[172] = v96;
      }
      if ( v31 )
      {
        v96 = v31;
        *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[172] = v31;
        *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[248] = 1234567;
      }
      if ( !v96 )
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
      pRgb256x3x16 = v137.GammaRamp.Data.pRgb256x3x16;
      v98 = *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[212];
      *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[164] = 100;
      *(_DWORD *)&v137.CopyProtection.OEMCopyProtection[168] = 100;
      *(_OWORD *)v137.GammaRamp.Data.pRgb256x3x16 = *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[164];
      *(_OWORD *)&pRgb256x3x16->Red[8] = *(_OWORD *)&v137.GammaRamp.Type;
      *(_OWORD *)&pRgb256x3x16->Red[16] = *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[196];
      v99 = v138;
      *(_OWORD *)&pRgb256x3x16->Red[24] = v98;
      *(_OWORD *)&pRgb256x3x16->Red[32] = v99;
      *(_OWORD *)&pRgb256x3x16->Red[40] = *(_OWORD *)&v137.CopyProtection.OEMCopyProtection[244];
      if ( LOBYTE(v137.VidPnTargetColorCoeffDynamicRanges.FirstChannel) )
        (*(void (__fastcall **)(_QWORD, __int64))&v137.Content)(*(_QWORD *)&v137.CopyProtection.APSTriggerBits, v23);
      return 0LL;
    }
  }
}
