/*
 * XREFs of DrvSetDisplayConfig @ 0x1C0019050
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C001845C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C00189C0 (DrvChangeDisplaySettings.c)
 *     xxxUserSetDisplayConfig @ 0x1C0075A10 (xxxUserSetDisplayConfig.c)
 *     InitVideo @ 0x1C0099A18 (InitVideo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0137A14 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ApplyPathsModality @ 0x1C000FF74 (ApplyPathsModality.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00161AC (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0018CC4 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0018D30 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0018D64 (--0AUTO_TGO@@IEAA@XZ.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C001DD40 (DrvDisplayConfigGetDeviceInfo.c)
 *     UserIsWddmConnectedSession @ 0x1C001DEB0 (UserIsWddmConnectedSession.c)
 *     DrvIsWddmDriverPresent @ 0x1C001F138 (DrvIsWddmDriverPresent.c)
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C006E2F0 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     LogDiagSDC @ 0x1C0075E24 (LogDiagSDC.c)
 *     ?DispBrokerGetCurrentMode@@YA?AW4DISPBROKER_MODE@@XZ @ 0x1C0099FF4 (-DispBrokerGetCurrentMode@@YA-AW4DISPBROKER_MODE@@XZ.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C009D9AC (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C009DB74 (GetPathsModality.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00ADCA8 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C00B18E4 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00B3D5C (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00B404C (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C3B40 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage @ 0x1C00CADEC (Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0142C5C (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C014326C (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0143EF4 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0144184 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01459BC (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0145F70 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C014615C (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
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
        int *a12,
        char *a13,
        _BYTE *a14,
        __int64 a15)
{
  struct _MDEV *v16; // r13
  __int64 v17; // r15
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  char v24; // r14
  __int64 v25; // rdx
  int IsWddmConnectedSession; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // ebx
  char v36; // r12
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  bool v40; // di
  __int64 v41; // rax
  __int64 v42; // r13
  BOOL v43; // r12d
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // ebx
  const struct _RETRY_MODE *v47; // rdi
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rax
  int v54; // r10d
  struct _DISPLAYCONFIG_CDS_REQUEST *v55; // rdx
  __int64 v56; // rcx
  bool v57; // di
  __int64 v58; // rax
  __int64 v59; // rcx
  unsigned int v60; // ebx
  int v61; // eax
  int v62; // ebx
  __int64 v63; // rax
  struct D3DKMT_GETPATHSMODALITY *v64; // rcx
  __int64 v65; // rax
  struct _DISPLAYCONFIG_CDS_REQUEST *v66; // r12
  int PathPersistentMonitorsIfNeeded; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // eax
  int v72; // eax
  unsigned int v73; // r12d
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned int v81; // eax
  __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rax
  int v86; // r12d
  unsigned int v87; // edi
  int v88; // ecx
  unsigned int v89; // esi
  unsigned int v90; // r15d
  wchar_t *v91; // rcx
  unsigned int v92; // eax
  char *v93; // rdi
  char *PoolWithTag; // rax
  wchar_t *v95; // rdx
  unsigned int i; // r8d
  __int64 v97; // rcx
  struct _MDEV **v98; // rdi
  struct _MDEV *v99; // rsi
  int v100; // eax
  int v101; // r15d
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  int v105; // eax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rax
  struct _MDEV **v116; // r12
  int v117; // edi
  int v118; // eax
  char v119; // al
  __int64 v120; // rax
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  struct _MDEV **v124; // r12
  struct _MDEV *v125; // rdi
  __int64 v126; // rax
  int v127; // edx
  struct D3DKMT_GETPATHSMODALITY *v128; // rcx
  int v129; // esi
  __int64 v130; // rdi
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rcx
  unsigned int v134; // r12d
  char v135; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v136; // rax
  __int64 v137; // rdx
  _BOOL8 v138; // rcx
  bool v139; // sf
  __int64 v140; // rax
  __int64 v141; // rax
  int v143; // [rsp+20h] [rbp-E0h]
  int v144; // [rsp+28h] [rbp-D8h]
  char v145; // [rsp+40h] [rbp-C0h]
  int v146; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v147; // [rsp+48h] [rbp-B8h] BYREF
  char v148; // [rsp+49h] [rbp-B7h]
  char v149; // [rsp+4Ah] [rbp-B6h]
  char v150; // [rsp+4Bh] [rbp-B5h] BYREF
  bool v151[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v152; // [rsp+50h] [rbp-B0h]
  bool v153; // [rsp+54h] [rbp-ACh]
  bool v154; // [rsp+55h] [rbp-ABh]
  char v155; // [rsp+56h] [rbp-AAh]
  int v156; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v157; // [rsp+5Ch] [rbp-A4h]
  unsigned int v158; // [rsp+60h] [rbp-A0h]
  unsigned int v159; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 v160[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v161; // [rsp+6Ch] [rbp-94h]
  unsigned int v162; // [rsp+70h] [rbp-90h]
  int v163; // [rsp+74h] [rbp-8Ch]
  unsigned int v164; // [rsp+78h] [rbp-88h]
  int v165; // [rsp+7Ch] [rbp-84h]
  struct _MDEV **v166; // [rsp+80h] [rbp-80h]
  unsigned int v167; // [rsp+88h] [rbp-78h]
  struct _MDEV *v168; // [rsp+90h] [rbp-70h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v169; // [rsp+98h] [rbp-68h]
  struct _DISPLAYCONFIG_CDS_REQUEST *v170; // [rsp+A0h] [rbp-60h]
  int v171; // [rsp+A8h] [rbp-58h]
  __int64 v172; // [rsp+B0h] [rbp-50h]
  _QWORD v173[6]; // [rsp+C0h] [rbp-40h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v174[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v175; // [rsp+100h] [rbp+0h] BYREF
  char v176; // [rsp+108h] [rbp+8h]
  __int64 v177; // [rsp+110h] [rbp+10h]
  void *v178; // [rsp+118h] [rbp+18h] BYREF
  int v179; // [rsp+120h] [rbp+20h]
  void *v180; // [rsp+128h] [rbp+28h]
  __int64 v181; // [rsp+130h] [rbp+30h]
  void *v182; // [rsp+138h] [rbp+38h] BYREF
  unsigned int *v183; // [rsp+140h] [rbp+40h]
  int *v184; // [rsp+148h] [rbp+48h]
  char *v185; // [rsp+150h] [rbp+50h]
  _BYTE *v186; // [rsp+158h] [rbp+58h]
  __int64 v187; // [rsp+160h] [rbp+60h]
  _DWORD v188[4]; // [rsp+168h] [rbp+68h] BYREF
  _DWORD v189[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v190; // [rsp+180h] [rbp+80h]
  int v191; // [rsp+188h] [rbp+88h]
  __int64 v192; // [rsp+18Ch] [rbp+8Ch]
  int v193; // [rsp+194h] [rbp+94h]
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  v16 = a9;
  v180 = a5;
  v183 = a11;
  v184 = a12;
  v186 = a14;
  v181 = a15;
  v159 = a1;
  v185 = a13;
  v17 = a3;
  v158 = a4;
  v18 = 0;
  v153 = gbBaseVideo != 0;
  v157 = a3;
  v171 = -1;
  v169 = a2;
  v170 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a8;
  v168 = a9;
  v166 = a10;
  v161 = gbBaseVideo != 0 ? 3 : 0;
  v164 = 0;
  v149 = 0;
  v147 = 0;
  v150 = 0;
  v146 = 0;
  v156 = -5;
  v152 = 0;
  v162 = 0;
  v155 = 0;
  v19 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v19 + 24) = v17;
  WdLogEvent5_WdEvent(v19);
  v172 = MEMORY[0xFFFFF78000000320];
  v187 = v172 * KeQueryTimeIncrement();
  DisplayScenarioJournalBegin((unsigned int)v17, a4, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(200 * v159, v159, v169);
  v182 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v182, 4LL);
  v22 = gOldModeChange == 0;
  *a10 = 0LL;
  if ( !v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v21, v20);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (v17 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v24 = 1;
  v154 = (a4 & 2) != 0 && (v17 & 0x88F) == 0x88F;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v173);
  v173[0] = &off_1C0203668;
  v177 = v181;
  *(_OWORD *)v174 = 0LL;
  v175 = 0LL;
  v176 = 0;
  v178 = 0LL;
  IsWddmConnectedSession = UserIsWddmConnectedSession(0LL, v25);
  v28 = 0LL;
  if ( !IsWddmConnectedSession || !(unsigned int)DrvIsWddmDriverPresent(v27, 0LL) || (a4 & 1) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
    {
      v115 = WdLogNewEntry5_WdAssertion(v27, v28);
      WdLogEvent5_WdAssertion(v115);
    }
    v116 = v166;
    v117 = a4 & 1;
    LODWORD(v32) = DrvChangeDisplayFallback(
                     v180,
                     BYTE1(v17) & 1,
                     a4 & 1,
                     a9,
                     v166,
                     (enum _DXGK_DIAG_SDC_STAGE *)&v146,
                     &v147,
                     &v156);
    if ( (int)v32 < 0 )
    {
LABEL_240:
      if ( v154 )
      {
        if ( a6 )
        {
          v120 = WdLogNewEntry5_WdAssertion(v30, v29);
          WdLogEvent5_WdAssertion(v120);
        }
        LODWORD(v17) = v157;
        v121 = DrvChangeDisplayFallback(
                 v180,
                 BYTE1(v157) & 1,
                 1u,
                 v16,
                 v116,
                 (enum _DXGK_DIAG_SDC_STAGE *)&v146,
                 &v147,
                 &v156);
        v32 = v121;
        if ( v121 < 0 )
        {
          v131 = WdLogNewEntry5_WdAssertion(v123, v122);
          WdLogEvent5_WdAssertion(v131);
          if ( !byte_1C0251C50 )
          {
            LOBYTE(v144) = 0;
            byte_1C0251C50 = 1;
            ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, int))qword_1C0251B60)(
              400LL,
              22LL,
              v32,
              v156,
              v146,
              v144);
          }
        }
        else
        {
          v18 = 10;
          v146 = 31;
          v152 = 10;
        }
LABEL_254:
        if ( (_DWORD)v32 == -1073741811 )
          goto LABEL_272;
        goto LABEL_255;
      }
LABEL_253:
      LODWORD(v17) = v157;
      goto LABEL_254;
    }
    v118 = v146;
    v30 = 30LL;
    if ( v117 )
      v118 = 30;
    v146 = v118;
LABEL_234:
    if ( (int)v32 >= 0 )
    {
LABEL_245:
      v119 = v149;
    }
    else
    {
LABEL_235:
      v119 = v149;
      if ( v149 )
      {
        v18 = 9;
        v146 = 29;
        v152 = 9;
        LODWORD(v32) = 0;
        v156 = 0;
      }
      if ( (int)v32 < 0 )
      {
        v16 = v168;
        goto LABEL_239;
      }
    }
    v124 = v166;
    if ( v119 && !*v166 )
    {
      v125 = v168;
      if ( !v168 )
      {
        v126 = WdLogNewEntry5_WdAssertion(v30, v29);
        WdLogEvent5_WdAssertion(v126);
      }
      v127 = v156;
      v22 = v156 == 2;
      *v124 = v125;
      if ( v22 )
        v127 = 0;
      v156 = v127;
    }
    goto LABEL_253;
  }
  if ( (v17 & 0x40000000) != 0 )
  {
    Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage();
    if ( (v17 & 0x10000) != 0 )
    {
      v146 = 37;
LABEL_16:
      LODWORD(v32) = -1073741811;
LABEL_239:
      v116 = v166;
      goto LABEL_240;
    }
    v33 = 0LL;
    if ( gbBaseVideo )
    {
      v34 = WdLogNewEntry5_WdAssertion(0LL, v29);
      WdLogEvent5_WdAssertion(v34);
    }
    LODWORD(v32) = GetPathsModality(v33, v174, 15LL);
    if ( (int)v32 < 0 )
    {
      v146 = 2;
      goto LABEL_234;
    }
    v35 = *((_DWORD *)v174[0] + 8) & 0xF;
    if ( v35 == 1 || v35 == 8 )
    {
      LODWORD(v32) = -1073741637;
      v146 = 25;
      goto LABEL_239;
    }
    LOBYTE(v30) = 1;
    v148 = 1;
    LOBYTE(v29) = v35 == 4;
    v36 = 1;
    ((void (__fastcall *)(__int64, __int64))qword_1C0251A88)(v30, v29);
    if ( v35 == 4 )
    {
      v147 = 1;
      LODWORD(v32) = 0;
      v146 = 26;
      goto LABEL_255;
    }
    LODWORD(v17) = 132;
    goto LABEL_38;
  }
  if ( (int)v17 >= 0 )
  {
    if ( (v17 & 0xF) != 0xF || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) != (_DWORD)v28 )
    {
      if ( (v17 & 0x200) != 0
        || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) != (_DWORD)v28
        || (v17 & 0x1F) != 0 && (v17 & 0x40) == 0 )
      {
        v36 = v28;
        v148 = v28;
        ((void (__fastcall *)(_QWORD))qword_1C0251A88)(0LL);
      }
      else
      {
        v36 = ((__int64 (*)(void))qword_1C0251A90)();
        v148 = v36;
      }
      goto LABEL_46;
    }
    v148 = ((__int64 (*)(void))qword_1C0251A90)();
    v36 = v148;
    if ( !v148 )
    {
LABEL_46:
      v163 = v17 & 0x10000;
      v179 = v17 & 0x80;
      if ( (v17 & 0x10000) != 0 )
      {
        LODWORD(v32) = ((__int64 (__fastcall *)(__int64, _QWORD, void **))qword_1C0251B68)(
                         a7,
                         (v17 & 0x80) != 0 ? 2031616 : 0x20000,
                         &v178);
        if ( (int)v32 < 0 )
        {
          v146 = 42;
          goto LABEL_234;
        }
      }
      LODWORD(v32) = ((__int64 (*)(void))qword_1C0251980)();
      if ( (int)v32 < 0 )
      {
        v18 = 6;
        v146 = 12;
        v152 = 6;
        goto LABEL_234;
      }
      v176 = 1;
      if ( (v17 & 0x80) != 0 )
      {
        v37 = 1LL;
        if ( !v36 && (v17 & 0xF) != 0 && (v158 & 0x20) == 0 )
          v37 = 3LL;
        v38 = ((__int64 (__fastcall *)(__int64))qword_1C0251998)(v37);
        v32 = v38;
        if ( v38 < 0 )
        {
          v39 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v39 + 24) = v32;
          WdLogEvent5_WdEvent(v39);
          DrvDxgkLogCodePointPacket(4LL, (unsigned int)v32, 0LL);
          LODWORD(v32) = 0;
        }
      }
      v40 = (v17 & 0x240) == 512;
      v167 = v17 & 0xF;
      v145 = v40;
      while ( 1 )
      {
        v41 = WdLogNewEntry5_WdEvent();
        v42 = v164;
        v172 = v164;
        *(_QWORD *)(v41 + 24) = v164;
        *(_QWORD *)(v41 + 32) = (int)v32;
        WdLogEvent5_WdEvent(v41);
        v43 = 0;
        v165 = 0;
        v150 = 0;
        v147 = 0;
        FreePathsModality(v174[0]);
        FreePathsModality(v174[1]);
        v174[1] = 0LL;
        v174[0] = 0LL;
        if ( v153 )
        {
          if ( v167 != 15 )
          {
            v44 = WdLogNewEntry5_WdAssertion(v30, v29);
            WdLogEvent5_WdAssertion(v44);
          }
          if ( v40 )
          {
            v45 = WdLogNewEntry5_WdAssertion(v30, v29);
            WdLogEvent5_WdAssertion(v45);
          }
          if ( v161 >= 6 )
          {
            if ( (int)v32 >= 0 )
            {
              v114 = WdLogNewEntry5_WdAssertion(v30, v29);
              WdLogEvent5_WdAssertion(v114);
              goto LABEL_234;
            }
            goto LABEL_235;
          }
          v46 = v161;
          v47 = (const struct _RETRY_MODE *)((char *)&unk_1C0210F40 + 12 * v161);
          DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v47 + 1), *((unsigned int *)v47 + 2));
          if ( *(_BYTE *)v47 )
          {
            v162 = 0;
            v161 = v46 + 1;
            LODWORD(v32) = GetPathsModality(v48, v174, 15LL);
          }
          else
          {
            v49 = DrvCreatePathModalityFromAllPaths(&v175, v162++, v174);
            LODWORD(v32) = v49;
            if ( v49 >= 0 )
            {
              if ( *((_WORD *)v174[0] + 10) != 1 )
              {
                v50 = WdLogNewEntry5_WdAssertion(v30, v29);
                WdLogEvent5_WdAssertion(v50);
              }
            }
            else
            {
              ++v161;
              v162 = 0;
            }
          }
          if ( (int)v32 < 0 )
            goto LABEL_72;
          v51 = DrvFunctionalizeBaseVidMode(v47, v174[0]);
          v32 = v51;
          if ( v51 < 0 )
          {
            v53 = WdLogNewEntry5_WdError(v30, v52);
            *(_QWORD *)(v53 + 24) = v32;
            WdLogEvent5_WdError(v53);
            v146 = 2;
LABEL_76:
            v40 = v145;
            goto LABEL_218;
          }
LABEL_110:
          v40 = v145;
          goto LABEL_111;
        }
        if ( v167 )
        {
          Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage();
          v54 = 0;
          if ( v163 )
          {
            LODWORD(v32) = -1073741811;
            v146 = 39;
            goto LABEL_218;
          }
          v55 = v170;
          v56 = v158 & 0x20;
          v57 = (v158 & 0x20) != 0 && *((_QWORD *)v170 + 4);
          if ( (v158 & 0x800) != 0 || !(unsigned int)DispBrokerGetCurrentMode(v56, v170) )
          {
            v61 = (_DWORD)v56 != 0 ? 0x9000 : 0;
            if ( v57 && *((_DWORD *)v55 + 5) == v54 )
            {
              v59 = v167;
              v62 = 0x2000000;
            }
            else
            {
              v59 = v167;
              v62 = v167;
            }
            v60 = v61 | v62;
            if ( (v60 & 0x2000000) != 0 && (_DWORD)v59 != 15 )
            {
              v63 = WdLogNewEntry5_WdAssertion(v59, v55);
              WdLogEvent5_WdAssertion(v63);
            }
          }
          else
          {
            if ( v57 )
            {
              v58 = WdLogNewEntry5_WdAssertion(v56, v55);
              WdLogEvent5_WdAssertion(v58);
            }
            DrvDxgkLogCodePointPacket(127LL, 0LL, 0LL);
            v60 = 64;
          }
          LODWORD(v32) = GetPathsModality(v59, v174, v60);
          if ( (int)v32 < 0 )
          {
            v18 = 7;
            v152 = 7;
LABEL_72:
            v146 = 2;
LABEL_73:
            v40 = v145;
            goto LABEL_218;
          }
          v64 = v174[0];
          if ( !*((_WORD *)v174[0] + 10) )
          {
            v65 = WdLogNewEntry5_WdAssertion(v174[0], v29);
            WdLogEvent5_WdAssertion(v65);
            v64 = v174[0];
          }
          if ( v148 || (v145 = 1, (v17 & 0x40) != 0) )
            v145 = 0;
          DrvSetDisplayConfigApplyDeviceHack(v64);
          if ( v57 )
          {
            v66 = v170;
            if ( !*((_DWORD *)v170 + 5) || (v145 = 1, !*((_DWORD *)v170 + 6)) )
              v145 = 0;
            LODWORD(v32) = DrvValidateAndApplyDevMode(v170, v174);
            if ( (int)v32 < 0 )
            {
              v18 = *((_DWORD *)v66 + 13);
              v156 = *((_DWORD *)v66 + 12);
              v71 = 2;
              v152 = v18;
              v30 = 23LL;
              if ( (_DWORD)v32 == -1073741266 )
                v71 = 23;
              v146 = v71;
              goto LABEL_73;
            }
            v43 = *((_DWORD *)v170 + 5) != 0;
            v165 = v43;
          }
          v18 = 10;
          v152 = 10;
          goto LABEL_110;
        }
        if ( (v17 & 0x10) != 0 )
        {
          Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage();
          if ( v163 )
          {
            LODWORD(v32) = -1073741811;
            v146 = 40;
            goto LABEL_218;
          }
          LODWORD(v32) = AllocatePathModalityForDisplayConfig(v159, v169, v174);
          if ( (int)v32 < 0 )
          {
            v146 = 3;
            goto LABEL_218;
          }
          LODWORD(v32) = ConvertDisplayConfigToPathModality(v159, v169, v174[0], 0LL);
          if ( (int)v32 < 0 )
          {
            v146 = 4;
            goto LABEL_218;
          }
          LODWORD(v32) = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C0251900)(
                           v17 & 0x2000 | 0x2F,
                           v174[0],
                           0LL);
          if ( (int)v32 < 0 )
          {
            v146 = 5;
            goto LABEL_218;
          }
          if ( v148 || (v17 & 0x40) != 0 )
          {
            v40 = 0;
            v145 = 0;
          }
          else
          {
            v40 = 1;
            v145 = 1;
          }
          goto LABEL_111;
        }
        if ( (v17 & 0x20) == 0 )
        {
          v111 = WdLogNewEntry5_WdAssertion(v30, v29);
          *(_QWORD *)(v111 + 24) = (unsigned int)v17;
          WdLogEvent5_WdAssertion(v111);
          v146 = 9;
          goto LABEL_217;
        }
        v151[0] = 0;
        if ( (v158 & 8) != 0 )
        {
          v72 = SetDisplayConfigHandleOnlyProvidedPath(v169, v174, v151, (enum _DXGK_DIAG_SDC_STAGE *)&v146);
        }
        else
        {
          if ( !v163 )
          {
            v73 = v159;
            LODWORD(v32) = AllocatePathModalityForDisplayConfig(v159, v169, v174);
            if ( (int)v32 < 0 )
            {
              v146 = 6;
              goto LABEL_218;
            }
            LODWORD(v32) = ConvertDisplayConfigToPathModality(v73, v169, v174[0], v151);
            if ( (int)v32 < 0 )
            {
              v146 = 7;
              goto LABEL_218;
            }
            goto LABEL_136;
          }
          v72 = SetDisplayConfigHandleBrokerProvidedPaths(
                  v178,
                  0,
                  v159,
                  v169,
                  v174,
                  v151,
                  (enum _DXGK_DIAG_SDC_STAGE *)&v146);
        }
        LODWORD(v32) = v72;
        if ( v72 < 0 )
          goto LABEL_218;
LABEL_136:
        if ( v151[0] )
        {
          Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage();
          LODWORD(v32) = SetDisplayConfigHandlePreferredScaling(v174[0], (enum _DXGK_DIAG_SDC_STAGE *)&v146);
          if ( (int)v32 < 0 )
            goto LABEL_218;
        }
        LODWORD(v32) = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C0251900)(
                         256LL,
                         v174[0],
                         0LL);
        if ( (int)v32 < 0 )
        {
          v146 = 8;
          goto LABEL_218;
        }
        v43 = 1;
        v165 = 1;
LABEL_111:
        if ( (v17 & 0x800) != 0 )
        {
          v160[0] = 0;
          PathPersistentMonitorsIfNeeded = CreatePathPersistentMonitorsIfNeeded(v30, v174[0], v160);
          v32 = PathPersistentMonitorsIfNeeded;
          if ( PathPersistentMonitorsIfNeeded < 0 )
          {
            v70 = WdLogNewEntry5_WdError(v69, v68);
            *(_QWORD *)(v70 + 24) = v32;
            WdLogEvent5_WdError(v70);
            v146 = 10;
            goto LABEL_218;
          }
          v74 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C0251920)(
                  0x80000000LL,
                  v174[0]);
          v32 = v74;
          if ( v74 == -1073741266 )
          {
            v78 = WdLogNewEntry5_WdEvent();
            *(_QWORD *)(v78 + 24) = v42;
            *(_QWORD *)(v78 + 32) = -1073741266LL;
            WdLogEvent5_WdEvent(v78);
            v146 = 23;
            goto LABEL_218;
          }
          if ( v74 < 0 )
          {
            v79 = WdLogNewEntry5_WdError(v76, v75);
            *(_QWORD *)(v79 + 24) = v32;
            WdLogEvent5_WdError(v79);
            v146 = 22;
            goto LABEL_218;
          }
          if ( v160[0] )
          {
            v80 = WdLogNewEntry5_WdWarning(v76, v75, v77);
            *(_QWORD *)(v80 + 24) = v42;
            *(_QWORD *)(v80 + 32) = v32;
            WdLogEvent5_WdWarning(v80);
            LODWORD(v32) = -1073741266;
            goto LABEL_218;
          }
        }
        v81 = GetCcdRawmodeFlag() | 0x8000;
        if ( (v158 & 0x20) != 0 && (!*((_QWORD *)v170 + 4) || *((_DWORD *)v170 + 2)) )
          v81 |= 0x20000u;
        v82 = v81;
        LODWORD(v82) = v81 | 0x1000000;
        if ( !v163 )
          v82 = v81;
        v83 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C0251908)(v82, v174[0]);
        v32 = v83;
        if ( v83 < 0 )
        {
          v85 = WdLogNewEntry5_WdEvent();
          *(struct D3DKMT_GETPATHSMODALITY **)(v85 + 24) = v174[0];
          *(_QWORD *)(v85 + 32) = v32;
          WdLogEvent5_WdEvent(v85);
          v18 = 7;
          v146 = 11;
          v152 = 7;
          goto LABEL_218;
        }
        if ( v179 )
        {
          LODWORD(v32) = GetPathsModality(v84, &v174[1], 1048640LL);
          if ( (int)v32 < 0 )
          {
            v146 = 13;
            v18 = 7;
            goto LABEL_162;
          }
          v86 = v17 & 0x1100;
          v87 = (16 * (v17 & 0x1000)) | 0x4000;
          if ( (v17 & 0x1100) == 0 )
            v87 = 16 * (v17 & 0x1000);
          if ( v87 )
          {
            LODWORD(v32) = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C0251900)(
                             v87,
                             v174[0],
                             0LL);
            if ( (int)v32 < 0 )
            {
              v146 = 14;
              goto LABEL_73;
            }
          }
          v88 = v87 | 0x400000;
          v89 = 0;
          if ( (v158 & 0x10) == 0 )
            v88 = v87;
          v90 = v88 | 0x1000000;
          if ( !v163 )
            v90 = v88;
          v91 = gpGraphicsDeviceList;
          while ( v91 )
          {
            v22 = (*((_DWORD *)v91 + 40) & 0x800000) == 0;
            v92 = v89 + 1;
            v91 = (wchar_t *)*((_QWORD *)v91 + 16);
            if ( v22 )
              v92 = v89;
            v89 = v92;
          }
          v93 = 0LL;
          if ( v89 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 76LL * v89, 0x7774656Cu);
            v93 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 76LL * v89);
              v95 = gpGraphicsDeviceList;
              for ( i = 0; v95; v95 = (wchar_t *)*((_QWORD *)v95 + 16) )
              {
                if ( (*((_DWORD *)v95 + 40) & 0x800000) != 0 )
                {
                  v97 = 76LL * i++;
                  *(_DWORD *)&v93[v97] = *((_DWORD *)v95 + 62);
                  *(_DWORD *)&v93[v97 + 4] = *((_DWORD *)v95 + 63);
                  *(_DWORD *)&v93[v97 + 8] = *((_DWORD *)v95 + 64);
                }
              }
            }
            v24 = 1;
          }
          DisplayScenarioJournalSetExpectedPathModality(
            272 * (unsigned int)*((unsigned __int16 *)v174[0] + 10),
            *((unsigned __int16 *)v174[0] + 10),
            (char *)v174[0] + 48,
            v89,
            v93);
          v98 = v166;
          v99 = v168;
          v100 = ApplyPathsModality(
                   (__int64)v174[0],
                   v90,
                   v86 != 0,
                   (__int64)v180,
                   (__int64)v168,
                   &v150,
                   (__int64 *)v166,
                   v181);
          v171 = v100;
          v101 = v100;
          v156 = v100;
          if ( v100 < 0 || v100 == 1 )
          {
            v18 = 5;
            v146 = 16;
            v152 = 5;
            LODWORD(v32) = -1073741823;
            goto LABEL_76;
          }
          if ( v150 )
          {
            v102 = WdLogNewEntry5_WdAssertion(v30, v29);
            WdLogEvent5_WdAssertion(v102);
          }
          if ( v101 == 2 )
          {
            if ( v86 || *v98 )
            {
              v103 = WdLogNewEntry5_WdAssertion(v30, v29);
              WdLogEvent5_WdAssertion(v103);
            }
            v147 = 1;
          }
          else
          {
            if ( !*v98 )
            {
              v104 = WdLogNewEntry5_WdAssertion(v30, v29);
              WdLogEvent5_WdAssertion(v104);
            }
            v99 = 0LL;
            v168 = 0LL;
          }
          LOBYTE(v17) = v157;
          v43 = v165;
          v42 = v172;
          v40 = v145;
        }
        else
        {
          if ( (v17 & 0x40) == 0 )
          {
            v110 = WdLogNewEntry5_WdAssertion(v84, v29);
            *(_QWORD *)(v110 + 24) = (unsigned int)v17;
            WdLogEvent5_WdAssertion(v110);
            v146 = 21;
LABEL_217:
            LODWORD(v32) = -1073741811;
            goto LABEL_218;
          }
          v99 = v168;
          v156 = 0;
        }
        if ( !v40 )
          goto LABEL_204;
        v105 = ((__int64 (__fastcall *)(BOOL, struct D3DKMT_GETPATHSMODALITY *))qword_1C0251920)(v43, v174[0]);
        v32 = v105;
        if ( !a6 )
        {
          if ( v105 < 0 )
          {
            v106 = WdLogNewEntry5_WdError(v30, v29);
            *(_QWORD *)(v106 + 24) = v32;
            WdLogEvent5_WdError(v106);
            LODWORD(v32) = 0;
          }
LABEL_204:
          v30 = (unsigned int)((int)v32 >> 31);
          v146 = v30 + 18;
          v18 = v30 + 10;
LABEL_162:
          v152 = v18;
          goto LABEL_218;
        }
        if ( v105 == -1073741266 )
        {
          if ( (v17 & 0x10) != 0 )
          {
            v107 = WdLogNewEntry5_WdAssertion(v30, v29);
            WdLogEvent5_WdAssertion(v107);
          }
          v108 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v108 + 24) = v42;
          *(_QWORD *)(v108 + 32) = -1073741266LL;
          WdLogEvent5_WdEvent(v108);
          if ( !v147 )
          {
            if ( v99 )
            {
              v109 = WdLogNewEntry5_WdAssertion(v30, v29);
              WdLogEvent5_WdAssertion(v109);
            }
            v30 = (__int64)v166;
            v149 = 1;
            v168 = *v166;
            *v166 = 0LL;
          }
          v146 = 24;
          v18 = 9;
          goto LABEL_162;
        }
        if ( v105 >= 0 )
          goto LABEL_204;
        v18 = 9;
        v146 = 29;
        v152 = 9;
        LODWORD(v32) = 0;
LABEL_218:
        v112 = ++v164;
        if ( (_DWORD)v32 == -1073741266 )
        {
          if ( !v153 && v112 < 4 )
          {
            v113 = 3221226030LL;
            goto LABEL_225;
          }
        }
        else if ( (int)v32 >= 0 )
        {
          goto LABEL_245;
        }
        if ( !v154 )
          goto LABEL_234;
        v153 = 1;
        v40 = 0;
        v145 = 0;
        v113 = (unsigned int)v32;
LABEL_225:
        DisplayScenarioJournalRetry(v113);
        LODWORD(v17) = v157;
      }
    }
    LODWORD(v17) = v17 & 0xFFFFFFF0 | 4;
LABEL_38:
    v157 = v17;
    goto LABEL_46;
  }
  Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage();
  if ( (v17 & 0x10000) != 0 )
  {
    v146 = 38;
    goto LABEL_16;
  }
  v148 = 0;
  v36 = 0;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0251A88)(0LL, 0LL) )
  {
    LODWORD(v17) = 2191;
    goto LABEL_38;
  }
  LODWORD(v32) = 0;
  v147 = 1;
  v146 = 18;
LABEL_255:
  FreePathsModality(v174[1]);
  v174[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality(&v174[1]) >= 0 )
  {
    DisplayScenarioJournalSetActualPathModality(
      272 * (unsigned int)*((unsigned __int16 *)v174[1] + 10),
      *((unsigned __int16 *)v174[1] + 10),
      (char *)v174[1] + 48);
    v128 = v174[1];
    v129 = 0;
    if ( *((_WORD *)v174[1] + 10) )
    {
      v130 = 0LL;
      do
      {
        if ( (*(_QWORD *)((_BYTE *)v128 + v130 + 48) & 0x8000001000000000uLL) == 0x8000000000000000uLL )
        {
          v192 = 0LL;
          v193 = 0;
          v189[0] = 9;
          v189[1] = 32;
          v190 = *(_QWORD *)((char *)v128 + v130 + 64);
          v191 = *(_DWORD *)((char *)v128 + v130 + 76);
          if ( (int)DrvDisplayConfigGetDeviceInfo(v189) >= 0 && (v192 & 1) != 0 )
          {
            v155 = 1;
            break;
          }
          v128 = v174[1];
        }
        ++v129;
        v130 += 272LL;
      }
      while ( v129 < *((unsigned __int16 *)v128 + 10) );
    }
  }
  if ( *v166 )
  {
    v132 = *((_QWORD *)*v166 + 5);
    if ( v132 )
    {
      v133 = *(_QWORD *)(v132 + 2576);
      if ( ((v133 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v133 + 160) & 0x2000000) != 0);
    }
  }
  v18 = v152;
LABEL_272:
  v134 = v164;
  if ( v183 )
    *v183 = v164;
  if ( v184 )
    *v184 = v146;
  if ( v185 )
  {
    if ( v149 || !v147 )
      v24 = 0;
    *v185 = v24;
  }
  if ( v186 )
    *v186 = v150;
  v135 = v158;
  if ( (v158 & 0x20) != 0 )
  {
    v136 = v170;
    v137 = (unsigned int)v156;
    v138 = (int)v32 >= 0;
    v139 = v156 < 0;
    *((_DWORD *)v170 + 12) = v156;
    *((_DWORD *)v136 + 13) = v18;
    if ( v138 != !v139 )
    {
      v140 = WdLogNewEntry5_WdAssertion(v138, v137);
      WdLogEvent5_WdAssertion(v140);
    }
    v188[2] = v156;
    v188[0] = 0;
    v188[1] = 16;
    v188[3] = v18;
    DisplayScenarioJournalSetSpecializedData(v188);
  }
  if ( (v135 & 0x40) == 0 )
    LogDiagSDC(v159, (_DWORD)v169, v17, v32, v134, v146, v187, v147);
  if ( gpGdiSharedMemory )
    DisplayScenarioJournalSetUniqueness(
      *((unsigned int *)gpGdiSharedMemory + 393256),
      *((unsigned int *)gpGdiSharedMemory + 393252));
  LOBYTE(v31) = v147;
  LOBYTE(v144) = v155;
  LOBYTE(v143) = v150;
  DisplayScenarioJournalFinalize((unsigned int)v32, (unsigned int)v146, v134, v31, v143, v144, v171, v181);
  v141 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v141 + 24) = (int)v32;
  WdLogEvent5_WdEvent(v141);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v173);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v182, 5LL);
  return (unsigned int)v32;
}
