/*
 * XREFs of ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x18029C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x18029AB24 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VC.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804DBF1C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PrivilegedOperationsService::SubscribeToServices(
        PrivilegedOperationsService *this,
        struct IServiceProvider *a2)
{
  char *v4; // rdi
  unsigned __int8 (*v5)(void); // rax
  int v6; // eax
  CCriticalFailureHandler *v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  CCriticalFailureHandler *v10; // rcx
  __int64 v12; // rdx
  unsigned __int64 *v13; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v18[3]; // [rsp+44h] [rbp-BCh] BYREF
  GUID *v19; // [rsp+50h] [rbp-B0h]
  GUID *v20; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  char v22; // [rsp+68h] [rbp-98h] BYREF
  GUID *v23; // [rsp+70h] [rbp-90h]
  GUID *v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  char v26; // [rsp+88h] [rbp-78h]
  GUID *v27; // [rsp+90h] [rbp-70h]
  GUID *v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  char v30; // [rsp+A8h] [rbp-58h]
  GUID *v31; // [rsp+B0h] [rbp-50h]
  GUID *v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  char v34; // [rsp+C8h] [rbp-38h]
  GUID *v35; // [rsp+D0h] [rbp-30h]
  GUID *v36; // [rsp+D8h] [rbp-28h]
  __int64 v37; // [rsp+E0h] [rbp-20h]
  char v38; // [rsp+E8h] [rbp-18h]
  GUID *v39; // [rsp+F0h] [rbp-10h]
  GUID *v40; // [rsp+F8h] [rbp-8h]
  __int64 v41; // [rsp+100h] [rbp+0h]
  char v42; // [rsp+108h] [rbp+8h]
  SID *v43; // [rsp+110h] [rbp+10h]
  GUID *v44; // [rsp+118h] [rbp+18h]
  __int64 v45; // [rsp+120h] [rbp+20h]
  char v46; // [rsp+128h] [rbp+28h]
  GUID *v47; // [rsp+130h] [rbp+30h]
  GUID *v48; // [rsp+138h] [rbp+38h]
  __int64 v49; // [rsp+140h] [rbp+40h]
  char v50; // [rsp+148h] [rbp+48h]
  GUID *v51; // [rsp+150h] [rbp+50h]
  GUID *v52; // [rsp+158h] [rbp+58h]
  __int64 v53; // [rsp+160h] [rbp+60h]
  char v54; // [rsp+168h] [rbp+68h]
  GUID *v55; // [rsp+170h] [rbp+70h]
  GUID *v56; // [rsp+178h] [rbp+78h]
  __int64 v57; // [rsp+180h] [rbp+80h]
  char v58; // [rsp+188h] [rbp+88h]
  GUID *v59; // [rsp+190h] [rbp+90h]
  GUID *v60; // [rsp+198h] [rbp+98h]
  __int64 v61; // [rsp+1A0h] [rbp+A0h]
  char v62; // [rsp+1A8h] [rbp+A8h]
  GUID *v63; // [rsp+1B0h] [rbp+B0h]
  GUID *v64; // [rsp+1B8h] [rbp+B8h]
  __int64 v65; // [rsp+1C0h] [rbp+C0h]
  char v66; // [rsp+1C8h] [rbp+C8h]
  GUID *v67; // [rsp+1D0h] [rbp+D0h]
  GUID *v68; // [rsp+1D8h] [rbp+D8h]
  __int64 v69; // [rsp+1E0h] [rbp+E0h]
  char v70; // [rsp+1E8h] [rbp+E8h]
  GUID *v71; // [rsp+1F0h] [rbp+F0h]
  GUID *v72; // [rsp+1F8h] [rbp+F8h]
  __int64 v73; // [rsp+200h] [rbp+100h]
  char v74; // [rsp+208h] [rbp+108h]
  GUID *v75; // [rsp+210h] [rbp+110h]
  GUID *v76; // [rsp+218h] [rbp+118h]
  __int64 v77; // [rsp+220h] [rbp+120h]
  char v78; // [rsp+228h] [rbp+128h]
  GUID *v79; // [rsp+230h] [rbp+130h]
  GUID *v80; // [rsp+238h] [rbp+138h]
  __int64 v81; // [rsp+240h] [rbp+140h]
  char v82; // [rsp+248h] [rbp+148h]
  GUID *v83; // [rsp+250h] [rbp+150h]
  GUID *v84; // [rsp+258h] [rbp+158h]
  __int64 v85; // [rsp+260h] [rbp+160h]
  char v86; // [rsp+268h] [rbp+168h]
  GUID *v87; // [rsp+270h] [rbp+170h]
  GUID *v88; // [rsp+278h] [rbp+178h]
  __int64 v89; // [rsp+280h] [rbp+180h]
  char v90; // [rsp+288h] [rbp+188h]
  GUID *v91; // [rsp+290h] [rbp+190h]
  GUID *v92; // [rsp+298h] [rbp+198h]
  __int64 v93; // [rsp+2A0h] [rbp+1A0h]
  char v94; // [rsp+2A8h] [rbp+1A8h]
  GUID *v95; // [rsp+2B0h] [rbp+1B0h]
  GUID *v96; // [rsp+2B8h] [rbp+1B8h]
  __int64 v97; // [rsp+2C0h] [rbp+1C0h]
  char v98; // [rsp+2C8h] [rbp+1C8h]
  GUID *v99; // [rsp+2D0h] [rbp+1D0h]
  GUID *v100; // [rsp+2D8h] [rbp+1D8h]
  __int64 v101; // [rsp+2E0h] [rbp+1E0h]
  char v102; // [rsp+2E8h] [rbp+1E8h]
  GUID *v103; // [rsp+2F0h] [rbp+1F0h]
  GUID *v104; // [rsp+2F8h] [rbp+1F8h]
  char (*v105)(); // [rsp+300h] [rbp+200h]
  char v106; // [rsp+308h] [rbp+208h]
  GUID *v107; // [rsp+310h] [rbp+210h]
  GUID *v108; // [rsp+318h] [rbp+218h]
  char (*v109)(); // [rsp+320h] [rbp+220h]
  char v110; // [rsp+328h] [rbp+228h]
  GUID *v111; // [rsp+330h] [rbp+230h]
  GUID *v112; // [rsp+338h] [rbp+238h]
  char (__fastcall *v113)(__int64, __int64); // [rsp+340h] [rbp+240h]
  char v114; // [rsp+348h] [rbp+248h]
  GUID *v115; // [rsp+350h] [rbp+250h]
  GUID *v116; // [rsp+358h] [rbp+258h]
  char (__fastcall *v117)(__int64, __int64); // [rsp+360h] [rbp+260h]
  char v118; // [rsp+368h] [rbp+268h]
  GUID *v119; // [rsp+370h] [rbp+270h]
  GUID *v120; // [rsp+378h] [rbp+278h]
  __int64 v121; // [rsp+380h] [rbp+280h]
  char v122; // [rsp+388h] [rbp+288h]
  GUID *v123; // [rsp+390h] [rbp+290h]
  GUID *v124; // [rsp+398h] [rbp+298h]
  __int64 v125; // [rsp+3A0h] [rbp+2A0h]
  char v126; // [rsp+3A8h] [rbp+2A8h]
  GUID *v127; // [rsp+3B0h] [rbp+2B0h]
  GUID *v128; // [rsp+3B8h] [rbp+2B8h]
  __int64 v129; // [rsp+3C0h] [rbp+2C0h]
  char v130; // [rsp+3C8h] [rbp+2C8h]
  SID *v131; // [rsp+3D0h] [rbp+2D0h]
  GUID *v132; // [rsp+3D8h] [rbp+2D8h]
  char (__fastcall *v133)(__int64, __int64); // [rsp+3E0h] [rbp+2E0h]
  char v134; // [rsp+3E8h] [rbp+2E8h]
  GUID *v135; // [rsp+3F0h] [rbp+2F0h]
  GUID *v136; // [rsp+3F8h] [rbp+2F8h]
  char (__fastcall *v137)(__int64, __int64, __int64); // [rsp+400h] [rbp+300h]
  char v138; // [rsp+408h] [rbp+308h]
  GUID *v139; // [rsp+410h] [rbp+310h]
  GUID *v140; // [rsp+418h] [rbp+318h]
  __int64 v141; // [rsp+420h] [rbp+320h]
  char v142; // [rsp+428h] [rbp+328h]
  void *v143; // [rsp+430h] [rbp+330h]
  GUID *v144; // [rsp+438h] [rbp+338h]
  __int64 v145; // [rsp+440h] [rbp+340h]
  char v146; // [rsp+448h] [rbp+348h]
  void *v147; // [rsp+450h] [rbp+350h]
  GUID *v148; // [rsp+458h] [rbp+358h]
  bool (__fastcall *v149)(PrivilegedOperations *); // [rsp+460h] [rbp+360h]
  char v150; // [rsp+468h] [rbp+368h]
  void *v151; // [rsp+470h] [rbp+370h]
  GUID *v152; // [rsp+478h] [rbp+378h]
  bool (__fastcall *v153)(PrivilegedOperations *); // [rsp+480h] [rbp+380h]
  char v154; // [rsp+488h] [rbp+388h]
  void *v155; // [rsp+490h] [rbp+390h]
  GUID *v156; // [rsp+498h] [rbp+398h]
  bool (__fastcall *v157)(PrivilegedOperations *); // [rsp+4A0h] [rbp+3A0h]
  char v158; // [rsp+4A8h] [rbp+3A8h]
  GUID *v159; // [rsp+4B0h] [rbp+3B0h]
  GUID *v160; // [rsp+4B8h] [rbp+3B8h]
  __int64 v161; // [rsp+4C0h] [rbp+3C0h]
  char v162; // [rsp+4C8h] [rbp+3C8h]
  GUID *v163; // [rsp+4D0h] [rbp+3D0h]
  GUID *v164; // [rsp+4D8h] [rbp+3D8h]
  __int64 v165; // [rsp+4E0h] [rbp+3E0h]
  char v166; // [rsp+4E8h] [rbp+3E8h]
  SID *v167; // [rsp+4F0h] [rbp+3F0h]
  GUID *v168; // [rsp+4F8h] [rbp+3F8h]
  char (*v169)(); // [rsp+500h] [rbp+400h]
  char v170; // [rsp+508h] [rbp+408h]
  GUID *v171; // [rsp+510h] [rbp+410h]
  GUID *v172; // [rsp+518h] [rbp+418h]
  __int64 v173; // [rsp+520h] [rbp+420h]
  char v174; // [rsp+528h] [rbp+428h]
  GUID *v175; // [rsp+530h] [rbp+430h]
  GUID *v176; // [rsp+538h] [rbp+438h]
  char (__fastcall *v177)(__int64, __int64, __int64, __int64); // [rsp+540h] [rbp+440h]
  char v178; // [rsp+548h] [rbp+448h]
  GUID *v179; // [rsp+550h] [rbp+450h]
  GUID *v180; // [rsp+558h] [rbp+458h]
  __int64 v181; // [rsp+560h] [rbp+460h]
  char v182; // [rsp+568h] [rbp+468h]
  GUID *v183; // [rsp+570h] [rbp+470h]
  GUID *v184; // [rsp+578h] [rbp+478h]
  __int64 v185; // [rsp+580h] [rbp+480h]
  char v186; // [rsp+588h] [rbp+488h]
  GUID *v187; // [rsp+590h] [rbp+490h]
  GUID *v188; // [rsp+598h] [rbp+498h]
  __int64 v189; // [rsp+5A0h] [rbp+4A0h]
  char v190; // [rsp+5A8h] [rbp+4A8h]
  GUID *v191; // [rsp+5B0h] [rbp+4B0h]
  GUID *v192; // [rsp+5B8h] [rbp+4B8h]
  __int64 v193; // [rsp+5C0h] [rbp+4C0h]
  char v194; // [rsp+5C8h] [rbp+4C8h]
  GUID *v195; // [rsp+5D0h] [rbp+4D0h]
  GUID *v196; // [rsp+5D8h] [rbp+4D8h]
  __int64 v197; // [rsp+5E0h] [rbp+4E0h]
  char v198; // [rsp+5E8h] [rbp+4E8h]
  GUID *v199; // [rsp+5F0h] [rbp+4F0h]
  GUID *v200; // [rsp+5F8h] [rbp+4F8h]
  __int64 v201; // [rsp+600h] [rbp+500h]
  char v202; // [rsp+608h] [rbp+508h]
  GUID *v203; // [rsp+610h] [rbp+510h]
  GUID *v204; // [rsp+618h] [rbp+518h]
  char (__fastcall *v205)(__int64, __int64, __int64); // [rsp+620h] [rbp+520h]
  char v206; // [rsp+628h] [rbp+528h]
  __int64 v207; // [rsp+630h] [rbp+530h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+668h] [rbp+568h]

  v19 = &GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa;
  v20 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v21 = 0LL;
  v22 = 0;
  v23 = &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1;
  v24 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v25 = 0LL;
  v26 = 0;
  v27 = &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1;
  v28 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v29 = 0LL;
  v30 = 0;
  v31 = &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v32 = &GUID_1258a377_0646_40fd_b5fc_b642b81befba;
  v33 = 0LL;
  v34 = 0;
  v35 = &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v36 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v37 = 0LL;
  v38 = 0;
  v39 = &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v40 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v41 = 0LL;
  v42 = 0;
  v43 = &SID_FullScreenManager;
  v44 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v45 = 0LL;
  v46 = 0;
  v47 = &SID_ViewEventDispatcher;
  v48 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v49 = 0LL;
  v50 = 0;
  v51 = &SID_ViewEventDispatcher;
  v52 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v53 = 0LL;
  v54 = 0;
  v55 = &SID_ViewEventDispatcher;
  v56 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v57 = 0LL;
  v58 = 0;
  v59 = &SID_ViewEventDispatcher;
  v60 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v61 = 0LL;
  v62 = 0;
  v63 = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v64 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v65 = 0LL;
  v66 = 0;
  v67 = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v68 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v69 = 0LL;
  v70 = 0;
  v71 = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v72 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v73 = 0LL;
  v74 = 0;
  v75 = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v76 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v77 = 0LL;
  v78 = 0;
  v79 = &GUID_82467e7f_e743_4e2f_bf0b_20adcadf3217;
  v80 = &GUID_a993a76e_0909_48bb_b0e9_4d8236263896;
  v81 = 0LL;
  v82 = 0;
  v83 = &IID_ILockScreenViewManager;
  v84 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v85 = 0LL;
  v86 = 0;
  v87 = &IID_IAboveLockViewManager;
  v88 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v89 = 0LL;
  v90 = 0;
  v91 = &CLSID_HolographicForegroundAssistant;
  v92 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v93 = 0LL;
  v94 = 0;
  v95 = &GUID_c44450f0_731e_4fdb_95fe_d031838a5b14;
  v96 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v97 = 0LL;
  v98 = 0;
  v99 = &GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f;
  v100 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v101 = 0LL;
  v102 = 0;
  v103 = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v104 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v105 = wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled;
  v106 = 1;
  v107 = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v108 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v109 = wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled;
  v110 = 1;
  v111 = &CLSID_VirtualMonitorSlateHostFactory;
  v112 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v113 = IsHolographicWin32SlatesFeatureEnabled;
  v114 = 1;
  v115 = &CLSID_HolographicSlatePositionGuardian;
  v116 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v117 = IsHolographicWin32SlatesFeatureEnabled;
  v118 = 1;
  v119 = &GUID_7ca26eb3_f3a6_4d4e_9885_c7d2b7b34ac8;
  v120 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v121 = 0LL;
  v122 = 0;
  v123 = &GUID_8982be9d_1779_4400_a6ab_c69244842534;
  v124 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v125 = 0LL;
  v126 = 0;
  v127 = &GUID_8982be9d_1779_4400_a6ab_c69244842534;
  v128 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v129 = 0LL;
  v130 = 0;
  v131 = &SID_AccessibilityExperienceManager;
  v132 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v133 = wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::IsEnabled;
  v134 = 1;
  v135 = &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c;
  v136 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v137 = wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::IsEnabled;
  v138 = 0;
  v139 = &GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55;
  v140 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v141 = 0LL;
  v142 = 0;
  v143 = &unk_1805AEF78;
  v144 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v145 = 0LL;
  v146 = 1;
  v147 = &unk_1805AEF78;
  v148 = &GUID_b815c956_b344_4bad_a85b_b492df0f9d1c;
  v149 = PrivilegedOperations::IsTabShellEnabled;
  v150 = 0;
  v151 = &unk_1805AEF78;
  v152 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v153 = PrivilegedOperations::IsTabShellEnabled;
  v154 = 0;
  v155 = &unk_1805AEF78;
  v156 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v157 = PrivilegedOperations::IsTabShellEnabled;
  v158 = 0;
  v159 = &GUID_3da63696_768a_4297_9ca1_ba5ebb8c2651;
  v160 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v161 = 0LL;
  v162 = 0;
  v163 = &GUID_1dec43b5_da90_42ad_8c2a_904640ed2091;
  v164 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v165 = 0LL;
  v166 = 0;
  v167 = &SID_ImmersiveLauncher;
  v168 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v169 = wil::Feature<__WilFeatureTraits_Feature_StartInWin32Host>::IsEnabled;
  v170 = 0;
  v171 = &GUID_bdd61328_14f8_4dff_8b7b_92be622ae360;
  v172 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v173 = 0LL;
  v174 = 1;
  v175 = &GUID_749f2714_937d_445e_9d22_666f49e7ff32;
  v176 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v177 = wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::IsEnabled;
  v178 = 1;
  v179 = &GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986;
  v180 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v181 = 0LL;
  v182 = 0;
  v183 = &GUID_99d93860_481a_4cc2_b3a1_25a54d6b1d8b;
  v184 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v185 = 0LL;
  v186 = 1;
  v187 = &GUID_99d93860_481a_4cc2_b3a1_25a54d6b1d8b;
  v188 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v189 = 0LL;
  v190 = 1;
  v191 = &GUID_99d93860_481a_4cc2_b3a1_25a54d6b1d8b;
  v192 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v193 = 0LL;
  v194 = 1;
  v195 = &GUID_99d93860_481a_4cc2_b3a1_25a54d6b1d8b;
  v196 = &GUID_b815c956_b344_4bad_a85b_b492df0f9d1c;
  v197 = 0LL;
  v198 = 1;
  v199 = &GUID_99d93860_481a_4cc2_b3a1_25a54d6b1d8b;
  v200 = &GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v201 = 0LL;
  v202 = 1;
  v203 = &GUID_e3900af7_62d2_42e3_a4c8_70a72baad63f;
  v204 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v205 = wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::IsEnabled;
  v206 = 1;
  v4 = &v22;
  while ( 1 )
  {
    v5 = (unsigned __int8 (*)(void))*((_QWORD *)v4 - 1);
    if ( v5 && !v5() )
      goto LABEL_44;
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, _QWORD, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           *((_QWORD *)v4 - 3),
           &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db,
           &v16);
    if ( !*v4 )
      break;
    if ( v6 >= 0 )
    {
      v8 = v16;
      if ( v16 )
        goto LABEL_26;
    }
LABEL_43:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
LABEL_44:
    v4 += 32;
    if ( v4 - 24 == (char *)&v207 )
      return 0LL;
  }
  v9 = v6;
  v15 = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v17) >= 0 )
    {
      switch ( v17 )
      {
        case 2u:
          v9 = -2023406815;
          goto LABEL_18;
        case 3u:
          v9 = -2023406814;
          goto LABEL_18;
        case 4u:
          v9 = -2147418094;
          goto LABEL_18;
        case 5u:
          v9 = -2147022986;
LABEL_18:
          v15 = v9;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v9 < 0 )
  {
    if ( v9 != -2147024882 && v9 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v7,
        &v15,
        L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        0x37Fu,
        v13,
        v14);
      v9 = v15;
    }
    if ( v9 < 0 )
    {
      v12 = 895LL;
      goto LABEL_48;
    }
  }
  v8 = v16;
LABEL_26:
  v9 = PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::PublishPrivilegedOperations(
         (__int64)this + 120,
         v8,
         *((_QWORD **)v4 - 2));
  v15 = v9;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v18) >= 0 )
    {
      switch ( v18[0] )
      {
        case 2u:
          v9 = -2023406815;
          goto LABEL_36;
        case 3u:
          v9 = -2023406814;
          goto LABEL_36;
        case 4u:
          v9 = -2147418094;
          goto LABEL_36;
        case 5u:
          v9 = -2147022986;
LABEL_36:
          v15 = v9;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v9 >= 0 )
    goto LABEL_43;
  if ( v9 != -2147024882 && v9 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v10,
      &v15,
      L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      0x383u,
      v13,
      v14);
    v9 = v15;
  }
  if ( v9 >= 0 )
    goto LABEL_43;
  v12 = 899LL;
LABEL_48:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return (unsigned int)v9;
}
