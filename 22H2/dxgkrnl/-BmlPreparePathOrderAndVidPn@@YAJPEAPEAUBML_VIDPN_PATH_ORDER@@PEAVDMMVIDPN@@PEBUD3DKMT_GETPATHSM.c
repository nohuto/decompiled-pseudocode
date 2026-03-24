/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0146674
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C0142488 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C02ECC08 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009724 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000983C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000B924 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000C3A4 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000C3EC (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C000C464 (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C001A0FC (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0043D78 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z @ 0x1C005DC7C (-D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z.c)
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C005DCA4 (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C011E08C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C012E69C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C012EC80 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0133DF8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C013E304 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     BmlFillPreferredMonitorMode @ 0x1C0143668 (BmlFillPreferredMonitorMode.c)
 *     BmlGetNextBestTargetMode @ 0x1C01445E8 (BmlGetNextBestTargetMode.c)
 *     BmlIsSecondaryClonePath @ 0x1C0146F70 (BmlIsSecondaryClonePath.c)
 *     BmlGetNextBestSourceMode @ 0x1C0147254 (BmlGetNextBestSourceMode.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C01478B4 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C0151E94 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C02DF8D4 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        int a6,
        int a7)
{
  __int64 v9; // r14
  __int16 v10; // r13
  PVOID v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  VIDPN_MGR *v16; // rdi
  VIDPN_MGR *v17; // rbx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  unsigned int v26; // r11d
  unsigned int v27; // r12d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdi
  unsigned int v35; // r13d
  __int64 v36; // rcx
  unsigned int v37; // eax
  struct DMMVIDPNTOPOLOGY *v38; // r12
  unsigned int v39; // ebx
  unsigned int v40; // r14d
  __int64 v41; // rcx
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rsi
  unsigned int v46; // r13d
  __int64 v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _DWORD *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  VIDPN_MGR *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rdx
  _DWORD *v70; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // r10d
  __int64 v76; // r10
  __int64 v77; // r10
  int v78; // eax
  unsigned int v79; // r12d
  __int64 v80; // rbx
  char IsSecondaryClonePath; // al
  __int64 v82; // r8
  unsigned int v83; // esi
  unsigned int v84; // r14d
  unsigned int v85; // r9d
  __int64 v86; // r10
  __int64 v87; // rdx
  __int64 v88; // rcx
  unsigned __int64 v89; // rbx
  unsigned int v90; // eax
  unsigned int v91; // r13d
  unsigned int v92; // r14d
  __int64 v93; // rsi
  __int64 v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r12
  __int64 v98; // rcx
  struct DMMVIDPNSOURCEMODESET *v99; // r12
  __int64 v100; // rcx
  int v101; // eax
  DMMVIDPNPRESENTPATH *v102; // r13
  __int64 v103; // rbx
  __int64 v104; // rax
  struct DMMVIDPNTARGETMODESET *v105; // rbx
  __int64 v106; // rcx
  __int16 v107; // ax
  __int64 v109; // rax
  __int64 v110; // r14
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rbx
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rbx
  __int64 v125; // rax
  __int64 v126; // rax
  int DisplayOnlyDriverUseRawModes; // eax
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rbx
  __int64 v131; // rax
  __int64 v132; // rax
  BOOL v133; // eax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // r13
  __int64 v138; // rax
  __int64 v139; // rax
  int **SessionViewOwner; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  _QWORD *v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  _QWORD *v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // r13
  __int64 v158; // rbx
  __int64 v159; // r14
  __int64 v160; // rax
  __int64 v161; // r14
  __int64 v162; // r12
  __int64 v163; // rax
  struct _FAST_MUTEX *v164; // rcx
  char IsVirtualModeSuportDisabled; // r13
  __int64 v166; // rax
  int MonitorInstance; // eax
  __int64 v168; // rax
  __int64 v169; // rax
  struct DXGMONITOR *v170; // r14
  __int64 v171; // rax
  __int64 v172; // rax
  bool v173; // al
  int v174; // r14d
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 *v177; // rbx
  __int64 v178; // rdx
  int v179; // ecx
  int v180; // eax
  __int64 v181; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v182; // ecx
  __int64 v183; // rdx
  __int64 v184; // rcx
  _QWORD *v185; // rax
  _QWORD *v186; // rax
  __int64 v187; // r12
  __int64 v188; // rax
  __int64 v189; // rax
  unsigned int v190; // r8d
  bool v191; // cf
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v192; // edx
  __int64 v193; // rax
  __int64 v194; // rax
  _QWORD *v195; // rax
  _QWORD *v196; // rax
  __int64 v197; // rdx
  __int64 *v198; // rcx
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  _QWORD *v202; // rax
  __int64 v203; // rcx
  __int64 v204; // rax
  unsigned __int8 *v205; // r8
  unsigned int i; // r9d
  __int64 v207; // r10
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  _QWORD *v211; // rax
  unsigned int v212; // eax
  __int64 v213; // r10
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // r8
  _QWORD *v217; // rax
  unsigned int v218; // eax
  __int64 v219; // r10
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  _QWORD *v223; // rax
  bool v224; // [rsp+40h] [rbp-71h]
  unsigned int v225; // [rsp+44h] [rbp-6Dh]
  unsigned int v226; // [rsp+44h] [rbp-6Dh]
  __int64 v227; // [rsp+50h] [rbp-61h]
  unsigned __int64 v228; // [rsp+50h] [rbp-61h]
  VIDPN_MGR *v229; // [rsp+58h] [rbp-59h]
  const struct DMMVIDPNPRESENTPATH *v230; // [rsp+60h] [rbp-51h]
  unsigned int v231; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v232; // [rsp+6Ch] [rbp-45h] BYREF
  unsigned int v233; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v234; // [rsp+74h] [rbp-3Dh]
  unsigned int v235; // [rsp+78h] [rbp-39h] BYREF
  __int64 v236; // [rsp+80h] [rbp-31h]
  DMMVIDPNTOPOLOGY *v237; // [rsp+88h] [rbp-29h]
  struct DXGMONITOR *v238; // [rsp+90h] [rbp-21h] BYREF
  __int64 v239; // [rsp+98h] [rbp-19h] BYREF
  struct DMMVIDPNTARGETMODESET *v240; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v241[9]; // [rsp+A8h] [rbp-9h] BYREF
  char v242; // [rsp+100h] [rbp+4Fh]
  struct DMMVIDPNPRESENTPATH *v243; // [rsp+100h] [rbp+4Fh]
  __int64 v245; // [rsp+110h] [rbp+5Fh]
  bool v246; // [rsp+110h] [rbp+5Fh]
  unsigned int v247; // [rsp+110h] [rbp+5Fh]

  v9 = a2;
  v10 = a4;
  v11 = operator new[](104LL * *(unsigned __int16 *)(a3 + 20) + 16, 0x63644356u, PagedPool);
  *a1 = (__int64)v11;
  if ( !v11 )
  {
    v114 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v114 + 24) = a3;
    *(_QWORD *)(v114 + 32) = *(unsigned __int16 *)(a3 + 20);
    WdLogEvent5_WdLowResource(v114);
    return 3221225626LL;
  }
  v16 = *(VIDPN_MGR **)(v9 + 48);
  v229 = v16;
  v17 = v16;
  v18 = *((_QWORD *)v16 + 1);
  if ( !v18 )
  {
    v115 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v115);
    v18 = *((_QWORD *)v16 + 1);
    v17 = *(VIDPN_MGR **)(v9 + 48);
  }
  v19 = *(_QWORD **)(v18 + 16);
  v20 = v19[337];
  if ( *(_BYTE *)(v20 + 249) && *(_BYTE *)(v20 + 250)
    || (v242 = 0, v19 = *(_QWORD **)(v19[27] + 64LL), *(_DWORD *)(v19[5] + 28LL) >= 0x4003u) )
  {
    v242 = 1;
  }
  v21 = *((_QWORD *)v17 + 1);
  if ( !v21 )
  {
    v116 = WdLogNewEntry5_WdAssertion(v19, v12);
    WdLogEvent5_WdAssertion(v116);
    v21 = *((_QWORD *)v17 + 1);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v21 + 16) + 2704LL) )
  {
    v22 = (unsigned __int8 *)*a1;
    *(_DWORD *)(*a1 + 8) &= 0xFFFFFFF2;
  }
  else
  {
    v117 = *(_QWORD *)(v9 + 48);
    v118 = *(_QWORD *)(v117 + 8);
    if ( !v118 )
    {
      v119 = WdLogNewEntry5_WdAssertion(v19, v12);
      WdLogEvent5_WdAssertion(v119);
      v118 = *(_QWORD *)(v117 + 8);
    }
    v120 = *(_QWORD *)(*(_QWORD *)(v118 + 16) + 2696LL);
    if ( *(_QWORD *)(*(_QWORD *)(v120 + 16) + 2704LL) )
    {
      v121 = WdLogNewEntry5_WdAssertion(v19, v12);
      *(_QWORD *)(v121 + 24) = 6632LL;
      WdLogEvent5_WdAssertion(v121);
    }
    v122 = *a1;
    v123 = (*(_DWORD *)(*a1 + 8) ^ *(_DWORD *)(v120 + 368)) & 1;
    *(_DWORD *)(*a1 + 8) ^= v123;
    v124 = *(_QWORD *)(v9 + 48);
    v125 = *(_QWORD *)(v124 + 8);
    if ( !v125 )
    {
      v126 = WdLogNewEntry5_WdAssertion(v123, v122);
      WdLogEvent5_WdAssertion(v126);
      v125 = *(_QWORD *)(v124 + 8);
    }
    DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(
                                     *(ADAPTER_DISPLAY **)(*(_QWORD *)(v125 + 16) + 2696LL),
                                     v122);
    v128 = *a1;
    v129 = DisplayOnlyDriverUseRawModes != 0 ? 4 : 0;
    *(_DWORD *)(*a1 + 8) = v129 | *(_DWORD *)(*a1 + 8) & 0xFFFFFFFB;
    v130 = *(_QWORD *)(v9 + 48);
    v131 = *(_QWORD *)(v130 + 8);
    if ( !v131 )
    {
      v132 = WdLogNewEntry5_WdAssertion(v128, v129);
      WdLogEvent5_WdAssertion(v132);
      v131 = *(_QWORD *)(v130 + 8);
    }
    v133 = ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(
             *(DXGADAPTER ***)(*(_QWORD *)(v131 + 16) + 2696LL),
             v129);
    v22 = (unsigned __int8 *)*a1;
    *(_DWORD *)(*a1 + 8) = (v133 ? 8 : 0) | *(_DWORD *)(*a1 + 8) & 0xFFFFFFF7;
  }
  v23 = *(_QWORD *)(v9 + 48);
  v24 = *(_QWORD *)(v23 + 8);
  if ( !v24 )
  {
    v134 = WdLogNewEntry5_WdAssertion(0LL, v12);
    WdLogEvent5_WdAssertion(v134);
    v24 = *(_QWORD *)(v23 + 8);
    v22 = (unsigned __int8 *)*a1;
  }
  v25 = ADAPTER_DISPLAY::ForceIHVScaling(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v24 + 16) + 2696LL));
  v27 = v26;
  v28 = 0x4000000000000LL;
  *((_DWORD *)v22 + 2) = *((_DWORD *)v22 + 2) & 0xD | (v25 != 0 ? 2 : 0);
  *v22 = v26;
  *((_DWORD *)v22 + 1) = a7;
  if ( (unsigned __int16)v26 < *(_WORD *)(a3 + 20) )
  {
    while ( 1 )
    {
      v29 = 272LL * v27;
      v30 = v29 + a3 + 48;
      if ( (*(_QWORD *)v30 & 0x4000000000000LL) == 0 )
      {
        v135 = WdLogNewEntry5_WdAssertion(v29, 0x4000000000000LL);
        WdLogEvent5_WdAssertion(v135);
        v26 = 0;
      }
      v31 = *((_QWORD *)v229 + 1);
      if ( !v31 )
      {
        v136 = WdLogNewEntry5_WdAssertion(v29, v28);
        WdLogEvent5_WdAssertion(v136);
        v31 = *((_QWORD *)v229 + 1);
        v26 = 0;
      }
      v32 = *(_QWORD *)(v31 + 16);
      if ( *(_DWORD *)(v30 + 16) == *(_DWORD *)(v32 + 316) && *(_DWORD *)(v30 + 20) == *(_DWORD *)(v32 + 320) )
      {
        if ( (*(_QWORD *)v30 & 0x700000000000LL) != 0x700000000000LL )
        {
          v142 = WdLogNewEntry5_WdError(v32, v28);
          *(_QWORD *)(v142 + 24) = v27;
          *(_QWORD *)(v142 + 32) = a3;
          WdLogEvent5_WdError(v142);
          return 3221225485LL;
        }
        v33 = *a1;
        v34 = 104LL * *(unsigned __int8 *)*a1;
        *(_QWORD *)(v34 + v33 + 52) = 0LL;
        *(_WORD *)(v34 + v33 + 70) = a5;
        *(_QWORD *)(v34 + v33 + 16) = v30;
        *(_WORD *)(v34 + v33 + 32) = v27;
        *(_WORD *)(v34 + v33 + 64) = v26;
        *(_WORD *)(v34 + v33 + 68) = v26;
        *(_WORD *)(v34 + v33 + 66) = v10;
        *(_DWORD *)(v34 + v33 + 60) = v26;
        *(_DWORD *)(v34 + v33 + 116) = v26;
        *(_OWORD *)(v34 + v33 + 72) = 0LL;
        *(_OWORD *)(v34 + v33 + 88) = 0LL;
        *(_DWORD *)(v34 + v33 + 104) = 0;
        if ( a6 == 2 )
        {
          v137 = *(_QWORD *)(a2 + 48);
          v138 = *(_QWORD *)(v137 + 8);
          if ( !v138 )
          {
            v139 = WdLogNewEntry5_WdAssertion(v32, v28);
            WdLogEvent5_WdAssertion(v139);
            v138 = *(_QWORD *)(v137 + 8);
          }
          SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                               *(ADAPTER_DISPLAY **)(*(_QWORD *)(v138 + 16) + 2696LL),
                               *(unsigned int *)(v30 + 24));
          v26 = 0;
          if ( SessionViewOwner && *((_DWORD *)SessionViewOwner + 10) > 1u )
            *(_DWORD *)(v34 + v33 + 116) |= 2u;
        }
        else
        {
          v35 = v26;
          if ( (unsigned __int16)v26 < *(_WORD *)(a3 + 20) )
          {
            v28 = 0x4000000000000LL;
            do
            {
              v36 = 272LL * v35;
              v245 = v36;
              if ( (*(_QWORD *)(v36 + a3 + 48) & 0x4000000000000LL) == 0 )
              {
                v141 = WdLogNewEntry5_WdAssertion(v36, 0x4000000000000LL);
                WdLogEvent5_WdAssertion(v141);
                v36 = v245;
                v28 = 0x4000000000000LL;
              }
              if ( v35 != v27 && *(_DWORD *)(v36 + a3 + 232) == *(_DWORD *)(v30 + 184) )
                *(_DWORD *)(v34 + v33 + 116) |= 2u;
              ++v35;
            }
            while ( v35 < *(unsigned __int16 *)(a3 + 20) );
            v26 = 0;
          }
        }
        v10 = a4;
        ++*(_BYTE *)*a1;
      }
      if ( ++v27 >= *(unsigned __int16 *)(a3 + 20) )
        break;
      v28 = 0x4000000000000LL;
    }
    v22 = (unsigned __int8 *)*a1;
    v9 = a2;
  }
  LOBYTE(v37) = *v22;
  v38 = (struct DMMVIDPNTOPOLOGY *)(v9 + 96);
  v237 = (DMMVIDPNTOPOLOGY *)(v9 + 96);
  v39 = v26;
  if ( (_BYTE)v37 )
  {
    do
    {
      v40 = v39 + 1;
      v41 = v39 + 1;
      if ( (int)(v39 + 1) > 32 )
      {
        v143 = WdLogNewEntry5_WdAssertion(v41, v28);
        *(_QWORD *)(v143 + 24) = *a1;
        *(_QWORD *)(v143 + 32) = v39;
        WdLogEvent5_WdAssertion(v143);
        v22 = (unsigned __int8 *)*a1;
        LODWORD(v41) = 32;
      }
      v42 = 104LL * v39;
      v43 = VIDPN_MGR::AddPathToVidPnTopology(
              v229,
              v38,
              *(_DWORD *)(*(_QWORD *)&v22[v42 + 16] + 24LL),
              *(_DWORD *)(*(_QWORD *)&v22[v42 + 16] + 28LL),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)v41,
              *(_WORD *)&v22[v42 + 32],
              1u,
              D3DKMDT_MCC_ENFORCE);
      v26 = 0;
      v45 = v43;
      if ( v43 < 0 )
      {
        v144 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v28);
        v144[3] = *(unsigned int *)(*(_QWORD *)&v22[v42 + 16] + 24LL);
        v144[4] = *(unsigned int *)(*(_QWORD *)&v22[v42 + 16] + 28LL);
        v144[5] = v38;
        v144[6] = v45;
        return (unsigned int)v45;
      }
      v22 = (unsigned __int8 *)*a1;
      v39 = v40;
      v37 = *(unsigned __int8 *)*a1;
    }
    while ( v40 < v37 );
  }
  v225 = v26;
  v246 = v26;
  v46 = v26;
  v224 = v26;
  if ( (_BYTE)v37 )
  {
    while ( 1 )
    {
      v47 = v46;
      v48 = 104LL * v46;
      v227 = v46;
      v49 = *(_QWORD *)&v22[v48 + 16];
      if ( (*(_QWORD *)v49 & 0x4000000000000LL) == 0 )
      {
        v145 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v28);
        WdLogEvent5_WdAssertion(v145);
        v49 = *(_QWORD *)&v22[v48 + 16];
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(v237, *(_DWORD *)(v49 + 24), *(_DWORD *)(v49 + 28));
      if ( *(_BYTE *)(v49 + 129) )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v51, v50);
        v53[3] = *(unsigned int *)(*(_QWORD *)&v22[v48 + 16] + 24LL);
        v53[4] = *(unsigned int *)(*(_QWORD *)&v22[v48 + 16] + 28LL);
        v53[5] = *(int *)(*(_QWORD *)&v22[v48 + 16] + 20LL);
        v54 = *(unsigned int *)(*(_QWORD *)&v22[v48 + 16] + 16LL);
        v53[6] = v54;
        v55 = *(_DWORD **)&v22[v48 + 16];
        if ( (*v55 & 0x20108) == 0x20100LL )
        {
          v56 = *(_QWORD *)&v22[v48 + 16];
          if ( v55[29] != 21 )
          {
            v146 = WdLogNewEntry5_WdAssertion(v55, v54);
            *(_QWORD *)(v146 + 24) = 4023LL;
            WdLogEvent5_WdAssertion(v146);
            v56 = *(_QWORD *)&v22[v48 + 16];
          }
          v55 = (_DWORD *)v56;
          if ( *(_BYTE *)(v56 + 128) )
          {
            v147 = WdLogNewEntry5_WdAssertion(v56, 0LL);
            *(_QWORD *)(v147 + 24) = 4024LL;
            WdLogEvent5_WdAssertion(v147);
            v55 = *(_DWORD **)&v22[v48 + 16];
          }
        }
        if ( (*(_QWORD *)v55 & 0x20000LL) == 0
          && (((unsigned __int8)~BYTE1(*(_QWORD *)v55) ^ (unsigned __int8)~(v55[2] >> 8)) & 1) != 0 )
        {
          v148 = WdLogNewEntry5_WdAssertion(v55, (unsigned int)~(*(_QWORD *)v55 >> 8));
          *(_QWORD *)(v148 + 24) = 4038LL;
          WdLogEvent5_WdAssertion(v148);
        }
      }
      v57 = *((_QWORD *)Path + 11);
      v58 = *(_QWORD *)(v57 + 104);
      if ( v58 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v58 + 96));
        v59 = *(_QWORD *)(v57 + 104);
        v246 = v224;
      }
      else
      {
        v59 = 0LL;
      }
      v60 = *a1;
      v239 = v59;
      v61 = BmlFillPreferredMonitorMode(v60, v46, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
      v64 = v61;
      if ( v61 < 0 )
      {
        v196 = (_QWORD *)WdLogNewEntry5_WdTrace(v63, v62);
        v196[3] = *(unsigned int *)(*(_QWORD *)&v22[v48 + 16] + 24LL);
        v197 = *(unsigned int *)(*(_QWORD *)&v22[v48 + 16] + 28LL);
        v196[5] = v237;
        v196[4] = v197;
        v196[6] = v64;
        *(_QWORD *)(104LL * v46 + *a1 + 52) = 0LL;
        goto LABEL_213;
      }
      v65 = *(_QWORD *)&v22[v48 + 16];
      if ( (*(_QWORD *)v65 & 0x40000000000LL) == 0 )
        goto LABEL_114;
      AdapterDefaultScaling = *(_DWORD *)(v65 + 136);
      if ( AdapterDefaultScaling <= D3DKMDT_VPPS_UNINITIALIZED )
        goto LABEL_149;
      if ( AdapterDefaultScaling > D3DKMDT_VPPS_CUSTOM )
        break;
      v67 = v229;
LABEL_54:
      *(_DWORD *)&v22[v48 + 24] = AdapterDefaultScaling;
LABEL_55:
      v68 = *(_QWORD *)&v22[v48 + 16];
      if ( (*(_QWORD *)v68 & 0x800000000000LL) != 0
        && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v68 + 88))
        && (*(_DWORD *)(v69 + 8) & 0x200LL) == 0 )
      {
        PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v67, *(_DWORD *)(v69 + 28));
        v230 = PathFromTargetInClientVidPn;
        v158 = *(_QWORD *)(a2 + 48);
        v159 = *(_QWORD *)(v158 + 8);
        if ( !v159 )
        {
          v160 = WdLogNewEntry5_WdAssertion(v156, v155);
          WdLogEvent5_WdAssertion(v160);
          v159 = *(_QWORD *)(v158 + 8);
        }
        v161 = *(_QWORD *)(v159 + 16);
        if ( !v161 || (v162 = *(unsigned int *)(*(_QWORD *)&v22[v48 + 16] + 28LL), (_DWORD)v162 == -1) )
        {
          LODWORD(v64) = -1073741811;
        }
        else
        {
          v163 = *(_QWORD *)(v161 + 2696);
          v236 = v163;
          if ( !v163 )
          {
            v194 = WdLogNewEntry5_WdError(v156, v155);
            *(_QWORD *)(v194 + 24) = 9262LL;
            WdLogEvent5_WdError(v194);
            LODWORD(v64) = -1073741811;
LABEL_211:
            v195 = (_QWORD *)WdLogNewEntry5_WdError(v156, v155);
            v195[3] = *(unsigned int *)(*(_QWORD *)&v22[v48 + 16] + 28LL);
            v195[4] = *(int *)(*(_QWORD *)&v22[v48 + 16] + 20LL);
            v195[5] = *(unsigned int *)(*(_QWORD *)&v22[v48 + 16] + 16LL);
            WdLogEvent5_WdError(v195);
LABEL_213:
            v198 = &v239;
            goto LABEL_216;
          }
          v164 = *(struct _FAST_MUTEX **)(v163 + 96);
          IsVirtualModeSuportDisabled = 0;
          if ( !v164 )
          {
            v166 = WdLogNewEntry5_WdError(0LL, v155);
            *(_QWORD *)(v166 + 24) = v161;
            WdLogEvent5_WdError(v166);
            LODWORD(v64) = -1073741811;
            goto LABEL_164;
          }
          v238 = 0LL;
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v164, (unsigned int)v162, 1, &v238);
          LODWORD(v64) = MonitorInstance;
          if ( MonitorInstance == -1073741275 )
          {
            v168 = WdLogNewEntry5_WdDmmEvent(v156);
            *(_QWORD *)(v168 + 24) = v162;
            *(_QWORD *)(v168 + 32) = v161;
            WdLogEvent5_WdDmmEvent(v168);
            goto LABEL_162;
          }
          if ( MonitorInstance >= 0 )
          {
            v170 = v238;
            if ( !v238 || *((_DWORD *)v238 + 108) != 1 )
            {
              v171 = WdLogNewEntry5_WdAssertion(v156, v155);
              WdLogEvent5_WdAssertion(v171);
            }
            if ( !v170 )
            {
              v172 = WdLogNewEntry5_WdAssertion(v156, v155);
              WdLogEvent5_WdAssertion(v172);
            }
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)((char *)v170 + 296), 1u);
            IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v170);
            ExReleaseResourceLite((PERESOURCE)((char *)v170 + 296));
            KeLeaveCriticalRegion();
            LODWORD(v64) = 0;
          }
          else
          {
            if ( MonitorInstance == -1073741632 )
LABEL_162:
              LODWORD(v64) = 0;
            if ( (int)v64 < 0 )
            {
LABEL_164:
              v169 = WdLogNewEntry5_WdAssertion(v156, v155);
              *(_QWORD *)(v169 + 24) = (int)v64;
              WdLogEvent5_WdAssertion(v169);
              goto LABEL_175;
            }
          }
          if ( IsVirtualModeSuportDisabled )
            v173 = 1;
          else
            v173 = *(_BYTE *)(v236 + 249) == 0;
          v246 = v173;
          v224 = v173;
LABEL_175:
          PathFromTargetInClientVidPn = v230;
        }
        if ( (int)v64 < 0 )
          goto LABEL_211;
        if ( PathFromTargetInClientVidPn )
        {
          if ( !v246 )
          {
            v174 = *((_DWORD *)PathFromTargetInClientVidPn + 29);
LABEL_183:
            if ( v174 )
            {
              v177 = *(__int64 **)&v22[v48 + 16];
              v178 = *v177;
              if ( (*v177 & 0x200) != 0 )
              {
                if ( (((unsigned __int8)v174 ^ *((_BYTE *)v177 + 132)) & 1) != 0 && (v178 & 0x20000) != 0 )
                {
                  v179 = *((_DWORD *)v177 + 38);
                  v180 = *((_DWORD *)v177 + 39);
                  *v177 &= ~0x800000uLL;
                  *((_DWORD *)v177 + 38) = v180;
                  *((_DWORD *)v177 + 39) = v179;
                }
              }
              else if ( (v178 & 0x20000) != 0 )
              {
                v181 = WdLogNewEntry5_WdAssertion(v156, v178);
                WdLogEvent5_WdAssertion(v181);
              }
              *v177 |= 0x200uLL;
              *((_DWORD *)v177 + 33) = v174;
              *(_DWORD *)&v22[v48 + 28] = v174;
              goto LABEL_63;
            }
          }
        }
        else if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v156, v155) + 310) )
        {
          v174 = *((_DWORD *)DXGGLOBAL::GetGlobal(v176, v175) + 310);
          goto LABEL_183;
        }
        v47 = v227;
        v46 = v225;
      }
      v70 = *(_DWORD **)&v22[v48 + 16];
      if ( (*v70 & 0x200LL) == 0 )
      {
        v110 = *a1;
        v111 = *a1;
        v233 = 0;
        if ( (unsigned __int8)BmlIsSecondaryClonePath(v111, v46, &v233) )
        {
          v187 = 104LL * v233;
          v71 = *(_DWORD *)(v187 + v110 + 28);
          if ( v71 == D3DKMDT_VPPR_UNINITIALIZED )
          {
            v188 = WdLogNewEntry5_WdAssertion(v113, v112);
            WdLogEvent5_WdAssertion(v188);
          }
          if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v71) != 1 )
          {
            v189 = WdLogNewEntry5_WdAssertion(v113, v112);
            WdLogEvent5_WdAssertion(v189);
          }
          if ( v242 )
          {
            v112 = *(unsigned int *)(v48 + v110 + 52);
            v190 = *(_DWORD *)(v48 + v110 + 56);
            LOBYTE(v113) = *(_DWORD *)(v187 + v110 + 52) < *(_DWORD *)(v187 + v110 + 56);
            if ( (_BYTE)v113 != (unsigned int)v112 < v190 )
            {
              v191 = (unsigned int)v112 < v190;
              v192 = D3DKMDT_VPPR_ROTATE270;
              if ( !v191 )
                v192 = D3DKMDT_VPPR_ROTATE90;
              v71 = (unsigned int)D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(v71, v192);
            }
          }
        }
        else
        {
          v71 = D3DKMDT_VPPR_IDENTITY;
        }
        if ( v71 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v193 = WdLogNewEntry5_WdAssertion(v113, v112);
          WdLogEvent5_WdAssertion(v193);
        }
        goto LABEL_62;
      }
      v71 = v70[33];
      if ( (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v71) - 1 <= 3 )
      {
        if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v71) == 1 )
        {
          v232 = v75;
          if ( v242 != (_BYTE)v75 && (unsigned __int8)BmlIsSecondaryClonePath(*a1, v46, &v232) )
          {
            v182 = *(_DWORD *)(*(_QWORD *)(104LL * v232 + *a1 + 16) + 132LL);
            if ( (unsigned int)(v182 - 1) > 0xF || (unsigned int)(v71 - 1) > 0xF )
              v71 = D3DKMDT_VPPR_NOTSPECIFIED;
            else
              v71 = (unsigned int)D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(
                                    v182,
                                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)((v71 - v182 + 4) % 4 + 1));
          }
LABEL_62:
          *(_DWORD *)&v22[v48 + 28] = v71;
          goto LABEL_63;
        }
        if ( v242 != (_BYTE)v75 )
        {
          if ( (unsigned __int8)BmlIsSecondaryClonePath(*a1, v46, 0LL) )
          {
            *(_DWORD *)&v22[v48 + 28] = *(_DWORD *)(*(_QWORD *)&v22[v48 + 16] + 132LL);
          }
          else
          {
            v185 = (_QWORD *)WdLogNewEntry5_WdAssertion(v184, v183);
            v185[3] = *a1;
            v185[4] = v47;
            v185[5] = *(int *)(*(_QWORD *)&v22[v48 + 16] + 132LL);
            WdLogEvent5_WdAssertion(v185);
            *(_DWORD *)&v22[v48 + 28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)(*(_QWORD *)&v22[v48 + 16] + 132LL));
          }
          goto LABEL_63;
        }
      }
      v186 = (_QWORD *)WdLogNewEntry5_WdWarning(v73, v72, v74);
      v186[3] = *a1;
      v186[4] = v47;
      v186[5] = *(int *)(*(_QWORD *)&v22[v48 + 16] + 132LL);
      WdLogEvent5_WdWarning(v186);
      *(_DWORD *)&v22[v48 + 28] = 1;
LABEL_63:
      v76 = *(_QWORD *)&v22[v48 + 16];
      if ( *(_BYTE *)(v76 + 129) && (*(_DWORD *)v76 & 0x20000) != 0 )
      {
        if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)&v22[v48 + 28]) - 2) & 0xFFFFFFFD) != 0 )
        {
          *(_DWORD *)&v22[v48 + 108] = *(_DWORD *)(v77 + 152);
          v78 = *(_DWORD *)(v77 + 156);
        }
        else
        {
          *(_DWORD *)&v22[v48 + 108] = *(_DWORD *)(v77 + 156);
          v78 = *(_DWORD *)(v77 + 152);
        }
        *(_DWORD *)&v22[v48 + 112] = v78;
        *(_DWORD *)&v22[v48 + 116] |= 1u;
      }
      if ( (unsigned __int8)BmlIsSecondaryClonePath(*a1, v225, 0LL) )
        *(_WORD *)&v22[v48 + 66] = 0;
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v239, 0LL);
      v22 = (unsigned __int8 *)*a1;
      v46 = v225 + 1;
      v225 = v46;
      v37 = *(unsigned __int8 *)*a1;
      if ( v46 >= v37 )
      {
        v26 = 0;
        goto LABEL_72;
      }
    }
    if ( AdapterDefaultScaling == D3DKMDT_VPPS_RESERVED1 )
    {
LABEL_114:
      v67 = v229;
    }
    else
    {
      if ( AdapterDefaultScaling != D3DKMDT_VPPS_NOTSPECIFIED )
      {
LABEL_149:
        v67 = v229;
        *(_DWORD *)&v22[v48 + 24] = VIDPN_MGR::GetAdapterDefaultScaling(v229);
        v154 = (_QWORD *)WdLogNewEntry5_WdWarning(v152, v151, v153);
        v154[3] = *(int *)&v22[v48 + 24];
        v154[4] = *a1;
        v154[5] = v46;
        v154[6] = *(int *)(*(_QWORD *)&v22[v48 + 16] + 136LL);
        WdLogEvent5_WdWarning(v154);
        goto LABEL_55;
      }
      v67 = v229;
      v149 = *((_QWORD *)v229 + 1);
      if ( !v149 )
      {
        v150 = WdLogNewEntry5_WdAssertion(v65, 0x40000000000LL);
        WdLogEvent5_WdAssertion(v150);
        v149 = *((_QWORD *)v229 + 1);
      }
      if ( *(int *)(*(_QWORD *)(v149 + 16) + 2596LL) < 1105 )
      {
        AdapterDefaultScaling = D3DKMDT_VPPS_NOTSPECIFIED;
        goto LABEL_54;
      }
    }
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v67);
    goto LABEL_54;
  }
LABEL_72:
  v234 = v26;
  v79 = v26;
  if ( (_BYTE)v37 )
  {
    do
    {
      v80 = 104LL * v79;
      v236 = v80;
      IsSecondaryClonePath = BmlIsSecondaryClonePath(v22, v79, 0LL);
      v26 = 0;
      if ( !IsSecondaryClonePath )
      {
        v82 = *a1;
        v83 = 0;
        v228 = 0LL;
        v84 = 0;
        v85 = v79;
        v226 = v79;
        if ( v79 < *(unsigned __int8 *)*a1 )
        {
          do
          {
            v86 = 104LL * v85;
            v87 = *(_QWORD *)(v86 + v82 + 16);
            v88 = *(unsigned int *)(*(_QWORD *)&v22[v80 + 16] + 24LL);
            if ( *(_DWORD *)(v87 + 24) == (_DWORD)v88 )
            {
              v89 = *(_QWORD *)(v86 + v82 + 44);
              if ( v242
                && (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(v86 + v82 + 28)) - 2) & 0xFFFFFFFD) == 0 )
              {
                v90 = v89;
                v91 = HIDWORD(v89);
                v89 = __PAIR64__(v89, HIDWORD(v89));
              }
              else
              {
                v90 = HIDWORD(v89);
                v91 = v89;
              }
              v247 = v90;
              if ( !v91 || !v90 )
              {
                v109 = WdLogNewEntry5_WdAssertion(v88, v87);
                WdLogEvent5_WdAssertion(v109);
                v90 = v247;
                v85 = v226;
              }
              if ( v83 && v84 )
              {
                if ( v83 > v91 )
                  v83 = v91;
                LODWORD(v228) = v83;
                if ( v84 > v90 )
                  v84 = v90;
                HIDWORD(v228) = v84;
              }
              else
              {
                v228 = v89;
                v83 = v89;
                v84 = HIDWORD(v89);
              }
              v80 = v236;
            }
            v82 = *a1;
            v226 = ++v85;
          }
          while ( v85 < *(unsigned __int8 *)*a1 );
          v79 = v234;
        }
        *(_QWORD *)&v22[v80 + 36] = v228;
        *(_DWORD *)&v22[v80 + 60] = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)&v22[v80 + 52]);
        v26 = 0;
      }
      v22 = (unsigned __int8 *)*a1;
      v234 = ++v79;
      v37 = *v22;
    }
    while ( v79 < v37 );
  }
  v92 = v26;
  if ( !(_BYTE)v37 )
    return 0LL;
  while ( 1 )
  {
    v93 = 104LL * v92;
    v94 = *(_QWORD *)&v22[v93 + 16];
    v243 = DMMVIDPNTOPOLOGY::FindPath(v237, *(_DWORD *)(v94 + 24), *(_DWORD *)(v94 + 28));
    v97 = *((_QWORD *)v243 + 11);
    v98 = *(_QWORD *)(v97 + 104);
    if ( v98 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v98 + 96));
      v99 = *(struct DMMVIDPNSOURCEMODESET **)(v97 + 104);
      v94 = *(_QWORD *)&v22[v93 + 16];
    }
    else
    {
      v99 = 0LL;
    }
    v100 = *(_QWORD *)(v94 + 8);
    v241[0] = (__int64)v99;
    if ( (v100 & 0x18000820B8FLL) == 0 )
    {
      v102 = v243;
      goto LABEL_106;
    }
    if ( (v100 & *(_QWORD *)v94 & 0x100) == 0 || (unsigned __int8)BmlIsSecondaryClonePath(*a1, v92, 0LL) )
    {
      v204 = WdLogNewEntry5_WdWarning(v100, v95, v96);
      *(_QWORD *)(v204 + 24) = *a1;
      *(_QWORD *)(v204 + 32) = v92;
      WdLogEvent5_WdWarning(v204);
      v102 = v243;
LABEL_106:
      if ( DMMVIDPNPRESENTPATH::IsFunctional(v102) )
      {
        v205 = (unsigned __int8 *)*a1;
        for ( i = 0; i < *v205; ++i )
        {
          v207 = 104LL * i;
          if ( *(_DWORD *)(*(_QWORD *)&v205[v207 + 16] + 24LL) == *(_DWORD *)(*(_QWORD *)&v22[v93 + 16] + 24LL) )
            *(_WORD *)&v205[v207 + 66] = 0;
        }
        *(_WORD *)&v22[v93 + 70] = 0;
      }
      goto LABEL_107;
    }
    v231 = -1;
    if ( (int)BmlGetNextBestSourceMode(*a1, a2, (unsigned __int16)v92, (_DWORD)v99, -1, (__int64)&v231) >= 0 )
      break;
    v203 = *(_QWORD *)&v22[v93 + 16];
    if ( (*(_QWORD *)v203 & 0x40000000000000LL) == 0 )
    {
      DxgkLogCodePointPacket(
        0x13u,
        *(_DWORD *)(v203 + 96),
        *(_DWORD *)(v203 + 100),
        *(_DWORD *)(v203 + 116),
        *(_QWORD *)(v203 + 16));
      v211 = (_QWORD *)WdLogNewEntry5_WdWarning(v209, v208, v210);
      v211[3] = *a1;
      v211[5] = v92;
      v211[6] = v231;
      v211[4] = a2;
      WdLogEvent5_WdWarning(v211);
      LODWORD(v64) = -1071774970;
      goto LABEL_215;
    }
    *(_QWORD *)(v203 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
LABEL_107:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(v241, 0LL);
    v22 = (unsigned __int8 *)*a1;
    if ( ++v92 >= *(unsigned __int8 *)*a1 )
      return 0LL;
  }
  v101 = VIDPN_MGR::PinVidPnSourceMode(v229, v99, v231, 1);
  v64 = v101;
  if ( v101 < 0 )
  {
    DxgkLogCodePointPacket(
      0x15u,
      *(_DWORD *)(*(_QWORD *)&v22[v93 + 16] + 96LL),
      *(_DWORD *)(*(_QWORD *)&v22[v93 + 16] + 100LL),
      *(_DWORD *)(*(_QWORD *)&v22[v93 + 16] + 116LL),
      *(_QWORD *)(*(_QWORD *)&v22[v93 + 16] + 16LL));
    v202 = (_QWORD *)WdLogNewEntry5_WdWarning(v200, v199, v201);
    v202[4] = *a1;
    v202[6] = v92;
    v202[3] = v64;
    v202[5] = a2;
    WdLogEvent5_WdWarning(v202);
    goto LABEL_215;
  }
  v102 = v243;
  *(_WORD *)&v22[v93 + 66] = 0;
  v103 = *((_QWORD *)v243 + 12);
  v104 = *(_QWORD *)(v103 + 104);
  if ( v104 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v104 + 96));
    v105 = *(struct DMMVIDPNTARGETMODESET **)(v103 + 104);
  }
  else
  {
    v105 = 0LL;
  }
  v106 = *(_QWORD *)&v22[v93 + 16];
  v240 = v105;
  if ( (*(_BYTE *)v106 & 0x87) != 0x87
    || (*(_BYTE *)(v106 + 8) & 0x87) != 0x87
    || !*(_DWORD *)(v106 + 56)
    || !*(_DWORD *)(v106 + 52) )
  {
    v107 = -1;
LABEL_105:
    *(_WORD *)&v22[v93 + 70] = v107;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v240, 0LL);
    goto LABEL_106;
  }
  v235 = -1;
  if ( (int)BmlGetNextBestTargetMode(*a1, a2, v92, v105, (__int64)v99, 0xFFFFFFFF, &v235) >= 0 )
  {
    v64 = (int)VIDPN_MGR::PinVidPnTargetMode(v229, v105, v235, 1);
    v107 = 0;
    if ( (int)v64 < 0 )
    {
      v212 = DMMVIDEOSIGNALMODE::DivideAndRound(
               *(unsigned int *)(*(_QWORD *)&v22[v93 + 16] + 52LL),
               *(unsigned int *)(*(_QWORD *)&v22[v93 + 16] + 56LL));
      DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v213 + 44), *(_DWORD *)(v213 + 48), v212, *(_QWORD *)(v213 + 16));
      v217 = (_QWORD *)WdLogNewEntry5_WdWarning(v215, v214, v216);
      v217[4] = *a1;
      v217[6] = v92;
      v217[3] = v64;
      v217[5] = a2;
      WdLogEvent5_WdWarning(v217);
      goto LABEL_236;
    }
    goto LABEL_105;
  }
  v218 = DMMVIDEOSIGNALMODE::DivideAndRound(
           *(unsigned int *)(*(_QWORD *)&v22[v93 + 16] + 52LL),
           *(unsigned int *)(*(_QWORD *)&v22[v93 + 16] + 56LL));
  DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v219 + 44), *(_DWORD *)(v219 + 48), v218, *(_QWORD *)(v219 + 16));
  v223 = (_QWORD *)WdLogNewEntry5_WdWarning(v221, v220, v222);
  v223[3] = *a1;
  v223[5] = v92;
  v223[4] = a2;
  WdLogEvent5_WdWarning(v223);
  LODWORD(v64) = -1071774970;
LABEL_236:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v240, 0LL);
LABEL_215:
  v198 = v241;
LABEL_216:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v198, 0LL);
  return (unsigned int)v64;
}
