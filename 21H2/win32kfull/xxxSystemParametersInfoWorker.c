/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x1C00DD338
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x1C00DD320 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0011430 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C002513C (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0025830 (xxxUpdateSystemIconsFromRegistry.c)
 *     SetDesktopPattern @ 0x1C00260D0 (SetDesktopPattern.c)
 *     GreSetFontEnumeration @ 0x1C0027818 (GreSetFontEnumeration.c)
 *     SetMouseTrails @ 0x1C0029734 (SetMouseTrails.c)
 *     SetPointer @ 0x1C002A4C0 (SetPointer.c)
 *     ClearKeyboardStates @ 0x1C002A8BC (ClearKeyboardStates.c)
 *     CheckWinstaAttributeAccess @ 0x1C00333F0 (CheckWinstaAttributeAccess.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     GetMonitorWorkRect @ 0x1C0041430 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C0041DF8 (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x1C0042310 (_MonitorFromRect.c)
 *     PostShellHookMessagesEx @ 0x1C00435F8 (PostShellHookMessagesEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0049A6C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C004DEE4 (IsWindowUnderActiveLockScreen.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxInternalInvalidate @ 0x1C0072580 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C0075160 (IntersectRect.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     GreExtGetObjectW @ 0x1C0083108 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     _SetDoubleClickTime @ 0x1C00DB5F0 (_SetDoubleClickTime.c)
 *     xxxSetIMEShowStatus @ 0x1C00DB6F4 (xxxSetIMEShowStatus.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C00DB764 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     bSetDevDragWidth @ 0x1C00DB7BC (bSetDevDragWidth.c)
 *     GetEasTimeout @ 0x1C00DC098 (GetEasTimeout.c)
 *     SetKeyboardRate @ 0x1C00DC214 (SetKeyboardRate.c)
 *     ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C00DC2A8 (-PostWindowArrangementCheck@@YAXK@Z.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C00DC304 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     UpdateDesktopThresholds @ 0x1C00DC370 (UpdateDesktopThresholds.c)
 *     ReadPointerDeviceSettingsFull @ 0x1C00E0A64 (ReadPointerDeviceSettingsFull.c)
 *     GetWindowNCMetrics @ 0x1C00E0CB0 (GetWindowNCMetrics.c)
 *     GetDPIMetrics @ 0x1C00E0DEC (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C00E0E18 (GetDPIServerInfo.c)
 *     GetProcessDpiServerInfo @ 0x1C00E0E44 (GetProcessDpiServerInfo.c)
 *     CreateBitmapStrip @ 0x1C00E29D0 (CreateBitmapStrip.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00E5E60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     xxxDesktopRecalc @ 0x1C00FFD6C (xxxDesktopRecalc.c)
 *     xxxSetDeskWallpaper @ 0x1C012EB9C (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C012EEF8 (LoadWallpaperFilenameFromRegistry.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0132090 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     GetKbdLangSwitch @ 0x1C0134DAC (GetKbdLangSwitch.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0136C5C (xxxInvalidateWallpaperWindow.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C01670A8 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?IsWDAGContainer@@YAHXZ @ 0x1C0167578 (-IsWDAGContainer@@YAHXZ.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x1C01D65E0 (-NotifyISMPenButtonYieldSettingChange@@YAXXZ.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D6DA8 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01D6FE8 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01D70E8 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D71E8 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D7528 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01D77E0 (EditionxxxBroadcastSPIChange.c)
 *     UpdateWinIniInt @ 0x1C01D7B00 (UpdateWinIniInt.c)
 *     xxxMetricsRecalc @ 0x1C01D7C94 (xxxMetricsRecalc.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01EA3A0 (-_SwapMouseButton@@YAHH@Z.c)
 *     GetUserHandedness @ 0x1C01EE890 (GetUserHandedness.c)
 *     WritePointerDeviceSettingsFull @ 0x1C0209C3C (WritePointerDeviceSettingsFull.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C0225138 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C022546C (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C02254EC (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C022556C (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C0252078 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C0252F08 (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetMonitorMenuRect @ 0x1C025D9AC (GetMonitorMenuRect.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C0275048 (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfoWorker(__int64 a1, unsigned int a2, void *a3, __int16 a4)
{
  __int64 v5; // rbx
  __int64 CurrentProcessWin32Process; // r9
  int updated; // r15d
  int v8; // r13d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // r10d
  unsigned int v20; // ebx
  unsigned int v21; // edi
  int v22; // eax
  ULONG DeferredRoutine; // ecx
  unsigned int v25; // ebx
  struct _UNICODE_STRING *v26; // rax
  struct _UNICODE_STRING *v27; // rdi
  __int64 ProcessDpiServerInfo; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // r12d
  unsigned __int8 v37; // al
  void *v38; // rcx
  __int64 DeferredContext_high; // rcx
  int v40; // ecx
  unsigned int DpiForSystem; // eax
  __int64 v42; // rcx
  int UserHandedness; // eax
  __int64 v44; // rcx
  unsigned int v45; // r13d
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // ebx
  unsigned int v50; // r13d
  const wchar_t *v51; // rax
  __int64 v52; // rax
  struct tagWND *v53; // rcx
  __int64 v54; // rbx
  int v55; // ebx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // r8
  int v61; // eax
  int v62; // edx
  __int64 v63; // rcx
  unsigned int v64; // r13d
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // ebx
  unsigned int v69; // r13d
  __int64 DPIMetrics; // rax
  char *v71; // r8
  int v72; // eax
  struct _UNICODE_STRING *v73; // rdi
  int v74; // ebx
  _DWORD *v75; // r9
  struct tagMOUSEKEYS *v76; // rbx
  int v77; // r8d
  unsigned int v78; // r8d
  struct _UNICODE_STRING *v79; // rdi
  unsigned int v80; // r9d
  char *v81; // r8
  int v82; // ecx
  int v83; // edx
  __int64 v84; // rax
  _OWORD *MonitorWorkRect; // rax
  __int64 v86; // rax
  int *v87; // r14
  __int64 v88; // rcx
  __int64 v89; // r14
  __int64 v90; // rcx
  __int64 v91; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 DispInfo; // rax
  _DWORD *v96; // rbx
  unsigned int v97; // eax
  __int64 v98; // rcx
  unsigned int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  const wchar_t *v104; // r9
  const wchar_t *v105; // r9
  _QWORD *v106; // r8
  _OWORD *v107; // rax
  unsigned __int16 *v108; // rcx
  struct tagSOUNDSENTRYW *v109; // rbx
  int v110; // r8d
  unsigned int v111; // eax
  int v112; // r8d
  struct _UNICODE_STRING *v113; // rdi
  char *v114; // rcx
  _DWORD *v115; // rdx
  unsigned int v116; // ebx
  unsigned int v117; // ecx
  __int64 v118; // rax
  int v119; // edx
  bool v120; // zf
  __int64 v121; // rax
  __int64 v122; // rdi
  const wchar_t *v123; // rbx
  const wchar_t *v124; // r9
  int v125; // r15d
  unsigned int i; // ebx
  ULONG *v127; // rax
  unsigned int *v128; // rax
  unsigned int v129; // ebx
  int v130; // ecx
  unsigned int PointerDeviceSettingsFull; // eax
  unsigned int v132; // ecx
  __int64 v133; // rax
  int *v134; // rdi
  __int64 v135; // rcx
  __int64 v136; // rcx
  unsigned int v137; // eax
  __int64 v138; // rax
  int v139; // ecx
  InteractiveControlManager *v140; // rax
  InteractiveControlManager *v141; // rax
  __int64 v142; // rax
  __int64 v143; // rcx
  _DWORD *v144; // rcx
  int v145; // edi
  int v146; // r8d
  int v147; // ecx
  bool v148; // zf
  int v149; // ecx
  int *v150; // rax
  int v151; // ecx
  __int64 v152; // rcx
  int v153; // eax
  unsigned int ProfileValue; // eax
  unsigned int v155; // edi
  int v156; // edx
  unsigned __int64 v157; // rcx
  int v158; // eax
  int v159; // eax
  __int64 v160; // rdx
  unsigned __int64 v161; // rcx
  int v162; // ebx
  int v163; // ebx
  int v164; // ebx
  int v165; // ebx
  __int64 v166; // r8
  int v167; // ecx
  unsigned int v168; // edx
  __int64 v169; // rax
  struct tagWND *v170; // rcx
  void *v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  unsigned int v174; // r12d
  int v175; // ebx
  void *v176; // rax
  _BYTE *v177; // rax
  int v178; // ecx
  BOOL v179; // edx
  unsigned int v180; // [rsp+40h] [rbp-478h]
  int v181; // [rsp+44h] [rbp-474h]
  void *Src; // [rsp+48h] [rbp-470h] BYREF
  int v183; // [rsp+50h] [rbp-468h] BYREF
  int v184; // [rsp+54h] [rbp-464h] BYREF
  unsigned int v185; // [rsp+58h] [rbp-460h]
  const wchar_t *v186; // [rsp+60h] [rbp-458h] BYREF
  __int64 v187; // [rsp+68h] [rbp-450h] BYREF
  __int128 v188; // [rsp+70h] [rbp-448h] BYREF
  __int64 v189; // [rsp+80h] [rbp-438h]
  __int64 v190; // [rsp+88h] [rbp-430h] BYREF
  _DWORD v191[4]; // [rsp+90h] [rbp-428h] BYREF
  __int128 v192; // [rsp+A0h] [rbp-418h]
  __int128 v193; // [rsp+B0h] [rbp-408h] BYREF
  __int64 v194; // [rsp+C0h] [rbp-3F8h]
  __int128 v195; // [rsp+D0h] [rbp-3E8h] BYREF
  __int128 v196; // [rsp+E0h] [rbp-3D8h] BYREF
  __int128 v197; // [rsp+F0h] [rbp-3C8h] BYREF
  __int128 v198; // [rsp+100h] [rbp-3B8h] BYREF
  __int128 v199; // [rsp+110h] [rbp-3A8h] BYREF
  _BYTE v200[16]; // [rsp+120h] [rbp-398h] BYREF
  __int128 v201; // [rsp+130h] [rbp-388h] BYREF
  __int128 v202; // [rsp+140h] [rbp-378h] BYREF
  __int128 v203; // [rsp+150h] [rbp-368h] BYREF
  __int128 v204; // [rsp+160h] [rbp-358h] BYREF
  __int128 v205; // [rsp+170h] [rbp-348h] BYREF
  __int128 v206; // [rsp+180h] [rbp-338h]
  __int128 v207; // [rsp+190h] [rbp-328h] BYREF
  int v208; // [rsp+1A0h] [rbp-318h]
  unsigned int v209; // [rsp+1A4h] [rbp-314h]
  __int128 v210; // [rsp+1A8h] [rbp-310h]
  unsigned __int16 v211[40]; // [rsp+1C0h] [rbp-2F8h] BYREF
  _WORD v212[40]; // [rsp+210h] [rbp-2A8h] BYREF
  _BYTE v213[528]; // [rsp+260h] [rbp-258h] BYREF

  LOWORD(v185) = a4;
  v5 = (unsigned int)a1;
  v180 = a1;
  LODWORD(v190) = a1;
  Src = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  *(_QWORD *)&v201 = CurrentProcessWin32Process;
  updated = 0;
  v183 = 0;
  v8 = 1;
  v9 = v185 & 1;
  v10 = 2LL;
  v181 = v185 & 2;
  LODWORD(v186) = v181;
  v11 = !(v185 & 1);
  v184 = v11;
  v12 = (unsigned __int16)v185 & 0x8000;
  v185 &= 0x8000u;
  v188 = 0LL;
  v189 = 0LL;
  v212[0] = 0;
  if ( (unsigned int)v5 > 0x50 )
  {
    if ( (unsigned int)v5 > 0x52 )
    {
      if ( (unsigned int)v5 <= 0x54 )
        goto LABEL_892;
      if ( (unsigned int)v5 > 0x56 )
      {
        if ( (_DWORD)v5 == 92 || (_DWORD)v5 == 97 )
          goto LABEL_5;
        goto LABEL_11;
      }
    }
    return 1LL;
  }
  if ( (unsigned int)v5 >= 0x4F )
  {
LABEL_892:
    *(_DWORD *)Src = 0;
    return 1LL;
  }
  if ( (unsigned int)v5 <= 0x3F )
  {
    v13 = 0xC002018000001180uLL;
    if ( _bittest64((const __int64 *)&v13, v5) )
      goto LABEL_5;
  }
LABEL_11:
  v15 = gpepCSRSS;
  if ( *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS )
  {
    if ( (unsigned int)v5 <= 0x39 )
    {
      if ( (_DWORD)v5 != 57 )
      {
        switch ( (int)v5 )
        {
          case 2:
          case 4:
          case 6:
          case 11:
          case 15:
          case 17:
          case 19:
          case 20:
          case 21:
          case 23:
          case 26:
          case 28:
          case 29:
          case 30:
          case 32:
          case 33:
          case 34:
          case 36:
          case 37:
          case 42:
          case 44:
          case 46:
          case 47:
          case 51:
          case 53:
          case 55:
            goto LABEL_22;
          case 13:
          case 24:
            if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              LODWORD(v187) = 2;
              goto LABEL_24;
            }
            if ( a2 )
              goto LABEL_36;
            return 1LL;
          default:
            goto LABEL_35;
        }
      }
      goto LABEL_22;
    }
    if ( (unsigned int)v5 > 0x60 )
    {
      if ( (_DWORD)v5 == 99
        || (_DWORD)v5 == 101
        || (_DWORD)v5 == 103
        || (_DWORD)v5 == 107
        || (_DWORD)v5 == 109
        || (_DWORD)v5 == 119
        || (_DWORD)v5 == 161
        || (_DWORD)v5 == 163
        || (_DWORD)v5 == 4135 )
      {
        goto LABEL_22;
      }
    }
    else
    {
      v16 = (unsigned int)(v5 - 59);
      if ( (unsigned int)v16 <= 0x25 )
      {
        v17 = 0x21B0075545LL;
        if ( _bittest64(&v17, v16) )
        {
LABEL_22:
          v18 = 16;
          goto LABEL_23;
        }
      }
    }
LABEL_35:
    if ( (v5 & 0x3000) != 0 && (v5 & 1) != 0 )
    {
LABEL_36:
      LODWORD(v187) = 16;
      goto LABEL_37;
    }
    v18 = 2;
LABEL_23:
    LODWORD(v187) = v18;
    if ( v18 == 2 )
    {
LABEL_24:
      if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 2u) )
      {
        v14 = 5LL;
        goto LABEL_439;
      }
      goto LABEL_38;
    }
LABEL_37:
    if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
      return 0LL;
LABEL_38:
    v10 = 2LL;
    v19 = 10;
    v12 = v185;
    CurrentProcessWin32Process = v201;
    if ( (_DWORD)v187 != 2 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v19 = 10;
LABEL_42:
  v184 = 1;
  v11 = 1;
LABEL_43:
  if ( (unsigned int)v5 > 0x1026 )
  {
    if ( (_DWORD)v5 == 4135 )
    {
      if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
      {
        v9 = 0;
        v11 = 0;
      }
      if ( v9 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 112LL, a2 != 0);
        v11 = updated;
      }
      if ( v11 )
        gbBlockSendInputResets = a2 != 0;
      goto LABEL_68;
    }
    if ( (_DWORD)v5 == 8228 )
    {
      UserHandedness = GetUserHandedness(v15, 2LL, v12, CurrentProcessWin32Process);
      goto LABEL_113;
    }
    if ( (_DWORD)v5 != 8229 )
      goto LABEL_771;
    a2 = 0;
    if ( (unsigned int)RIMIsDefaultUILanguageRTL(v15, 2LL, v12, CurrentProcessWin32Process) )
      LOBYTE(a2) = (_DWORD)Src == 0;
    else
      LOBYTE(a2) = (_DWORD)Src != 0;
    goto LABEL_880;
  }
  if ( (_DWORD)v5 == 4134 )
  {
    v120 = gbBlockSendInputResets == 0;
    goto LABEL_513;
  }
  if ( (unsigned int)v5 <= 0x64 )
  {
    if ( (_DWORD)v5 == 100 )
    {
      DeferredRoutine = (ULONG)WPP_MAIN_CB.Dpc.DeferredRoutine;
      goto LABEL_75;
    }
    if ( (unsigned int)v5 <= 0x2B )
    {
      if ( (_DWORD)v5 == 43 )
      {
        v75 = Src;
        *(_DWORD *)Src = 20;
        v75[1] = *(_DWORD *)(gpsi + 2124LL) - 6;
        v75[2] = *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
        v75[3] = *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
        v75[4] = *(_DWORD *)(gpsi + 2120LL);
        goto LABEL_68;
      }
      if ( (unsigned int)v5 <= 0x18 )
      {
        if ( (_DWORD)v5 == 24 )
        {
          if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
          {
            if ( a2 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v15) & 0xF) != 0 )
              {
                v65 = PsGetCurrentProcessWin32Process(v63);
                v64 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v65 + 284));
                v67 = PsGetCurrentProcessWin32Process(v66);
                a2 = EngMulDiv(v64, 96, *(unsigned __int16 *)(v67 + 284));
              }
              else
              {
                v64 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
              }
              v68 = *(_DWORD *)(gpsi + 2308LL);
              if ( v64 > v68 )
                v68 = v64;
              v69 = *(_DWORD *)(gpsi + 2428LL);
              if ( a2 > v69 )
                v69 = a2;
              if ( v9 )
              {
                updated = SetWindowMetricInt(0LL, 0x41u, v68);
                v11 = updated;
              }
              if ( v11 )
              {
                SetDpiDepSysMet(19LL, v68);
                *(_DWORD *)(gpsi + 2480LL) = v69;
              }
            }
            goto LABEL_68;
          }
          DpiForSystem = GetDpiForSystem(v15);
          v42 = 19LL;
LABEL_112:
          UserHandedness = GetDpiDependentMetric(v42, DpiForSystem);
LABEL_113:
          *(_DWORD *)Src = UserHandedness;
          goto LABEL_68;
        }
        if ( (unsigned int)v5 <= 0xD )
        {
          if ( (_DWORD)v5 != 13 )
          {
            if ( (_DWORD)v5 != 1 )
            {
              if ( (_DWORD)v5 == 2 )
              {
                if ( v9 )
                {
                  RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), v211, 10LL);
                  updated = FastUpdateWinIni(0LL, 11LL, 9LL, v211);
                  v11 = updated;
                }
                if ( v11 )
                {
                  v120 = a2 == 0;
                  v21 = v180;
                  if ( v120 )
                    gdwPUDFlags &= ~0x80000u;
                  else
                    gdwPUDFlags |= 0x80000u;
                  goto LABEL_69;
                }
                goto LABEL_68;
              }
              if ( (_DWORD)v5 == 3 )
              {
                *(_DWORD *)Src = WPP_MAIN_CB.Dpc.SystemArgument1;
                DeferredContext_high = HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext);
                *((_DWORD *)Src + 1) = HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext);
                *((_DWORD *)Src + 2) = (unsigned __int8)MouseAccelerationEnabled(
                                                          DeferredContext_high,
                                                          2LL,
                                                          v12,
                                                          CurrentProcessWin32Process);
                goto LABEL_68;
              }
              if ( (_DWORD)v5 != 4 )
              {
                if ( (_DWORD)v5 == 5 )
                {
                  DeferredRoutine = *(_DWORD *)(GetDPIServerInfo(13LL, 2LL, v12, CurrentProcessWin32Process) + 4);
                  goto LABEL_75;
                }
                if ( (_DWORD)v5 != 6 )
                {
                  if ( (_DWORD)v5 != 10 )
                  {
                    if ( (_DWORD)v5 == 11 )
                    {
                      v20 = 31;
                      if ( a2 <= 0x1F )
                        v20 = a2;
                      if ( v9 )
                      {
                        updated = UpdateWinIniInt(0LL, 13LL, 13LL, v20);
                        v11 = updated;
                      }
                      if ( v11 )
                      {
                        gnKeyboardSpeed = v20 | gnKeyboardSpeed & 0xFFFFFFE0;
LABEL_67:
                        SetKeyboardRate();
                        goto LABEL_68;
                      }
                      v22 = v181;
LABEL_480:
                      v21 = v180;
                      goto LABEL_70;
                    }
                    goto LABEL_771;
                  }
                  DeferredRoutine = gnKeyboardSpeed & 0x1F;
LABEL_75:
                  *(_DWORD *)Src = DeferredRoutine;
                  goto LABEL_68;
                }
                v25 = 1;
                if ( (int)a2 > 1 )
                  v25 = a2;
                if ( v25 >= 0x32 )
                  v25 = 50;
                if ( v25 != (__int64)*(int *)(GetDPIServerInfo(13LL, 2LL, v12, CurrentProcessWin32Process) + 4) )
                {
                  v26 = (struct _UNICODE_STRING *)CreateProfileUserName(&v188);
                  v27 = v26;
                  if ( v9 )
                  {
                    updated = SetWindowMetricInt(v26, 0x88u, v25);
                    v11 = updated;
                  }
                  if ( v11 )
                  {
                    xxxSetAndDrawNCMetrics(v27, v25, 0LL);
                    ProcessDpiServerInfo = GetProcessDpiServerInfo();
                    bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
                  }
LABEL_85:
                  v29 = (__int64)v27;
LABEL_86:
                  FreeProfileUserName(v29, &v188);
                  goto LABEL_68;
                }
LABEL_363:
                v11 = 1;
                goto LABEL_68;
              }
              if ( !v9 )
              {
LABEL_99:
                if ( v11 )
                {
                  v38 = Src;
                  LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = *(_DWORD *)Src;
                  HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) = *((_DWORD *)Src + 1);
                  LOBYTE(v38) = *((_DWORD *)Src + 2) != 0;
                  EnableMouseAcceleration(v38);
                }
                goto LABEL_68;
              }
              v30 = CreateProfileUserName(&v188);
              v185 = UpdateWinIniInt(v30, 12LL, 10LL, *(unsigned int *)Src);
              v31 = UpdateWinIniInt(v30, 12LL, 11LL, *((unsigned int *)Src + 1));
              v36 = UpdateWinIniInt(v30, 12LL, 12LL, *((unsigned int *)Src + 2));
              if ( v185 )
              {
                if ( v31 && v36 )
                {
                  updated = 1;
LABEL_98:
                  v11 = updated;
                  FreeProfileUserName(v30, &v188);
                  goto LABEL_99;
                }
                UpdateWinIniInt(v30, 12LL, 10LL, LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1));
              }
              if ( v31 )
                UpdateWinIniInt(v30, 12LL, 11LL, HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext));
              if ( v36 )
              {
                v37 = MouseAccelerationEnabled(v33, v32, v34, v35);
                UpdateWinIniInt(v30, 12LL, 12LL, v37);
              }
              goto LABEL_98;
            }
            v40 = gdwPUDFlags >> 19;
LABEL_109:
            DeferredRoutine = v40 & 1;
            goto LABEL_75;
          }
          if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
          {
            if ( a2 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(13LL) & 0xF) != 0 )
              {
                v46 = PsGetCurrentProcessWin32Process(v44);
                v45 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v46 + 284));
                v48 = PsGetCurrentProcessWin32Process(v47);
                a2 = EngMulDiv(v45, 96, *(unsigned __int16 *)(v48 + 284));
              }
              else
              {
                v45 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
              }
              v49 = *(_DWORD *)(gpsi + 2304LL);
              if ( v45 > v49 )
                v49 = v45;
              v50 = *(_DWORD *)(gpsi + 2424LL);
              if ( a2 > v50 )
                v50 = a2;
              if ( v9 )
              {
                updated = SetWindowMetricInt(0LL, 0x40u, v49);
                v11 = updated;
              }
              if ( v11 )
              {
                SetDpiDepSysMet(18LL, v49);
                *(_DWORD *)(gpsi + 2476LL) = v50;
              }
            }
            goto LABEL_68;
          }
          DpiForSystem = GetDpiForSystem(13LL);
          v42 = 18LL;
          goto LABEL_112;
        }
        if ( (_DWORD)v5 == 14 )
        {
          v62 = (int)abs32(giScreenSaveTimeOutMs) / 1000;
          goto LABEL_216;
        }
        if ( (_DWORD)v5 != 15 )
        {
          if ( (_DWORD)v5 == 16 )
          {
            DeferredRoutine = giScreenSaveTimeOutMs > 0;
            goto LABEL_75;
          }
          if ( (_DWORD)v5 != 17 )
          {
            if ( (_DWORD)v5 != 20 )
            {
              if ( (_DWORD)v5 != 21 )
              {
                if ( (_DWORD)v5 != 22 )
                {
                  if ( (_DWORD)v5 == 23 )
                  {
                    if ( v9 )
                    {
                      updated = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
                      v11 = updated;
                    }
                    if ( !v11 )
                      goto LABEL_68;
                    gnKeyboardSpeed = gnKeyboardSpeed & 0xFFFFFF9F | (32 * a2);
                    goto LABEL_67;
                  }
                  goto LABEL_771;
                }
                DeferredRoutine = (gnKeyboardSpeed >> 5) & 3;
                goto LABEL_75;
              }
              v186 = (const wchar_t *)Src;
              if ( a2 == -1 && Src )
              {
LABEL_5:
                v14 = 87LL;
LABEL_439:
                UserSetLastError(v14, v10, v12);
                return 0LL;
              }
              v27 = (struct _UNICODE_STRING *)CreateProfileUserName(&v188);
              if ( (unsigned int)CheckDesktopPolicy(v27, 2LL) )
              {
                v9 = 0;
                v11 = 0;
              }
              v51 = v186;
              if ( v9 && v186 )
              {
                FastGetProfileStringFromIDW(v27, 4LL, 2LL, &word_1C02E597C, v213, 260, 0);
                updated = FastUpdateWinIni(v27, 4LL, 2LL, v186);
                v11 = updated;
                v51 = v186;
              }
              if ( v11 )
              {
                if ( !(unsigned int)SetDesktopPattern((__int64)v27, v51) )
                {
                  if ( v9 && v186 )
                    FastUpdateWinIni(v27, 4LL, 2LL, v213);
                  FreeProfileUserName(v27, &v188);
                  return 0LL;
                }
                xxxSendNotifyMessage(-1LL, 0x15u, 0LL, 0LL, 1);
                v52 = *(_QWORD *)(gptiCurrent + 456LL);
                if ( v52 )
                  v53 = *(struct tagWND **)(*(_QWORD *)(v52 + 8) + 24LL);
                else
                  v53 = 0LL;
                xxxInternalInvalidate(v53, (HRGN)1, 0x10485u);
              }
              goto LABEL_85;
            }
            v54 = CreateProfileUserName(&v188);
            if ( (unsigned int)CheckDesktopPolicy(v54, 67LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              if ( a2 == -1 )
              {
                v11 = 1;
              }
              else
              {
                FastGetProfileStringFromIDW(v54, 4LL, 67LL, &word_1C02E597C, v213, 260, 8);
                updated = FastUpdateWinIni(v54, 4LL, 67LL, Src);
                v11 = updated;
              }
            }
            if ( v11 )
            {
              if ( (unsigned int)xxxSetDeskWallpaper(v54, Src) )
              {
                xxxInvalidateWallpaperWindow();
              }
              else
              {
                if ( v9 )
                {
                  if ( a2 == -1 )
                    goto LABEL_170;
                  FastUpdateWinIni(v54, 4LL, 67LL, v213);
                }
                v11 = 0;
                updated = 0;
              }
            }
LABEL_170:
            v29 = v54;
            goto LABEL_86;
          }
          if ( a2 - 2 <= 0xFFFFFFFC )
            return 0LL;
          if ( !gdwRITdemonLockState || (_DWORD)v12 )
          {
            gbLockConsoleActive = a2 == -1;
            if ( !gfSwitchInProgress )
            {
              if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
              {
                v9 = 0;
                v11 = 0;
                v184 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
                v183 = updated;
                v11 = updated;
                v184 = updated;
              }
              if ( !v11 )
                goto LABEL_68;
              if ( !gbBlockSendInputResets )
              {
                CInputGlobals::UpdateLastInputTime(
                  gpInputGlobals,
                  (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                  7LL);
                updated = v183;
                v11 = v184;
              }
              if ( giScreenSaveTimeOutMs < 0 )
              {
                if ( a2 )
                  goto LABEL_186;
                if ( giScreenSaveTimeOutMs < 0 )
                  goto LABEL_68;
              }
              if ( a2 )
                goto LABEL_68;
LABEL_186:
              giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
              goto LABEL_68;
            }
            return 0LL;
          }
LABEL_762:
          v14 = 329LL;
          goto LABEL_439;
        }
        *(_QWORD *)&v201 = giScreenSaveTimeOutMs;
        if ( gfSwitchInProgress )
          return 0LL;
        if ( gdwRITdemonLockState && !(_DWORD)v12 )
          goto LABEL_762;
        v55 = 1000 * a2;
        v56 = 1000 * GetEasTimeout();
        LODWORD(v187) = v56;
        if ( v56 )
        {
          if ( *(int *)v201 > 0 && v56 < v55 || v55 <= 0 )
          {
            UserSetLastError(1260LL, v57, v58);
            v9 = 0;
            v11 = 0;
            v184 = 0;
          }
        }
        else
        {
          v8 = 0;
        }
        if ( (unsigned int)CheckDesktopPolicy(0LL, 99LL) )
        {
          if ( v8 )
          {
            v185 = 0;
            if ( !(unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
              goto LABEL_206;
            v61 = 1000 * v185;
            v185 = v61;
            if ( !v61 || v61 >= (int)v187 || *(int *)v201 <= 0 || v61 >= v55 )
              goto LABEL_206;
            UserSetLastError(1260LL, v59, v60);
          }
          v184 = 0;
          v11 = 0;
          v9 = 0;
        }
LABEL_206:
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 4LL, 99LL, v55 / 0x3E8u);
          v183 = updated;
          v11 = updated;
          v184 = updated;
        }
        if ( v11 )
        {
          if ( !gbBlockSendInputResets )
          {
            CInputGlobals::UpdateLastInputTime(
              gpInputGlobals,
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              7LL);
            updated = v183;
            v11 = v184;
          }
          if ( *(int *)v201 < 0 && !v8 )
            v55 = -1000 * a2;
          *(_DWORD *)v201 = v55;
        }
        goto LABEL_68;
      }
      if ( (unsigned int)v5 <= 0x21 )
      {
        switch ( (_DWORD)v5 )
        {
          case 0x21:
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
              v11 = updated;
            }
            if ( v11 )
              _SwapMouseButton(a2 != 0);
            goto LABEL_68;
          case 0x19:
            v40 = gdwPUDFlags >> 21;
            goto LABEL_109;
          case 0x1A:
            if ( v9 )
            {
              updated = SetWindowMetricInt(0LL, 0x42u, a2 != 0);
              v11 = updated;
            }
            if ( v11 )
            {
              if ( a2 )
                gdwPUDFlags |= 0x200000u;
              else
                gdwPUDFlags &= ~0x200000u;
              xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
            }
            goto LABEL_68;
          case 0x1B:
            v62 = *(_DWORD *)(gpsi + 2056LL);
            goto LABEL_216;
        }
        if ( (_DWORD)v5 != 28 )
        {
          if ( (_DWORD)v5 == 29 )
          {
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 97LL, a2);
              v11 = updated;
            }
            if ( v11 )
              *(_DWORD *)(gpsi + 2040LL) = a2;
            goto LABEL_68;
          }
          if ( (_DWORD)v5 == 30 )
          {
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
              v11 = updated;
            }
            if ( v11 )
              *(_DWORD *)(gpsi + 2044LL) = a2;
            goto LABEL_68;
          }
          if ( (_DWORD)v5 != 31 )
          {
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
              v11 = updated;
            }
            if ( v11 )
              SetDoubleClickTime(a2);
            goto LABEL_68;
          }
          DPIMetrics = GetDPIMetrics(v15, 2LL, v12, CurrentProcessWin32Process);
          v71 = (char *)Src;
          goto LABEL_245;
        }
LABEL_880:
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
          v11 = updated;
        }
        if ( v11 )
        {
          v178 = *(_DWORD *)(gpsi + 2056LL);
          v179 = a2 != 0;
          *(_DWORD *)(gpsi + 2056LL) = v179;
          TraceLoggingSPISetMenuDropAlignmentEvent(v178, v179);
        }
        goto LABEL_68;
      }
      if ( (_DWORD)v5 != 34 )
      {
        switch ( (_DWORD)v5 )
        {
          case '#':
            *(_DWORD *)Src = 1;
            goto LABEL_68;
          case '$':
LABEL_68:
            v21 = v180;
LABEL_69:
            v22 = v181;
            goto LABEL_70;
          case '%':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 107LL, a2 == 1);
              v11 = updated;
            }
            if ( v11 )
            {
              v120 = a2 == 1;
              v21 = v180;
              if ( v120 )
                gdwPUDFlags |= 0x100000u;
              else
                gdwPUDFlags &= ~0x100000u;
              goto LABEL_69;
            }
            goto LABEL_68;
          case '&':
            v40 = gdwPUDFlags >> 20;
            goto LABEL_109;
          case ')':
            if ( Src )
            {
              GetWindowNCMetrics(Src, 2LL, v12, CurrentProcessWin32Process);
              goto LABEL_68;
            }
            return 0LL;
        }
        if ( (_DWORD)v5 != 42 )
          goto LABEL_771;
        goto LABEL_274;
      }
      if ( Src )
      {
        if ( a2 != 92 )
          return 0LL;
      }
      else if ( a2 )
      {
        return 0LL;
      }
      v73 = (struct _UNICODE_STRING *)CreateProfileUserName(&v188);
      v74 = xxxSetSPIMetrics(v73, 0x22u, Src, v9, &v183);
      FreeProfileUserName(v73, &v188);
      if ( v74 )
      {
        updated = v183;
        v21 = v180;
        v22 = v181;
        if ( v9 )
          v11 = v183;
        goto LABEL_70;
      }
      v11 = 0;
LABEL_294:
      updated = v183;
      goto LABEL_68;
    }
    if ( (unsigned int)v5 <= 0x48 )
    {
      if ( (_DWORD)v5 == 72 )
      {
        v115 = Src;
        if ( !Src || a2 != 8 )
          return 0LL;
        *(_DWORD *)Src = 8;
        v115[1] = *((_WORD *)&gdwPUDFlags + 1) & 1;
        goto LABEL_68;
      }
      if ( (unsigned int)v5 <= 0x39 )
      {
        switch ( (_DWORD)v5 )
        {
          case '9':
            if ( v9 )
            {
              RtlStringCchPrintfW(v211, 0x28uLL, (size_t *)L"%d", a2 == 1);
              updated = FastWriteProfileStringW(0LL, 20LL, L"On", v211);
              v11 = updated;
            }
            if ( v11 )
            {
              if ( a2 == 1 )
                gdwPUDFlags |= 0x8000u;
              else
                gdwPUDFlags &= ~0x8000u;
              SetAccessEnabledFlag();
              *(_DWORD *)(gpsi + 2176LL) = (gdwPUDFlags >> 15) & 1;
            }
            goto LABEL_68;
          case ',':
            goto LABEL_274;
          case '-':
            v96 = Src;
            *(_DWORD *)Src = 108;
            v97 = GetDpiForSystem(v15);
            v96[1] = GetDpiDependentMetric(18LL, v97);
            v99 = GetDpiForSystem(v98);
            v96[2] = GetDpiDependentMetric(19LL, v99);
            v100 = (gdwPUDFlags >> 21) & 1;
            v96[3] = v100;
            DPIMetrics = GetDPIMetrics(v100, v101, v102, v103);
            v71 = (char *)(v96 + 4);
LABEL_245:
            GreExtGetObjectW(*(HSURF *)(DPIMetrics + 64), 92LL, v71);
            goto LABEL_68;
          case '.':
LABEL_274:
            v72 = xxxSetSPIMetrics(0LL, v5, Src, v9, &v183);
            updated = v183;
            if ( v72 )
            {
              if ( v9 )
                v11 = v183;
            }
            else
            {
              v11 = 0;
            }
            RtlLoadStringOrError(135LL, v212, 40LL);
            goto LABEL_68;
          case '/':
            v201 = 0LL;
            if ( Src )
            {
              if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                return 0LL;
              v86 = MonitorFromRect((struct tagRECT *)Src, 1u, 0);
            }
            else
            {
              v86 = *(_QWORD *)(GetDispInfo(v15, 2LL) + 96);
            }
            v190 = v86;
            v203 = *GetMonitorRect(&v197, v86);
            v87 = (int *)&v203;
            if ( Src )
              v87 = (int *)Src;
            if ( !(unsigned int)IntersectRect(&v201, v87, (int *)&v203) || v201 != *(_OWORD *)v87 )
              goto LABEL_5;
            v210 = *GetMonitorWorkRect(&v198, v190);
            if ( v210 != v201 )
            {
              v89 = 0LL;
              if ( a2 )
              {
                v89 = SnapshotMonitorRects();
                if ( !v89 )
                  return 0LL;
              }
              if ( (W32GetCurrentThreadDpiAwarenessContext(v88) & 0xF) != 2
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
                && (v90 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL),
                    (*(_DWORD *)(v90 + 64) & 1) != 0) )
              {
                v91 = *(_QWORD *)(v190 + 40);
                CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v90);
                LogicalToPhysicalDPIRect(v91 + 44, &v201, CurrentThreadDpiAwarenessContext, &v190);
              }
              else
              {
                v93 = v190;
                *(_QWORD *)(*(_QWORD *)(v190 + 40) + 44LL) = v201;
                *(_DWORD *)(*(_QWORD *)(v93 + 40) + 52LL) = DWORD2(v201);
                v94 = *(_QWORD *)(v93 + 40);
                *(_DWORD *)(v94 + 56) = HIDWORD(v201);
              }
              DispInfo = GetDispInfo(v94, v93);
              if ( v190 == *(_QWORD *)(DispInfo + 96) )
                UpdateDesktopThresholds();
              if ( a2 )
              {
                v193 = 0LL;
                v194 = 0LL;
                PushW32ThreadLock(v89, &v193, (__int64)Win32FreePool);
                xxxDesktopRecalc(*(ShellWindowManagement **)(gptiCurrent + 456LL));
                PopAndFreeAlwaysW32ThreadLock((__int64)&v193);
              }
              updated = 1;
            }
            goto LABEL_363;
        }
        if ( (_DWORD)v5 != 48 )
        {
          if ( (_DWORD)v5 == 54 )
          {
            if ( a2 && a2 != 28 )
              return 0LL;
            v81 = (char *)Src;
            if ( !Src || *(_DWORD *)Src != 28 )
              return 0LL;
            *(_OWORD *)((char *)Src + 4) = *(_OWORD *)((char *)&gMouseKeys + 4);
            *(struct tagMOUSEKEYS **)(v81 + 20) = *(struct tagMOUSEKEYS *const *)((char *)&gMouseKeys + 20);
            v82 = *((_DWORD *)v81 + 1) & 0x4CFFFFFF;
            *((_DWORD *)v81 + 1) = v82;
            if ( gbMKMouseMode )
            {
              v82 |= 0x80000000;
              *((_DWORD *)v81 + 1) = v82;
            }
            v83 = v82 | ((gwMKButtonState & 3) << 24);
            *((_DWORD *)v81 + 1) = v83;
            *((_DWORD *)v81 + 1) = v83 | ((gwMKCurrentButton & 3) << 28);
            goto LABEL_68;
          }
          if ( (_DWORD)v5 == 55 )
          {
            v76 = (struct tagMOUSEKEYS *)Src;
            if ( a2 && a2 != 28 )
              return 0LL;
            if ( !Src )
              return 0LL;
            if ( *(_DWORD *)Src != 28 )
              return 0LL;
            v77 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
            *((_DWORD *)Src + 1) = v77;
            if ( (unsigned __int8)v77 != v77 )
              return 0LL;
            v78 = (HIDWORD(gMouseKeys) & 2) != 0 ? v77 | 2 : v77 & 0xFFFFFFFD;
            *((_DWORD *)v76 + 1) = v78;
            if ( (unsigned int)(*((_DWORD *)v76 + 2) - 10) > 0x15E
              || (unsigned int)(*((_DWORD *)v76 + 3) - 1000) > 0xFA0 )
            {
              return 0LL;
            }
            if ( v9 )
            {
              v79 = (struct _UNICODE_STRING *)CreateProfileUserName(&v188);
              updated = SetMouseKeys(v79, v76);
              v11 = updated;
              if ( !updated )
                SetMouseKeys(v79, gMouseKeys);
              FreeProfileUserName(v79, &v188);
            }
            if ( v11 )
            {
              memmove(gMouseKeys, v76, *(unsigned int *)v76);
              LODWORD(gMouseKeys) = 28;
              CalculateMouseTable();
              v80 = HIDWORD(gMouseKeys);
              if ( (v80 & 1) != 0 )
              {
                gbMKMouseMode = ((v80 >> 7) & 1) != (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)gNumLockVk >> 2]) != 0);
                MKShowMouseCursor();
              }
              else
              {
                MKHideMouseCursor();
              }
              SetAccessEnabledFlag();
              if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(11, 3uLL, 0LL, 10);
              PostShellHookMessagesEx(0xBu, 3LL, 0LL);
            }
            goto LABEL_68;
          }
          if ( (_DWORD)v5 != 56 )
            goto LABEL_771;
          v40 = gdwPUDFlags >> 15;
          goto LABEL_109;
        }
        v84 = GetDispInfo(v15, 2LL);
        MonitorWorkRect = GetMonitorWorkRect(&v196, *(_QWORD *)(v84 + 96));
LABEL_340:
        *(_OWORD *)Src = *MonitorWorkRect;
        goto LABEL_68;
      }
      switch ( (_DWORD)v5 )
      {
        case '@':
          if ( a2 && a2 != 56 )
            return 0LL;
          v114 = (char *)Src;
          if ( !Src || *(_DWORD *)Src != 56 )
            return 0LL;
          *(_OWORD *)((char *)Src + 4) = *(_OWORD *)((char *)&gSoundSentry + 4);
          *(_OWORD *)(v114 + 20) = *(_OWORD *)((char *)&gSoundSentry + 20);
          *(_OWORD *)(v114 + 36) = *(_OWORD *)((char *)&gSoundSentry + 36);
          *((_DWORD *)v114 + 13) = *((_DWORD *)&gSoundSentry + 13);
          goto LABEL_68;
        case 'A':
          v109 = (struct tagSOUNDSENTRYW *)Src;
          if ( a2 && a2 != 56 )
            return 0LL;
          if ( !Src )
            return 0LL;
          if ( *(_DWORD *)Src != 56 )
            return 0LL;
          v110 = *((_DWORD *)Src + 1);
          if ( (v110 & 7) != v110 || *((_DWORD *)Src + 8) > 3u || *((_DWORD *)Src + 2) || *((_DWORD *)Src + 5) )
            return 0LL;
          v111 = v110 & 0xFFFFFFFD;
          v112 = v110 | 2;
          if ( (HIDWORD(gSoundSentry) & 2) == 0 )
            v112 = v111;
          *((_DWORD *)Src + 1) = v112;
          if ( v9 )
          {
            v113 = (struct _UNICODE_STRING *)CreateProfileUserName(&v188);
            updated = SetSoundSentry(v113, v109);
            v11 = updated;
            if ( !updated )
              SetSoundSentry(v113, gSoundSentry);
            FreeProfileUserName(v113, &v188);
          }
          if ( v11 )
          {
            memmove(gSoundSentry, v109, *(unsigned int *)v109);
            LODWORD(gSoundSentry) = 56;
            SetAccessEnabledFlag();
          }
          goto LABEL_68;
        case 'B':
          v106 = Src;
          *((_DWORD *)Src + 1) = gHighContrast[1];
          v107 = (_OWORD *)v106[1];
          v108 = gHighContrastDefaultScheme;
          do
          {
            *v107 = *(_OWORD *)v108;
            v107[1] = *((_OWORD *)v108 + 1);
            v107[2] = *((_OWORD *)v108 + 2);
            v107[3] = *((_OWORD *)v108 + 3);
            v107[4] = *((_OWORD *)v108 + 4);
            v107[5] = *((_OWORD *)v108 + 5);
            v107[6] = *((_OWORD *)v108 + 6);
            v107 += 8;
            *(v107 - 1) = *((_OWORD *)v108 + 7);
            v108 += 64;
            --v10;
          }
          while ( v10 );
          v21 = v180;
          v22 = v181;
          goto LABEL_70;
      }
      if ( (_DWORD)v5 != 67 )
      {
        switch ( (_DWORD)v5 )
        {
          case 'D':
            v40 = gdwPUDFlags >> 17;
            break;
          case 'E':
            if ( v9 )
            {
              v105 = L"1";
              if ( !a2 )
                v105 = L"0";
              updated = FastWriteProfileStringW(0LL, 27LL, L"On", v105);
              v11 = updated;
            }
            if ( v11 )
            {
              v120 = a2 == 0;
              v21 = v180;
              if ( v120 )
                gdwPUDFlags &= ~0x20000u;
              else
                gdwPUDFlags |= 0x20000u;
              goto LABEL_69;
            }
            goto LABEL_68;
          case 'F':
            v40 = gdwPUDFlags >> 18;
            break;
          case 'G':
            if ( v9 )
            {
              v104 = L"1";
              if ( !a2 )
                v104 = L"0";
              updated = FastWriteProfileStringW(0LL, 28LL, L"On", v104);
              v11 = updated;
            }
            if ( v11 )
            {
              v120 = a2 == 0;
              v21 = v180;
              if ( v120 )
                gdwPUDFlags &= ~0x40000u;
              else
                gdwPUDFlags |= 0x40000u;
              goto LABEL_69;
            }
            goto LABEL_68;
          default:
            goto LABEL_771;
        }
        goto LABEL_109;
      }
      updated = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)Src, v9, &v184);
LABEL_399:
      v11 = v184;
      goto LABEL_68;
    }
    if ( (unsigned int)v5 <= 0x5A )
    {
      if ( (_DWORD)v5 == 90 )
      {
        v118 = HKLtoPKL(gptiCurrent, *(_QWORD *)Src, v12, CurrentProcessWin32Process);
        if ( !v118 )
          return 0LL;
        if ( v11 )
        {
          *(_QWORD *)&v192 = gspklBaseLayout;
          *((_QWORD *)&v192 + 1) = v118;
          v195 = v192;
          HMAssignmentLock(&v195);
        }
        goto LABEL_68;
      }
      if ( (_DWORD)v5 == 73 )
        goto LABEL_274;
      if ( (_DWORD)v5 != 74 )
      {
        switch ( (_DWORD)v5 )
        {
          case 'K':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            v116 = a2 != 0 ? 2 : 0;
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 200LL, v116);
              v11 = updated;
            }
            if ( v11 )
              GreSetFontEnumeration(v116 | 4);
            goto LABEL_68;
          case 'L':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 198LL, a2);
              v11 = updated;
            }
            if ( v11 )
              *(_DWORD *)(gpsi + 2168LL) = a2;
            goto LABEL_68;
          case 'M':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 199LL, a2);
              v11 = updated;
            }
            if ( v11 )
              *(_DWORD *)(gpsi + 2172LL) = a2;
            goto LABEL_68;
          case 'W':
            v54 = CreateProfileUserName(&v188);
            xxxUpdateSystemCursorsFromRegistry(v54, 2u);
            break;
          case 'X':
            v54 = CreateProfileUserName(&v188);
            xxxUpdateSystemIconsFromRegistry(v54);
            break;
          case 'Y':
            if ( !gspklBaseLayout )
            {
              v14 = 21LL;
              goto LABEL_439;
            }
            *(_QWORD *)Src = *(_QWORD *)(gspklBaseLayout + 40LL);
            goto LABEL_68;
          default:
            goto LABEL_771;
        }
        goto LABEL_170;
      }
      v117 = gulFontInformation;
LABEL_463:
      v40 = v117 >> 1;
      goto LABEL_109;
    }
    switch ( (_DWORD)v5 )
    {
      case '[':
        return GetKbdLangSwitch(0LL);
      case ']':
        if ( v9 )
        {
          RtlStringCchPrintfW(v211, 0x28uLL, (size_t *)L"%d", a2);
          updated = FastUpdateWinIni(0LL, 12LL, 613LL, v211);
          v11 = updated;
        }
        if ( v11 )
          SetMouseTrails(a2);
        goto LABEL_68;
      case '^':
        DeferredRoutine = WPP_MAIN_CB.Dpc.TargetInfoAsUlong + 1;
        if ( !WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
          DeferredRoutine = 0;
        goto LABEL_75;
    }
    if ( (_DWORD)v5 != 95 )
    {
      if ( (_DWORD)v5 == 96 )
      {
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 12LL, 7LL, a2 != 0);
          v11 = updated;
        }
        if ( v11 )
        {
          v22 = v181;
          v120 = a2 == 0;
          v21 = v180;
          if ( v120 )
            *(_DWORD *)(gpsi + 7004LL) &= ~2u;
          else
            *(_DWORD *)(gpsi + 7004LL) |= 2u;
          goto LABEL_70;
        }
        goto LABEL_68;
      }
      if ( (_DWORD)v5 != 98 )
      {
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 12LL, 91LL, a2);
          v11 = updated;
        }
        v22 = v181;
        if ( v11 )
          HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = a2;
        goto LABEL_480;
      }
      DeferredRoutine = HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory);
      goto LABEL_75;
    }
    v119 = *(_DWORD *)(gpsi + 7004LL) >> 1;
LABEL_489:
    v62 = v119 & 1;
    goto LABEL_216;
  }
  if ( (unsigned int)v5 > 0x89 )
  {
    if ( (unsigned int)v5 <= 0x9C )
    {
      if ( (_DWORD)v5 == 156 )
        goto LABEL_698;
      if ( (unsigned int)v5 <= 0x94 )
      {
        if ( (_DWORD)v5 != 148 )
        {
          switch ( (_DWORD)v5 )
          {
            case 0x8A:
              DeferredRoutine = dword_1C0330BF4;
              goto LABEL_75;
            case 0x8B:
              if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 < dword_1C0330BF0 || a2 < dword_1C0330BE4 )
                goto LABEL_68;
              UpdateThresholdFromMetric(v9, &v183, &v184, 0x16u, a2, 5);
              goto LABEL_609;
            case 0x8C:
              v117 = dword_1C0330BFC;
              goto LABEL_463;
            case 0x8D:
              v129 = 624;
              v8 = 2;
              break;
            case 0x8E:
              v40 = dword_1C0330BFC >> 2;
              goto LABEL_109;
            case 0x8F:
              v129 = 626;
              v8 = 4;
              break;
            case 0x90:
              v40 = dword_1C0330BFC >> 3;
              goto LABEL_109;
            case 0x91:
              v129 = 625;
              v8 = 8;
              break;
            default:
              goto LABEL_771;
          }
          goto LABEL_677;
        }
        goto LABEL_698;
      }
      if ( (_DWORD)v5 != 149 && ((_DWORD)v5 == 150 || (_DWORD)v5 != 151 && ((_DWORD)v5 == 152 || (_DWORD)v5 == 154)) )
      {
LABEL_698:
        PointerDeviceSettingsFull = ReadPointerDeviceSettingsFull(
                                      (unsigned int)v5,
                                      Src,
                                      v12,
                                      CurrentProcessWin32Process);
        goto LABEL_699;
      }
LABEL_697:
      updated = WritePointerDeviceSettingsFull((unsigned int)v5, Src, v9, CurrentProcessWin32Process);
      goto LABEL_68;
    }
    if ( (unsigned int)v5 > 0xA6 )
    {
      if ( (_DWORD)v5 != 167 )
      {
        if ( (_DWORD)v5 == 168 )
        {
          DeferredRoutine = gbLockScreenAutoLockActive;
          goto LABEL_75;
        }
        if ( (_DWORD)v5 != 169 )
        {
          if ( (_DWORD)v5 != 170 )
          {
            switch ( (_DWORD)v5 )
            {
              case 0xAB:
                if ( *(_DWORD *)(CurrentProcessWin32Process + 56) != gpidLogonUI )
                  return 0LL;
                gbLockScreenActive = a2 != 0;
                if ( gbLockScreenActive )
                {
                  if ( !gptiForeground
                    || (v142 = *(_QWORD *)(gptiForeground + 432LL)) == 0
                    || (v143 = *(_QWORD *)(v142 + 120)) == 0
                    || (unsigned int)IsWindowUnderActiveLockScreen(v143) )
                  {
                    xxxSetForegroundWindow2(0LL, 0LL, 0);
                  }
                  ClearKeyboardStates();
                }
                GreLddmProcessLockScreen(gbLockScreenActive, v10, v12);
                goto LABEL_68;
              case 0xAC:
                v141 = InteractiveControlManager::Instance();
                v11 = (int)InteractiveControlManager::GetExternalParameters(
                             v141,
                             (struct tagINTERACTIVECTRL_PARAMETERS *)Src) >= 0;
                goto LABEL_68;
              case 0xAD:
                v140 = InteractiveControlManager::Instance();
                LOBYTE(updated) = (int)InteractiveControlManager::SetExternalParameters(
                                         v140,
                                         (struct tagINTERACTIVECTRL_PARAMETERS *)Src,
                                         v9) >= 0;
                goto LABEL_68;
            }
            goto LABEL_771;
          }
          v127 = (ULONG *)gbLockScreenActive;
LABEL_593:
          DeferredRoutine = *v127;
          goto LABEL_75;
        }
        if ( gfSwitchInProgress )
          return 0LL;
        if ( gdwRITdemonLockState && !(_DWORD)v12 )
          goto LABEL_762;
        gbLockScreenAutoLockActive = a2 != 0;
        if ( !v9 )
          goto LABEL_68;
        PointerDeviceSettingsFull = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
        updated = PointerDeviceSettingsFull;
LABEL_699:
        v11 = PointerDeviceSettingsFull;
        goto LABEL_68;
      }
    }
    else
    {
      if ( (_DWORD)v5 == 166 )
        goto LABEL_731;
      if ( (_DWORD)v5 == 157 )
        goto LABEL_697;
      if ( (_DWORD)v5 != 158 )
      {
        if ( (_DWORD)v5 != 159 )
        {
          switch ( (_DWORD)v5 )
          {
            case 0xA0:
              *(_DWORD *)Src = 6;
              goto LABEL_68;
            case 0xA1:
              goto LABEL_363;
            case 0xA2:
              v138 = GetDispInfo(v15, 2LL);
              MonitorWorkRect = (_OWORD *)GetMonitorMenuRect(v200, *(_QWORD *)(v138 + 96));
              goto LABEL_340;
            case 0xA3:
              v202 = 0LL;
              if ( Src )
              {
                if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                  return 0LL;
                v133 = MonitorFromRect((struct tagRECT *)Src, 1u, 0);
              }
              else
              {
                v133 = *(_QWORD *)(GetDispInfo(v15, 2LL) + 96);
              }
              v187 = v133;
              v204 = *GetMonitorRect(&v199, v133);
              v134 = (int *)&v204;
              if ( Src )
                v134 = (int *)Src;
              if ( !(unsigned int)IntersectRect(&v202, v134, (int *)&v204) || v202 != *(_OWORD *)v134 )
                goto LABEL_5;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v135) & 0xF) != 2 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
                {
                  v136 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL);
                  if ( (*(_DWORD *)(v136 + 64) & 1) != 0 )
                  {
                    v137 = W32GetCurrentThreadDpiAwarenessContext(v136);
                    LogicalToPhysicalDPIRect(v187 + 296, &v202, v137, &v187);
                    goto LABEL_609;
                  }
                }
                updated = v183;
                v11 = v184;
              }
              *(_OWORD *)(v187 + 296) = v202;
              goto LABEL_68;
          }
          if ( (_DWORD)v5 != 165 )
            goto LABEL_771;
          goto LABEL_710;
        }
LABEL_731:
        if ( a2 + 11 > 0x16 )
          return 0LL;
        if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
        {
          v9 = 0;
          v11 = 0;
        }
        if ( !v9 )
          goto LABEL_68;
        v207 = 0LL;
        v208 = 0;
        v209 = a2;
        LODWORD(v186) = a2 != 159;
        if ( (int)DrvDisplayConfigSetScaleFactorOverride(&v207, &v186) < 0 )
        {
          v11 = 0;
          goto LABEL_68;
        }
        if ( a2 == 159 )
          TraceLoggingSPISetModernDPIOverrideEvent(v139, 159);
        else
          TraceLoggingSPISetDesktopDPIOverrideEvent(v139, a2);
        goto LABEL_363;
      }
    }
LABEL_710:
    v205 = 0LL;
    v206 = 0LL;
    if ( (int)DrvDisplayConfigGetScaleFactorOverrides(&v205, 1LL, v12, CurrentProcessWin32Process) < 0 )
      return 0LL;
    v120 = a2 == 158;
    v21 = v180;
    if ( !v120 )
    {
      v144 = Src;
      *(_QWORD *)Src = *(_QWORD *)((char *)&v206 + 4);
      v144[2] = HIDWORD(v206);
      goto LABEL_69;
    }
    v132 = DWORD2(v206);
    goto LABEL_713;
  }
  if ( (_DWORD)v5 == 137 )
  {
    if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 > dword_1C0330BF4 || a2 < gWinArrGlobal[0] )
      goto LABEL_68;
    UpdateThresholdFromMetric(v9, &v183, &v184, 0x15u, a2, 4);
    goto LABEL_609;
  }
  if ( (unsigned int)v5 > 0x78 )
  {
    if ( (unsigned int)v5 <= 0x81 )
    {
      if ( (_DWORD)v5 != 129 )
      {
        switch ( (_DWORD)v5 )
        {
          case 'y':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 621LL, a2);
              v11 = updated;
            }
            if ( !v11 )
              goto LABEL_68;
            v128 = (unsigned int *)gdwHungAppTimeout;
            break;
          case 'z':
            DeferredRoutine = gdwWaitToKillTimeout;
            goto LABEL_75;
          case '{':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 622LL, a2);
              v11 = updated;
            }
            v22 = v181;
            if ( v11 )
              gdwWaitToKillTimeout = a2;
            goto LABEL_480;
          case '|':
            v127 = (ULONG *)gdwWaitToKillServiceTimeout;
            goto LABEL_593;
          case '}':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 52LL, 623LL, a2);
              v11 = updated;
            }
            if ( !v11 )
              goto LABEL_68;
            v128 = (unsigned int *)gdwWaitToKillServiceTimeout;
            break;
          case '~':
            DeferredRoutine = gWinArrGlobal[0];
            goto LABEL_75;
          case '\x7F':
            if ( a2 > *(_DWORD *)(gpDispInfo + 136LL)
              || a2 > dword_1C0330BE4
              || a2 > dword_1C0330BE8
              || a2 > dword_1C0330BF0 )
            {
              goto LABEL_68;
            }
            UpdateThresholdFromMetric(v9, &v183, &v184, 0x10u, a2, 0);
            goto LABEL_609;
          default:
            DeferredRoutine = dword_1C0330BE4;
            goto LABEL_75;
        }
        *v128 = a2;
        goto LABEL_68;
      }
      if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 < gWinArrGlobal[0] || a2 > dword_1C0330BEC || a2 > dword_1C0330BF4 )
        goto LABEL_68;
      UpdateThresholdFromMetric(v9, &v183, &v184, 0x11u, a2, 1);
LABEL_609:
      updated = v183;
      goto LABEL_399;
    }
    if ( (_DWORD)v5 == 130 )
    {
      LOBYTE(v40) = dword_1C0330BFC;
      goto LABEL_109;
    }
    if ( (_DWORD)v5 != 131 )
    {
      switch ( (_DWORD)v5 )
      {
        case 0x84:
          DeferredRoutine = dword_1C0330BE8;
          goto LABEL_75;
        case 0x85:
          if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 > dword_1C0330BEC || a2 < gWinArrGlobal[0] )
            goto LABEL_68;
          UpdateThresholdFromMetric(v9, &v183, &v184, 0x13u, a2, 2);
          break;
        case 0x86:
          DeferredRoutine = dword_1C0330BEC;
          goto LABEL_75;
        case 0x87:
          if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 < dword_1C0330BE8 || a2 < dword_1C0330BE4 )
            goto LABEL_68;
          UpdateThresholdFromMetric(v9, &v183, &v184, 0x14u, a2, 3);
          break;
        default:
          DeferredRoutine = dword_1C0330BF0;
          goto LABEL_75;
      }
      goto LABEL_609;
    }
    v129 = 18;
LABEL_677:
    if ( (unsigned int)CheckDesktopPolicy(0LL, v129) )
    {
      v9 = 0;
      v11 = 0;
    }
    if ( v9 )
    {
      updated = UpdateWinIniInt(0LL, 4LL, v129, a2);
      v11 = updated;
    }
    if ( v11 )
    {
      v130 = dword_1C0330BFC;
      if ( a2 )
        dword_1C0330BFC |= v8;
      else
        dword_1C0330BFC &= ~v8;
      PostWindowArrangementCheck(v130);
    }
    goto LABEL_68;
  }
  if ( (_DWORD)v5 == 120 )
  {
    v127 = (ULONG *)gdwHungAppTimeout;
    goto LABEL_593;
  }
  if ( (unsigned int)v5 <= 0x6F )
  {
    switch ( (_DWORD)v5 )
    {
      case 'o':
        v11 = xxxSetIMEShowStatus(a2 != 0, v9, &v183);
        goto LABEL_294;
      case 'e':
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
          v11 = updated;
        }
        v22 = v181;
        if ( v11 )
          LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = a2;
        goto LABEL_480;
      case 'f':
        DeferredRoutine = WPP_MAIN_CB.Dpc.ProcessorHistory;
        goto LABEL_75;
      case 'g':
        if ( a2 >= 0xA )
          v19 = a2;
        if ( v19 > 0x7FFFFFFF )
          v19 = 0x7FFFFFFF;
        LODWORD(v186) = v19;
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 12LL, 93LL, v19);
          v11 = updated;
          v19 = (unsigned int)v186;
        }
        v21 = v180;
        v22 = v181;
        if ( v11 )
          LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = v19;
        goto LABEL_70;
      case 'j':
        DeferredRoutine = HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
        goto LABEL_75;
      case 'k':
        if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
        {
          v9 = 0;
          v11 = 0;
        }
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 4LL, 94LL, a2);
          v11 = updated;
        }
        v22 = v181;
        if ( v11 )
          HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = a2;
        goto LABEL_480;
      case 'l':
        v62 = *(_DWORD *)(gpsi + 4992LL);
        goto LABEL_216;
      case 'm':
        if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
        {
          v9 = 0;
          v11 = 0;
        }
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 4LL, 15LL, a2);
          v11 = updated;
        }
        if ( v11 )
          *(_DWORD *)(gpsi + 4992LL) = a2;
        goto LABEL_68;
    }
    if ( (_DWORD)v5 != 110 )
    {
LABEL_771:
      if ( (unsigned int)v5 < 0xB0 )
      {
        v14 = 1439LL;
        goto LABEL_439;
      }
      v145 = v5 & 0x3000;
      if ( (v5 & 1) == 0 )
      {
        if ( v145 == 4096 )
        {
          v146 = 0;
          v147 = 0;
          if ( (unsigned int)v5 >= 0x103E )
            goto LABEL_797;
          if ( (int)gpdwCPUserPreferencesMask < 0 )
          {
            switch ( (_DWORD)v5 )
            {
              case 0x1008:
                goto LABEL_795;
              case 0x100A:
                v146 = (gdwPUDFlags >> 17) & 1;
                v147 = v146;
                goto LABEL_797;
              case 0x1012:
              case 0x1014:
              case 0x1018:
              case 0x101A:
LABEL_795:
                if ( gbDisableAlpha )
                  v147 = 1;
                goto LABEL_797;
            }
            if ( (_DWORD)v5 != 4132 )
              goto LABEL_797;
            if ( !gbDisableAlpha )
            {
              v148 = gcOverlays == 0;
              goto LABEL_792;
            }
          }
          else
          {
            if ( (_DWORD)v5 == 4096 )
              goto LABEL_797;
            if ( (_DWORD)v5 != 4106 )
            {
              if ( (_DWORD)v5 == 4108 || (_DWORD)v5 == 4124 )
                goto LABEL_797;
              v148 = (_DWORD)v5 == 4126;
LABEL_792:
              if ( !v148 )
                goto LABEL_793;
LABEL_797:
              if ( v147 )
              {
                *(_DWORD *)Src = v146;
                goto LABEL_68;
              }
              if ( (_DWORD)v5 == 4158 && gProtocolType && !(unsigned int)IsWDAGContainer() )
              {
                v120 = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) == 0;
                goto LABEL_513;
              }
              v149 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(unsigned int)(v5 - 4096) >> 6));
              v62 = _bittest(
                      &v149,
                      (unsigned __int8)(((unsigned int)(v5 - 4096) >> 1) - 32 * ((unsigned int)(v5 - 4096) >> 6)));
LABEL_216:
              *(_DWORD *)Src = v62;
              goto LABEL_68;
            }
            v146 = 1;
          }
LABEL_793:
          v147 = 1;
          goto LABEL_797;
        }
        v150 = (int *)UPDWORDPointer((unsigned int)v5);
        v151 = *v150;
        *(_DWORD *)Src = *v150;
        if ( (_DWORD)v5 != 8204 )
          goto LABEL_68;
        v21 = v180;
        if ( v151 )
          goto LABEL_69;
        v132 = gulGamma;
LABEL_713:
        *(_DWORD *)Src = v132;
        goto LABEL_69;
      }
      v152 = CreateProfileUserName(&v188);
      v186 = (const wchar_t *)v152;
      if ( v145 != 4096 )
      {
        if ( *(_DWORD *)(UPDWORDPointer((unsigned int)v5) + 4) == 4 )
        {
          v172 = UPDWORDPointer((unsigned int)v5);
          if ( (unsigned int)CheckDesktopPolicy(v186, *(_QWORD *)(v172 + 8)) )
          {
            v9 = 0;
            v11 = 0;
          }
        }
        if ( v9 )
        {
          v5 = UPDWORDPointer((unsigned int)v5);
          v173 = UPDWORDPointer(v180);
          updated = FastWriteProfileValue(v186, *(unsigned int *)(v173 + 4), *(_QWORD *)(v5 + 8), 4LL, &Src, 4);
          v11 = updated;
          LODWORD(v5) = v180;
        }
        v174 = *(_DWORD *)UPDWORDPointer((unsigned int)v5);
        if ( v11 )
        {
          v175 = (int)Src;
          v21 = v180;
          *(_DWORD *)UPDWORDPointer(v180) = v175;
          switch ( v180 )
          {
            case 0x2007u:
              *(_DWORD *)(gpsi + 7008LL) = *(_DWORD *)UPDWORDPointer(8199LL);
              break;
            case 0x200Bu:
              v177 = (_BYTE *)UPDWORDPointer(8203LL);
              GreSetFontEnumeration(8 * (*v177 & 2 | 4));
              break;
            case 0x200Du:
              gulGamma = *(_DWORD *)UPDWORDPointer(8205LL);
              break;
            case 0x200Fu:
              if ( *(_DWORD *)UPDWORDPointer(8207LL) )
                *(_DWORD *)(gpsi + 2228LL) = *(_DWORD *)UPDWORDPointer(8207LL);
              break;
            case 0x2011u:
              if ( *(_DWORD *)UPDWORDPointer(8209LL) )
                *(_DWORD *)(gpsi + 2232LL) = *(_DWORD *)UPDWORDPointer(8209LL);
              break;
            case 0x2013u:
              v120 = (*(_DWORD *)UPDWORDPointer(8211LL) & 1) == 0;
              v176 = &unk_1C02E59C0;
              if ( v120 )
                v176 = &unk_1C02F5690;
              off_1C032B0D0 = v176;
              break;
            case 0x201Du:
              TraceLoggingMouseWheelRoutingModeChange((unsigned int)Src);
              break;
            case 0x201Fu:
              TraceLoggingSPISetPenVisualizationEvent(v174, (unsigned int)Src);
              break;
            case 0x2029u:
              CCursorSizes::zzzRefreshSizes(gpCursorSizes);
              break;
          }
          goto LABEL_830;
        }
LABEL_829:
        v21 = v180;
LABEL_830:
        FreeProfileUserName(v186, &v188);
        goto LABEL_69;
      }
      if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4 )
      {
        v153 = CheckDesktopPolicy(v152, *((_QWORD *)&gpviCPUserPreferences + 1));
        v152 = (__int64)v186;
        if ( v153 )
        {
          v9 = 0;
          v11 = 0;
        }
      }
      if ( v9 )
      {
        ProfileValue = FastGetProfileValue(
                         v152,
                         *((unsigned int *)&gpviCPUserPreferences + 1),
                         *((_QWORD *)&gpviCPUserPreferences + 1),
                         0LL,
                         v191,
                         8,
                         0);
        memmove((char *)v191 + ProfileValue, (char *)&gpdwCPUserPreferencesMask + ProfileValue, 8LL - ProfileValue);
        v155 = v5 - 4096;
        v156 = 1 << (((unsigned int)(v5 - 4096) >> 1) - 32 * ((unsigned int)(v5 - 4096) >> 6));
        v157 = (unsigned __int64)(unsigned int)(v5 - 4096) >> 6;
        v158 = v191[v157];
        if ( Src )
          v159 = v156 | v158;
        else
          v159 = ~v156 & v158;
        v191[v157] = v159;
        updated = FastWriteProfileValue(
                    v186,
                    *((unsigned int *)&gpviCPUserPreferences + 1),
                    *((_QWORD *)&gpviCPUserPreferences + 1),
                    3LL,
                    v191,
                    8);
        v11 = updated;
      }
      else
      {
        v155 = v5 - 4096;
      }
      if ( !v11 )
        goto LABEL_829;
      v160 = (unsigned int)(1 << ((v155 >> 1) - 32 * (v155 >> 6)));
      v161 = (unsigned __int64)v155 >> 6;
      if ( Src )
      {
        *((_DWORD *)&gpdwCPUserPreferencesMask + v161) |= v160;
      }
      else
      {
        v160 = (unsigned int)~(_DWORD)v160;
        *((_DWORD *)&gpdwCPUserPreferencesMask + v161) &= v160;
      }
      if ( (unsigned int)v5 <= 0x1023 )
      {
        if ( (_DWORD)v5 == 4131 )
        {
LABEL_835:
          v169 = *(_QWORD *)(gptiCurrent + 456LL);
          if ( v169 )
            v170 = *(struct tagWND **)(*(_QWORD *)(v169 + 8) + 24LL);
          else
            v170 = 0LL;
          xxxInternalInvalidate(v170, (HRGN)1, 0x10485u);
          goto LABEL_829;
        }
        v162 = v5 - 4101;
        if ( v162 )
        {
          v163 = v162 - 2;
          if ( v163 )
          {
            v164 = v163 - 2;
            if ( v164 )
            {
              v165 = v164 - 2;
              if ( v165 )
              {
                if ( v165 == 16 )
                  SetPointer(1LL);
                goto LABEL_829;
              }
              v166 = gpsi;
              v167 = *(_DWORD *)(gpsi + 7004LL);
              v168 = ((unsigned int)gpdwCPUserPreferencesMask ^ v167) & 0x20;
              goto LABEL_832;
            }
            goto LABEL_847;
          }
          v166 = gpsi;
          v167 = *(_DWORD *)(gpsi + 7004LL);
          v168 = ((unsigned int)gpdwCPUserPreferencesMask ^ v167) & 8;
        }
        else
        {
          v166 = gpsi;
          v167 = *(_DWORD *)(gpsi + 7004LL);
          v168 = ((unsigned int)gpdwCPUserPreferencesMask ^ v167) & 4;
        }
LABEL_832:
        *(_DWORD *)(v166 + 7004) = v167 ^ v168;
        goto LABEL_829;
      }
      if ( (_DWORD)v5 == 4133 )
      {
        v171 = (void *)ReferenceDwmApiPort(0LL, v160);
        DwmAsyncNotifyWindowShadowChange(v171);
        goto LABEL_829;
      }
      if ( (_DWORD)v5 != 4159 )
      {
        if ( (_DWORD)v5 == 4175 || (_DWORD)v5 == 4177 )
        {
          xxxWindowEvent(0x80000007, 0LL, v5, Src != 0LL, 0);
        }
        else if ( (_DWORD)v5 == 4179 )
        {
          NotifyISMPenButtonYieldSettingChange();
        }
        goto LABEL_829;
      }
      *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 0x80000000;
      SetPointer(1LL);
LABEL_847:
      CreateBitmapStrip();
      goto LABEL_835;
    }
    v120 = HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) == 0;
LABEL_513:
    DeferredRoutine = !v120;
    goto LABEL_75;
  }
  switch ( (_DWORD)v5 )
  {
    case 'p':
      UserHandedness = GetMouseSensitivity(0LL, 2LL, v12, CurrentProcessWin32Process);
      goto LABEL_113;
    case 'q':
      if ( !(unsigned __int8)IsValidMouseSensitivity((unsigned int)Src, 2LL, v12, CurrentProcessWin32Process) )
        return 0LL;
      if ( v9 )
      {
        RtlStringCchPrintfW(v211, 0x28uLL, (size_t *)L"%d", Src);
        updated = FastUpdateWinIni(0LL, 12LL, 608LL, v211);
        v11 = updated;
      }
      if ( v11 )
      {
        UpdateMouseSensitivity((unsigned int)Src);
        for ( i = 0; i < 2; ++i )
          ResetAccelerationCurves(i);
      }
      goto LABEL_68;
    case 'r':
      v120 = gppiScreenSaver == 0LL;
      goto LABEL_513;
    case 's':
      if ( g_pWallpaperSettings )
      {
        RtlStringCchCopyW((char *)Src, 260LL, (char *)(g_pWallpaperSettings + 4LL));
        goto LABEL_68;
      }
      v54 = CreateProfileUserName(&v188);
      LoadWallpaperFilenameFromRegistry(v54, Src, 260LL);
      goto LABEL_170;
    case 't':
      if ( a2 && a2 != 12 || !Src || *(_DWORD *)Src != 12 )
        return 0LL;
      *(void **)((char *)Src + 4) = *(void *const *)((char *)&gAudioDescription + 4);
      goto LABEL_68;
    case 'u':
      if ( a2 && a2 != 12 || !Src || *(_DWORD *)Src != 12 )
        return 0LL;
      if ( v9 )
      {
        v121 = CreateProfileUserName(&v188);
        v122 = v121;
        v123 = L"1";
        v124 = L"1";
        if ( !*((_DWORD *)Src + 1) )
          v124 = L"0";
        v125 = FastWriteProfileStringW(v121, 48LL, L"On", v124);
        RtlStringCchPrintfW(v211, 0x28uLL, (size_t *)L"%d", *((unsigned int *)Src + 2));
        updated = FastWriteProfileStringW(v122, 48LL, L"Locale", v211) & v125;
        v11 = updated;
        if ( !updated )
        {
          if ( !HIDWORD(gAudioDescription) )
            v123 = L"0";
          FastWriteProfileStringW(v122, 48LL, L"On", v123);
          RtlStringCchPrintfW(v211, 0x28uLL, (size_t *)L"%d", *((unsigned int *)&gAudioDescription + 2));
          FastWriteProfileStringW(v122, 48LL, L"Locale", v211);
        }
        FreeProfileUserName(v122, &v188);
      }
      if ( v11 )
      {
        memmove(gAudioDescription, Src, *(unsigned int *)Src);
        LODWORD(gAudioDescription) = 12;
      }
      goto LABEL_68;
    case 'v':
      v119 = *gpsi >> 9;
      goto LABEL_489;
  }
  if ( gdwRITdemonLockState && !(_DWORD)v12 )
    goto LABEL_762;
  if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
  {
    v9 = 0;
    v11 = 0;
    v184 = 0;
  }
  if ( v9 )
  {
    updated = UpdateWinIniInt(0LL, 4LL, 618LL, a2 != 0);
    v183 = updated;
    v11 = updated;
    v184 = updated;
  }
  if ( !v11 )
    goto LABEL_68;
  v22 = v181;
  v120 = a2 == 0;
  v21 = v180;
  if ( v120 )
    _InterlockedAnd(gpsi, 0xFFFFFDFF);
  else
    _InterlockedOr(gpsi, 0x200u);
  updated = v183;
  v11 = v184;
LABEL_70:
  if ( updated )
  {
    if ( v22 )
      EditionxxxBroadcastSPIChange(v21, v212);
  }
  return v11;
}
