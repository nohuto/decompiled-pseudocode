/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C0072BDC
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C0072B30 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C001FD1C (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C002179C (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0021F40 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0024A88 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C0040890 (UpdatePerUserKeyboardIndicators.c)
 *     _SetCaretBlinkTime @ 0x1C0042590 (_SetCaretBlinkTime.c)
 *     SetMouseTrails @ 0x1C005B9A8 (SetMouseTrails.c)
 *     _DestroyMenu @ 0x1C0061170 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0069710 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C007254C (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00725D4 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     UnlockDesktopSysMenu @ 0x1C0072748 (UnlockDesktopSysMenu.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C007276C (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1C00728C4 (-CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z.c)
 *     GreSetLCDOrientation @ 0x1C0072AE4 (GreSetLCDOrientation.c)
 *     GreSetFontEnumeration @ 0x1C0073E20 (GreSetFontEnumeration.c)
 *     GetKbdLangSwitch @ 0x1C0073E74 (GetKbdLangSwitch.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0073EDC (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     SetIconMetrics @ 0x1C00761C4 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00763E0 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0076530 (xxxSetWindowNCMetrics.c)
 *     GreTextInitialized @ 0x1C007A410 (GreTextInitialized.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C008A010 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     WakeRIT @ 0x1C00A4548 (WakeRIT.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxUserResetDisplayDevice @ 0x1C01354D0 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     CheckEasPolicyChange @ 0x1C01BAF10 (CheckEasPolicyChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(Gre::Base *a1)
{
  char v1; // bl
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // r13d
  int v8; // r15d
  int v9; // esi
  struct _UNICODE_STRING *v11; // rdi
  __int64 v12; // rbx
  void *v13; // rcx
  __int64 v14; // rax
  USHORT Length; // ax
  int v16; // esi
  unsigned int v17; // esi
  int v18; // ebx
  Gre::Base *v19; // rcx
  int v20; // r14d
  struct Gre::Base::SESSION_GLOBALS *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *i; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // r14d
  __int64 *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // r14d
  __int64 *v35; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned int v39; // eax
  unsigned int j; // ebx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // ebx
  __int64 v52; // rcx
  void *v53; // rax
  __int64 v54; // rcx
  int v55; // ebx
  unsigned int *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned int *v63; // [rsp+20h] [rbp-E0h]
  int *v64; // [rsp+20h] [rbp-E0h]
  int v65; // [rsp+28h] [rbp-D8h]
  unsigned int v66; // [rsp+60h] [rbp-A0h] BYREF
  char v67; // [rsp+64h] [rbp-9Ch]
  unsigned int v68; // [rsp+68h] [rbp-98h]
  unsigned int v69; // [rsp+6Ch] [rbp-94h] BYREF
  int v70; // [rsp+70h] [rbp-90h] BYREF
  int v71; // [rsp+74h] [rbp-8Ch] BYREF
  int v72; // [rsp+78h] [rbp-88h] BYREF
  int v73; // [rsp+7Ch] [rbp-84h] BYREF
  int v74; // [rsp+80h] [rbp-80h]
  int v75; // [rsp+84h] [rbp-7Ch] BYREF
  int v76; // [rsp+88h] [rbp-78h] BYREF
  int v77; // [rsp+8Ch] [rbp-74h] BYREF
  int v78; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v79[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v80; // [rsp+A8h] [rbp-58h]
  __int128 v81; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-40h]
  _BYTE v83[28]; // [rsp+D0h] [rbp-30h] BYREF
  int v84; // [rsp+ECh] [rbp-14h]
  int v85; // [rsp+110h] [rbp+10h]
  int v86; // [rsp+114h] [rbp+14h]
  __int64 v87; // [rsp+118h] [rbp+18h] BYREF
  int v88; // [rsp+120h] [rbp+20h]
  int v89; // [rsp+124h] [rbp+24h]
  __int64 v90; // [rsp+128h] [rbp+28h]
  int v91; // [rsp+130h] [rbp+30h]
  int v92; // [rsp+134h] [rbp+34h]
  int v93; // [rsp+138h] [rbp+38h]
  int v94; // [rsp+13Ch] [rbp+3Ch]
  int v95; // [rsp+140h] [rbp+40h]
  int v96; // [rsp+144h] [rbp+44h]
  int v97; // [rsp+148h] [rbp+48h]
  int v98; // [rsp+14Ch] [rbp+4Ch]
  int v99; // [rsp+150h] [rbp+50h]
  int v100; // [rsp+154h] [rbp+54h]
  int v101; // [rsp+158h] [rbp+58h]
  int v102; // [rsp+15Ch] [rbp+5Ch]
  int v103; // [rsp+160h] [rbp+60h]
  int v104; // [rsp+164h] [rbp+64h]
  int v105; // [rsp+168h] [rbp+68h]
  int v106; // [rsp+16Ch] [rbp+6Ch]
  int v107; // [rsp+170h] [rbp+70h]
  int v108; // [rsp+174h] [rbp+74h]
  int v109; // [rsp+178h] [rbp+78h]
  int v110; // [rsp+17Ch] [rbp+7Ch]
  int v111; // [rsp+180h] [rbp+80h]
  int v112; // [rsp+184h] [rbp+84h]
  int v113; // [rsp+188h] [rbp+88h]
  int v114; // [rsp+18Ch] [rbp+8Ch]
  int v115; // [rsp+190h] [rbp+90h]
  int v116; // [rsp+194h] [rbp+94h]
  int v117; // [rsp+198h] [rbp+98h]
  int v118; // [rsp+19Ch] [rbp+9Ch]
  int v119; // [rsp+1A0h] [rbp+A0h]
  int v120; // [rsp+1A4h] [rbp+A4h]
  int v121; // [rsp+1A8h] [rbp+A8h]
  int v122; // [rsp+1ACh] [rbp+ACh]
  int v123; // [rsp+1B0h] [rbp+B0h]
  int v124; // [rsp+1B4h] [rbp+B4h]
  __int64 v125; // [rsp+1B8h] [rbp+B8h]
  int v126; // [rsp+1C0h] [rbp+C0h]
  int v127; // [rsp+1C4h] [rbp+C4h]
  __int64 v128; // [rsp+1C8h] [rbp+C8h] BYREF
  int v129; // [rsp+1D0h] [rbp+D0h]
  int v130; // [rsp+1D4h] [rbp+D4h]
  int v131; // [rsp+1D8h] [rbp+D8h]
  int v132; // [rsp+1DCh] [rbp+DCh]
  int v133; // [rsp+1E0h] [rbp+E0h]
  int v134; // [rsp+1E4h] [rbp+E4h]
  int v135; // [rsp+1E8h] [rbp+E8h]
  int v136; // [rsp+1ECh] [rbp+ECh]
  int v137; // [rsp+1F0h] [rbp+F0h]
  int v138; // [rsp+1F4h] [rbp+F4h]
  int v139; // [rsp+1F8h] [rbp+F8h]
  int v140; // [rsp+1FCh] [rbp+FCh]
  int v141; // [rsp+200h] [rbp+100h]
  int v142; // [rsp+204h] [rbp+104h]
  int v143; // [rsp+208h] [rbp+108h]
  int v144; // [rsp+20Ch] [rbp+10Ch]
  int v145; // [rsp+210h] [rbp+110h]
  int v146; // [rsp+214h] [rbp+114h]
  __int64 v147; // [rsp+218h] [rbp+118h]
  int v148; // [rsp+220h] [rbp+120h]
  int v149; // [rsp+224h] [rbp+124h]
  __int64 v150; // [rsp+228h] [rbp+128h]
  int v151; // [rsp+230h] [rbp+130h]
  int v152; // [rsp+234h] [rbp+134h]
  int v153; // [rsp+238h] [rbp+138h]
  int v154; // [rsp+23Ch] [rbp+13Ch]
  int v155; // [rsp+240h] [rbp+140h]
  int v156; // [rsp+244h] [rbp+144h]
  int v157; // [rsp+248h] [rbp+148h]
  int v158; // [rsp+24Ch] [rbp+14Ch]
  int v159; // [rsp+250h] [rbp+150h]
  int v160; // [rsp+254h] [rbp+154h]
  int v161; // [rsp+258h] [rbp+158h]
  int v162; // [rsp+25Ch] [rbp+15Ch]
  int v163; // [rsp+260h] [rbp+160h]
  int v164; // [rsp+264h] [rbp+164h]
  int v165; // [rsp+268h] [rbp+168h]
  int v166; // [rsp+26Ch] [rbp+16Ch]
  int v167; // [rsp+270h] [rbp+170h]
  int v168; // [rsp+274h] [rbp+174h]
  int v169; // [rsp+278h] [rbp+178h]
  int v170; // [rsp+27Ch] [rbp+17Ch]
  int v171; // [rsp+280h] [rbp+180h]
  int v172; // [rsp+284h] [rbp+184h]
  int v173; // [rsp+288h] [rbp+188h]
  int v174; // [rsp+28Ch] [rbp+18Ch]
  int v175; // [rsp+290h] [rbp+190h]
  int v176; // [rsp+294h] [rbp+194h]
  int v177; // [rsp+298h] [rbp+198h]
  int v178; // [rsp+29Ch] [rbp+19Ch]
  int v179; // [rsp+2A0h] [rbp+1A0h]
  int v180; // [rsp+2A4h] [rbp+1A4h]
  __int64 v181; // [rsp+2A8h] [rbp+1A8h]
  int v182; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v183; // [rsp+2B8h] [rbp+1B8h]
  int v184; // [rsp+2C0h] [rbp+1C0h]
  __int64 v185; // [rsp+2C8h] [rbp+1C8h]
  int v186; // [rsp+2D0h] [rbp+1D0h]
  __int64 v187; // [rsp+2D8h] [rbp+1D8h]
  int v188; // [rsp+2E0h] [rbp+1E0h]
  __int64 v189; // [rsp+2E8h] [rbp+1E8h]
  int v190; // [rsp+2F0h] [rbp+1F0h]
  __int64 v191; // [rsp+2F8h] [rbp+1F8h]
  int v192; // [rsp+300h] [rbp+200h]
  int *v193; // [rsp+308h] [rbp+208h]
  int v194; // [rsp+310h] [rbp+210h]
  __int64 v195; // [rsp+318h] [rbp+218h]
  int v196; // [rsp+320h] [rbp+220h]
  __int64 v197; // [rsp+328h] [rbp+228h]
  int v198; // [rsp+330h] [rbp+230h] BYREF
  __int64 v199; // [rsp+338h] [rbp+238h]
  int v200; // [rsp+340h] [rbp+240h]
  int *v201; // [rsp+348h] [rbp+248h]
  int v202; // [rsp+350h] [rbp+250h]
  __int64 v203; // [rsp+358h] [rbp+258h]
  int v204; // [rsp+360h] [rbp+260h]
  int *v205; // [rsp+368h] [rbp+268h]
  int v206; // [rsp+370h] [rbp+270h]
  __int64 v207; // [rsp+378h] [rbp+278h]
  int v208; // [rsp+380h] [rbp+280h]
  int *v209; // [rsp+388h] [rbp+288h]
  int v210; // [rsp+390h] [rbp+290h]
  __int64 v211; // [rsp+398h] [rbp+298h]
  int v212; // [rsp+3A0h] [rbp+2A0h]
  int *v213; // [rsp+3A8h] [rbp+2A8h]
  int v214; // [rsp+3B0h] [rbp+2B0h]
  __int64 v215; // [rsp+3B8h] [rbp+2B8h]
  int v216; // [rsp+3C0h] [rbp+2C0h]
  __int64 v217; // [rsp+3C8h] [rbp+2C8h]
  int v218; // [rsp+3D0h] [rbp+2D0h]
  __int64 v219; // [rsp+3D8h] [rbp+2D8h]
  int v220; // [rsp+3E0h] [rbp+2E0h]
  __int64 v221; // [rsp+3E8h] [rbp+2E8h]
  int v222; // [rsp+3F0h] [rbp+2F0h]
  __int64 v223; // [rsp+3F8h] [rbp+2F8h]
  int v224; // [rsp+400h] [rbp+300h]
  int *v225; // [rsp+408h] [rbp+308h]
  int v226; // [rsp+410h] [rbp+310h]
  __int64 v227; // [rsp+418h] [rbp+318h]
  int v228; // [rsp+420h] [rbp+320h]
  int *v229; // [rsp+428h] [rbp+328h]
  int v230; // [rsp+430h] [rbp+330h]
  __int64 v231; // [rsp+438h] [rbp+338h]
  int v232; // [rsp+440h] [rbp+340h]
  __int64 v233; // [rsp+448h] [rbp+348h]
  int v234; // [rsp+450h] [rbp+350h]
  __int64 v235; // [rsp+458h] [rbp+358h]
  int v236; // [rsp+460h] [rbp+360h]
  int *v237; // [rsp+468h] [rbp+368h]
  int v238; // [rsp+470h] [rbp+370h]
  __int64 v239; // [rsp+478h] [rbp+378h]
  int v240; // [rsp+480h] [rbp+380h]
  int *v241; // [rsp+488h] [rbp+388h]
  unsigned __int16 v242[40]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v243[80]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v71 = (int)a1;
  v1 = (char)a1;
  v2 = Gre::Base::Globals(a1);
  v86 = 4135;
  v74 = 0;
  v87 = 112LL;
  v3 = 0;
  v70 = *((_DWORD *)v2 + 41);
  v69 = 96;
  v85 = 4;
  v88 = 4;
  v75 = 0;
  v77 = gdwPUDFlags & 0x100000;
  v82 = 0LL;
  v81 = 0LL;
  v78 = 0;
  v76 = gdwPUDFlags & 0x10000;
  v102 = 3;
  v106 = 3;
  v126 = 13;
  v129 = 13;
  v131 = 13;
  v73 = 1;
  v89 = 17;
  v90 = 100LL;
  v91 = 4;
  v92 = 77;
  v93 = 199;
  v94 = 4;
  v95 = 4;
  v96 = 76;
  v97 = 198;
  v98 = 4;
  v99 = 4;
  v100 = 105;
  v101 = 14;
  v103 = 4;
  v104 = 109;
  v105 = 15;
  v107 = 4;
  v108 = 131;
  v109 = 18;
  v110 = 1;
  v111 = 4;
  v112 = 141;
  v113 = 624;
  v114 = 1;
  v115 = 4;
  v116 = 145;
  v117 = 625;
  v118 = 1;
  v119 = 4;
  v120 = 143;
  v121 = 626;
  v122 = 1;
  v123 = 4;
  v124 = 159;
  v125 = 628LL;
  v127 = 23;
  v128 = 106LL;
  v130 = 11;
  v132 = 15;
  v161 = 17;
  v133 = 12;
  v137 = 12;
  v166 = 20;
  v169 = 20;
  v141 = 12;
  v174 = 50;
  v178 = 50;
  v201 = &gdtMNDropDown;
  v205 = &v77;
  v209 = &gnFastAltTabRows;
  v145 = 12;
  v155 = 12;
  v159 = 12;
  v163 = 12;
  v164 = 133;
  v167 = 12;
  v171 = 12;
  v175 = 12;
  v207 = 133LL;
  v142 = 30;
  v162 = 30;
  v170 = 30;
  v213 = &gnFastAltTabColumns;
  v134 = 32;
  v135 = 6;
  v136 = 500;
  v138 = 29;
  v139 = 97;
  v140 = 4;
  v143 = 98;
  v144 = 4;
  v146 = 96;
  v147 = 7LL;
  v148 = 3;
  v149 = 28;
  v150 = 96LL;
  v151 = 35;
  v152 = 111;
  v153 = 236;
  v154 = 1;
  v156 = 127;
  v157 = 16;
  v158 = 1;
  v160 = 129;
  v165 = 19;
  v168 = 135;
  v172 = 137;
  v173 = 21;
  v176 = 139;
  v177 = 22;
  v179 = 4;
  v180 = 169;
  v181 = 205LL;
  v198 = 4;
  v199 = 94LL;
  v200 = 400;
  v202 = 4;
  v203 = 107LL;
  v204 = 2;
  v206 = 4;
  v208 = 3;
  v210 = 4;
  v211 = 134LL;
  v212 = 7;
  v214 = 4;
  v215 = 159LL;
  v216 = 3;
  v218 = 4;
  v217 = gpsi + 4996LL;
  v219 = 160LL;
  v220 = 3;
  v222 = 4;
  v221 = gpsi + 5000LL;
  v225 = &v70;
  v229 = &v75;
  v233 = gdwHungAppTimeout;
  v237 = &gdwWaitToKillTimeout;
  v226 = 4;
  v230 = 4;
  v234 = 4;
  v241 = &v76;
  v223 = 200LL;
  v224 = 0;
  v227 = 618LL;
  v228 = 0;
  v231 = 621LL;
  v232 = 5000;
  v235 = 622LL;
  v236 = 5000;
  v238 = 23;
  v239 = 149LL;
  v240 = 1;
  v182 = 12;
  v183 = 10LL;
  v184 = 6;
  v4 = SGDGetUserSessionState(5000LL);
  v186 = 12;
  v185 = v4 + 15928;
  v187 = 11LL;
  v188 = 10;
  v6 = SGDGetUserSessionState(v5);
  v190 = 12;
  v191 = 12LL;
  v7 = v1 & 2;
  v189 = v6 + 15932;
  v192 = 1;
  v193 = &v73;
  v8 = v1 & 1;
  v194 = 35;
  v9 = v1 & 4;
  v195 = 237LL;
  v196 = 0;
  v197 = gfEnableHexNumpad;
  v68 = v9;
  if ( (v1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v11 = (struct _UNICODE_STRING *)CreateProfileUserName(&v81);
  if ( !v11 )
    return 0LL;
  v12 = grpWinStaList;
  if ( grpWinStaList )
  {
    v13 = *(void **)(grpWinStaList + 208LL);
    if ( v13 )
      Win32FreePool(v13);
    v14 = Win32AllocPoolZInit(v11->Length, 1852863317LL);
    *(_QWORD *)(grpWinStaList + 208LL) = v14;
    if ( v14 )
    {
      Length = v11->Length;
      *(_WORD *)(grpWinStaList + 200LL) = 0;
      *(_WORD *)(grpWinStaList + 202LL) = Length;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 200LL), v11);
    }
    v12 = 0LL;
    if ( v8 )
      WakeRIT(64LL);
  }
  if ( v7 && !v9 )
  {
    v74 = CheckEasPolicyChange();
    v16 = v74;
    if ( !(unsigned int)CheckDesktopPolicyChange(v11) && !v16 )
    {
      UserSetLastError(0LL);
      FreeProfileUserName(v11, &v81);
      return 0LL;
    }
    v3 = 16;
  }
  if ( v8 )
    gdwPolicyFlags |= 2u;
  v66 = 300;
  v17 = v3 | 8;
  if ( v68 == (_DWORD)v12 )
    v17 = v3;
  FastGetProfileValue(v11, 4LL, 607LL, &v66, &gnllHooksTimeout, 4, v17);
  if ( (unsigned int)(gnllHooksTimeout - 1) > 0x3E6 )
    gnllHooksTimeout = 1000;
  if ( v8 )
  {
    if ( gDpiAdjustedForLoggedOnUser == (_DWORD)v12 && !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      FastGetProfileDwordEx(v11, 4LL, L"LogPixels", 0LL, v17, &v69, v12);
      v72 = v12;
      v18 = DrvInitializeDxgkrnlDpiCache(&v72);
      v20 = PerformLegacyDpiUpgrade(v11, v69);
      if ( v18 < 0
        || v72
        || (v21 = Gre::Base::Globals(v19), *((_WORD *)v21 + 625) != *((_WORD *)v21 + 624))
        || v20
        || v69 )
      {
        GreReinitializeDpiSetting();
        LOBYTE(v65) = 0;
        v63 = 0LL;
        v67 = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL) >= 0 )
        {
          if ( v67 )
            ((void (*)(void))xxxUserResetDisplayDevice)();
          UserReinitializeStockFonts(*(unsigned __int16 *)(gpsi + 6998LL), 1);
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(gpInputGlobals);
  LoadCPUserPreferences(v11, v17);
  if ( !v7 )
  {
    xxxODI_ColorInit(v11);
    LW_LoadResources(v11);
    if ( (unsigned int)GreTextInitialized() )
      xxxSetWindowNCMetrics(v11, 0LL);
    SetMinMetrics(v11);
    SetIconMetrics(v11);
    GetKbdLangSwitch(v11, v22, v23, v24);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7012LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v79, 0LL);
      v80 = 0LL;
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        v26 = i[7];
        if ( v26 )
        {
          v80 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v79, v26);
          if ( UnlockDesktopSysMenu((__int64)(i + 7)) )
          {
            v27 = v80;
            if ( !v80 )
              v27 = *(_QWORD *)v79[0];
            DestroyMenu(v27);
          }
        }
        v28 = i[8];
        if ( v28 )
        {
          v80 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v79, v28);
          if ( UnlockDesktopSysMenu((__int64)(i + 8)) )
          {
            v29 = v80;
            if ( !v80 )
              v29 = *(_QWORD *)v79[0];
            DestroyMenu(v29);
          }
        }
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v79);
    }
    CCursorSizes::zzzRefreshSizes(gpCursorSizes);
    xxxUpdateSystemCursorsFromRegistry((__int64)v11, 1u);
    xxxUpdateSystemIconsFromRegistry((__int64)v11);
    v30 = 0;
    v31 = &v128;
    do
    {
      v65 = 0;
      v63 = &v66;
      if ( (unsigned int)FastGetProfileIntFromID(v11, *((unsigned int *)v31 - 2), *(unsigned int *)v31) )
        xxxSystemParametersInfo(*((unsigned int *)v31 - 1), v66, 0LL, 0x8000LL, &v66, 0);
      ++v30;
      v31 += 2;
    }
    while ( v30 < 0xF );
    FastGetProfileIntsW(v11, &v182, 4LL);
    LOBYTE(v32) = v73 != 0;
    EnableMouseAcceleration(v32);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, v63, v65);
  if ( v8 )
  {
    SGDGetUserSessionState(v33);
    FastGetProfileIntFromID(v11, 35LL, 236LL);
  }
  v34 = 0;
  v35 = &v87;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(v11, *((unsigned int *)v35 - 2), *(unsigned int *)v35) )
      xxxSystemParametersInfo(*((unsigned int *)v35 - 1), v66, 0LL, 0x8000LL, &v66, v17);
    ++v34;
    v35 += 2;
  }
  while ( v34 < 0xB );
  v38 = v17;
  if ( v74 )
    v38 = 2LL;
  CalcScreenSaverTimeout(v11, v38, v36, v37);
  FastGetProfileIntsW(v11, &v198, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v75 )
    _InterlockedOr(gpsi, 0x200u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFDFF);
  if ( v76 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v77 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v8 )
    {
      RtlStringCchPrintfW(v242, 0x28uLL, (size_t *)L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v243);
      FastWriteProfileStringW(v11, 4LL, v243, v242);
    }
  }
  else
  {
    if ( v77 )
      v39 = gdwPUDFlags | 0x100000;
    else
      v39 = gdwPUDFlags & 0xFFEFFFFF;
    gdwPUDFlags = v39;
  }
  v66 = *(_DWORD *)(gpsi + 4984LL);
  if ( (unsigned int)FastGetProfileIntFromID(v11, 4LL, 4LL) )
    SetCaretBlinkTime(v66);
  if ( !v7 )
  {
    v68 = 0;
    FastGetProfileIntFromID(v11, 12LL, 608LL);
    UpdateMouseSensitivity(v68);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, v11);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(v11, 12LL, 613LL);
    SetMouseTrails(v66);
    FastGetProfileIntW(v11, 7LL, L"TTOnly", 0LL, &v66, 0);
    GreSetFontEnumeration(v66);
    SGDGetUserSessionState(v41);
    FastGetProfileIntFromID(v11, 12LL, 91LL);
    SGDGetUserSessionState(v42);
    FastGetProfileIntFromID(v11, 12LL, 92LL);
    SGDGetUserSessionState(v43);
    FastGetProfileIntFromID(v11, 12LL, 93LL);
    if ( *(_DWORD *)(SGDGetUserSessionState(v44) + 15924) < 0xAu )
      *(_DWORD *)(SGDGetUserSessionState(v45) + 15924) = 10;
    if ( *(_DWORD *)(SGDGetUserSessionState(v45) + 15924) > 0x7FFFFFFFu )
      *(_DWORD *)(SGDGetUserSessionState(v46) + 15924) = 0x7FFFFFFF;
    ReadRawMouseThrottlingThresholds(v11);
    UpdatePerUserKeyboardIndicators((__int64)v11);
    InitScancodeMap(v48, v47);
    SGDGetUserSessionState(v49);
    FastGetProfileDword(v11, 24LL, L"Attributes");
    v51 = (*(_DWORD *)(SGDGetUserSessionState(v50) + 13856) >> 15) & 2;
    *(_DWORD *)(SGDGetUserSessionState(v52) + 13856) = v51;
    xxxUpdatePerUserAccessPackSettings(v11);
  }
  v53 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL);
  if ( v53 )
  {
    *(_DWORD *)(gpsi + 2148LL) = 1;
    ZwClose(v53);
  }
  *(_DWORD *)(gpsi + 2148LL) |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v70 & 2) != 0 )
    GreSetFontEnumeration(v70 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v70 | 0x30u);
  v55 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v55 )
    v55 = 1200;
  *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v54) + 32) + 8584LL) = v55;
  v56 = (unsigned int *)UPDWORDPointer(8210LL);
  GreSetLCDOrientation(*v56);
  FreeProfileUserName(v11, &v81);
  if ( v71 == 2 )
    xxxUserResetDisplayDevice(v58, v57);
  v64 = &v78;
  FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground");
  if ( v78 )
    LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = 1;
  if ( v8 )
  {
    memset_0(v83, 0, 0x40uLL);
    if ( (unsigned int)ReadPointerDeviceSettings(146LL, v83) )
    {
      if ( !v84 )
        SetTouchInputStatus(0LL);
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    v71 = 0;
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    UserSessionSwitchLeaveCrit(v60, v59, v61, v62);
    LODWORD(v64) = 7;
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, v64, &v71);
    EnterCrit(1LL, 0LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v8 )
  {
    TraceLoggingAutoRotationStateEvent();
    _InterlockedOr(gpsi, 0x400u);
  }
  return 1LL;
}
