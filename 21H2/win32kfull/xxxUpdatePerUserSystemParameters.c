/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C00B8188
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C011F260 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C009A8A4 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     _SetCaretBlinkTime @ 0x1C009E700 (_SetCaretBlinkTime.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00A1974 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     SetMouseTrails @ 0x1C00B537C (SetMouseTrails.c)
 *     GreSetFontEnumeration @ 0x1C00B9324 (GreSetFontEnumeration.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C00B9370 (UpdatePerUserKeyboardIndicators.c)
 *     ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1C00B9470 (-CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00BA6DC (xxxUpdateSystemIconsFromRegistry.c)
 *     GreTextInitialized @ 0x1C00C4278 (GreTextInitialized.c)
 *     SetIconMetrics @ 0x1C00C6CF4 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00C6F10 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00C7060 (xxxSetWindowNCMetrics.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C00CE2F8 (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00D0F08 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00D4C34 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00EF7F8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     WakeRIT @ 0x1C00FD22C (WakeRIT.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C010FB68 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C011C340 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     UnlockDesktopMenu @ 0x1C011EECC (UnlockDesktopMenu.c)
 *     GetKbdLangSwitch @ 0x1C01202D8 (GetKbdLangSwitch.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0123AB4 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     xxxUserResetDisplayDevice @ 0x1C0154E50 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     CheckEasPolicyChange @ 0x1C01D02EC (CheckEasPolicyChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(unsigned int a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  int v5; // r14d
  __int64 v6; // r8
  int v7; // r15d
  int v8; // esi
  int v9; // r13d
  struct _UNICODE_STRING *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // esi
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *i; // rbx
  __int64 v23; // rdx
  PVOID *v24; // rcx
  __int64 v25; // rdx
  PVOID *v26; // rcx
  unsigned int v27; // r14d
  __int64 *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // r14d
  __int64 *v34; // rbx
  unsigned int v35; // edx
  unsigned int j; // ebx
  unsigned int SystemArgument1; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  unsigned int v41; // ecx
  bool v42; // zf
  void *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned int *v47; // [rsp+20h] [rbp-E0h]
  int v48; // [rsp+28h] [rbp-D8h]
  unsigned int v49; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v50[4]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+6Ch] [rbp-94h]
  unsigned int v53; // [rsp+70h] [rbp-90h] BYREF
  int v54; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v55; // [rsp+78h] [rbp-88h] BYREF
  int v56; // [rsp+7Ch] [rbp-84h] BYREF
  int v57; // [rsp+80h] [rbp-80h] BYREF
  int v58; // [rsp+84h] [rbp-7Ch] BYREF
  int v59; // [rsp+88h] [rbp-78h] BYREF
  int v60; // [rsp+8Ch] [rbp-74h] BYREF
  int v61; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v62[2]; // [rsp+98h] [rbp-68h] BYREF
  PVOID *v63; // [rsp+A8h] [rbp-58h]
  __int128 v64; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h]
  __int128 v66; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v67; // [rsp+D8h] [rbp-28h]
  __int128 v68; // [rsp+E8h] [rbp-18h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  int v70; // [rsp+100h] [rbp+0h]
  int v71; // [rsp+104h] [rbp+4h]
  __int64 v72; // [rsp+108h] [rbp+8h] BYREF
  int v73; // [rsp+110h] [rbp+10h]
  int v74; // [rsp+114h] [rbp+14h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  int v76; // [rsp+120h] [rbp+20h]
  int v77; // [rsp+124h] [rbp+24h]
  int v78; // [rsp+128h] [rbp+28h]
  int v79; // [rsp+12Ch] [rbp+2Ch]
  int v80; // [rsp+130h] [rbp+30h]
  int v81; // [rsp+134h] [rbp+34h]
  int v82; // [rsp+138h] [rbp+38h]
  int v83; // [rsp+13Ch] [rbp+3Ch]
  int v84; // [rsp+140h] [rbp+40h]
  int v85; // [rsp+144h] [rbp+44h]
  int v86; // [rsp+148h] [rbp+48h]
  int v87; // [rsp+14Ch] [rbp+4Ch]
  int v88; // [rsp+150h] [rbp+50h]
  int v89; // [rsp+154h] [rbp+54h]
  int v90; // [rsp+158h] [rbp+58h]
  int v91; // [rsp+15Ch] [rbp+5Ch]
  int v92; // [rsp+160h] [rbp+60h]
  int v93; // [rsp+164h] [rbp+64h]
  int v94; // [rsp+168h] [rbp+68h]
  int v95; // [rsp+16Ch] [rbp+6Ch]
  int v96; // [rsp+170h] [rbp+70h]
  int v97; // [rsp+174h] [rbp+74h]
  int v98; // [rsp+178h] [rbp+78h]
  int v99; // [rsp+17Ch] [rbp+7Ch]
  int v100; // [rsp+180h] [rbp+80h]
  int v101; // [rsp+184h] [rbp+84h]
  int v102; // [rsp+188h] [rbp+88h]
  int v103; // [rsp+18Ch] [rbp+8Ch]
  int v104; // [rsp+190h] [rbp+90h]
  int v105; // [rsp+194h] [rbp+94h]
  int v106; // [rsp+198h] [rbp+98h]
  int v107; // [rsp+19Ch] [rbp+9Ch]
  int v108; // [rsp+1A0h] [rbp+A0h]
  int v109; // [rsp+1A4h] [rbp+A4h]
  __int64 v110; // [rsp+1A8h] [rbp+A8h]
  int v111; // [rsp+1B0h] [rbp+B0h]
  int v112; // [rsp+1B4h] [rbp+B4h]
  __int64 v113; // [rsp+1B8h] [rbp+B8h] BYREF
  int v114; // [rsp+1C0h] [rbp+C0h]
  int v115; // [rsp+1C4h] [rbp+C4h]
  int v116; // [rsp+1C8h] [rbp+C8h]
  int v117; // [rsp+1CCh] [rbp+CCh]
  int v118; // [rsp+1D0h] [rbp+D0h]
  int v119; // [rsp+1D4h] [rbp+D4h]
  int v120; // [rsp+1D8h] [rbp+D8h]
  int v121; // [rsp+1DCh] [rbp+DCh]
  int v122; // [rsp+1E0h] [rbp+E0h]
  int v123; // [rsp+1E4h] [rbp+E4h]
  int v124; // [rsp+1E8h] [rbp+E8h]
  int v125; // [rsp+1ECh] [rbp+ECh]
  int v126; // [rsp+1F0h] [rbp+F0h]
  int v127; // [rsp+1F4h] [rbp+F4h]
  int v128; // [rsp+1F8h] [rbp+F8h]
  int v129; // [rsp+1FCh] [rbp+FCh]
  int v130; // [rsp+200h] [rbp+100h]
  int v131; // [rsp+204h] [rbp+104h]
  __int64 v132; // [rsp+208h] [rbp+108h]
  int v133; // [rsp+210h] [rbp+110h]
  int v134; // [rsp+214h] [rbp+114h]
  __int64 v135; // [rsp+218h] [rbp+118h]
  int v136; // [rsp+220h] [rbp+120h]
  int v137; // [rsp+224h] [rbp+124h]
  int v138; // [rsp+228h] [rbp+128h]
  int v139; // [rsp+22Ch] [rbp+12Ch]
  int v140; // [rsp+230h] [rbp+130h]
  int v141; // [rsp+234h] [rbp+134h]
  int v142; // [rsp+238h] [rbp+138h]
  int v143; // [rsp+23Ch] [rbp+13Ch]
  int v144; // [rsp+240h] [rbp+140h]
  int v145; // [rsp+244h] [rbp+144h]
  int v146; // [rsp+248h] [rbp+148h]
  int v147; // [rsp+24Ch] [rbp+14Ch]
  int v148; // [rsp+250h] [rbp+150h]
  int v149; // [rsp+254h] [rbp+154h]
  int v150; // [rsp+258h] [rbp+158h]
  int v151; // [rsp+25Ch] [rbp+15Ch]
  int v152; // [rsp+260h] [rbp+160h]
  int v153; // [rsp+264h] [rbp+164h]
  int v154; // [rsp+268h] [rbp+168h]
  int v155; // [rsp+26Ch] [rbp+16Ch]
  int v156; // [rsp+270h] [rbp+170h]
  int v157; // [rsp+274h] [rbp+174h]
  int v158; // [rsp+278h] [rbp+178h]
  int v159; // [rsp+27Ch] [rbp+17Ch]
  int v160; // [rsp+280h] [rbp+180h]
  int v161; // [rsp+284h] [rbp+184h]
  int v162; // [rsp+288h] [rbp+188h]
  int v163; // [rsp+28Ch] [rbp+18Ch]
  int v164; // [rsp+290h] [rbp+190h]
  int v165; // [rsp+294h] [rbp+194h]
  __int64 v166; // [rsp+298h] [rbp+198h]
  int v167; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v168; // [rsp+2A8h] [rbp+1A8h]
  int v169; // [rsp+2B0h] [rbp+1B0h]
  int *v170; // [rsp+2B8h] [rbp+1B8h]
  int v171; // [rsp+2C0h] [rbp+1C0h]
  __int64 v172; // [rsp+2C8h] [rbp+1C8h]
  int v173; // [rsp+2D0h] [rbp+1D0h]
  int *v174; // [rsp+2D8h] [rbp+1D8h]
  int v175; // [rsp+2E0h] [rbp+1E0h]
  __int64 v176; // [rsp+2E8h] [rbp+1E8h]
  int v177; // [rsp+2F0h] [rbp+1F0h]
  int *v178; // [rsp+2F8h] [rbp+1F8h]
  int v179; // [rsp+300h] [rbp+200h]
  __int64 v180; // [rsp+308h] [rbp+208h]
  int v181; // [rsp+310h] [rbp+210h]
  __int64 v182; // [rsp+318h] [rbp+218h]
  int v183; // [rsp+320h] [rbp+220h] BYREF
  __int64 v184; // [rsp+328h] [rbp+228h]
  int v185; // [rsp+330h] [rbp+230h]
  int *v186; // [rsp+338h] [rbp+238h]
  int v187; // [rsp+340h] [rbp+240h]
  __int64 v188; // [rsp+348h] [rbp+248h]
  int v189; // [rsp+350h] [rbp+250h]
  int *v190; // [rsp+358h] [rbp+258h]
  int v191; // [rsp+360h] [rbp+260h]
  __int64 v192; // [rsp+368h] [rbp+268h]
  int v193; // [rsp+370h] [rbp+270h]
  PVOID *p_DpcData; // [rsp+378h] [rbp+278h]
  int v195; // [rsp+380h] [rbp+280h]
  __int64 v196; // [rsp+388h] [rbp+288h]
  int v197; // [rsp+390h] [rbp+290h]
  char *v198; // [rsp+398h] [rbp+298h]
  int v199; // [rsp+3A0h] [rbp+2A0h]
  __int64 v200; // [rsp+3A8h] [rbp+2A8h]
  int v201; // [rsp+3B0h] [rbp+2B0h]
  __int64 v202; // [rsp+3B8h] [rbp+2B8h]
  int v203; // [rsp+3C0h] [rbp+2C0h]
  __int64 v204; // [rsp+3C8h] [rbp+2C8h]
  int v205; // [rsp+3D0h] [rbp+2D0h]
  __int64 v206; // [rsp+3D8h] [rbp+2D8h]
  int v207; // [rsp+3E0h] [rbp+2E0h]
  __int64 v208; // [rsp+3E8h] [rbp+2E8h]
  int v209; // [rsp+3F0h] [rbp+2F0h]
  int *v210; // [rsp+3F8h] [rbp+2F8h]
  int v211; // [rsp+400h] [rbp+300h]
  __int64 v212; // [rsp+408h] [rbp+308h]
  int v213; // [rsp+410h] [rbp+310h]
  int *v214; // [rsp+418h] [rbp+318h]
  int v215; // [rsp+420h] [rbp+320h]
  __int64 v216; // [rsp+428h] [rbp+328h]
  int v217; // [rsp+430h] [rbp+330h]
  __int64 v218; // [rsp+438h] [rbp+338h]
  int v219; // [rsp+440h] [rbp+340h]
  __int64 v220; // [rsp+448h] [rbp+348h]
  int v221; // [rsp+450h] [rbp+350h]
  int *v222; // [rsp+458h] [rbp+358h]
  int v223; // [rsp+460h] [rbp+360h]
  __int64 v224; // [rsp+468h] [rbp+368h]
  int v225; // [rsp+470h] [rbp+370h]
  int *v226; // [rsp+478h] [rbp+378h]
  unsigned __int16 v227[40]; // [rsp+480h] [rbp+380h] BYREF
  _BYTE v228[80]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v55 = a1;
  v51 = 0;
  v71 = 4135;
  v54 = gulFontInformation;
  v3 = 159LL;
  v53 = 96;
  v4 = a1;
  v70 = 4;
  v72 = 112LL;
  v5 = 0;
  v58 = 0;
  v60 = gdwPUDFlags & 0x100000;
  v65 = 0LL;
  v64 = 0LL;
  v61 = 0;
  v59 = gdwPUDFlags & 0x10000;
  v87 = 3;
  v91 = 3;
  v111 = 13;
  v114 = 13;
  v116 = 13;
  v57 = 1;
  v73 = 4;
  v74 = 17;
  v75 = 100LL;
  v76 = 4;
  v77 = 77;
  v78 = 199;
  v79 = 4;
  v80 = 4;
  v81 = 76;
  v82 = 198;
  v83 = 4;
  v84 = 4;
  v85 = 105;
  v86 = 14;
  v88 = 4;
  v89 = 109;
  v90 = 15;
  v92 = 4;
  v93 = 131;
  v94 = 18;
  v95 = 1;
  v96 = 4;
  v97 = 141;
  v98 = 624;
  v99 = 1;
  v100 = 4;
  v101 = 145;
  v102 = 625;
  v103 = 1;
  v104 = 4;
  v105 = 143;
  v106 = 626;
  v107 = 1;
  v108 = 4;
  v109 = 159;
  v110 = 628LL;
  v112 = 23;
  v113 = 106LL;
  v115 = 11;
  v117 = 15;
  v146 = 17;
  v131 = 96;
  v151 = 20;
  v154 = 20;
  v135 = 96LL;
  v159 = 50;
  v163 = 50;
  v149 = 133;
  v186 = &gdtMNDropDown;
  v190 = &v60;
  p_DpcData = &WPP_MAIN_CB.Dpc.DpcData;
  v192 = 133LL;
  v6 = 3LL;
  v198 = (char *)&WPP_MAIN_CB.Dpc.SystemArgument2 + 4;
  v118 = 12;
  v119 = 32;
  v120 = 6;
  v121 = 500;
  v122 = 12;
  v123 = 29;
  v124 = 97;
  v125 = 4;
  v126 = 12;
  v127 = 30;
  v128 = 98;
  v129 = 4;
  v130 = 12;
  v132 = 7LL;
  v133 = 3;
  v134 = 28;
  v136 = 35;
  v137 = 111;
  v138 = 236;
  v139 = 1;
  v140 = 12;
  v141 = 127;
  v142 = 16;
  v143 = 1;
  v144 = 12;
  v145 = 129;
  v147 = 30;
  v148 = 12;
  v150 = 19;
  v152 = 12;
  v153 = 135;
  v155 = 30;
  v156 = 12;
  v157 = 137;
  v158 = 21;
  v160 = 12;
  v161 = 139;
  v162 = 22;
  v164 = 4;
  v165 = 169;
  v166 = 205LL;
  v183 = 4;
  v184 = 94LL;
  v185 = 400;
  v187 = 4;
  v188 = 107LL;
  v189 = 2;
  v191 = 4;
  v193 = 3;
  v195 = 4;
  v196 = 134LL;
  v197 = 7;
  v199 = 4;
  v200 = 159LL;
  v201 = 3;
  v203 = 4;
  v207 = 4;
  v211 = 4;
  v215 = 4;
  v202 = gpsi + 4996LL;
  v206 = gpsi + 5000LL;
  v219 = 4;
  v210 = &v54;
  v7 = a1 & 1;
  v225 = 1;
  v177 = 1;
  v214 = &v58;
  v8 = a1 & 4;
  v218 = gdwHungAppTimeout;
  v222 = &gdwWaitToKillTimeout;
  v226 = &v59;
  v170 = &gMouseThresh1;
  v174 = &gMouseThresh2;
  v167 = 12;
  v171 = 12;
  v175 = 12;
  v176 = 12LL;
  v178 = &v57;
  v217 = 5000;
  v221 = 5000;
  v182 = gfEnableHexNumpad;
  v204 = 160LL;
  v205 = 3;
  v208 = 200LL;
  v209 = 0;
  v212 = 618LL;
  v213 = 0;
  v216 = 621LL;
  v220 = 622LL;
  v223 = 23;
  v224 = 149LL;
  v168 = 10LL;
  v169 = 6;
  v172 = 11LL;
  v173 = 10;
  v179 = 35;
  v180 = 237LL;
  v181 = 0;
  v52 = v8;
  v9 = a1 & 2;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL, v4);
    return 0LL;
  }
  v11 = (struct _UNICODE_STRING *)CreateProfileUserName(&v64, v4, v6, v3);
  if ( !v11 )
    return 0LL;
  v12 = grpWinStaList;
  if ( grpWinStaList )
  {
    v13 = *(_QWORD *)(grpWinStaList + 208LL);
    if ( v13 )
      Win32FreePool(v13);
    v14 = Win32AllocPoolZInit(v11->Length, 1852863317LL);
    *(_QWORD *)(grpWinStaList + 208LL) = v14;
    if ( v14 )
    {
      *(_WORD *)(grpWinStaList + 202LL) = v11->Length;
      v12 = 0LL;
      *(_WORD *)(grpWinStaList + 200LL) = 0;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 200LL), v11);
    }
    else
    {
      v12 = 0LL;
    }
    if ( v7 )
      WakeRIT(64LL);
    v8 = v52;
  }
  if ( v9 && !v8 )
  {
    v51 = CheckEasPolicyChange();
    if ( !(unsigned int)CheckDesktopPolicyChange(v11) && !v51 )
    {
      UserSetLastError(0LL, v15);
      FreeProfileUserName(v11, &v64);
      return 0LL;
    }
    v5 = 16;
  }
  if ( v7 )
    gdwPolicyFlags |= 2u;
  v49 = 300;
  v16 = v5 | 8;
  if ( v52 == (_DWORD)v12 )
    v16 = v5;
  FastGetProfileValue(v11, 4LL, 607LL, &v49, &WPP_MAIN_CB.Dpc.SystemArgument2, 4, v16);
  if ( (unsigned int)(LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) - 1) > 0x3E6 )
    LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 1000;
  if ( v7 )
  {
    if ( gDpiAdjustedForLoggedOnUser == (_DWORD)v12 && !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      FastGetProfileDwordEx(v11, 4LL, L"LogPixels", 0LL, v16, &v53, v12);
      v56 = v12;
      v17 = DrvInitializeDxgkrnlDpiCache(&v56);
      v18 = PerformLegacyDpiUpgrade(v11, v53);
      if ( v17 < 0 || v56 || gdmLogPixelsOfPrimary != gdmLogPixels || v18 || v53 )
      {
        GreReinitializeDpiSetting();
        LOBYTE(v48) = 0;
        v50[0] = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL, 0LL, v48, 0LL, 0LL, v50, a2, 0LL) >= 0 )
        {
          if ( v50[0] )
            ((void (*)(void))xxxUserResetDisplayDevice)();
          UserReinitializeStockFonts(*(unsigned __int16 *)(gpsi + 6998LL), 1);
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(gpInputGlobals);
  LoadCPUserPreferences(v11, v16);
  if ( !v9 )
  {
    xxxODI_ColorInit(v11);
    LW_LoadResources(v11);
    if ( (unsigned int)GreTextInitialized() )
      xxxSetWindowNCMetrics(v11, 0LL);
    SetMinMetrics(v11);
    SetIconMetrics(v11);
    GetKbdLangSwitch(v11, v19, v20, v21);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7012LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v62, 0LL);
      v63 = 0LL;
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        v23 = i[7];
        if ( v23 )
        {
          v63 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=((__int64)v62, v23);
          *(_DWORD *)(*(_QWORD *)(i[7] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 7) )
          {
            v24 = v63;
            if ( !v63 )
              v24 = *(PVOID **)v62[0];
            DestroyMenu(v24);
          }
        }
        v25 = i[8];
        if ( v25 )
        {
          v63 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=((__int64)v62, v25);
          *(_DWORD *)(*(_QWORD *)(i[8] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 8) )
          {
            v26 = v63;
            if ( !v63 )
              v26 = *(PVOID **)v62[0];
            DestroyMenu(v26);
          }
        }
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v62);
    }
    CCursorSizes::zzzRefreshSizes(gpCursorSizes);
    xxxUpdateSystemCursorsFromRegistry((__int64)v11, 1u);
    xxxUpdateSystemIconsFromRegistry(v11);
    v27 = 0;
    v28 = &v113;
    do
    {
      v48 = 0;
      v47 = &v49;
      if ( (unsigned int)FastGetProfileIntFromID(v11, *((unsigned int *)v28 - 2), *(unsigned int *)v28) )
        xxxSystemParametersInfo(*((unsigned int *)v28 - 1), v49, 0LL, 0x8000LL, &v49, 0);
      ++v27;
      v28 += 2;
    }
    while ( v27 < 0xF );
    FastGetProfileIntsW(v11, &v167, 4LL);
    LOBYTE(v29) = v57 != 0;
    EnableMouseAcceleration(v29, v30, v31, v32);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, v47, v48);
  if ( v7 )
    FastGetProfileIntFromID(v11, 35LL, 236LL);
  v33 = 0;
  v34 = &v72;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(v11, *((unsigned int *)v34 - 2), *(unsigned int *)v34) )
      xxxSystemParametersInfo(*((unsigned int *)v34 - 1), v49, 0LL, 0x8000LL, &v49, v16);
    ++v33;
    v34 += 2;
  }
  while ( v33 < 0xB );
  v35 = v16;
  if ( v51 )
    v35 = 2;
  CalcScreenSaverTimeout(v11, v35);
  FastGetProfileIntsW(v11, &v183, 11LL);
  if ( SHIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) < 2 )
    HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 7;
  if ( SLODWORD(WPP_MAIN_CB.Dpc.DpcData) < 1 )
    LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 3;
  if ( v58 )
    _InterlockedOr(gpsi, 0x200u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFDFF);
  if ( v59 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v60 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v7 )
    {
      RtlStringCchPrintfW(v227, 0x28uLL, L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v228, 40LL, 0LL);
      FastWriteProfileStringW(v11, 4LL, v228, v227);
    }
  }
  else if ( v60 )
  {
    gdwPUDFlags |= 0x100000u;
  }
  else
  {
    gdwPUDFlags &= ~0x100000u;
  }
  v49 = *(_DWORD *)(gpsi + 4984LL);
  if ( (unsigned int)FastGetProfileIntFromID(v11, 4LL, 4LL) )
    SetCaretBlinkTime(v49);
  if ( !v9 )
  {
    v51 = 0;
    FastGetProfileIntFromID(v11, 12LL, 608LL);
    UpdateMouseSensitivity(v51);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, v11);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(v11, 12LL, 613LL);
    SetMouseTrails(v49);
    FastGetProfileIntW(v11, 7LL, L"TTOnly");
    GreSetFontEnumeration(v49);
    FastGetProfileIntFromID(v11, 12LL, 91LL);
    FastGetProfileIntFromID(v11, 12LL, 92LL);
    FastGetProfileIntFromID(v11, 12LL, 93LL);
    SystemArgument1 = (unsigned int)WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) < 0xA )
    {
      SystemArgument1 = 10;
      LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = 10;
    }
    if ( SystemArgument1 > 0x7FFFFFFF )
      LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(v11);
    InitScancodeMap(v39, v38);
    FastGetProfileDword(v11, 24LL, L"Attributes", 0LL, gdwKeyboardAttributes);
    gdwKeyboardAttributes = (gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(v11);
  }
  v40 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL);
  if ( v40 )
  {
    *(_DWORD *)(gpsi + 2148LL) = 1;
    ZwClose(v40);
  }
  *(_DWORD *)(gpsi + 2148LL) |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v54 & 2) != 0 )
    GreSetFontEnumeration(v54 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v54 | 0x30u);
  v41 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v41 )
    v41 = 1200;
  gulGamma = v41;
  v42 = (*(_DWORD *)UPDWORDPointer(8210LL) & 1) == 0;
  v43 = &unk_1C02E1790;
  if ( v42 )
    v43 = &unk_1C02F2B10;
  off_1C03260D0 = v43;
  FreeProfileUserName(v11, &v64);
  if ( v55 == 2 )
    xxxUserResetDisplayDevice(v45, v44);
  FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v61);
  if ( v61 )
    LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = 1;
  if ( v7 )
  {
    v66 = 0LL;
    v69 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    if ( (unsigned int)ReadPointerDeviceSettings(146LL, &v66) )
    {
      if ( !HIDWORD(v67) )
        SetTouchInputStatus(0LL);
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    v55 = 0;
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    UserSessionSwitchLeaveCrit(v46);
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, &v55);
    EnterCrit(1LL, 0LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v7 )
  {
    TraceLoggingAutoRotationStateEvent();
    _InterlockedOr(gpsi, 0x400u);
  }
  return 1LL;
}
