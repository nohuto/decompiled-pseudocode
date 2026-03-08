/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C010AFDC
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C010ACC0 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C001D944 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     SetMouseTrails @ 0x1C0020418 (SetMouseTrails.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00B7B4C (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00B7E08 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C1278 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     WakeRIT @ 0x1C00DB568 (WakeRIT.c)
 *     ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1C00EBB24 (-CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C00EEEE8 (UpdatePerUserKeyboardIndicators.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C00EF53C (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     UnlockDesktopSysMenu @ 0x1C00F390C (UnlockDesktopSysMenu.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C00F73D8 (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0107C68 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0108E98 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0109E10 (xxxUpdateSystemIconsFromRegistry.c)
 *     GreSetLCDOrientation @ 0x1C010AC70 (GreSetLCDOrientation.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C010AD6C (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     GreSetFontEnumeration @ 0x1C010C224 (GreSetFontEnumeration.c)
 *     _SetCaretBlinkTime @ 0x1C010C2C0 (_SetCaretBlinkTime.c)
 *     GetKbdLangSwitch @ 0x1C010C334 (GetKbdLangSwitch.c)
 *     SetIconMetrics @ 0x1C010C85C (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C010CA78 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C010CBC8 (xxxSetWindowNCMetrics.c)
 *     GreTextInitialized @ 0x1C010FB94 (GreTextInitialized.c)
 *     xxxUserResetDisplayDevice @ 0x1C01293C0 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage @ 0x1C012C794 (Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage.c)
 *     CheckEasPolicyChange @ 0x1C01BC0B0 (CheckEasPolicyChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(Gre::Base *a1, __int64 a2)
{
  char v3; // bl
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r13d
  int v10; // r15d
  int v11; // esi
  struct _UNICODE_STRING *v13; // rdi
  __int64 v14; // rbx
  void *v15; // rcx
  __int64 v16; // rax
  USHORT Length; // ax
  int v18; // esi
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // ebx
  Gre::Base *v24; // rcx
  int v25; // r14d
  struct Gre::Base::SESSION_GLOBALS *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *i; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r14d
  __int64 *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // r14d
  __int64 *v40; // rbx
  int v41; // edx
  unsigned int v42; // eax
  unsigned int j; // ebx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ebx
  __int64 v56; // rcx
  void *v57; // rax
  __int64 v58; // rcx
  int v59; // ebx
  unsigned int *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  unsigned int *v64; // [rsp+20h] [rbp-E0h]
  int *v65; // [rsp+20h] [rbp-E0h]
  int v66; // [rsp+28h] [rbp-D8h]
  unsigned int v67; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v68[4]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v69; // [rsp+68h] [rbp-98h]
  unsigned int v70; // [rsp+6Ch] [rbp-94h] BYREF
  int v71; // [rsp+70h] [rbp-90h] BYREF
  int v72; // [rsp+74h] [rbp-8Ch] BYREF
  int v73; // [rsp+78h] [rbp-88h] BYREF
  int v74; // [rsp+7Ch] [rbp-84h] BYREF
  int v75; // [rsp+80h] [rbp-80h]
  int v76; // [rsp+84h] [rbp-7Ch] BYREF
  int v77; // [rsp+88h] [rbp-78h] BYREF
  int v78; // [rsp+8Ch] [rbp-74h] BYREF
  int v79; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v80[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-58h]
  __int128 v82; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-40h]
  __int128 v84; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v85; // [rsp+D8h] [rbp-28h]
  __int128 v86; // [rsp+E8h] [rbp-18h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  int v88; // [rsp+100h] [rbp+0h]
  int v89; // [rsp+104h] [rbp+4h]
  __int64 v90; // [rsp+108h] [rbp+8h] BYREF
  int v91; // [rsp+110h] [rbp+10h]
  int v92; // [rsp+114h] [rbp+14h]
  __int64 v93; // [rsp+118h] [rbp+18h]
  int v94; // [rsp+120h] [rbp+20h]
  int v95; // [rsp+124h] [rbp+24h]
  int v96; // [rsp+128h] [rbp+28h]
  int v97; // [rsp+12Ch] [rbp+2Ch]
  int v98; // [rsp+130h] [rbp+30h]
  int v99; // [rsp+134h] [rbp+34h]
  int v100; // [rsp+138h] [rbp+38h]
  int v101; // [rsp+13Ch] [rbp+3Ch]
  int v102; // [rsp+140h] [rbp+40h]
  int v103; // [rsp+144h] [rbp+44h]
  int v104; // [rsp+148h] [rbp+48h]
  int v105; // [rsp+14Ch] [rbp+4Ch]
  int v106; // [rsp+150h] [rbp+50h]
  int v107; // [rsp+154h] [rbp+54h]
  int v108; // [rsp+158h] [rbp+58h]
  int v109; // [rsp+15Ch] [rbp+5Ch]
  int v110; // [rsp+160h] [rbp+60h]
  int v111; // [rsp+164h] [rbp+64h]
  int v112; // [rsp+168h] [rbp+68h]
  int v113; // [rsp+16Ch] [rbp+6Ch]
  int v114; // [rsp+170h] [rbp+70h]
  int v115; // [rsp+174h] [rbp+74h]
  int v116; // [rsp+178h] [rbp+78h]
  int v117; // [rsp+17Ch] [rbp+7Ch]
  int v118; // [rsp+180h] [rbp+80h]
  int v119; // [rsp+184h] [rbp+84h]
  int v120; // [rsp+188h] [rbp+88h]
  int v121; // [rsp+18Ch] [rbp+8Ch]
  int v122; // [rsp+190h] [rbp+90h]
  int v123; // [rsp+194h] [rbp+94h]
  int v124; // [rsp+198h] [rbp+98h]
  int v125; // [rsp+19Ch] [rbp+9Ch]
  int v126; // [rsp+1A0h] [rbp+A0h]
  int v127; // [rsp+1A4h] [rbp+A4h]
  __int64 v128; // [rsp+1A8h] [rbp+A8h]
  int v129; // [rsp+1B0h] [rbp+B0h]
  int v130; // [rsp+1B4h] [rbp+B4h]
  __int64 v131; // [rsp+1B8h] [rbp+B8h] BYREF
  int v132; // [rsp+1C0h] [rbp+C0h]
  int v133; // [rsp+1C4h] [rbp+C4h]
  int v134; // [rsp+1C8h] [rbp+C8h]
  int v135; // [rsp+1CCh] [rbp+CCh]
  int v136; // [rsp+1D0h] [rbp+D0h]
  int v137; // [rsp+1D4h] [rbp+D4h]
  int v138; // [rsp+1D8h] [rbp+D8h]
  int v139; // [rsp+1DCh] [rbp+DCh]
  int v140; // [rsp+1E0h] [rbp+E0h]
  int v141; // [rsp+1E4h] [rbp+E4h]
  int v142; // [rsp+1E8h] [rbp+E8h]
  int v143; // [rsp+1ECh] [rbp+ECh]
  int v144; // [rsp+1F0h] [rbp+F0h]
  int v145; // [rsp+1F4h] [rbp+F4h]
  int v146; // [rsp+1F8h] [rbp+F8h]
  int v147; // [rsp+1FCh] [rbp+FCh]
  int v148; // [rsp+200h] [rbp+100h]
  int v149; // [rsp+204h] [rbp+104h]
  __int64 v150; // [rsp+208h] [rbp+108h]
  int v151; // [rsp+210h] [rbp+110h]
  int v152; // [rsp+214h] [rbp+114h]
  __int64 v153; // [rsp+218h] [rbp+118h]
  int v154; // [rsp+220h] [rbp+120h]
  int v155; // [rsp+224h] [rbp+124h]
  int v156; // [rsp+228h] [rbp+128h]
  int v157; // [rsp+22Ch] [rbp+12Ch]
  int v158; // [rsp+230h] [rbp+130h]
  int v159; // [rsp+234h] [rbp+134h]
  int v160; // [rsp+238h] [rbp+138h]
  int v161; // [rsp+23Ch] [rbp+13Ch]
  int v162; // [rsp+240h] [rbp+140h]
  int v163; // [rsp+244h] [rbp+144h]
  int v164; // [rsp+248h] [rbp+148h]
  int v165; // [rsp+24Ch] [rbp+14Ch]
  int v166; // [rsp+250h] [rbp+150h]
  int v167; // [rsp+254h] [rbp+154h]
  int v168; // [rsp+258h] [rbp+158h]
  int v169; // [rsp+25Ch] [rbp+15Ch]
  int v170; // [rsp+260h] [rbp+160h]
  int v171; // [rsp+264h] [rbp+164h]
  int v172; // [rsp+268h] [rbp+168h]
  int v173; // [rsp+26Ch] [rbp+16Ch]
  int v174; // [rsp+270h] [rbp+170h]
  int v175; // [rsp+274h] [rbp+174h]
  int v176; // [rsp+278h] [rbp+178h]
  int v177; // [rsp+27Ch] [rbp+17Ch]
  int v178; // [rsp+280h] [rbp+180h]
  int v179; // [rsp+284h] [rbp+184h]
  int v180; // [rsp+288h] [rbp+188h]
  int v181; // [rsp+28Ch] [rbp+18Ch]
  int v182; // [rsp+290h] [rbp+190h]
  int v183; // [rsp+294h] [rbp+194h]
  __int64 v184; // [rsp+298h] [rbp+198h]
  int v185; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v186; // [rsp+2A8h] [rbp+1A8h]
  int v187; // [rsp+2B0h] [rbp+1B0h]
  __int64 v188; // [rsp+2B8h] [rbp+1B8h]
  int v189; // [rsp+2C0h] [rbp+1C0h]
  __int64 v190; // [rsp+2C8h] [rbp+1C8h]
  int v191; // [rsp+2D0h] [rbp+1D0h]
  __int64 v192; // [rsp+2D8h] [rbp+1D8h]
  int v193; // [rsp+2E0h] [rbp+1E0h]
  __int64 v194; // [rsp+2E8h] [rbp+1E8h]
  int v195; // [rsp+2F0h] [rbp+1F0h]
  int *v196; // [rsp+2F8h] [rbp+1F8h]
  int v197; // [rsp+300h] [rbp+200h]
  __int64 v198; // [rsp+308h] [rbp+208h]
  int v199; // [rsp+310h] [rbp+210h]
  __int64 v200; // [rsp+318h] [rbp+218h]
  int v201; // [rsp+320h] [rbp+220h] BYREF
  __int64 v202; // [rsp+328h] [rbp+228h]
  int v203; // [rsp+330h] [rbp+230h]
  int *v204; // [rsp+338h] [rbp+238h]
  int v205; // [rsp+340h] [rbp+240h]
  __int64 v206; // [rsp+348h] [rbp+248h]
  int v207; // [rsp+350h] [rbp+250h]
  int *v208; // [rsp+358h] [rbp+258h]
  int v209; // [rsp+360h] [rbp+260h]
  __int64 v210; // [rsp+368h] [rbp+268h]
  int v211; // [rsp+370h] [rbp+270h]
  int *v212; // [rsp+378h] [rbp+278h]
  int v213; // [rsp+380h] [rbp+280h]
  __int64 v214; // [rsp+388h] [rbp+288h]
  int v215; // [rsp+390h] [rbp+290h]
  int *v216; // [rsp+398h] [rbp+298h]
  int v217; // [rsp+3A0h] [rbp+2A0h]
  __int64 v218; // [rsp+3A8h] [rbp+2A8h]
  int v219; // [rsp+3B0h] [rbp+2B0h]
  __int64 v220; // [rsp+3B8h] [rbp+2B8h]
  int v221; // [rsp+3C0h] [rbp+2C0h]
  __int64 v222; // [rsp+3C8h] [rbp+2C8h]
  int v223; // [rsp+3D0h] [rbp+2D0h]
  __int64 v224; // [rsp+3D8h] [rbp+2D8h]
  int v225; // [rsp+3E0h] [rbp+2E0h]
  __int64 v226; // [rsp+3E8h] [rbp+2E8h]
  int v227; // [rsp+3F0h] [rbp+2F0h]
  int *v228; // [rsp+3F8h] [rbp+2F8h]
  int v229; // [rsp+400h] [rbp+300h]
  __int64 v230; // [rsp+408h] [rbp+308h]
  int v231; // [rsp+410h] [rbp+310h]
  int *v232; // [rsp+418h] [rbp+318h]
  int v233; // [rsp+420h] [rbp+320h]
  __int64 v234; // [rsp+428h] [rbp+328h]
  int v235; // [rsp+430h] [rbp+330h]
  __int64 v236; // [rsp+438h] [rbp+338h]
  int v237; // [rsp+440h] [rbp+340h]
  __int64 v238; // [rsp+448h] [rbp+348h]
  int v239; // [rsp+450h] [rbp+350h]
  int *v240; // [rsp+458h] [rbp+358h]
  int v241; // [rsp+460h] [rbp+360h]
  __int64 v242; // [rsp+468h] [rbp+368h]
  int v243; // [rsp+470h] [rbp+370h]
  int *v244; // [rsp+478h] [rbp+378h]
  unsigned __int16 v245[40]; // [rsp+480h] [rbp+380h] BYREF
  _BYTE v246[80]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v72 = (int)a1;
  v3 = (char)a1;
  v4 = Gre::Base::Globals(a1);
  v89 = 4135;
  v75 = 0;
  v90 = 112LL;
  v5 = 0;
  v71 = *((_DWORD *)v4 + 41);
  v70 = 96;
  v88 = 4;
  v91 = 4;
  v76 = 0;
  v78 = gdwPUDFlags & 0x100000;
  v83 = 0LL;
  v82 = 0LL;
  v79 = 0;
  v77 = gdwPUDFlags & 0x10000;
  v105 = 3;
  v109 = 3;
  v129 = 13;
  v132 = 13;
  v134 = 13;
  v74 = 1;
  v92 = 17;
  v93 = 100LL;
  v94 = 4;
  v95 = 77;
  v96 = 199;
  v97 = 4;
  v98 = 4;
  v99 = 76;
  v100 = 198;
  v101 = 4;
  v102 = 4;
  v103 = 105;
  v104 = 14;
  v106 = 4;
  v107 = 109;
  v108 = 15;
  v110 = 4;
  v111 = 131;
  v112 = 18;
  v113 = 1;
  v114 = 4;
  v115 = 141;
  v116 = 624;
  v117 = 1;
  v118 = 4;
  v119 = 145;
  v120 = 625;
  v121 = 1;
  v122 = 4;
  v123 = 143;
  v124 = 626;
  v125 = 1;
  v126 = 4;
  v127 = 159;
  v128 = 628LL;
  v130 = 23;
  v131 = 106LL;
  v133 = 11;
  v135 = 15;
  v164 = 17;
  v136 = 12;
  v140 = 12;
  v169 = 20;
  v172 = 20;
  v144 = 12;
  v177 = 50;
  v181 = 50;
  v204 = &gdtMNDropDown;
  v208 = &v78;
  v212 = &gnFastAltTabRows;
  v148 = 12;
  v158 = 12;
  v162 = 12;
  v166 = 12;
  v167 = 133;
  v170 = 12;
  v174 = 12;
  v178 = 12;
  v210 = 133LL;
  v145 = 30;
  v165 = 30;
  v173 = 30;
  v216 = &gnFastAltTabColumns;
  v137 = 32;
  v138 = 6;
  v139 = 500;
  v141 = 29;
  v142 = 97;
  v143 = 4;
  v146 = 98;
  v147 = 4;
  v149 = 96;
  v150 = 7LL;
  v151 = 3;
  v152 = 28;
  v153 = 96LL;
  v154 = 35;
  v155 = 111;
  v156 = 236;
  v157 = 1;
  v159 = 127;
  v160 = 16;
  v161 = 1;
  v163 = 129;
  v168 = 19;
  v171 = 135;
  v175 = 137;
  v176 = 21;
  v179 = 139;
  v180 = 22;
  v182 = 4;
  v183 = 169;
  v184 = 205LL;
  v201 = 4;
  v202 = 94LL;
  v203 = 400;
  v205 = 4;
  v206 = 107LL;
  v207 = 2;
  v209 = 4;
  v211 = 3;
  v213 = 4;
  v214 = 134LL;
  v215 = 7;
  v217 = 4;
  v218 = 159LL;
  v219 = 3;
  v221 = 4;
  v220 = gpsi + 4996LL;
  v222 = 160LL;
  v223 = 3;
  v225 = 4;
  v224 = gpsi + 5000LL;
  v228 = &v71;
  v232 = &v76;
  v236 = gdwHungAppTimeout;
  v240 = &gdwWaitToKillTimeout;
  v229 = 4;
  v233 = 4;
  v237 = 4;
  v244 = &v77;
  v226 = 200LL;
  v227 = 0;
  v230 = 618LL;
  v231 = 0;
  v234 = 621LL;
  v235 = 5000;
  v238 = 622LL;
  v239 = 5000;
  v241 = 23;
  v242 = 149LL;
  v243 = 1;
  v185 = 12;
  v186 = 10LL;
  v187 = 6;
  v6 = SGDGetUserSessionState(5000LL);
  v189 = 12;
  v188 = v6 + 15928;
  v190 = 11LL;
  v191 = 10;
  v8 = SGDGetUserSessionState(v7);
  v193 = 12;
  v194 = 12LL;
  v9 = v3 & 2;
  v192 = v8 + 15932;
  v195 = 1;
  v196 = &v74;
  v10 = v3 & 1;
  v197 = 35;
  v11 = v3 & 4;
  v198 = 237LL;
  v199 = 0;
  v200 = gfEnableHexNumpad;
  v69 = v11;
  if ( (v3 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5);
    return 0LL;
  }
  v13 = (struct _UNICODE_STRING *)CreateProfileUserName(&v82);
  if ( !v13 )
    return 0LL;
  v14 = grpWinStaList;
  if ( grpWinStaList )
  {
    v15 = *(void **)(grpWinStaList + 208LL);
    if ( v15 )
      Win32FreePool(v15);
    v16 = Win32AllocPoolZInit(v13->Length, 1852863317LL);
    *(_QWORD *)(grpWinStaList + 208LL) = v16;
    if ( v16 )
    {
      Length = v13->Length;
      *(_WORD *)(grpWinStaList + 200LL) = 0;
      *(_WORD *)(grpWinStaList + 202LL) = Length;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 200LL), v13);
    }
    v14 = 0LL;
    if ( v10 )
      WakeRIT(0x40u);
  }
  if ( v9 && !v11 )
  {
    v75 = CheckEasPolicyChange();
    v18 = v75;
    if ( !(unsigned int)CheckDesktopPolicyChange(v13) && !v18 )
    {
      UserSetLastError(0);
      FreeProfileUserName(v13, &v82);
      return 0LL;
    }
    v5 = 16;
  }
  if ( v10 )
    gdwPolicyFlags |= 2u;
  v67 = 300;
  v19 = v5 | 8;
  if ( v69 == (_DWORD)v14 )
    v19 = v5;
  FastGetProfileValue(v13, 4LL, 607LL, &v67, &gnllHooksTimeout, 4, v19);
  if ( (unsigned int)(gnllHooksTimeout - 1) > 0x3E6 )
    gnllHooksTimeout = 1000;
  if ( v10 )
  {
    if ( gDpiAdjustedForLoggedOnUser == (_DWORD)v14 && !(unsigned int)UserRemoteConnectedSessionUsingWddm(v21, v20, v22) )
    {
      FastGetProfileDwordEx(v13, 4LL, L"LogPixels", 0LL, v19, &v70, v14);
      v73 = v14;
      v23 = DrvInitializeDxgkrnlDpiCache(&v73);
      v25 = PerformLegacyDpiUpgrade(v13, v70);
      if ( v23 < 0
        || v73
        || (v26 = Gre::Base::Globals(v24), *((_WORD *)v26 + 625) != *((_WORD *)v26 + 624))
        || v25
        || v70 )
      {
        GreReinitializeDpiSetting();
        LOBYTE(v66) = 0;
        v68[0] = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL, 0LL, v66, 0LL, 0LL, v68, a2, 0LL) >= 0 )
        {
          if ( v68[0] )
            ((void (*)(void))xxxUserResetDisplayDevice)();
          UserReinitializeStockFonts();
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(gpInputGlobals);
  LoadCPUserPreferences(v13, v19);
  if ( !v9 )
  {
    xxxODI_ColorInit(v13);
    LW_LoadResources(v13);
    if ( (unsigned int)GreTextInitialized() )
      xxxSetWindowNCMetrics(v13, 0LL);
    SetMinMetrics(v13);
    SetIconMetrics(v13);
    GetKbdLangSwitch(v13, v27, v28, v29);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7012LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v80, 0LL);
      v81 = 0LL;
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        v31 = i[7];
        if ( v31 )
        {
          v81 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v80, v31);
          if ( UnlockDesktopSysMenu((__int64)(i + 7)) )
          {
            v32 = v81;
            if ( !v81 )
              v32 = *(_QWORD *)v80[0];
            DestroyMenu(v32);
          }
        }
        v33 = i[8];
        if ( v33 )
        {
          v81 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v80, v33);
          if ( UnlockDesktopSysMenu((__int64)(i + 8)) )
          {
            v34 = v81;
            if ( !v81 )
              v34 = *(_QWORD *)v80[0];
            DestroyMenu(v34);
          }
        }
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v80);
    }
    CCursorSizes::zzzRefreshSizes(gpCursorSizes);
    xxxUpdateSystemCursorsFromRegistry((__int64)v13, 1u);
    xxxUpdateSystemIconsFromRegistry((__int64)v13);
    v35 = 0;
    v36 = &v131;
    do
    {
      v66 = 0;
      v64 = &v67;
      if ( (unsigned int)FastGetProfileIntFromID(v13, *((unsigned int *)v36 - 2), *(unsigned int *)v36) )
        xxxSystemParametersInfo(*((unsigned int *)v36 - 1), v67, 0LL, 0x8000LL, &v67, 0);
      ++v35;
      v36 += 2;
    }
    while ( v35 < 0xF );
    FastGetProfileIntsW(v13, &v185, 4LL);
    LOBYTE(v37) = v74 != 0;
    EnableMouseAcceleration(v37);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, v64, v66);
  if ( v10 )
  {
    SGDGetUserSessionState(v38);
    FastGetProfileIntFromID(v13, 35LL, 236LL);
  }
  v39 = 0;
  v40 = &v90;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(v13, *((unsigned int *)v40 - 2), *(unsigned int *)v40) )
      xxxSystemParametersInfo(*((unsigned int *)v40 - 1), v67, 0LL, 0x8000LL, &v67, v19);
    ++v39;
    v40 += 2;
  }
  while ( v39 < 0xB );
  v41 = v19;
  if ( v75 )
    v41 = 2;
  CalcScreenSaverTimeout(v13, v41);
  FastGetProfileIntsW(v13, &v201, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v76 )
    _InterlockedOr(gpsi, 0x200u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFDFF);
  if ( v77 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v78 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v10 )
    {
      RtlStringCchPrintfW(v245, 0x28uLL, (size_t *)L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v246, 40LL);
      FastWriteProfileStringW(v13, 4LL, v246, v245);
    }
  }
  else
  {
    if ( v78 )
      v42 = gdwPUDFlags | 0x100000;
    else
      v42 = gdwPUDFlags & 0xFFEFFFFF;
    gdwPUDFlags = v42;
  }
  v67 = *(_DWORD *)(gpsi + 4984LL);
  if ( (unsigned int)FastGetProfileIntFromID(v13, 4LL, 4LL) )
    SetCaretBlinkTime(v67);
  if ( !v9 )
  {
    v69 = 0;
    FastGetProfileIntFromID(v13, 12LL, 608LL);
    UpdateMouseSensitivity(v69);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, v13);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(v13, 12LL, 613LL);
    SetMouseTrails(v67);
    FastGetProfileIntW(v13, 7LL, L"TTOnly", 0LL, &v67, 0);
    GreSetFontEnumeration(v67);
    SGDGetUserSessionState(v44);
    FastGetProfileIntFromID(v13, 12LL, 91LL);
    SGDGetUserSessionState(v45);
    FastGetProfileIntFromID(v13, 12LL, 92LL);
    SGDGetUserSessionState(v46);
    FastGetProfileIntFromID(v13, 12LL, 93LL);
    if ( *(_DWORD *)(SGDGetUserSessionState(v47) + 15924) < 0xAu )
      *(_DWORD *)(SGDGetUserSessionState(v48) + 15924) = 10;
    if ( *(_DWORD *)(SGDGetUserSessionState(v48) + 15924) > 0x7FFFFFFFu )
      *(_DWORD *)(SGDGetUserSessionState(v50) + 15924) = 0x7FFFFFFF;
    if ( (unsigned int)Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage(v50, v49) )
      ReadRawMouseThrottlingThresholds(v13);
    UpdatePerUserKeyboardIndicators((__int64)v13);
    InitScancodeMap(v52, v51);
    SGDGetUserSessionState(v53);
    FastGetProfileDword(v13, 24LL, L"Attributes");
    v55 = (*(_DWORD *)(SGDGetUserSessionState(v54) + 13856) >> 15) & 2;
    *(_DWORD *)(SGDGetUserSessionState(v56) + 13856) = v55;
    xxxUpdatePerUserAccessPackSettings(v13);
  }
  v57 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL, 0LL);
  if ( v57 )
  {
    *(_DWORD *)(gpsi + 2148LL) = 1;
    ZwClose(v57);
  }
  *(_DWORD *)(gpsi + 2148LL) |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v71 & 2) != 0 )
    GreSetFontEnumeration(v71 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v71 | 0x30u);
  v59 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v59 )
    v59 = 1200;
  *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v58) + 32) + 8584LL) = v59;
  v60 = (unsigned int *)UPDWORDPointer(8210LL);
  GreSetLCDOrientation(*v60);
  FreeProfileUserName(v13, &v82);
  if ( v72 == 2 )
    xxxUserResetDisplayDevice(v62, v61);
  v65 = &v79;
  FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground");
  if ( v79 )
    gfDebugForegroundIgnoreDebugPort = 1;
  if ( v10 )
  {
    v84 = 0LL;
    v87 = 0LL;
    v85 = 0LL;
    v86 = 0LL;
    if ( (unsigned int)ReadPointerDeviceSettings(146LL, &v84) )
    {
      if ( !HIDWORD(v85) )
        SetTouchInputStatus(0LL);
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    v72 = 0;
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    UserSessionSwitchLeaveCrit(v63);
    LODWORD(v65) = 7;
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, v65, &v72);
    EnterCrit(1LL, 0LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v10 )
  {
    TraceLoggingAutoRotationStateEvent();
    _InterlockedOr(gpsi, 0x400u);
  }
  return 1LL;
}
