/*
 * XREFs of DrvSetDisplayConfig @ 0x1C0065F30
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065210 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C00658C4 (DrvChangeDisplaySettings.c)
 *     InitVideo @ 0x1C0068398 (InitVideo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D54F0 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     LogDiagSDC @ 0x1C005C5BC (LogDiagSDC.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0065BD4 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0065C40 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0065C78 (--0AUTO_TGO@@IEAA@XZ.c)
 *     DrvIsWddmDriverPresent @ 0x1C0070CE0 (DrvIsWddmDriverPresent.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     ApplyPathsModality @ 0x1C00787AC (ApplyPathsModality.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C007AAA0 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C008349C (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0083798 (GetPathsModality.c)
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C009FCA4 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00BFF14 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C00C1B18 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00C2744 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00C3D64 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00C4CF0 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?DispBrokerGetCurrentMode@@YA?AW4DISPBROKER_MODE@@XZ @ 0x1C0143888 (-DispBrokerGetCurrentMode@@YA-AW4DISPBROKER_MODE@@XZ.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C016FC20 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C017026C (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0170EB8 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01710F8 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0172A20 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0172FBC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C017318C (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        char a6,
        __int64 a7,
        __int64 a8,
        struct _MDEV *a9,
        struct _MDEV **a10,
        unsigned int *a11,
        signed int *a12,
        bool *a13,
        _BYTE *a14,
        __int64 a15,
        _DWORD *a16)
{
  unsigned int v16; // esi
  struct _MDEV *v17; // rdi
  int v18; // r13d
  int v19; // r15d
  unsigned int v20; // r12d
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rdx
  struct _MDEV *v29; // rsi
  int v30; // ebx
  char v31; // r14
  __int64 v32; // rdi
  int v33; // edi
  __int64 v34; // rcx
  int v35; // eax
  bool v36; // si
  __int64 v37; // rdi
  BOOL v38; // r14d
  unsigned int v39; // ebx
  const struct _RETRY_MODE *v40; // rdi
  __int64 v41; // rcx
  unsigned int v42; // edx
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // r10d
  struct _DISPLAYCONFIG_CDS_REQUEST *v46; // rdx
  __int64 v47; // rcx
  bool v48; // si
  __int64 v49; // rcx
  unsigned int v50; // ebx
  int v51; // eax
  int v52; // ebx
  struct D3DKMT_GETPATHSMODALITY *v53; // rcx
  struct _DISPLAYCONFIG_CDS_REQUEST *v54; // r14
  int PathPersistentMonitorsIfNeeded; // eax
  signed int v56; // eax
  int v57; // eax
  unsigned int v58; // r14d
  unsigned int v59; // edx
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  int v63; // r15d
  unsigned int v64; // edi
  bool v65; // r14
  wchar_t *v66; // rcx
  int v67; // esi
  unsigned int v68; // ebx
  unsigned int v69; // eax
  __int64 v70; // r9
  __int64 Pool2; // rax
  wchar_t *v72; // rdx
  unsigned int v73; // r8d
  __int64 v74; // rcx
  int v75; // r8d
  struct _MDEV **v76; // rdi
  struct _MDEV *v77; // r13
  int v78; // eax
  int v79; // esi
  char v80; // di
  int v81; // eax
  signed int v82; // eax
  unsigned int v83; // eax
  __int64 v84; // rcx
  struct _MDEV **v85; // r14
  char v86; // di
  int v87; // edi
  int v88; // eax
  int v89; // eax
  char v90; // al
  int v91; // eax
  struct _MDEV **v92; // r14
  struct D3DKMT_GETPATHSMODALITY *v93; // rcx
  int v94; // esi
  __int64 v95; // rax
  __int64 v96; // rcx
  bool v97; // al
  char v98; // si
  char v99; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v100; // rax
  _DWORD *v101; // r15
  unsigned int v102; // edi
  int v104; // [rsp+20h] [rbp-E0h]
  int v105; // [rsp+28h] [rbp-D8h]
  char v106; // [rsp+50h] [rbp-B0h]
  signed int v107; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int8 v108; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 v109; // [rsp+59h] [rbp-A7h]
  char v110; // [rsp+5Ah] [rbp-A6h]
  char v111; // [rsp+5Bh] [rbp-A5h]
  char v112; // [rsp+5Ch] [rbp-A4h]
  char v113; // [rsp+5Dh] [rbp-A3h] BYREF
  bool v114; // [rsp+5Eh] [rbp-A2h]
  bool v115; // [rsp+5Fh] [rbp-A1h]
  bool v116[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v117; // [rsp+64h] [rbp-9Ch] BYREF
  char v118; // [rsp+68h] [rbp-98h]
  struct _MDEV *v119; // [rsp+70h] [rbp-90h]
  int v120; // [rsp+78h] [rbp-88h]
  int v121; // [rsp+7Ch] [rbp-84h]
  unsigned int v122; // [rsp+80h] [rbp-80h]
  unsigned int v123; // [rsp+84h] [rbp-7Ch]
  unsigned int v124; // [rsp+88h] [rbp-78h]
  unsigned int v125; // [rsp+8Ch] [rbp-74h]
  struct _MDEV **v126; // [rsp+90h] [rbp-70h]
  unsigned int v127; // [rsp+98h] [rbp-68h]
  unsigned int v128; // [rsp+9Ch] [rbp-64h]
  int v129; // [rsp+A0h] [rbp-60h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v130; // [rsp+A8h] [rbp-58h]
  int v131; // [rsp+B0h] [rbp-50h]
  struct _DISPLAYCONFIG_CDS_REQUEST *v132; // [rsp+B8h] [rbp-48h]
  int v133; // [rsp+C0h] [rbp-40h]
  int v134; // [rsp+C4h] [rbp-3Ch]
  _QWORD v135[6]; // [rsp+D0h] [rbp-30h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v136[2]; // [rsp+100h] [rbp+0h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v137; // [rsp+110h] [rbp+10h] BYREF
  char v138; // [rsp+118h] [rbp+18h]
  __int64 v139; // [rsp+120h] [rbp+20h]
  void *v140; // [rsp+128h] [rbp+28h] BYREF
  __int64 v141; // [rsp+130h] [rbp+30h]
  void *v142; // [rsp+138h] [rbp+38h]
  __int64 v143; // [rsp+140h] [rbp+40h]
  _DWORD *v144; // [rsp+148h] [rbp+48h]
  void *v145; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v146; // [rsp+158h] [rbp+58h]
  signed int *v147; // [rsp+160h] [rbp+60h]
  _BYTE *v148; // [rsp+168h] [rbp+68h]
  __int64 v149; // [rsp+170h] [rbp+70h]
  bool *v150; // [rsp+178h] [rbp+78h]
  _DWORD v151[4]; // [rsp+180h] [rbp+80h] BYREF
  _DWORD v152[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v153; // [rsp+198h] [rbp+98h]
  int v154; // [rsp+1A0h] [rbp+A0h]
  __int64 v155; // [rsp+1A4h] [rbp+A4h]
  int v156; // [rsp+1ACh] [rbp+ACh]
  void *retaddr; // [rsp+208h] [rbp+108h]

  v16 = a4;
  v17 = a9;
  v142 = a5;
  v126 = a10;
  v146 = a11;
  v147 = a12;
  v150 = a13;
  v143 = a15;
  v144 = a16;
  v130 = a2;
  v123 = a1;
  v18 = 0;
  v114 = gbBaseVideo != 0;
  v122 = a4;
  v133 = -1;
  v19 = -5;
  v20 = a3;
  v132 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a8;
  v119 = a9;
  v148 = a14;
  v125 = gbBaseVideo != 0 ? 3 : 0;
  v124 = 0;
  v111 = 0;
  v109 = 0;
  v108 = 0;
  v112 = 0;
  v107 = 0;
  v121 = -5;
  v117 = -5;
  v127 = 0;
  v118 = 0;
  WdLogSingleEntry1(4LL, a3);
  v149 = DrvDxgkLogCodePointPacket(120LL, 0LL, 0LL, 0LL);
  DisplayScenarioJournalBegin(v20, v16, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(216 * v123, v123, v130);
  v145 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v145, 4LL);
  v21 = gOldModeChange == 0;
  *a10 = 0LL;
  if ( !v21 )
    WdLogSingleEntry0(1LL);
  if ( (v20 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v115 = (v16 & 2) != 0 && (v20 & 0x88F) == 0x88F;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v135);
  v135[0] = &off_1C0243A80;
  v139 = v143;
  *(_OWORD *)v136 = 0LL;
  v137 = 0LL;
  v138 = 0;
  v140 = 0LL;
  if ( !(unsigned int)UserIsWddmConnectedSession() )
  {
    v24 = 1;
LABEL_237:
    if ( (v16 & 0x20) != 0 )
      WdLogSingleEntry0(v24);
    v85 = v126;
    v86 = v16;
    v29 = v119;
    v87 = v86 & 1;
    v88 = DrvChangeDisplayFallback(
            v142,
            BYTE1(v20) & 1,
            v87,
            v119,
            v126,
            (enum _DXGK_DIAG_SDC_STAGE *)&v107,
            &v108,
            &v117);
    v19 = v117;
    LODWORD(v27) = v88;
    if ( v88 < 0 )
    {
      v17 = v29;
      v109 = v108;
      goto LABEL_249;
    }
    v89 = v107;
    if ( v87 )
      v89 = 30;
    v107 = v89;
    v109 = v108;
    goto LABEL_50;
  }
  v21 = (unsigned int)DrvIsWddmDriverPresent(v22, 0LL) == 0;
  v24 = v23 + 1;
  if ( v21 || ((unsigned __int8)v16 & (unsigned __int8)v24) != 0 )
    goto LABEL_237;
  if ( (v20 & 0x40000000) != 0 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
      10733637LL,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
      v23,
      3);
    if ( (v20 & 0x10000) != 0 )
    {
      v107 = 37;
LABEL_16:
      LODWORD(v27) = -1073741811;
      goto LABEL_248;
    }
    if ( gbBaseVideo )
      WdLogSingleEntry0(1LL);
    LODWORD(v27) = GetPathsModality(v25, v136, 15LL);
    if ( (int)v27 < 0 )
    {
      v107 = 2;
      v29 = a9;
LABEL_50:
      if ( (int)v27 < 0 )
        goto LABEL_244;
LABEL_256:
      v90 = v111;
LABEL_257:
      v92 = v126;
      if ( v90 && !*v126 )
      {
        if ( !v29 )
          WdLogSingleEntry0(1LL);
        *v92 = v29;
        if ( v19 == 2 )
          v19 = 0;
        v117 = v19;
      }
LABEL_268:
      v31 = v109;
      v32 = 0LL;
      goto LABEL_269;
    }
    v30 = *((_DWORD *)v136[0] + 8) & 0xF;
    if ( v30 == 1 || v30 == 8 )
    {
      LODWORD(v27) = -1073741637;
      v107 = 25;
      goto LABEL_248;
    }
    v31 = 1;
    v110 = 1;
    LOBYTE(v28) = v30 == 4;
    ((void (__fastcall *)(__int64, __int64))qword_1C0296870)(1LL, v28);
    if ( v30 == 4 )
    {
      v32 = 0LL;
      v107 = 26;
      LODWORD(v27) = 0;
      goto LABEL_270;
    }
    v20 = 132;
    v120 = 0;
  }
  else
  {
    if ( (v20 & 0x80000000) == 0 )
    {
      if ( (v20 & 0xF) == 0xF && ((v16 & 0x20) == 0 || *(_DWORD *)(a8 + 20) == v23) )
      {
        v110 = ((__int64 (*)(void))qword_1C0296878)();
        v31 = v110;
        if ( v110 )
          v20 = v20 & 0xFFFFFFF0 | 4;
      }
      else if ( (v20 & 0x200) != 0
             || (v16 & 0x20) != 0 && *(_DWORD *)(a8 + 20) != v23
             || (v20 & 0x1F) != 0 && (v20 & 0x40) == 0 )
      {
        v31 = v23;
        v110 = v23;
        ((void (__fastcall *)(_QWORD))qword_1C0296870)(0LL);
      }
      else
      {
        v31 = ((__int64 (*)(void))qword_1C0296878)();
        v110 = v31;
      }
      v120 = v20 & 0x10000;
      v33 = v20 & 0x80;
      v131 = v33;
      if ( (v20 & 0x10000) != 0 )
      {
        LODWORD(v27) = ((__int64 (__fastcall *)(__int64, _QWORD, void **))qword_1C0296938)(
                         a7,
                         (v20 & 0x80) != 0 ? 2031616 : 0x20000,
                         &v140);
        if ( (int)v27 < 0 )
        {
          v107 = 42;
LABEL_49:
          v29 = v119;
          goto LABEL_50;
        }
      }
      LOBYTE(v16) = v122;
      goto LABEL_53;
    }
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
      10733637LL,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
      v23,
      3);
    if ( (v20 & 0x10000) != 0 )
    {
      v107 = 38;
      goto LABEL_16;
    }
    v32 = 0LL;
    v110 = 0;
    v31 = 0;
    if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0296870)(0LL, 0LL) )
    {
      LODWORD(v27) = 0;
      v107 = 18;
      v31 = 1;
      goto LABEL_270;
    }
    v20 = 2191;
    v120 = 0;
  }
  v33 = 128;
  v131 = 128;
LABEL_53:
  LODWORD(v27) = ((__int64 (*)(void))qword_1C0296770)();
  if ( (int)v27 < 0 )
  {
    v107 = 12;
    v18 = 6;
    goto LABEL_49;
  }
  v138 = 1;
  if ( v33 )
  {
    v34 = 1LL;
    if ( !v31 && (v20 & 0xF) != 0 && (v16 & 0x20) == 0 )
      v34 = 3LL;
    v35 = ((__int64 (__fastcall *)(__int64))qword_1C0296788)(v34);
    LODWORD(v27) = v35;
    if ( v35 < 0 )
    {
      WdLogSingleEntry1(4LL, v35);
      DrvDxgkLogCodePointPacket(4LL, (unsigned int)v27, 0LL, 0LL);
      LODWORD(v27) = 0;
    }
  }
  v36 = (v20 & 0x240) == 512;
  v128 = v20 & 0xF;
  v106 = v36;
  while ( 1 )
  {
    v37 = v124;
    v141 = v124;
    WdLogSingleEntry2(4LL, v124, (int)v27);
    v38 = 0;
    v129 = 0;
    v112 = 0;
    v113 = 0;
    v109 = 0;
    v108 = 0;
    FreePathsModality(v136[0]);
    FreePathsModality(v136[1]);
    v136[1] = 0LL;
    v136[0] = 0LL;
    if ( v114 )
      break;
    if ( v128 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
        10733637LL,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
        0,
        3);
      v45 = 0;
      if ( v120 )
      {
        LODWORD(v27) = -1073741811;
        v107 = 39;
        goto LABEL_226;
      }
      v46 = v132;
      v47 = v122 & 0x20;
      v48 = (v122 & 0x20) != 0 && *((_QWORD *)v132 + 4);
      if ( (v122 & 0x800) != 0 || !(unsigned int)DispBrokerGetCurrentMode(v47, v132) )
      {
        v51 = (_DWORD)v47 != 0 ? 0x9000 : 0;
        if ( v48 && *((_DWORD *)v46 + 5) == v45 )
        {
          v49 = v128;
          v52 = 0x2000000;
        }
        else
        {
          v49 = v128;
          v52 = v128;
        }
        v50 = v51 | v52;
        if ( (v50 & 0x2000000) != 0 && (_DWORD)v49 != 15 )
          WdLogSingleEntry0(1LL);
      }
      else
      {
        if ( v48 )
          WdLogSingleEntry0(1LL);
        DrvDxgkLogCodePointPacket(127LL, 0LL, 0LL, 0LL);
        v50 = 64;
      }
      LODWORD(v27) = GetPathsModality(v49, v136, v50);
      if ( (int)v27 < 0 )
      {
        v107 = 2;
        v18 = 7;
LABEL_100:
        v36 = v106;
        goto LABEL_226;
      }
      v53 = v136[0];
      if ( !*((_WORD *)v136[0] + 10) )
      {
        WdLogSingleEntry0(1LL);
        v53 = v136[0];
      }
      if ( v110 || (v106 = 1, (v20 & 0x40) != 0) )
        v106 = 0;
      DrvSetDisplayConfigApplyDeviceHack(v53);
      if ( v48 )
      {
        v54 = v132;
        if ( !*((_DWORD *)v132 + 5) || (v106 = 1, !*((_DWORD *)v132 + 6)) )
          v106 = 0;
        LODWORD(v27) = DrvValidateAndApplyDevMode(v132, v136);
        if ( (int)v27 < 0 )
        {
          v19 = *((_DWORD *)v54 + 12);
          v56 = 2;
          v18 = *((_DWORD *)v54 + 13);
          v121 = v19;
          v117 = v19;
          if ( (_DWORD)v27 == -1073741266 )
            v56 = 23;
          v107 = v56;
          goto LABEL_100;
        }
        v38 = *((_DWORD *)v132 + 5) != 0;
        v129 = v38;
      }
      v36 = v106;
      v18 = 10;
      goto LABEL_113;
    }
    if ( (v20 & 0x10) != 0 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
        10733637LL,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
        0,
        3);
      if ( v120 )
      {
        LODWORD(v27) = -1073741811;
        v107 = 40;
        goto LABEL_226;
      }
      LODWORD(v27) = AllocatePathModalityForDisplayConfig(v123, v130, v136);
      if ( (int)v27 < 0 )
      {
        v107 = 3;
        goto LABEL_226;
      }
      LODWORD(v27) = ConvertDisplayConfigToPathModality(v123, v130, v136[0], 0LL);
      if ( (int)v27 < 0 )
      {
        v107 = 4;
        goto LABEL_226;
      }
      LODWORD(v27) = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C02966F0)(
                       v20 & 0x2000 | 0x2F,
                       v136[0],
                       0LL);
      if ( (int)v27 < 0 )
      {
        v107 = 5;
        goto LABEL_226;
      }
      if ( v110 || (v20 & 0x40) != 0 )
      {
        v36 = 0;
        v106 = 0;
      }
      else
      {
        v36 = 1;
        v106 = 1;
      }
      goto LABEL_114;
    }
    if ( (v20 & 0x20) == 0 )
    {
      WdLogSingleEntry1(1LL, v20);
      v107 = 9;
      goto LABEL_225;
    }
    v116[0] = 0;
    if ( (v122 & 8) != 0 )
    {
      v57 = SetDisplayConfigHandleOnlyProvidedPath(v130, v136, v116, (enum _DXGK_DIAG_SDC_STAGE *)&v107);
    }
    else
    {
      if ( !v120 )
      {
        v58 = v123;
        LODWORD(v27) = AllocatePathModalityForDisplayConfig(v123, v130, v136);
        if ( (int)v27 < 0 )
        {
          v107 = 6;
          goto LABEL_226;
        }
        LODWORD(v27) = ConvertDisplayConfigToPathModality(v58, v130, v136[0], v116);
        if ( (int)v27 < 0 )
        {
          v107 = 7;
          goto LABEL_226;
        }
        goto LABEL_139;
      }
      v57 = SetDisplayConfigHandleBrokerProvidedPaths(
              v140,
              0,
              v123,
              v130,
              v136,
              v116,
              (enum _DXGK_DIAG_SDC_STAGE *)&v107);
    }
    LODWORD(v27) = v57;
    if ( v57 < 0 )
      goto LABEL_226;
LABEL_139:
    if ( v116[0] )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
        10733637LL,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
        0,
        3);
      LODWORD(v27) = SetDisplayConfigHandlePreferredScaling(v136[0], (enum _DXGK_DIAG_SDC_STAGE *)&v107);
      if ( (int)v27 < 0 )
        goto LABEL_226;
    }
    LODWORD(v27) = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C02966F0)(
                     256LL,
                     v136[0],
                     0LL);
    if ( (int)v27 < 0 )
    {
      v107 = 8;
      goto LABEL_226;
    }
    v38 = 1;
    v129 = 1;
LABEL_114:
    if ( (v20 & 0x800) != 0 )
    {
      *(_WORD *)v116 = 0;
      PathPersistentMonitorsIfNeeded = CreatePathPersistentMonitorsIfNeeded(v44, v136[0], (unsigned __int16 *)v116);
      LODWORD(v27) = PathPersistentMonitorsIfNeeded;
      if ( PathPersistentMonitorsIfNeeded < 0 )
      {
        WdLogSingleEntry1(2LL, PathPersistentMonitorsIfNeeded);
        v107 = 10;
        goto LABEL_226;
      }
      v27 = (int)((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C0296710)(
                   0x80000000LL,
                   v136[0]);
      if ( (_DWORD)v27 == -1073741266 )
      {
        WdLogSingleEntry2(4LL, v37, -1073741266LL);
        v107 = 23;
        goto LABEL_226;
      }
      if ( (int)v27 < 0 )
      {
        WdLogSingleEntry1(2LL, v27);
        v107 = 22;
        goto LABEL_226;
      }
      if ( *(_WORD *)v116 )
      {
        WdLogSingleEntry2(3LL, v37, v27);
        LODWORD(v27) = -1073741266;
        goto LABEL_226;
      }
    }
    v59 = GetCcdRawmodeFlag() | 0x8000;
    if ( (v122 & 0x20) != 0 && (!*((_QWORD *)v132 + 4) || *((_DWORD *)v132 + 2)) )
      v59 |= 0x20000u;
    v60 = v59;
    LODWORD(v60) = v59 | 0x1000000;
    if ( !v120 )
      v60 = v59;
    v61 = qword_1C02966F8(v60, v136[0]);
    LODWORD(v27) = v61;
    if ( v61 < 0 )
    {
      WdLogSingleEntry2(4LL, v136[0], v61);
      v107 = 11;
      v18 = 7;
      goto LABEL_226;
    }
    if ( !v131 )
    {
      if ( (v20 & 0x40) != 0 )
      {
        v77 = v119;
        v19 = 0;
        v121 = 0;
        v117 = 0;
        goto LABEL_204;
      }
      WdLogSingleEntry1(1LL, v20);
      v107 = 21;
LABEL_225:
      LODWORD(v27) = -1073741811;
      goto LABEL_226;
    }
    *(_DWORD *)v116 = GetPathsModality(v62, &v136[1], 1048640LL);
    LODWORD(v27) = *(_DWORD *)v116;
    if ( *(int *)v116 < 0 )
    {
      v107 = 13;
      v18 = 7;
      goto LABEL_226;
    }
    v63 = v20 & 0x1100;
    v134 = v63;
    v64 = (16 * (v20 & 0x1000)) | 0x4000;
    if ( (v20 & 0x1100) == 0 )
      v64 = 16 * (v20 & 0x1000);
    v65 = v63 != 0;
    if ( v64 )
    {
      *(_DWORD *)v116 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C02966F0)(
                          v64,
                          v136[0],
                          0LL);
      LODWORD(v27) = *(_DWORD *)v116;
      if ( *(int *)v116 < 0 )
      {
        v19 = v121;
        v107 = 14;
        goto LABEL_226;
      }
    }
    if ( (v122 & 0x10) != 0 )
      v64 |= 0x400000u;
    v66 = gpGraphicsDeviceList;
    v67 = v64 | 0x1000000;
    v68 = 0;
    if ( !v120 )
      v67 = v64;
    while ( v66 )
    {
      v21 = (*((_DWORD *)v66 + 40) & 0x800000) == 0;
      v69 = v68 + 1;
      v66 = (wchar_t *)*((_QWORD *)v66 + 16);
      if ( v21 )
        v69 = v68;
      v68 = v69;
    }
    v70 = 0LL;
    if ( v68 )
    {
      Pool2 = ExAllocatePool2(256LL, 76LL * v68);
      v70 = Pool2;
      if ( Pool2 )
      {
        v72 = gpGraphicsDeviceList;
        v73 = 0;
        if ( gpGraphicsDeviceList )
        {
          do
          {
            if ( (*((_DWORD *)v72 + 40) & 0x800000) != 0 )
            {
              v74 = 76LL * v73++;
              *(_DWORD *)(v74 + Pool2) = *((_DWORD *)v72 + 62);
              *(_DWORD *)(v74 + Pool2 + 4) = *((_DWORD *)v72 + 63);
              *(_DWORD *)(v74 + Pool2 + 8) = *((_DWORD *)v72 + 64);
            }
            v72 = (wchar_t *)*((_QWORD *)v72 + 16);
          }
          while ( v72 );
          v63 = v134;
        }
      }
    }
    DisplayScenarioJournalSetExpectedPathModality(
      296 * (unsigned int)*((unsigned __int16 *)v136[0] + 10),
      *((unsigned __int16 *)v136[0] + 10),
      (char *)v136[0] + 56,
      v68,
      v70);
    LOBYTE(v75) = v65;
    v76 = v126;
    v77 = v119;
    v78 = ApplyPathsModality(
            v136[0],
            v67,
            v75,
            (_DWORD)v142,
            (__int64)v119,
            (__int64)&v113,
            (__int64)v126,
            (__int64)v116,
            (__int64)&v107,
            v143);
    v133 = v78;
    v121 = v78;
    v79 = v78;
    v117 = v78;
    if ( v78 < 0 )
    {
      v18 = 5;
      LODWORD(v27) = *(_DWORD *)v116;
      v19 = v121;
      v112 = v113;
      goto LABEL_100;
    }
    if ( v78 == 1 )
      WdLogSingleEntry0(1LL);
    LODWORD(v27) = *(_DWORD *)v116;
    if ( *(int *)v116 < 0 )
      WdLogSingleEntry0(1LL);
    v112 = v113;
    if ( v113 )
      WdLogSingleEntry0(1LL);
    if ( v79 == 2 )
    {
      if ( v63 || *v76 )
        WdLogSingleEntry0(1LL);
      v19 = v121;
      v80 = 1;
      v36 = v106;
      v109 = 1;
      v108 = 1;
      v38 = v129;
      goto LABEL_205;
    }
    if ( !*v76 )
      WdLogSingleEntry0(1LL);
    v38 = v129;
    v77 = 0LL;
    v19 = v121;
    v36 = v106;
    v119 = 0LL;
LABEL_204:
    v80 = v109;
LABEL_205:
    if ( !v36 )
    {
      if ( (int)v27 < 0 )
      {
        v82 = 17;
        goto LABEL_222;
      }
LABEL_220:
      v82 = 18;
LABEL_222:
      v107 = v82;
      v18 = ((int)v27 >= 0) + 9;
      goto LABEL_226;
    }
    v81 = ((__int64 (__fastcall *)(BOOL, struct D3DKMT_GETPATHSMODALITY *))qword_1C0296710)(v38, v136[0]);
    LODWORD(v27) = v81;
    if ( !a6 )
    {
      if ( v81 < 0 )
      {
        WdLogSingleEntry1(2LL, v81);
        LODWORD(v27) = 0;
      }
      goto LABEL_220;
    }
    if ( v81 != -1073741266 )
    {
      if ( v81 < 0 )
      {
        v107 = 29;
        v18 = 9;
        LODWORD(v27) = 0;
        goto LABEL_226;
      }
      goto LABEL_220;
    }
    if ( (v20 & 0x10) != 0 )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry2(4LL, v141, -1073741266LL);
    if ( !v80 )
    {
      if ( v77 )
        WdLogSingleEntry0(1LL);
      v111 = 1;
      v119 = *v126;
      *v126 = 0LL;
    }
    v107 = 24;
    v18 = 9;
LABEL_226:
    v83 = ++v124;
    if ( (_DWORD)v27 == -1073741266 )
    {
      if ( !v114 && v83 < 4 )
      {
        v84 = 3221226030LL;
        goto LABEL_233;
      }
    }
    else if ( (int)v27 >= 0 )
    {
      v29 = v119;
      goto LABEL_256;
    }
    if ( !v115 )
      goto LABEL_49;
    v114 = 1;
    v36 = 0;
    v84 = (unsigned int)v27;
    v106 = 0;
LABEL_233:
    DisplayScenarioJournalRetry(v84);
  }
  if ( v128 != 15 )
    WdLogSingleEntry0(1LL);
  if ( v36 )
    WdLogSingleEntry0(1LL);
  if ( v125 < 6 )
  {
    v39 = v125;
    v40 = (const struct _RETRY_MODE *)((char *)&unk_1C02521B0 + 12 * v125);
    DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v40 + 1), *((unsigned int *)v40 + 2), 0LL);
    if ( *(_BYTE *)v40 )
    {
      v127 = 0;
      v125 = v39 + 1;
      LODWORD(v27) = GetPathsModality(v41, v136, 15LL);
    }
    else
    {
      v42 = v127++;
      LODWORD(v27) = DrvCreatePathModalityFromAllPaths(&v137, v42, v136);
      if ( (int)v27 >= 0 )
      {
        if ( *((_WORD *)v136[0] + 10) != 1 )
          WdLogSingleEntry0(1LL);
      }
      else
      {
        ++v125;
        v127 = 0;
      }
    }
    if ( (int)v27 < 0 )
    {
      v107 = 2;
      goto LABEL_226;
    }
    v43 = DrvFunctionalizeBaseVidMode(v40, v136[0]);
    LODWORD(v27) = v43;
    if ( v43 < 0 )
    {
      WdLogSingleEntry1(2LL, v43);
      v107 = 2;
      goto LABEL_226;
    }
LABEL_113:
    v37 = v141;
    goto LABEL_114;
  }
  if ( (int)v27 >= 0 )
  {
    WdLogSingleEntry0(1LL);
    goto LABEL_49;
  }
  v29 = v119;
LABEL_244:
  v90 = v111;
  if ( v111 )
  {
    v107 = 29;
    LODWORD(v27) = 0;
    v18 = 9;
    v117 = 0;
    v19 = 0;
  }
  if ( (int)v27 >= 0 )
    goto LABEL_257;
  v17 = v119;
LABEL_248:
  v85 = v126;
LABEL_249:
  if ( !v115 )
    goto LABEL_268;
  if ( a6 )
    WdLogSingleEntry0(1LL);
  v91 = DrvChangeDisplayFallback(v142, BYTE1(v20) & 1, 1u, v17, v85, (enum _DXGK_DIAG_SDC_STAGE *)&v107, &v108, &v117);
  v32 = 0LL;
  v27 = v91;
  if ( v91 >= 0 )
  {
    v18 = 10;
    v107 = 31;
    goto LABEL_254;
  }
  WdLogSingleEntry0(1LL);
  if ( byte_1C0296A20 )
  {
LABEL_254:
    v31 = v108;
    v19 = v117;
  }
  else
  {
    v19 = v117;
    LOBYTE(v105) = 0;
    byte_1C0296A20 = 1;
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, int))qword_1C0296930)(
      400LL,
      22LL,
      v27,
      v117,
      v107,
      v105);
    v31 = v108;
  }
LABEL_269:
  if ( (_DWORD)v27 == -1073741811 )
    goto LABEL_283;
LABEL_270:
  FreePathsModality(v136[1]);
  v136[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality(&v136[1]) < 0 )
    goto LABEL_279;
  DisplayScenarioJournalSetActualPathModality(
    296 * (unsigned int)*((unsigned __int16 *)v136[1] + 10),
    *((unsigned __int16 *)v136[1] + 10),
    (char *)v136[1] + 56);
  v93 = v136[1];
  v94 = 0;
  if ( !*((_WORD *)v136[1] + 10) )
    goto LABEL_279;
  while ( 2 )
  {
    if ( (*(_QWORD *)((_BYTE *)v93 + v32 + 56) & 0x8000001000000000uLL) != 0x8000000000000000uLL )
    {
LABEL_276:
      ++v94;
      v32 += 296LL;
      if ( v94 >= *((unsigned __int16 *)v93 + 10) )
        goto LABEL_279;
      continue;
    }
    break;
  }
  v152[0] = 9;
  v155 = 0LL;
  v156 = 0;
  v152[1] = 32;
  v153 = *(_QWORD *)((char *)v93 + v32 + 72);
  v154 = *(_DWORD *)((char *)v93 + v32 + 84);
  if ( (int)DrvDisplayConfigGetDeviceInfo(v152) < 0 || (v155 & 1) == 0 )
  {
    v93 = v136[1];
    goto LABEL_276;
  }
  v118 = 1;
LABEL_279:
  if ( *v126 )
  {
    v95 = *((_QWORD *)*v126 + 5);
    if ( v95 )
    {
      v96 = *(_QWORD *)(v95 + 2552);
      if ( ((v96 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v96 + 160) & 0x2000000) != 0);
    }
  }
LABEL_283:
  if ( v146 )
    *v146 = v124;
  if ( v147 )
    *v147 = v107;
  if ( v150 )
  {
    v97 = !v111 && v31;
    *v150 = v97;
  }
  v98 = v112;
  if ( v148 )
    *v148 = v112;
  v99 = v122;
  if ( (v122 & 0x20) != 0 )
  {
    v100 = v132;
    *((_DWORD *)v132 + 12) = v19;
    *((_DWORD *)v100 + 13) = v18;
    if ( (int)v27 >= 0 != v19 >= 0 )
      WdLogSingleEntry0(1LL);
    v151[0] = 0;
    v151[1] = 16;
    v151[2] = v19;
    v151[3] = v18;
    DisplayScenarioJournalSetSpecializedData(v151);
  }
  v101 = v144;
  v21 = (v99 & 0x40) == 0;
  v102 = v124;
  if ( v21 )
    LogDiagSDC(v123, (__int64)v130, v20, v27, v124, v107, v149, v31, v144);
  if ( gpGdiSharedMemory )
    DisplayScenarioJournalSetUniqueness(
      *((unsigned int *)gpGdiSharedMemory + 393256),
      *((unsigned int *)gpGdiSharedMemory + 393252));
  LOBYTE(v26) = v31;
  LOBYTE(v105) = v118;
  LOBYTE(v104) = v98;
  DisplayScenarioJournalFinalize((unsigned int)v27, (unsigned int)v107, v102, v26, v104, v105, v133, v143, v101);
  WdLogSingleEntry1(4LL, (int)v27);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v135);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v145, 5LL);
  return (unsigned int)v27;
}
