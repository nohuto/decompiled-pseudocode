/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C0026774
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C0134170 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0011430 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0024610 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C002509C (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0025790 (xxxUpdateSystemIconsFromRegistry.c)
 *     GreSetFontEnumeration @ 0x1C0027778 (GreSetFontEnumeration.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C00277DC (UpdatePerUserKeyboardIndicators.c)
 *     SetMouseTrails @ 0x1C0029694 (SetMouseTrails.c)
 *     _SetCaretBlinkTime @ 0x1C0033190 (_SetCaretBlinkTime.c)
 *     _DestroyMenu @ 0x1C0048990 (_DestroyMenu.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00C7704 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1C00DBCB8 (-CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z.c)
 *     SetIconMetrics @ 0x1C00E1F70 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00E218C (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00E22DC (xxxSetWindowNCMetrics.c)
 *     GreTextInitialized @ 0x1C00E31F8 (GreTextInitialized.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00E4EE0 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     WakeRIT @ 0x1C010BAB0 (WakeRIT.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C01260D0 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C0131A34 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     GetKbdLangSwitch @ 0x1C01349FC (GetKbdLangSwitch.c)
 *     UnlockDesktopMenu @ 0x1C0136160 (UnlockDesktopMenu.c)
 *     xxxUserResetDisplayDevice @ 0x1C0163660 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C01668D8 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     CheckEasPolicyChange @ 0x1C01D3F88 (CheckEasPolicyChange.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0223F50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(int a1, __int64 a2)
{
  int v3; // r14d
  int v4; // r15d
  int v5; // esi
  int v6; // r13d
  struct _UNICODE_STRING *v7; // rdi
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // esi
  _QWORD *i; // rbx
  unsigned int v13; // r14d
  __int64 *v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  __int64 *v17; // rbx
  unsigned int v18; // edx
  unsigned int j; // ebx
  ULONG TargetInfoAsUlong; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rax
  unsigned int v24; // ecx
  bool v25; // zf
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v30; // ebx
  int v31; // eax
  int v32; // esi
  __int64 v33; // rcx
  int v34; // eax
  int v35; // r8d
  int v36; // r9d
  unsigned int *BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int *BugCheckParameter4a; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+28h] [rbp-D8h]
  unsigned int v40; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v41[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v42; // [rsp+58h] [rbp-A8h]
  unsigned int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+64h] [rbp-9Ch] BYREF
  int v46; // [rsp+68h] [rbp-98h] BYREF
  int v47; // [rsp+6Ch] [rbp-94h]
  int v48; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+74h] [rbp-8Ch] BYREF
  int v50; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v51; // [rsp+7Ch] [rbp-84h]
  int v52; // [rsp+80h] [rbp-80h] BYREF
  int v53; // [rsp+84h] [rbp-7Ch]
  int v54; // [rsp+88h] [rbp-78h] BYREF
  int v55; // [rsp+8Ch] [rbp-74h] BYREF
  int v56; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v57[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-58h]
  __int64 v59; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-38h]
  __int128 v62; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v63; // [rsp+E0h] [rbp-20h]
  __int128 v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+100h] [rbp+0h]
  int v66; // [rsp+110h] [rbp+10h]
  int v67; // [rsp+114h] [rbp+14h]
  __int64 v68; // [rsp+118h] [rbp+18h] BYREF
  int v69; // [rsp+120h] [rbp+20h]
  int v70; // [rsp+124h] [rbp+24h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  int v72; // [rsp+130h] [rbp+30h]
  int v73; // [rsp+134h] [rbp+34h]
  int v74; // [rsp+138h] [rbp+38h]
  int v75; // [rsp+13Ch] [rbp+3Ch]
  int v76; // [rsp+140h] [rbp+40h]
  int v77; // [rsp+144h] [rbp+44h]
  int v78; // [rsp+148h] [rbp+48h]
  int v79; // [rsp+14Ch] [rbp+4Ch]
  int v80; // [rsp+150h] [rbp+50h]
  int v81; // [rsp+154h] [rbp+54h]
  int v82; // [rsp+158h] [rbp+58h]
  int v83; // [rsp+15Ch] [rbp+5Ch]
  int v84; // [rsp+160h] [rbp+60h]
  int v85; // [rsp+164h] [rbp+64h]
  int v86; // [rsp+168h] [rbp+68h]
  int v87; // [rsp+16Ch] [rbp+6Ch]
  int v88; // [rsp+170h] [rbp+70h]
  int v89; // [rsp+174h] [rbp+74h]
  int v90; // [rsp+178h] [rbp+78h]
  int v91; // [rsp+17Ch] [rbp+7Ch]
  int v92; // [rsp+180h] [rbp+80h]
  int v93; // [rsp+184h] [rbp+84h]
  int v94; // [rsp+188h] [rbp+88h]
  int v95; // [rsp+18Ch] [rbp+8Ch]
  int v96; // [rsp+190h] [rbp+90h]
  int v97; // [rsp+194h] [rbp+94h]
  int v98; // [rsp+198h] [rbp+98h]
  int v99; // [rsp+19Ch] [rbp+9Ch]
  int v100; // [rsp+1A0h] [rbp+A0h]
  int v101; // [rsp+1A4h] [rbp+A4h]
  int v102; // [rsp+1A8h] [rbp+A8h]
  int v103; // [rsp+1ACh] [rbp+ACh]
  int v104; // [rsp+1B0h] [rbp+B0h]
  int v105; // [rsp+1B4h] [rbp+B4h]
  __int64 v106; // [rsp+1B8h] [rbp+B8h]
  int v107; // [rsp+1C0h] [rbp+C0h]
  int v108; // [rsp+1C4h] [rbp+C4h]
  __int64 v109; // [rsp+1C8h] [rbp+C8h] BYREF
  int v110; // [rsp+1D0h] [rbp+D0h]
  int v111; // [rsp+1D4h] [rbp+D4h]
  int v112; // [rsp+1D8h] [rbp+D8h]
  int v113; // [rsp+1DCh] [rbp+DCh]
  int v114; // [rsp+1E0h] [rbp+E0h]
  int v115; // [rsp+1E4h] [rbp+E4h]
  int v116; // [rsp+1E8h] [rbp+E8h]
  int v117; // [rsp+1ECh] [rbp+ECh]
  int v118; // [rsp+1F0h] [rbp+F0h]
  int v119; // [rsp+1F4h] [rbp+F4h]
  int v120; // [rsp+1F8h] [rbp+F8h]
  int v121; // [rsp+1FCh] [rbp+FCh]
  int v122; // [rsp+200h] [rbp+100h]
  int v123; // [rsp+204h] [rbp+104h]
  int v124; // [rsp+208h] [rbp+108h]
  int v125; // [rsp+20Ch] [rbp+10Ch]
  int v126; // [rsp+210h] [rbp+110h]
  int v127; // [rsp+214h] [rbp+114h]
  __int64 v128; // [rsp+218h] [rbp+118h]
  int v129; // [rsp+220h] [rbp+120h]
  int v130; // [rsp+224h] [rbp+124h]
  __int64 v131; // [rsp+228h] [rbp+128h]
  int v132; // [rsp+230h] [rbp+130h]
  int v133; // [rsp+234h] [rbp+134h]
  int v134; // [rsp+238h] [rbp+138h]
  int v135; // [rsp+23Ch] [rbp+13Ch]
  int v136; // [rsp+240h] [rbp+140h]
  int v137; // [rsp+244h] [rbp+144h]
  int v138; // [rsp+248h] [rbp+148h]
  int v139; // [rsp+24Ch] [rbp+14Ch]
  int v140; // [rsp+250h] [rbp+150h]
  int v141; // [rsp+254h] [rbp+154h]
  int v142; // [rsp+258h] [rbp+158h]
  int v143; // [rsp+25Ch] [rbp+15Ch]
  int v144; // [rsp+260h] [rbp+160h]
  int v145; // [rsp+264h] [rbp+164h]
  int v146; // [rsp+268h] [rbp+168h]
  int v147; // [rsp+26Ch] [rbp+16Ch]
  int v148; // [rsp+270h] [rbp+170h]
  int v149; // [rsp+274h] [rbp+174h]
  int v150; // [rsp+278h] [rbp+178h]
  int v151; // [rsp+27Ch] [rbp+17Ch]
  int v152; // [rsp+280h] [rbp+180h]
  int v153; // [rsp+284h] [rbp+184h]
  int v154; // [rsp+288h] [rbp+188h]
  int v155; // [rsp+28Ch] [rbp+18Ch]
  int v156; // [rsp+290h] [rbp+190h]
  int v157; // [rsp+294h] [rbp+194h]
  int v158; // [rsp+298h] [rbp+198h]
  int v159; // [rsp+29Ch] [rbp+19Ch]
  int v160; // [rsp+2A0h] [rbp+1A0h]
  int v161; // [rsp+2A4h] [rbp+1A4h]
  __int64 v162; // [rsp+2A8h] [rbp+1A8h]
  int v163; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v164; // [rsp+2B8h] [rbp+1B8h]
  int v165; // [rsp+2C0h] [rbp+1C0h]
  PKDEFERRED_ROUTINE *p_DeferredRoutine; // [rsp+2C8h] [rbp+1C8h]
  int v167; // [rsp+2D0h] [rbp+1D0h]
  __int64 v168; // [rsp+2D8h] [rbp+1D8h]
  int v169; // [rsp+2E0h] [rbp+1E0h]
  char *v170; // [rsp+2E8h] [rbp+1E8h]
  int v171; // [rsp+2F0h] [rbp+1F0h]
  __int64 v172; // [rsp+2F8h] [rbp+1F8h]
  int v173; // [rsp+300h] [rbp+200h]
  int *v174; // [rsp+308h] [rbp+208h]
  int v175; // [rsp+310h] [rbp+210h]
  __int64 v176; // [rsp+318h] [rbp+218h]
  int v177; // [rsp+320h] [rbp+220h]
  __int64 v178; // [rsp+328h] [rbp+228h]
  int v179; // [rsp+330h] [rbp+230h] BYREF
  __int64 v180; // [rsp+338h] [rbp+238h]
  int v181; // [rsp+340h] [rbp+240h]
  char *v182; // [rsp+348h] [rbp+248h]
  int v183; // [rsp+350h] [rbp+250h]
  __int64 v184; // [rsp+358h] [rbp+258h]
  int v185; // [rsp+360h] [rbp+260h]
  int *v186; // [rsp+368h] [rbp+268h]
  int v187; // [rsp+370h] [rbp+270h]
  __int64 v188; // [rsp+378h] [rbp+278h]
  int v189; // [rsp+380h] [rbp+280h]
  int *v190; // [rsp+388h] [rbp+288h]
  int v191; // [rsp+390h] [rbp+290h]
  __int64 v192; // [rsp+398h] [rbp+298h]
  int v193; // [rsp+3A0h] [rbp+2A0h]
  int *v194; // [rsp+3A8h] [rbp+2A8h]
  int v195; // [rsp+3B0h] [rbp+2B0h]
  __int64 v196; // [rsp+3B8h] [rbp+2B8h]
  int v197; // [rsp+3C0h] [rbp+2C0h]
  __int64 v198; // [rsp+3C8h] [rbp+2C8h]
  int v199; // [rsp+3D0h] [rbp+2D0h]
  __int64 v200; // [rsp+3D8h] [rbp+2D8h]
  int v201; // [rsp+3E0h] [rbp+2E0h]
  __int64 v202; // [rsp+3E8h] [rbp+2E8h]
  int v203; // [rsp+3F0h] [rbp+2F0h]
  __int64 v204; // [rsp+3F8h] [rbp+2F8h]
  int v205; // [rsp+400h] [rbp+300h]
  int *v206; // [rsp+408h] [rbp+308h]
  int v207; // [rsp+410h] [rbp+310h]
  __int64 v208; // [rsp+418h] [rbp+318h]
  int v209; // [rsp+420h] [rbp+320h]
  int *v210; // [rsp+428h] [rbp+328h]
  int v211; // [rsp+430h] [rbp+330h]
  __int64 v212; // [rsp+438h] [rbp+338h]
  int v213; // [rsp+440h] [rbp+340h]
  __int64 v214; // [rsp+448h] [rbp+348h]
  int v215; // [rsp+450h] [rbp+350h]
  __int64 v216; // [rsp+458h] [rbp+358h]
  int v217; // [rsp+460h] [rbp+360h]
  int *v218; // [rsp+468h] [rbp+368h]
  int v219; // [rsp+470h] [rbp+370h]
  __int64 v220; // [rsp+478h] [rbp+378h]
  int v221; // [rsp+480h] [rbp+380h]
  int *v222; // [rsp+488h] [rbp+388h]
  unsigned __int16 v223[40]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v224[80]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v53 = a1;
  v47 = 0;
  v67 = 4135;
  v44 = gulFontInformation;
  v43 = 96;
  v66 = 4;
  v3 = 0;
  v48 = 0;
  v61 = 0LL;
  v50 = gdwPUDFlags & 0x100000;
  v60 = 0LL;
  v68 = 112LL;
  v83 = 3;
  v49 = gdwPUDFlags & 0x10000;
  v87 = 3;
  v86 = 15;
  v52 = 0;
  v46 = 1;
  v69 = 4;
  v70 = 17;
  v71 = 100LL;
  v72 = 4;
  v73 = 77;
  v74 = 199;
  v75 = 4;
  v76 = 4;
  v77 = 76;
  v78 = 198;
  v79 = 4;
  v80 = 4;
  v81 = 105;
  v82 = 14;
  v84 = 4;
  v85 = 109;
  v88 = 4;
  v89 = 131;
  v90 = 18;
  v91 = 1;
  v92 = 4;
  v93 = 141;
  v94 = 624;
  v95 = 1;
  v96 = 4;
  v97 = 145;
  v98 = 625;
  v99 = 1;
  v100 = 4;
  v101 = 143;
  v102 = 626;
  v103 = 1;
  v104 = 4;
  v105 = 159;
  v106 = 628LL;
  v107 = 13;
  v108 = 23;
  v109 = 106LL;
  v110 = 13;
  v111 = 11;
  v112 = 13;
  v142 = 17;
  v113 = 15;
  v147 = 20;
  v150 = 20;
  v127 = 96;
  v155 = 50;
  v159 = 50;
  v182 = (char *)&WPP_MAIN_CB.Dpc.DeferredRoutine + 4;
  v186 = &v50;
  v190 = &gnFastAltTabRows;
  v131 = 96LL;
  v145 = 133;
  v188 = 133LL;
  v194 = &gnFastAltTabColumns;
  v114 = 12;
  v115 = 32;
  v116 = 6;
  v117 = 500;
  v118 = 12;
  v119 = 29;
  v120 = 97;
  v121 = 4;
  v122 = 12;
  v123 = 30;
  v124 = 98;
  v125 = 4;
  v126 = 12;
  v128 = 7LL;
  v129 = 3;
  v130 = 28;
  v132 = 35;
  v133 = 111;
  v134 = 236;
  v135 = 1;
  v136 = 12;
  v137 = 127;
  v138 = 16;
  v139 = 1;
  v140 = 12;
  v141 = 129;
  v143 = 30;
  v144 = 12;
  v146 = 19;
  v148 = 12;
  v149 = 135;
  v151 = 30;
  v152 = 12;
  v153 = 137;
  v154 = 21;
  v156 = 12;
  v157 = 139;
  v158 = 22;
  v160 = 4;
  v161 = 169;
  v162 = 205LL;
  v179 = 4;
  v180 = 94LL;
  v181 = 400;
  v183 = 4;
  v184 = 107LL;
  v185 = 2;
  v187 = 4;
  v189 = 3;
  v191 = 4;
  v192 = 134LL;
  v193 = 7;
  v195 = 4;
  v196 = 159LL;
  v197 = 3;
  v199 = 4;
  v203 = 4;
  v207 = 4;
  v211 = 4;
  v215 = 4;
  v4 = a1 & 1;
  v221 = 1;
  v173 = 1;
  v198 = gpsi + 4996LL;
  v163 = 12;
  v202 = gpsi + 5000LL;
  v167 = 12;
  v206 = &v44;
  v5 = a1 & 4;
  v171 = 12;
  v210 = &v48;
  v214 = gdwHungAppTimeout;
  v218 = &gdwWaitToKillTimeout;
  v222 = &v49;
  p_DeferredRoutine = &WPP_MAIN_CB.Dpc.DeferredRoutine;
  v170 = (char *)&WPP_MAIN_CB.Dpc.ProcessorHistory + 4;
  v172 = 12LL;
  v174 = &v46;
  v213 = 5000;
  v217 = 5000;
  v178 = gfEnableHexNumpad;
  v200 = 160LL;
  v201 = 3;
  v204 = 200LL;
  v205 = 0;
  v208 = 618LL;
  v209 = 0;
  v212 = 621LL;
  v216 = 622LL;
  v219 = 23;
  v220 = 149LL;
  v164 = 10LL;
  v165 = 6;
  v168 = 11LL;
  v169 = 10;
  v175 = 35;
  v176 = 237LL;
  v177 = 0;
  v42 = v5;
  v6 = a1 & 2;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v7 = (struct _UNICODE_STRING *)CreateProfileUserName(&v60);
  if ( !v7 )
    return 0LL;
  v8 = grpWinStaList;
  if ( grpWinStaList )
  {
    v9 = *(void **)(grpWinStaList + 208LL);
    if ( v9 )
      Win32FreePool(v9);
    v10 = Win32AllocPool(v7->Length, 1852863317LL);
    *(_QWORD *)(grpWinStaList + 208LL) = v10;
    if ( v10 )
    {
      *(_WORD *)(grpWinStaList + 202LL) = v7->Length;
      v8 = 0LL;
      *(_WORD *)(grpWinStaList + 200LL) = 0;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 200LL), v7);
    }
    else
    {
      v8 = 0LL;
    }
    if ( v4 )
      WakeRIT(64LL);
    v5 = v42;
  }
  if ( !v6 || v5 )
    goto LABEL_13;
  v47 = CheckEasPolicyChange();
  v32 = v47;
  if ( !(unsigned int)CheckDesktopPolicyChange(v7) && !v32 )
  {
    UserSetLastError(0LL);
    FreeProfileUserName(v7, &v60);
    return 0LL;
  }
  v3 = 16;
LABEL_13:
  if ( v4 )
    gdwPolicyFlags |= 2u;
  v40 = 300;
  v11 = v3 | 8;
  if ( v42 == (_DWORD)v8 )
    v11 = v3;
  FastGetProfileValue(v7, 4LL, 607LL, &v40, &WPP_MAIN_CB.Dpc.ProcessorHistory, 4, v11);
  if ( (unsigned int)(LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) - 1) > 0x3E6 )
    LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = 1000;
  if ( v4 )
  {
    if ( gDpiAdjustedForLoggedOnUser == (_DWORD)v8 && !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      FastGetProfileDwordEx(v7, 4LL, L"LogPixels", 0LL, v11, &v43, v8);
      v45 = v8;
      v30 = DrvInitializeDxgkrnlDpiCache(&v45);
      v31 = PerformLegacyDpiUpgrade(v7, v43);
      if ( v30 < 0 || v45 || gdmLogPixelsOfPrimary != gdmLogPixels || v31 || v43 )
      {
        GreReinitializeDpiSetting();
        LOBYTE(v39) = 0;
        v41[0] = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL, 0LL, v39, 0LL, 0LL, v41, a2) >= 0 )
        {
          if ( v41[0] )
            ((void (*)(void))xxxUserResetDisplayDevice)();
          UserReinitializeStockFonts(*(unsigned __int16 *)(gpsi + 6998LL), 1);
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  LoadCPUserPreferences(v7, v11);
  if ( !v6 )
  {
    xxxODI_ColorInit(v7);
    LW_LoadResources(v7);
    if ( (unsigned int)GreTextInitialized() )
      xxxSetWindowNCMetrics(v7, 0LL);
    SetMinMetrics(v7);
    SetIconMetrics(v7);
    GetKbdLangSwitch(v7);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7012LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v57, 0LL);
      v58 = 0LL;
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        if ( i[7] )
        {
          v58 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v57);
          *(_DWORD *)(*(_QWORD *)(i[7] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 7) )
            DestroyMenu();
        }
        if ( i[8] )
        {
          v58 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v57);
          *(_DWORD *)(*(_QWORD *)(i[8] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 8) )
            DestroyMenu();
        }
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v57);
    }
    CCursorSizes::zzzRefreshSizes(gpCursorSizes);
    xxxUpdateSystemCursorsFromRegistry((__int64)v7, 1u);
    xxxUpdateSystemIconsFromRegistry((__int64)v7);
    v13 = 0;
    v14 = &v109;
    do
    {
      v39 = 0;
      BugCheckParameter4 = &v40;
      if ( (unsigned int)FastGetProfileIntFromID(v7, *((unsigned int *)v14 - 2), *(unsigned int *)v14) )
        xxxSystemParametersInfo(*((unsigned int *)v14 - 1), v40, 0LL, 0x8000LL, &v40, 0);
      ++v13;
      v14 += 2;
    }
    while ( v13 < 0xF );
    FastGetProfileIntsW(v7, &v163, 4LL);
    LOBYTE(v15) = v46 != 0;
    EnableMouseAcceleration(v15);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, BugCheckParameter4, v39);
  if ( v4 )
    FastGetProfileIntFromID(v7, 35LL, 236LL);
  v16 = 0;
  v17 = &v68;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(v7, *((unsigned int *)v17 - 2), *(unsigned int *)v17) )
      xxxSystemParametersInfo(*((unsigned int *)v17 - 1), v40, 0LL, 0x8000LL, &v40, v11);
    ++v16;
    v17 += 2;
  }
  while ( v16 < 0xB );
  v18 = v11;
  if ( v47 )
    v18 = 2;
  CalcScreenSaverTimeout(v7, v18);
  FastGetProfileIntsW(v7, &v179, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v48 )
    _InterlockedOr(gpsi, 0x200u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFDFF);
  if ( v49 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v50 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v4 )
    {
      RtlStringCchPrintfW(v223, 0x28uLL, (size_t *)L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v224, 40LL);
      FastWriteProfileStringW(v7, 4LL, v224, v223);
    }
  }
  else if ( v50 )
  {
    gdwPUDFlags |= 0x100000u;
  }
  else
  {
    gdwPUDFlags &= ~0x100000u;
  }
  v40 = *(_DWORD *)(gpsi + 4984LL);
  if ( (unsigned int)FastGetProfileIntFromID(v7, 4LL, 4LL) )
    SetCaretBlinkTime(v40);
  if ( !v6 )
  {
    v51 = 0;
    FastGetProfileIntFromID(v7, 12LL, 608LL);
    UpdateMouseSensitivity(v51);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, v7);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(v7, 12LL, 613LL);
    SetMouseTrails(v40);
    FastGetProfileIntW(v7, 7LL, L"TTOnly");
    GreSetFontEnumeration(v40);
    FastGetProfileIntFromID(v7, 12LL, 91LL);
    FastGetProfileIntFromID(v7, 12LL, 92LL);
    FastGetProfileIntFromID(v7, 12LL, 93LL);
    TargetInfoAsUlong = WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
    if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong < 0xA )
    {
      TargetInfoAsUlong = 10;
      WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 10;
    }
    if ( TargetInfoAsUlong > 0x7FFFFFFF )
      WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(v7);
    InitScancodeMap(v22, v21);
    FastGetProfileDword(v7, 24LL, L"Attributes");
    gdwKeyboardAttributes = (gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(v7);
  }
  v23 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL, 0LL);
  if ( v23 )
  {
    *(_DWORD *)(gpsi + 2148LL) = 1;
    ZwClose(v23);
  }
  *(_DWORD *)(gpsi + 2148LL) |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v44 & 2) != 0 )
    GreSetFontEnumeration(v44 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v44 | 0x30u);
  v24 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v24 )
    v24 = 1200;
  gulGamma = v24;
  v25 = (*(_DWORD *)UPDWORDPointer(8210LL) & 1) == 0;
  v26 = &unk_1C02E49C0;
  if ( v25 )
    v26 = &unk_1C02F45B0;
  off_1C032A0D0 = v26;
  FreeProfileUserName(v7, &v60);
  if ( v53 == 2 )
    xxxUserResetDisplayDevice(v28, v27);
  BugCheckParameter4a = &v52;
  FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground");
  if ( v52 )
    gfDebugForegroundIgnoreDebugPort = 1;
  if ( v4 )
  {
    v62 = 0LL;
    v65 = 0LL;
    v63 = 0LL;
    v64 = 0LL;
    if ( (unsigned int)ReadPointerDeviceSettings(146LL, &v62) )
    {
      if ( !HIDWORD(v63) )
        SetTouchInputStatus(0LL);
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    v54 = 0;
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    if ( gdwInAtomicOperation )
    {
      v33 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v33);
    LODWORD(BugCheckParameter4a) = 7;
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, BugCheckParameter4a, &v54);
    EnterCrit(0LL, 1LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v4 )
  {
    if ( (unsigned int)dword_1C032A3D8 > 5
      && (qword_1C032A3E8 & 0x400000000000LL) != 0
      && (qword_1C032A3F0 & 0x400000000000LL) == qword_1C032A3F0 )
    {
      v34 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
      v59 = 0x1000000LL;
      v55 = v34;
      v56 = dword_1C033560C;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&v59,
        (unsigned int)&unk_1C02F2624,
        v35,
        v36,
        (__int64)&v59,
        (__int64)&v56,
        (__int64)&v55);
    }
    _InterlockedOr(gpsi, 0x400u);
  }
  return 1LL;
}
