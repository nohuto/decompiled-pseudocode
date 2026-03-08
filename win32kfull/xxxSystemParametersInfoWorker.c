/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x1C01032D0
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x1C01032B0 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?IsWDAGContainer@@YAHXZ @ 0x1C0010010 (-IsWDAGContainer@@YAHXZ.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C001D944 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ClearKeyboardStates @ 0x1C0020194 (ClearKeyboardStates.c)
 *     SetMouseTrails @ 0x1C0020418 (SetMouseTrails.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00219C0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C003B230 (CheckWinstaAttributeAccess.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C003D388 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetDPIMetrics @ 0x1C009FD5C (GetDPIMetrics.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00A2F70 (IsWindowUnderActiveLockScreen.c)
 *     GetWindowNCMetrics @ 0x1C00A40A8 (GetWindowNCMetrics.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C1278 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     xxxSetDeskWallpaper @ 0x1C00D7F38 (xxxSetDeskWallpaper.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C00D8520 (LoadWallpaperFilenameFromRegistry.c)
 *     bSetDevDragWidth @ 0x1C00E1CD0 (bSetDevDragWidth.c)
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1C00E1D58 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C00E2C28 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 *     GetEasTimeout @ 0x1C00EBBB4 (GetEasTimeout.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00F0DE8 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1C00F3C7C (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x1C00F3FC4 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C00F4890 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C00F57E4 (xxxInvalidateWallpaperWindow.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C00F75D8 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     _SetDoubleClickTime @ 0x1C00F9C04 (_SetDoubleClickTime.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     GetMonitorWorkRect @ 0x1C0101744 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C0101788 (GetMonitorRect.c)
 *     SetKeyboardRate @ 0x1C0102588 (SetKeyboardRate.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C0102EC8 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     ReadPointerDeviceSettingsFull @ 0x1C0106DA0 (ReadPointerDeviceSettingsFull.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0107C68 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0109E10 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C010A9B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     SetDesktopPattern @ 0x1C010AAFC (SetDesktopPattern.c)
 *     GreSetLCDOrientation @ 0x1C010AC70 (GreSetLCDOrientation.c)
 *     GreSetFontEnumeration @ 0x1C010C224 (GreSetFontEnumeration.c)
 *     GetKbdLangSwitch @ 0x1C010C334 (GetKbdLangSwitch.c)
 *     GetDPIServerInfo @ 0x1C010C460 (GetDPIServerInfo.c)
 *     GetProcessDpiServerInfo @ 0x1C010C494 (GetProcessDpiServerInfo.c)
 *     CreateBitmapStrip @ 0x1C010E370 (CreateBitmapStrip.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01C0578 (-_SwapMouseButton@@YAHH@Z.c)
 *     GetUserHandedness @ 0x1C01C4370 (GetUserHandedness.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444@Z @ 0x1C01C83E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@.c)
 *     ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x1C01C8638 (-NotifyISMPenButtonYieldSettingChange@@YAXXZ.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C8DCC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01C901C (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01C911C (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01C921C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C954C (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01C9760 (EditionxxxBroadcastSPIChange.c)
 *     UpdateWinIniInt @ 0x1C01C9800 (UpdateWinIniInt.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1C01C9894 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     xxxMetricsRecalc @ 0x1C01C9A5C (xxxMetricsRecalc.c)
 *     WritePointerDeviceSettingsFull @ 0x1C01F4CBC (WritePointerDeviceSettingsFull.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C0204A48 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C0204F08 (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C0204F84 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C0205000 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z @ 0x1C0229198 (-ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C0243710 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C0244330 (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetMonitorMenuRect @ 0x1C024E934 (GetMonitorMenuRect.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C026FE38 (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfoWorker(__int64 a1, unsigned int a2, void *a3, int a4)
{
  unsigned int v5; // ebx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v7; // r8
  _QWORD *v8; // rdx
  struct tagWND *v9; // r14
  int updated; // r12d
  unsigned int v11; // r13d
  int v12; // r15d
  unsigned int PointerDeviceSettingsFull; // esi
  Gre::Base *v15; // rcx
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r10
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // esi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 v28; // al
  int v29; // ebx
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // ebx
  struct _UNICODE_STRING *v34; // rax
  struct _UNICODE_STRING *v35; // rdi
  __int64 ProcessDpiServerInfo; // rax
  unsigned int v37; // ebx
  unsigned int v38; // r14d
  __int64 v39; // rcx
  unsigned int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  int DpiForSystem; // eax
  __int64 v45; // rcx
  unsigned int v46; // edx
  __int64 v47; // rax
  INT v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // ebx
  unsigned int v52; // r14d
  int v53; // eax
  __int64 v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // rax
  INT v57; // ebx
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned int v60; // ebx
  unsigned int v61; // r14d
  int v62; // ebx
  int v63; // ecx
  int v64; // edi
  int *v65; // rdi
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 DPIMetrics; // rax
  bool v74; // zf
  struct _UNICODE_STRING *v75; // rdi
  int v76; // ebx
  _DWORD *v77; // rdx
  _DWORD *v78; // rbx
  int v79; // eax
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rax
  __int64 *v86; // rax
  int *v87; // rsi
  __int64 v88; // rcx
  DesktopRecalc *v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 *v94; // r9
  __int64 v95; // rax
  int v96; // r8d
  char v97; // dl
  __int64 v98; // rcx
  __int64 DispInfo; // rax
  struct CMonitorTopology *v100; // rdx
  int v101; // r8d
  __int64 v102; // rax
  __int64 v103; // rax
  int *v104; // rdi
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  unsigned int v109; // eax
  _DWORD *v110; // rbx
  int v111; // ecx
  int v112; // edx
  struct tagMOUSEKEYS *v113; // rbx
  int v114; // edx
  unsigned int v115; // eax
  int v116; // edx
  struct _UNICODE_STRING *v117; // rdi
  __int64 v118; // rcx
  __int64 v119; // rdi
  __int64 v120; // rcx
  __int16 v121; // bx
  __int64 v122; // rcx
  _QWORD *v123; // rdx
  _OWORD *v124; // rax
  unsigned __int16 *v125; // rcx
  __int64 v126; // rcx
  const wchar_t *v127; // r9
  const wchar_t *v128; // r9
  struct tagSOUNDSENTRYW *v129; // rbx
  int v130; // edx
  unsigned int v131; // eax
  int v132; // edx
  struct _UNICODE_STRING *v133; // rdi
  unsigned int v134; // r14d
  __int64 v135; // rax
  __int64 v136; // rdi
  const wchar_t *v137; // rbx
  const wchar_t *v138; // r9
  int v139; // r12d
  unsigned int v140; // eax
  _DWORD *v141; // rcx
  int v142; // ecx
  InteractiveControlManager *v143; // rax
  InteractiveControlManager *v144; // rax
  int v145; // edi
  int v146; // r8d
  BOOL v147; // edx
  int v148; // ecx
  __int64 v149; // rcx
  __int64 *v150; // rcx
  int v151; // eax
  unsigned int ProfileValue; // eax
  unsigned int v153; // r13d
  int v154; // edx
  int *v155; // rcx
  int v156; // eax
  int v157; // eax
  int v158; // edx
  CursorApiRouter *v159; // rcx
  CursorApiRouter *v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rax
  void *v163; // rax
  unsigned int v164; // r8d
  __int64 v165; // rax
  __int64 v166; // rbx
  __int64 v167; // rax
  unsigned int v168; // r14d
  int v169; // ebx
  _DWORD *v170; // rax
  int v171; // ebx
  __int64 v172; // rcx
  unsigned int *v173; // rax
  bool v174; // r14
  bool v175; // r15
  BOOL v176; // ebx
  int *v177; // [rsp+20h] [rbp-488h]
  int v178; // [rsp+28h] [rbp-480h]
  int v179; // [rsp+30h] [rbp-478h]
  unsigned int v180; // [rsp+90h] [rbp-418h]
  void *Src; // [rsp+98h] [rbp-410h] BYREF
  int v182; // [rsp+A0h] [rbp-408h] BYREF
  int v183; // [rsp+A4h] [rbp-404h] BYREF
  unsigned int v184; // [rsp+A8h] [rbp-400h] BYREF
  int v185; // [rsp+ACh] [rbp-3FCh] BYREF
  __int64 *v186; // [rsp+B0h] [rbp-3F8h] BYREF
  int *v187; // [rsp+B8h] [rbp-3F0h] BYREF
  __int64 v188[2]; // [rsp+C0h] [rbp-3E8h] BYREF
  __int128 v189; // [rsp+D0h] [rbp-3D8h] BYREF
  __int64 v190; // [rsp+E0h] [rbp-3C8h]
  _QWORD *v191; // [rsp+E8h] [rbp-3C0h] BYREF
  int v192; // [rsp+F0h] [rbp-3B8h] BYREF
  int v193; // [rsp+F8h] [rbp-3B0h] BYREF
  int v194; // [rsp+100h] [rbp-3A8h] BYREF
  int v195; // [rsp+104h] [rbp-3A4h] BYREF
  int v196; // [rsp+108h] [rbp-3A0h] BYREF
  int v197; // [rsp+10Ch] [rbp-39Ch] BYREF
  int v198; // [rsp+110h] [rbp-398h] BYREF
  int v199; // [rsp+114h] [rbp-394h] BYREF
  int v200; // [rsp+118h] [rbp-390h] BYREF
  __int64 v201; // [rsp+120h] [rbp-388h] BYREF
  __int128 v202; // [rsp+130h] [rbp-378h]
  __int128 v203; // [rsp+140h] [rbp-368h]
  __m128i v204; // [rsp+158h] [rbp-350h] BYREF
  __int128 v205; // [rsp+168h] [rbp-340h] BYREF
  __int128 v206; // [rsp+180h] [rbp-328h] BYREF
  struct tagRECT v207; // [rsp+190h] [rbp-318h] BYREF
  __int128 v208; // [rsp+1A0h] [rbp-308h]
  unsigned __int16 v209[40]; // [rsp+1B0h] [rbp-2F8h] BYREF
  _WORD v210[40]; // [rsp+200h] [rbp-2A8h] BYREF
  _BYTE v211[528]; // [rsp+250h] [rbp-258h] BYREF

  v185 = a4;
  v5 = a1;
  v180 = a1;
  v193 = a1;
  Src = a3;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v8 = CurrentProcessWin32Process;
  v191 = CurrentProcessWin32Process;
  v9 = 0LL;
  if ( CurrentProcessWin32Process )
  {
    if ( !*CurrentProcessWin32Process )
      v8 = 0LL;
    v191 = v8;
  }
  updated = 0;
  v182 = 0;
  v11 = v185 & 1;
  v12 = ((unsigned int)v185 >> 1) & 1;
  LODWORD(v187) = v12;
  PointerDeviceSettingsFull = !(v185 & 1);
  v183 = PointerDeviceSettingsFull;
  v185 &= 0x8000u;
  v184 = 0;
  v189 = 0LL;
  v190 = 0LL;
  v210[0] = 0;
  switch ( v5 )
  {
    case 7u:
    case 8u:
    case 0xCu:
    case 0x27u:
    case 0x28u:
    case 0x31u:
    case 0x3Eu:
    case 0x3Fu:
    case 0x5Cu:
    case 0x61u:
      goto LABEL_254;
    case 0x4Fu:
    case 0x50u:
    case 0x53u:
    case 0x54u:
      *(_DWORD *)Src = 0;
      return 1LL;
    case 0x51u:
    case 0x52u:
    case 0x55u:
    case 0x56u:
      return 1LL;
    default:
      v192 = v5 & 1;
      if ( (v5 & 1) == 0 || v5 != 8193 || *((int *)v8 + 3) < 0 )
        goto LABEL_12;
      if ( !CanForceForeground((const struct tagPROCESSINFO *)v8) )
      {
LABEL_254:
        UserSetLastError(87);
        return 0LL;
      }
      v8 = v191;
LABEL_12:
      v15 = (Gre::Base *)gpepCSRSS;
      if ( *v8 != gpepCSRSS )
      {
        if ( v5 > 0x1027 )
        {
LABEL_19:
          if ( (v5 & 0x3000) == 0 || (v5 & 1) == 0 )
          {
LABEL_22:
            LODWORD(v188[0]) = 2;
            if ( RtlAreAllAccessesGranted(*((_DWORD *)v8 + 168), 2u) )
            {
              v16 = 1LL;
              v17 = 1;
            }
            else
            {
              UserSetLastError(5);
              v17 = 0;
              v16 = 1LL;
            }
            if ( v17 )
            {
LABEL_26:
              v18 = 2LL;
              v8 = v191;
              if ( LODWORD(v188[0]) != 2 )
                goto LABEL_30;
              goto LABEL_29;
            }
            return 0LL;
          }
        }
        else if ( v5 != 4135 )
        {
          switch ( v5 )
          {
            case 2u:
            case 4u:
            case 6u:
            case 0xBu:
            case 0xFu:
            case 0x11u:
            case 0x13u:
            case 0x14u:
            case 0x15u:
            case 0x17u:
            case 0x1Au:
            case 0x1Cu:
            case 0x1Du:
            case 0x1Eu:
            case 0x20u:
            case 0x21u:
            case 0x22u:
            case 0x24u:
            case 0x25u:
            case 0x2Au:
            case 0x2Cu:
            case 0x2Eu:
            case 0x2Fu:
            case 0x33u:
            case 0x35u:
            case 0x37u:
            case 0x39u:
            case 0x3Bu:
            case 0x3Du:
            case 0x41u:
            case 0x43u:
            case 0x45u:
            case 0x47u:
            case 0x49u:
            case 0x4Bu:
            case 0x4Cu:
            case 0x4Du:
            case 0x57u:
            case 0x58u:
            case 0x5Au:
            case 0x5Bu:
            case 0x60u:
            case 0x63u:
            case 0x65u:
            case 0x67u:
            case 0x6Bu:
            case 0x6Du:
            case 0x77u:
            case 0xA1u:
            case 0xA3u:
              break;
            case 0xDu:
            case 0x18u:
              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
                goto LABEL_22;
              if ( !a2 )
                return 1LL;
              break;
            default:
              goto LABEL_19;
          }
        }
        LODWORD(v188[0]) = 16;
        if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
        {
          v16 = 1LL;
          goto LABEL_26;
        }
        return 0LL;
      }
      v16 = 1LL;
      v18 = 2LL;
LABEL_29:
      v183 = 1;
      PointerDeviceSettingsFull = 1;
LABEL_30:
      if ( v5 <= 0x1026 )
      {
        if ( v5 == 4134 )
        {
          LOBYTE(v9) = gbBlockSendInputResets != 0;
          *(_DWORD *)Src = (_DWORD)v9;
          v19 = v12;
        }
        else
        {
          switch ( v5 )
          {
            case 1u:
              *(_DWORD *)Src = (gdwPUDFlags >> 19) & 1;
              v19 = v12;
              goto LABEL_694;
            case 2u:
              if ( v11 )
              {
                RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), v209, 10LL);
                updated = FastUpdateWinIni(0LL, 11LL, 9LL, v209);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 )
              {
                gdwPUDFlags |= 0x80000u;
                v19 = v12;
                goto LABEL_694;
              }
              gdwPUDFlags &= ~0x80000u;
              goto LABEL_40;
            case 3u:
              v21 = *(unsigned int *)(SGDGetUserSessionState(v15) + 15928);
              *(_DWORD *)Src = v21;
              *((_DWORD *)Src + 1) = *(_DWORD *)(SGDGetUserSessionState(v21) + 15932);
              *((_DWORD *)Src + 2) = (unsigned __int8)MouseAccelerationEnabled();
              v19 = v12;
              goto LABEL_694;
            case 4u:
              if ( !v11 )
                goto LABEL_69;
              v22 = CreateProfileUserName(&v189);
              v184 = UpdateWinIniInt(v22, 12LL, 10LL, *(unsigned int *)Src);
              v23 = UpdateWinIniInt(v22, 12LL, 11LL, *((unsigned int *)Src + 1));
              v24 = UpdateWinIniInt(v22, 12LL, 12LL, *((unsigned int *)Src + 2));
              LODWORD(v188[0]) = v24;
              v25 = v184;
              if ( !v184 )
                goto LABEL_64;
              if ( v23 && v24 )
              {
                updated = 1;
              }
              else
              {
                v26 = SGDGetUserSessionState(v184);
                UpdateWinIniInt(v22, 12LL, 10LL, *(unsigned int *)(v26 + 15928));
LABEL_64:
                if ( v23 )
                {
                  v27 = SGDGetUserSessionState(v25);
                  UpdateWinIniInt(v22, 12LL, 11LL, *(unsigned int *)(v27 + 15932));
                }
                if ( LODWORD(v188[0]) )
                {
                  v28 = MouseAccelerationEnabled();
                  UpdateWinIniInt(v22, 12LL, 12LL, v28);
                }
              }
              PointerDeviceSettingsFull = updated;
              FreeProfileUserName(v22, &v189);
LABEL_69:
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              v29 = *(_DWORD *)Src;
              *(_DWORD *)(SGDGetUserSessionState(v15) + 15928) = v29;
              v30 = *((_DWORD *)Src + 1);
              *(_DWORD *)(SGDGetUserSessionState(v31) + 15932) = v30;
              LOBYTE(v32) = *((_DWORD *)Src + 2) != 0;
              EnableMouseAcceleration(v32);
              v19 = v12;
              goto LABEL_694;
            case 5u:
              *(_DWORD *)Src = *(_DWORD *)(GetDPIServerInfo(v15, v8, v7, 1LL) + 4);
              v19 = v12;
              goto LABEL_694;
            case 6u:
              v33 = 1;
              if ( (int)a2 > 1 )
                v33 = a2;
              if ( v33 >= 0x32 )
                v33 = 50;
              if ( v33 == (__int64)*(int *)(GetDPIServerInfo(v15, v8, v7, 1LL) + 4) )
              {
                PointerDeviceSettingsFull = 1;
                v19 = v12;
              }
              else
              {
                v34 = (struct _UNICODE_STRING *)CreateProfileUserName(&v189);
                v35 = v34;
                if ( v11 )
                {
                  updated = SetWindowMetricInt(v34, 0x88u, v33);
                  PointerDeviceSettingsFull = updated;
                }
                if ( PointerDeviceSettingsFull )
                {
                  xxxSetAndDrawNCMetrics(v35, v33, 0LL);
                  ProcessDpiServerInfo = GetProcessDpiServerInfo();
                  bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
                }
                FreeProfileUserName(v35, &v189);
                v19 = v12;
              }
              goto LABEL_694;
            case 0xAu:
              *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v15) + 12612) & 0x1F;
              v19 = v12;
              goto LABEL_694;
            case 0xBu:
              v38 = 31;
              if ( a2 <= 0x1F )
                v38 = a2;
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 13LL, v38);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              v40 = v38 | *(_DWORD *)(SGDGetUserSessionState(v15) + 12612) & 0xFFFFFFE0;
              goto LABEL_105;
            case 0xDu:
              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
              {
                DpiForSystem = GetDpiForSystem((__int64)v15);
                *(_DWORD *)Src = GetDpiDependentMetric(18, DpiForSystem);
                v19 = v12;
                goto LABEL_694;
              }
              if ( !a2 )
                goto LABEL_40;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v15) & 0xF) != 0 )
              {
                v47 = PsGetCurrentProcessWin32Process(v45);
                if ( v47 && !*(_QWORD *)v47 )
                  v47 = 0LL;
                v48 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v47 + 284));
                v50 = PsGetCurrentProcessWin32Process(v49);
                if ( v50 && !*(_QWORD *)v50 )
                  v50 = 0LL;
                a2 = EngMulDiv(v48, 96, *(unsigned __int16 *)(v50 + 284));
                v46 = v48;
              }
              else
              {
                v46 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
              }
              v51 = *(_DWORD *)(gpsi + 2304LL);
              if ( v46 > v51 )
                v51 = v46;
              v52 = *(_DWORD *)(gpsi + 2424LL);
              if ( a2 > v52 )
                v52 = a2;
              if ( v11 )
              {
                updated = SetWindowMetricInt(0LL, 0x40u, v51);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              SetDpiDepSysMet(18LL, v51);
              *(_DWORD *)(gpsi + 2476LL) = v52;
              v19 = v12;
              goto LABEL_694;
            case 0xEu:
              *(_DWORD *)Src = (int)abs32(giScreenSaveTimeOutMs) / 1000;
              v19 = v12;
              goto LABEL_694;
            case 0xFu:
              v187 = (int *)giScreenSaveTimeOutMs;
              if ( gfSwitchInProgress )
                return 0LL;
              if ( gdwRITdaemonLockState && !v185 )
                goto LABEL_224;
              v62 = 1000 * a2;
              v63 = 1000 * GetEasTimeout();
              v185 = v63;
              if ( v63 )
              {
                v64 = 1;
                v184 = 1;
                if ( *v187 > 0 && v63 < v62 || v62 <= 0 )
                {
                  UserSetLastError(1260);
                  v11 = 0;
                  PointerDeviceSettingsFull = 0;
                  v183 = 0;
                }
              }
              else
              {
                v64 = 0;
              }
              if ( !(unsigned int)CheckDesktopPolicy(0LL, 99LL) )
                goto LABEL_172;
              if ( !v64 )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
                v183 = 0;
LABEL_172:
                v65 = v187;
                goto LABEL_173;
              }
              LODWORD(v188[0]) = 0;
              v178 = 2;
              v177 = (int *)v188;
              if ( !(unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
                goto LABEL_172;
              v66 = 1000 * LODWORD(v188[0]);
              LODWORD(v188[0]) = v66;
              if ( !v66 )
                goto LABEL_172;
              v65 = v187;
              if ( v66 < v185 && *v187 > 0 && v66 < v62 )
              {
                UserSetLastError(1260);
                v11 = 0;
                PointerDeviceSettingsFull = 0;
                v183 = 0;
              }
LABEL_173:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 99LL, v62 / 0x3E8u);
                v182 = updated;
                PointerDeviceSettingsFull = updated;
                v183 = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( !gbBlockSendInputResets )
              {
                CInputGlobals::UpdateLastInputTime(
                  gpInputGlobals,
                  (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                  7LL);
                updated = v182;
                PointerDeviceSettingsFull = v183;
              }
              if ( *v65 < 0 && !v184 )
                v62 = -v62;
              *v65 = v62;
              v19 = v12;
              break;
            case 0x10u:
              LOBYTE(v9) = giScreenSaveTimeOutMs > 0;
              *(_DWORD *)Src = (_DWORD)v9;
              v19 = v12;
              goto LABEL_694;
            case 0x11u:
              if ( a2 - 2 <= 0xFFFFFFFC )
                return 0LL;
              if ( gdwRITdaemonLockState && !v185 )
                goto LABEL_224;
              gbLockConsoleActive = a2 == -1;
              if ( gfSwitchInProgress )
                return 0LL;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
                v183 = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
                v182 = updated;
                PointerDeviceSettingsFull = updated;
                v183 = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( !gbBlockSendInputResets )
              {
                CInputGlobals::UpdateLastInputTime(
                  gpInputGlobals,
                  (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                  7LL);
                updated = v182;
                PointerDeviceSettingsFull = v183;
              }
              if ( giScreenSaveTimeOutMs >= 0 )
                goto LABEL_219;
              if ( a2 )
                goto LABEL_220;
              if ( giScreenSaveTimeOutMs < 0 )
                goto LABEL_40;
LABEL_219:
              if ( a2 )
                goto LABEL_40;
LABEL_220:
              giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
              v19 = v12;
              goto LABEL_694;
            case 0x14u:
              v70 = CreateProfileUserName(&v189);
              if ( (unsigned int)CheckDesktopPolicy(v70, 67LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( !v11 )
                goto LABEL_239;
              if ( a2 == -1 )
              {
                PointerDeviceSettingsFull = 1;
              }
              else
              {
                FastGetProfileStringFromIDW(v70, 4LL, 67LL, &word_1C03142AC, v211, 260, 8);
                updated = FastUpdateWinIni(v70, 4LL, 67LL, Src);
                PointerDeviceSettingsFull = updated;
LABEL_239:
                if ( !PointerDeviceSettingsFull )
                  goto LABEL_248;
              }
              if ( (unsigned int)xxxSetDeskWallpaper(v70, (const unsigned __int16 *)Src) )
              {
                xxxInvalidateWallpaperWindow();
                goto LABEL_248;
              }
              if ( v11 )
              {
                if ( a2 == -1 )
                  goto LABEL_248;
                FastUpdateWinIni(v70, 4LL, 67LL, v211);
              }
              PointerDeviceSettingsFull = 0;
              updated = 0;
              goto LABEL_248;
            case 0x15u:
              v186 = (__int64 *)Src;
              if ( a2 == -1 && Src )
                goto LABEL_254;
              v71 = CreateProfileUserName(&v189);
              v187 = (int *)v71;
              if ( (unsigned int)CheckDesktopPolicy(v71, 2LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 && v186 )
              {
                FastGetProfileStringFromIDW(v71, 4LL, 2LL, &word_1C03142AC, v211, 260, 0);
                updated = FastUpdateWinIni(v71, 4LL, 2LL, v186);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_269;
              if ( !(unsigned int)SetDesktopPattern(v71, v186) )
              {
                if ( v11 && v186 )
                  FastUpdateWinIni(v71, 4LL, 2LL, v211);
                FreeProfileUserName(v71, &v189);
                return 0LL;
              }
              xxxSendNotifyMessage((struct tagTHREADINFO **)0xFFFFFFFFFFFFFFFFLL, 0x15u, 0LL, 0LL, 1);
              v72 = *(_QWORD *)(gptiCurrent + 456LL);
              if ( v72 )
                v9 = *(struct tagWND **)(*(_QWORD *)(v72 + 8) + 24LL);
              xxxInternalInvalidate(v9, (HRGN)1, 0x10485u);
LABEL_269:
              FreeProfileUserName(v187, &v189);
              v19 = v12;
              goto LABEL_694;
            case 0x16u:
              *(_DWORD *)Src = (*(int *)(SGDGetUserSessionState(v15) + 12612) >> 5) & 3;
              v19 = v12;
              goto LABEL_694;
            case 0x17u:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              v40 = (32 * a2) | *(_DWORD *)(SGDGetUserSessionState(v15) + 12612) & 0xFFFFFF9F;
LABEL_105:
              *(_DWORD *)(SGDGetUserSessionState(v39) + 12612) = v40;
              v42 = SGDGetUserSessionState(v41);
              SetKeyboardRate(*(unsigned int *)(v42 + 12612));
              v19 = v12;
              goto LABEL_694;
            case 0x18u:
              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
              {
                v53 = GetDpiForSystem((__int64)v15);
                *(_DWORD *)Src = GetDpiDependentMetric(19, v53);
                v19 = v12;
                goto LABEL_694;
              }
              if ( !a2 )
                goto LABEL_40;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v15) & 0xF) != 0 )
              {
                v56 = PsGetCurrentProcessWin32Process(v54);
                if ( v56 && !*(_QWORD *)v56 )
                  v56 = 0LL;
                v57 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v56 + 284));
                v59 = PsGetCurrentProcessWin32Process(v58);
                if ( v59 && !*(_QWORD *)v59 )
                  v59 = 0LL;
                a2 = EngMulDiv(v57, 96, *(unsigned __int16 *)(v59 + 284));
                v55 = v57;
              }
              else
              {
                v55 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
              }
              v60 = *(_DWORD *)(gpsi + 2308LL);
              if ( v55 > v60 )
                v60 = v55;
              v61 = *(_DWORD *)(gpsi + 2428LL);
              if ( a2 > v61 )
                v61 = a2;
              if ( v11 )
              {
                updated = SetWindowMetricInt(0LL, 0x41u, v60);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              SetDpiDepSysMet(19LL, v60);
              *(_DWORD *)(gpsi + 2480LL) = v61;
              v19 = v12;
              goto LABEL_694;
            case 0x19u:
              *(_DWORD *)Src = (gdwPUDFlags >> 21) & 1;
              v19 = v12;
              goto LABEL_694;
            case 0x1Au:
              if ( v11 )
              {
                updated = SetWindowMetricInt(0LL, 0x42u, a2 != 0);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 )
                gdwPUDFlags |= 0x200000u;
              else
                gdwPUDFlags &= ~0x200000u;
              xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
              v19 = v12;
              goto LABEL_694;
            case 0x1Bu:
              *(_DWORD *)Src = *(_DWORD *)(gpsi + 2056LL);
              v19 = v12;
              goto LABEL_694;
            case 0x1Cu:
              goto LABEL_683;
            case 0x1Du:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 97LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(gpsi + 2040LL) = a2;
              v19 = v12;
              goto LABEL_694;
            case 0x1Eu:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(gpsi + 2044LL) = a2;
              v19 = v12;
              goto LABEL_694;
            case 0x1Fu:
              DPIMetrics = GetDPIMetrics((__int64)v15);
              GreExtGetObjectW(*(HBRUSH *)(DPIMetrics + 64), 92LL, Src);
              v19 = v12;
              goto LABEL_694;
            case 0x20u:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              SetDoubleClickTime(a2);
              v19 = v12;
              goto LABEL_694;
            case 0x21u:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              LOBYTE(v9) = a2 != 0;
              _SwapMouseButton((int)v9);
              v19 = v12;
              goto LABEL_694;
            case 0x22u:
              if ( Src )
                v74 = a2 == 92;
              else
                v74 = a2 == 0;
              if ( !v74 )
                return 0LL;
              v75 = (struct _UNICODE_STRING *)CreateProfileUserName(&v189);
              v76 = xxxSetSPIMetrics(v75, v5, (struct tagMINIMIZEDMETRICS *)Src, v11, &v182);
              FreeProfileUserName(v75, &v189);
              updated = v182;
              if ( !v76 )
                goto LABEL_305;
              if ( v11 )
                PointerDeviceSettingsFull = v182;
              v19 = v12;
              goto LABEL_694;
            case 0x23u:
              *(_DWORD *)Src = 1;
              v19 = v12;
              goto LABEL_694;
            case 0x24u:
              goto LABEL_40;
            case 0x25u:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                LOBYTE(v9) = a2 == 1;
                updated = UpdateWinIniInt(0LL, 4LL, 107LL, (unsigned int)v9);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 == 1 )
                gdwPUDFlags |= 0x100000u;
              else
                gdwPUDFlags &= ~0x100000u;
              v19 = v12;
              goto LABEL_694;
            case 0x26u:
              *(_DWORD *)Src = (gdwPUDFlags >> 20) & 1;
              v19 = v12;
              goto LABEL_694;
            case 0x29u:
              if ( !Src )
                return 0LL;
              GetWindowNCMetrics((__int64)Src);
              v19 = v12;
              goto LABEL_694;
            case 0x2Au:
            case 0x2Cu:
            case 0x2Eu:
            case 0x49u:
              v84 = xxxSetSPIMetrics(0LL, v5, (struct tagMINIMIZEDMETRICS *)Src, v11, &v182);
              updated = v182;
              if ( v84 )
              {
                if ( v11 )
                  PointerDeviceSettingsFull = v182;
              }
              else
              {
                PointerDeviceSettingsFull = 0;
              }
              RtlLoadStringOrError(135LL, v210, 40LL);
              v19 = v12;
              goto LABEL_694;
            case 0x2Bu:
              v16 = (__int64)Src;
              *(_DWORD *)Src = 20;
              *(_DWORD *)(v16 + 4) = *(_DWORD *)(gpsi + 2124LL) - 6;
              *(_DWORD *)(v16 + 8) = *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
              *(_DWORD *)(v16 + 12) = *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
              *(_DWORD *)(v16 + 16) = *(_DWORD *)(gpsi + 2120LL);
              v19 = v12;
              goto LABEL_694;
            case 0x2Du:
              v78 = Src;
              *(_DWORD *)Src = 108;
              v79 = GetDpiForSystem((__int64)v15);
              v78[1] = GetDpiDependentMetric(18, v79);
              v81 = GetDpiForSystem(v80);
              v78[2] = GetDpiDependentMetric(19, v81);
              v82 = (gdwPUDFlags >> 21) & 1;
              v78[3] = v82;
              v83 = GetDPIMetrics(v82);
              GreExtGetObjectW(*(HBRUSH *)(v83 + 64), 92LL, (_WORD *)v78 + 8);
              v19 = v12;
              goto LABEL_694;
            case 0x2Fu:
              v205 = 0LL;
              if ( Src )
              {
                if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                  return 0LL;
                v86 = (__int64 *)MonitorFromRect((__int64)Src, 1u, 0);
              }
              else
              {
                v86 = *(__int64 **)(GetDispInfo(v15) + 96);
              }
              v186 = v86;
              v206 = *(_OWORD *)GetMonitorRect(v188, (__int64)v86);
              v87 = (int *)&v206;
              if ( Src )
                v87 = (int *)Src;
              if ( !(unsigned int)IntersectRect(&v205, v87, (int *)&v206) || v205 != *(_OWORD *)v87 )
                goto LABEL_254;
              v207 = (struct tagRECT)*GetMonitorWorkRect(&v204, (__int64)v186);
              if ( *(_OWORD *)&v207 != v205 )
              {
                _InterlockedIncrement((volatile signed __int32 *)qword_1C0361320);
                v89 = qword_1C0361320;
                if ( !qword_1C0361320 )
                  return 0LL;
                v182 = 1;
                if ( (W32GetCurrentThreadDpiAwarenessContext(v88) & 0xF) != 2 )
                {
                  if ( *((_QWORD *)PtiCurrentShared(v90) + 57) )
                  {
                    v92 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared(v91) + 57) + 8LL);
                    if ( (*(_DWORD *)(v92 + 64) & 1) != 0 )
                    {
                      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v92);
                      LogicalToPhysicalDPIRect(&v205, &v205, CurrentThreadDpiAwarenessContext, &v186);
                    }
                  }
                }
                v94 = v186;
                v95 = v186[5];
                v202 = *(_OWORD *)(v95 + 44);
                v203 = *(_OWORD *)(v95 + 28);
                if ( (unsigned int)dword_1C035C080 > 4 && tlgKeywordOn((__int64)&dword_1C035C080, 32LL) )
                {
                  LOBYTE(v9) = a2 != 0;
                  v184 = (unsigned int)v9;
                  v185 = HIDWORD(v205);
                  v194 = DWORD2(v205);
                  v195 = DWORD1(v205);
                  v196 = v205;
                  v197 = HIDWORD(v202);
                  v198 = DWORD2(v202);
                  v199 = DWORD1(v202);
                  v200 = v202;
                  LODWORD(v191) = HIDWORD(v203);
                  v192 = DWORD2(v203);
                  v193 = DWORD1(v203);
                  LODWORD(v187) = v203;
                  v201 = *v94;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (unsigned int)&dword_1C035C080,
                    (unsigned int)&unk_1C031D313,
                    v96,
                    (_DWORD)v94,
                    (__int64)&v201,
                    (__int64)&v187,
                    (__int64)&v193,
                    (__int64)&v192,
                    (__int64)&v191,
                    (__int64)&v200,
                    (__int64)&v199,
                    (__int64)&v198,
                    (__int64)&v197,
                    (__int64)&v196,
                    (__int64)&v195,
                    (__int64)&v194,
                    (__int64)&v185,
                    (__int64)&v184);
                  v94 = v186;
                }
                *(_OWORD *)(v94[5] + 44) = v205;
                v97 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( v97 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_AND_TRACE_SF_dddddddd(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v97,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    (__int64)gFullLog,
                    (int)v177,
                    0x17u,
                    0xAu,
                    (__int64)&WPP_6b46edcb4cb83e3ea91889dc4f8cc94b_Traceguids);
                CTopologyManager::UpdateCurrent();
                DispInfo = GetDispInfo(v98);
                if ( v186 == *(__int64 **)(DispInfo + 96) && *(_DWORD *)*gpDispInfo )
                  UpdateDesktopMonitorNavigationOrder();
                if ( a2 )
                {
                  LOBYTE(v100) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                  if ( (_BYTE)v100 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v101) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    WPP_RECORDER_AND_TRACE_SF_(
                      WPP_GLOBAL_Control->AttachedDevice,
                      (_DWORD)v100,
                      v101,
                      v16,
                      4,
                      23,
                      11,
                      (__int64)&WPP_6b46edcb4cb83e3ea91889dc4f8cc94b_Traceguids);
                  }
                  DesktopRecalc::OnWorkAreaChanged(v89, v100);
                }
                else
                {
                  LOBYTE(v100) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                  if ( (_BYTE)v100 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v101) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    WPP_RECORDER_AND_TRACE_SF_(
                      WPP_GLOBAL_Control->AttachedDevice,
                      (_DWORD)v100,
                      v101,
                      v16,
                      3,
                      23,
                      12,
                      (__int64)&WPP_6b46edcb4cb83e3ea91889dc4f8cc94b_Traceguids);
                  }
                }
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v89, 0xFFFFFFFF) == 1 )
                  Win32FreePool(v89);
                updated = v182;
              }
              PointerDeviceSettingsFull = 1;
              v19 = v12;
              goto LABEL_694;
            case 0x30u:
              v85 = GetDispInfo(v15);
              *(__m128i *)Src = *GetMonitorWorkRect((__m128i *)&v207, *(_QWORD *)(v85 + 96));
              v19 = v12;
              goto LABEL_694;
            case 0x36u:
              v110 = Src;
              if ( a2 && a2 != 28 || !Src || *(_DWORD *)Src != 28 )
                return 0LL;
              memmove((char *)Src + 4, (char *)&gMouseKeys + 4, 0x18uLL);
              v111 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
              *((_DWORD *)Src + 1) = v111;
              if ( gbMKMouseMode )
              {
                v111 |= 0x80000000;
                v110[1] = v111;
              }
              v112 = v111 | ((gwMKButtonState & 3) << 24);
              v110[1] = v112;
              v110[1] = v112 | ((gwMKCurrentButton & 3) << 28);
              v19 = v12;
              goto LABEL_694;
            case 0x37u:
              v113 = (struct tagMOUSEKEYS *)Src;
              if ( a2 && a2 != 28 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 28 )
                return 0LL;
              v114 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
              *((_DWORD *)Src + 1) = v114;
              if ( (unsigned __int8)v114 != v114 )
                return 0LL;
              v115 = v114 & 0xFFFFFFFD;
              v116 = v114 | 2;
              if ( (HIDWORD(gMouseKeys) & 2) == 0 )
                v116 = v115;
              *((_DWORD *)v113 + 1) = v116;
              if ( (unsigned int)(*((_DWORD *)v113 + 2) - 10) > 0x15E
                || (unsigned int)(*((_DWORD *)v113 + 3) - 1000) > 0xFA0 )
              {
                return 0LL;
              }
              if ( v11 )
              {
                v117 = (struct _UNICODE_STRING *)CreateProfileUserName(&v189);
                updated = SetMouseKeys(v117, v113);
                PointerDeviceSettingsFull = updated;
                if ( !updated )
                  SetMouseKeys(v117, gMouseKeys);
                FreeProfileUserName(v117, &v189);
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              memmove(gMouseKeys, v113, *(unsigned int *)v113);
              LODWORD(gMouseKeys) = 28;
              CalculateMouseTable();
              v118 = HIDWORD(gMouseKeys);
              if ( (v118 & 1) != 0 )
              {
                v119 = SGDGetUserSessionState(v118);
                v121 = *(_WORD *)(SGDGetUserSessionState(v120) + 13768);
                LOBYTE(v9) = ((unsigned __int8)(1 << (2 * (*(_WORD *)(SGDGetUserSessionState(v122) + 13768) & 3) + 1)) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)v121 >> 2) + v119 + 13992)) != 0;
                gbMKMouseMode = ((HIDWORD(gMouseKeys) >> 7) & 1) != (_DWORD)v9;
                MKShowMouseCursor();
              }
              else
              {
                MKHideMouseCursor();
              }
              SetAccessEnabledFlag();
              if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(11, 3uLL, 0LL, 10);
              PostShellHookMessagesEx(0xBuLL, 3LL, 0LL);
              v19 = v12;
              goto LABEL_694;
            case 0x38u:
              *(_DWORD *)Src = (gdwPUDFlags >> 15) & 1;
              v19 = v12;
              goto LABEL_694;
            case 0x39u:
              if ( v11 )
              {
                LOBYTE(v9) = a2 == 1;
                RtlStringCchPrintfW(v209, 0x28uLL, (size_t *)L"%d", (unsigned int)v9);
                updated = FastWriteProfileStringW(0LL, 20LL, L"On", v209);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 == 1 )
                gdwPUDFlags |= 0x8000u;
              else
                gdwPUDFlags &= ~0x8000u;
              SetAccessEnabledFlag();
              *(_DWORD *)(gpsi + 2176LL) = (gdwPUDFlags >> 15) & 1;
              v19 = v12;
              goto LABEL_694;
            case 0x40u:
              if ( a2 && a2 != 56 || !Src || *(_DWORD *)Src != 56 )
                return 0LL;
              memmove((char *)Src + 4, (char *)&gSoundSentry + 4, 0x34uLL);
              v19 = v12;
              goto LABEL_694;
            case 0x41u:
              v129 = (struct tagSOUNDSENTRYW *)Src;
              if ( a2 && a2 != 56 )
                return 0LL;
              if ( !Src )
                return 0LL;
              if ( *(_DWORD *)Src != 56 )
                return 0LL;
              v130 = *((_DWORD *)Src + 1);
              if ( (v130 & 7) != v130 || *((_DWORD *)Src + 8) > 3u || *((_DWORD *)Src + 2) || *((_DWORD *)Src + 5) )
                return 0LL;
              v131 = v130 & 0xFFFFFFFD;
              v132 = v130 | 2;
              if ( (HIDWORD(gSoundSentry) & 2) == 0 )
                v132 = v131;
              *((_DWORD *)Src + 1) = v132;
              if ( v11 )
              {
                v133 = (struct _UNICODE_STRING *)CreateProfileUserName(&v189);
                updated = SetSoundSentry(v133, v129);
                PointerDeviceSettingsFull = updated;
                if ( !updated )
                  SetSoundSentry(v133, gSoundSentry);
                FreeProfileUserName(v133, &v189);
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              memmove(gSoundSentry, v129, *(unsigned int *)v129);
              LODWORD(gSoundSentry) = 56;
              SetAccessEnabledFlag();
              v19 = v12;
              goto LABEL_694;
            case 0x42u:
              v123 = Src;
              *((_DWORD *)Src + 1) = gHighContrast[1];
              v124 = (_OWORD *)v123[1];
              v125 = gHighContrastDefaultScheme;
              do
              {
                *v124 = *(_OWORD *)v125;
                v124[1] = *((_OWORD *)v125 + 1);
                v124[2] = *((_OWORD *)v125 + 2);
                v124[3] = *((_OWORD *)v125 + 3);
                v124[4] = *((_OWORD *)v125 + 4);
                v124[5] = *((_OWORD *)v125 + 5);
                v124[6] = *((_OWORD *)v125 + 6);
                v124 += 8;
                *(v124 - 1) = *((_OWORD *)v125 + 7);
                v125 += 64;
                --v18;
              }
              while ( v18 );
              v126 = v180;
              v19 = v12;
              goto LABEL_695;
            case 0x43u:
              updated = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)Src, v11, &v183);
              v19 = v12;
              PointerDeviceSettingsFull = v183;
              goto LABEL_694;
            case 0x44u:
              *(_DWORD *)Src = (gdwPUDFlags >> 17) & 1;
              v19 = v12;
              goto LABEL_694;
            case 0x45u:
              if ( v11 )
              {
                v127 = L"1";
                if ( !a2 )
                  v127 = L"0";
                updated = FastWriteProfileStringW(0LL, 27LL, L"On", v127);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 )
                gdwPUDFlags |= 0x20000u;
              else
                gdwPUDFlags &= ~0x20000u;
              v19 = v12;
              goto LABEL_694;
            case 0x46u:
              *(_DWORD *)Src = (gdwPUDFlags >> 18) & 1;
              v19 = v12;
              goto LABEL_694;
            case 0x47u:
              if ( v11 )
              {
                v128 = L"1";
                if ( !a2 )
                  v128 = L"0";
                updated = FastWriteProfileStringW(0LL, 28LL, L"On", v128);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 )
                gdwPUDFlags |= 0x40000u;
              else
                gdwPUDFlags &= ~0x40000u;
              v19 = v12;
              goto LABEL_694;
            case 0x48u:
              v77 = Src;
              if ( !Src || a2 != 8 )
                return 0LL;
              *(_DWORD *)Src = 8;
              v77[1] = *((_WORD *)&gdwPUDFlags + 1) & 1;
              v19 = v12;
              goto LABEL_694;
            case 0x4Au:
              *(_DWORD *)Src = (*((_DWORD *)Gre::Base::Globals(v15) + 41) >> 1) & 1;
              v19 = v12;
              goto LABEL_694;
            case 0x4Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              v37 = a2 != 0 ? 2 : 0;
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 200LL, v37);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              GreSetFontEnumeration(v37 | 4);
              v19 = v12;
              goto LABEL_694;
            case 0x4Cu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 198LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(gpsi + 2168LL) = a2;
              v19 = v12;
              goto LABEL_694;
            case 0x4Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 199LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(gpsi + 2172LL) = a2;
              v19 = v12;
              goto LABEL_694;
            case 0x57u:
              v70 = CreateProfileUserName(&v189);
              xxxUpdateSystemCursorsFromRegistry(v70, 2LL);
              goto LABEL_248;
            case 0x58u:
              v70 = CreateProfileUserName(&v189);
              xxxUpdateSystemIconsFromRegistry(v70);
              goto LABEL_248;
            case 0x59u:
              if ( !gspklBaseLayout )
              {
                UserSetLastError(21);
                return 0LL;
              }
              *(_QWORD *)Src = *(_QWORD *)(gspklBaseLayout + 40LL);
              v19 = v12;
              goto LABEL_694;
            case 0x5Au:
              v43 = HKLtoPKL(gptiCurrent, *(_QWORD *)Src, v7, 1LL);
              if ( !v43 )
                return 0LL;
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_QWORD *)&v206 = gspklBaseLayout;
              *((_QWORD *)&v206 + 1) = v43;
              HMAssignmentLock(&v206, 0LL);
              v19 = v12;
              goto LABEL_694;
            case 0x5Bu:
              return GetKbdLangSwitch(0LL, v8, v7, 1LL);
            case 0x5Du:
              if ( v11 )
              {
                RtlStringCchPrintfW(v209, 0x28uLL, (size_t *)L"%d", a2);
                updated = FastUpdateWinIni(0LL, 12LL, 613LL, v209);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              SetMouseTrails(a2);
              v19 = v12;
              goto LABEL_694;
            case 0x5Eu:
              if ( *(_DWORD *)(SGDGetUserSessionState(v15) + 15936) )
                *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v20) + 15936) + 1;
              else
                *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v20) + 15936);
              v19 = v12;
              goto LABEL_694;
            case 0x5Fu:
              *(_DWORD *)Src = (*(_DWORD *)(gpsi + 7004LL) >> 1) & 1;
              v19 = v12;
              goto LABEL_694;
            case 0x60u:
              if ( v11 )
              {
                LOBYTE(v9) = a2 != 0;
                updated = UpdateWinIniInt(0LL, 12LL, 7LL, (unsigned int)v9);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_78;
              if ( a2 )
              {
                *(_DWORD *)(gpsi + 7004LL) |= 2u;
                v19 = v12;
              }
              else
              {
                *(_DWORD *)(gpsi + 7004LL) &= ~2u;
LABEL_78:
                v19 = v12;
              }
              goto LABEL_694;
            case 0x62u:
              *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v15) + 15916);
              v19 = v12;
              goto LABEL_694;
            case 0x63u:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 91LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(SGDGetUserSessionState(v15) + 15916) = a2;
              v19 = v12;
              goto LABEL_694;
            case 0x64u:
              *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v15) + 15920);
              v19 = v12;
              goto LABEL_694;
            case 0x65u:
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(SGDGetUserSessionState(v15) + 15920) = a2;
              v19 = v12;
              goto LABEL_694;
            case 0x66u:
              *(_DWORD *)Src = *(_DWORD *)(SGDGetUserSessionState(v15) + 15924);
              v19 = v12;
              goto LABEL_694;
            case 0x67u:
              v134 = 10;
              if ( a2 >= 0xA )
                v134 = a2;
              if ( v134 > 0x7FFFFFFF )
                v134 = 0x7FFFFFFF;
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 12LL, 93LL, v134);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(SGDGetUserSessionState(v15) + 15924) = v134;
              v19 = v12;
              goto LABEL_694;
            case 0x6Au:
              *(_DWORD *)Src = gdtMNDropDown;
              v19 = v12;
              goto LABEL_694;
            case 0x6Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 94LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              gdtMNDropDown = a2;
              v19 = v12;
              goto LABEL_694;
            case 0x6Cu:
              *(_DWORD *)Src = *(_DWORD *)(gpsi + 4992LL);
              v19 = v12;
              goto LABEL_694;
            case 0x6Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 15LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              *(_DWORD *)(gpsi + 4992LL) = a2;
              v19 = v12;
              goto LABEL_694;
            case 0x6Eu:
              LOBYTE(v9) = *(_DWORD *)(SGDGetUserSessionState(v15) + 13960) != 0;
              *(_DWORD *)Src = (_DWORD)v9;
              v19 = v12;
              goto LABEL_694;
            case 0x6Fu:
              LOBYTE(v9) = a2 != 0;
              PointerDeviceSettingsFull = xxxSetIMEShowStatus((unsigned int)v9, v11, &v182);
              v19 = v12;
              updated = v182;
              goto LABEL_694;
            case 0x70u:
              *(_DWORD *)Src = GetMouseSensitivity(0LL, v8, v7, 1LL);
              v19 = v12;
              goto LABEL_694;
            case 0x71u:
              if ( !(unsigned __int8)IsValidMouseSensitivity((unsigned int)Src, v8, v7, 1LL) )
                return 0LL;
              if ( v11 )
              {
                RtlStringCchPrintfW(v209, 0x28uLL, (size_t *)L"%d", Src);
                updated = FastUpdateWinIni(0LL, 12LL, 608LL, v209);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              UpdateMouseSensitivity((unsigned int)Src);
              do
              {
                ResetAccelerationCurves((unsigned int)v9);
                LODWORD(v9) = (_DWORD)v9 + 1;
              }
              while ( (unsigned int)v9 < 2 );
              v19 = v12;
              goto LABEL_694;
            case 0x72u:
              LOBYTE(v9) = gppiScreenSaver != 0LL;
              *(_DWORD *)Src = (_DWORD)v9;
              v19 = v12;
              goto LABEL_694;
            case 0x73u:
              if ( g_pWallpaperSettings )
              {
                RtlStringCchCopyW(
                  (unsigned __int16 *)Src,
                  0x104uLL,
                  (const unsigned __int16 *)(g_pWallpaperSettings + 4LL));
                v19 = v12;
              }
              else
              {
                v70 = CreateProfileUserName(&v189);
                LoadWallpaperFilenameFromRegistry(v70, (unsigned __int16 *)Src, 0x104u);
LABEL_248:
                FreeProfileUserName(v70, &v189);
                v19 = v12;
              }
              goto LABEL_694;
            case 0x74u:
              if ( a2 && a2 != 12 || !Src || *(_DWORD *)Src != 12 )
                return 0LL;
              memmove((char *)Src + 4, (char *)&gAudioDescription + 4, 8uLL);
              v19 = v12;
              goto LABEL_694;
            case 0x75u:
              if ( a2 && a2 != 12 || !Src || *(_DWORD *)Src != 12 )
                return 0LL;
              if ( v11 )
              {
                v135 = CreateProfileUserName(&v189);
                v136 = v135;
                v137 = L"1";
                v138 = L"1";
                if ( !*((_DWORD *)Src + 1) )
                  v138 = L"0";
                v139 = FastWriteProfileStringW(v135, 48LL, L"On", v138);
                RtlStringCchPrintfW(v209, 0x28uLL, (size_t *)L"%d", *((unsigned int *)Src + 2));
                updated = FastWriteProfileStringW(v136, 48LL, L"Locale", v209) & v139;
                PointerDeviceSettingsFull = updated;
                if ( !updated )
                {
                  if ( !HIDWORD(gAudioDescription) )
                    v137 = L"0";
                  FastWriteProfileStringW(v136, 48LL, L"On", v137);
                  RtlStringCchPrintfW(v209, 0x28uLL, (size_t *)L"%d", *((unsigned int *)&gAudioDescription + 2));
                  FastWriteProfileStringW(v136, 48LL, L"Locale", v209);
                }
                FreeProfileUserName(v136, &v189);
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              memmove(gAudioDescription, Src, *(unsigned int *)Src);
              LODWORD(gAudioDescription) = 12;
              v19 = v12;
              goto LABEL_694;
            case 0x76u:
              *(_DWORD *)Src = (*gpsi >> 9) & 1;
              v19 = v12;
              goto LABEL_694;
            case 0x77u:
              if ( gdwRITdaemonLockState && !v185 )
                goto LABEL_224;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
                v183 = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 618LL, a2 != 0);
                v182 = updated;
                PointerDeviceSettingsFull = updated;
                v183 = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              if ( a2 )
                _InterlockedOr(gpsi, 0x200u);
              else
                _InterlockedAnd(gpsi, 0xFFFFFDFF);
              PointerDeviceSettingsFull = v183;
              updated = v182;
              v19 = v12;
              goto LABEL_694;
            case 0x78u:
              *(_DWORD *)Src = gdwHungAppTimeout;
              v19 = v12;
              goto LABEL_694;
            case 0x79u:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 621LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              gdwHungAppTimeout = a2;
              v19 = v12;
              goto LABEL_694;
            case 0x7Au:
              *(_DWORD *)Src = gdwWaitToKillTimeout;
              v19 = v12;
              goto LABEL_694;
            case 0x7Bu:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 622LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              gdwWaitToKillTimeout = a2;
              v19 = v12;
              goto LABEL_694;
            case 0x7Cu:
              *(_DWORD *)Src = gdwWaitToKillServiceTimeout;
              v19 = v12;
              goto LABEL_694;
            case 0x7Du:
              if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( v11 )
              {
                updated = UpdateWinIniInt(0LL, 52LL, 623LL, a2);
                PointerDeviceSettingsFull = updated;
              }
              if ( !PointerDeviceSettingsFull )
                goto LABEL_40;
              gdwWaitToKillServiceTimeout = a2;
              v19 = v12;
              goto LABEL_694;
            case 0x7Eu:
            case 0x7Fu:
            case 0x80u:
            case 0x81u:
            case 0x82u:
            case 0x83u:
            case 0x84u:
            case 0x85u:
            case 0x86u:
            case 0x87u:
            case 0x88u:
            case 0x89u:
            case 0x8Au:
            case 0x8Bu:
            case 0x8Cu:
            case 0x8Du:
            case 0x8Eu:
            case 0x8Fu:
            case 0x90u:
            case 0x91u:
              v140 = WindowArrangementSPI::ArrangementParameterInfo(
                       v5,
                       a2,
                       (int *)Src,
                       v11,
                       PointerDeviceSettingsFull != 0);
              updated = v140 & 1;
              PointerDeviceSettingsFull = (v140 >> 1) & 1;
              v19 = v12;
              goto LABEL_694;
            case 0x94u:
            case 0x96u:
            case 0x98u:
            case 0x9Au:
            case 0x9Cu:
              PointerDeviceSettingsFull = ReadPointerDeviceSettingsFull(v5, Src, v7, 1LL);
              v19 = v12;
              goto LABEL_694;
            case 0x95u:
            case 0x97u:
            case 0x99u:
            case 0x9Bu:
            case 0x9Du:
              updated = WritePointerDeviceSettingsFull(v5, Src, v11, 1LL);
              v19 = v12;
              goto LABEL_694;
            case 0x9Eu:
            case 0xA5u:
            case 0xA7u:
              v207 = 0LL;
              v208 = 0LL;
              if ( (int)DrvDisplayConfigGetScaleFactorOverrides(&v207, 1LL) < 0 )
                return 0LL;
              if ( a2 == 158 )
              {
                *(_DWORD *)Src = DWORD2(v208);
              }
              else
              {
                v141 = Src;
                *(_QWORD *)Src = *(_QWORD *)((char *)&v208 + 4);
                v141[2] = HIDWORD(v208);
              }
              v19 = v12;
              goto LABEL_694;
            case 0x9Fu:
            case 0xA6u:
              if ( a2 + 11 > 0x16 )
                return 0LL;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
              {
                v11 = 0;
                PointerDeviceSettingsFull = 0;
              }
              if ( !v11 )
                goto LABEL_40;
              v207 = 0LL;
              LODWORD(v208) = 0;
              DWORD1(v208) = a2;
              LODWORD(v188[0]) = a2 != 159;
              if ( (int)DrvDisplayConfigSetScaleFactorOverride(&v207, v188) < 0 )
              {
LABEL_305:
                PointerDeviceSettingsFull = 0;
                v19 = v12;
              }
              else
              {
                if ( a2 == 159 )
                  TraceLoggingSPISetModernDPIOverrideEvent(v142, 159);
                else
                  TraceLoggingSPISetDesktopDPIOverrideEvent(v142, a2);
                PointerDeviceSettingsFull = 1;
                v19 = v12;
              }
              goto LABEL_694;
            case 0xA0u:
              *(_DWORD *)Src = 6;
              v19 = v12;
              goto LABEL_694;
            case 0xA1u:
              PointerDeviceSettingsFull = 1;
              v19 = v12;
              goto LABEL_694;
            case 0xA2u:
              v102 = GetDispInfo(v15);
              *(_OWORD *)Src = *(_OWORD *)GetMonitorMenuRect(&v207, *(struct tagMONITOR **)(v102 + 96));
              v19 = v12;
              goto LABEL_694;
            case 0xA3u:
              v206 = 0LL;
              if ( Src )
              {
                if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                  return 0LL;
                v103 = MonitorFromRect((__int64)Src, 1u, 0);
              }
              else
              {
                v103 = *(_QWORD *)(GetDispInfo(v15) + 96);
              }
              v188[0] = v103;
              v207 = *(struct tagRECT *)GetMonitorRect((__int64 *)&v207.left, v103);
              v104 = (int *)&v207;
              if ( Src )
                v104 = (int *)Src;
              if ( !(unsigned int)IntersectRect(&v206, v104, &v207.left) || v206 != *(_OWORD *)v104 )
                goto LABEL_254;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v105) & 0xF) != 2
                && *((_QWORD *)PtiCurrentShared(v106) + 57)
                && (v108 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared(v107) + 57) + 8LL),
                    (*(_DWORD *)(v108 + 64) & 1) != 0) )
              {
                v109 = W32GetCurrentThreadDpiAwarenessContext(v108);
                LogicalToPhysicalDPIRect(v188[0] + 112, &v206, v109, v188);
                v19 = v12;
              }
              else
              {
                *(_OWORD *)(v188[0] + 112) = v206;
                v19 = v12;
              }
              goto LABEL_694;
            case 0xA8u:
              *(_DWORD *)Src = gbLockScreenAutoLockActive;
              v19 = v12;
              goto LABEL_694;
            case 0xA9u:
              if ( gfSwitchInProgress )
                return 0LL;
              if ( gdwRITdaemonLockState && !v185 )
              {
LABEL_224:
                UserSetLastError(329);
                return 0LL;
              }
              LOBYTE(v9) = a2 != 0;
              gbLockScreenAutoLockActive = (int)v9;
              if ( !v11 )
                goto LABEL_40;
              updated = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
              PointerDeviceSettingsFull = updated;
              v19 = v12;
              goto LABEL_694;
            case 0xAAu:
              *(_DWORD *)Src = gbLockScreenActive;
              v19 = v12;
              goto LABEL_694;
            case 0xABu:
              if ( *((_DWORD *)v8 + 14) != gpidLogonUI )
                return 0LL;
              LOBYTE(v9) = a2 != 0;
              gbLockScreenActive = (_DWORD)v9;
              if ( a2 )
              {
                if ( !gptiForeground
                  || (v67 = *(_QWORD *)(gptiForeground + 432LL)) == 0
                  || (v68 = *(_QWORD *)(v67 + 128)) == 0
                  || (unsigned int)IsWindowUnderActiveLockScreen(v68) )
                {
                  xxxSetForegroundWindow2(0LL, 0LL, 0);
                }
                ClearKeyboardStates(v69);
              }
              GreLddmProcessLockScreen(gbLockScreenActive, v8, v7, v16);
              v19 = v12;
              goto LABEL_694;
            case 0xACu:
              v143 = InteractiveControlManager::Instance((__int64)v15);
              PointerDeviceSettingsFull = (int)InteractiveControlManager::GetExternalParameters(
                                                 v143,
                                                 (struct tagINTERACTIVECTRL_PARAMETERS *)Src) >= 0;
              v19 = v12;
              goto LABEL_694;
            case 0xADu:
              v144 = InteractiveControlManager::Instance((__int64)v15);
              LOBYTE(updated) = (int)InteractiveControlManager::SetExternalParameters(
                                       v144,
                                       (struct tagINTERACTIVECTRL_PARAMETERS *)Src,
                                       v11) >= 0;
              v19 = v12;
              goto LABEL_694;
            default:
              goto LABEL_590;
          }
        }
        goto LABEL_694;
      }
      switch ( v5 )
      {
        case 0x1027u:
          v176 = a2 != 0;
          if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
          {
            v11 = 0;
            PointerDeviceSettingsFull = 0;
          }
          if ( v11 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 112LL, a2 != 0);
            PointerDeviceSettingsFull = updated;
          }
          v19 = v12;
          if ( PointerDeviceSettingsFull )
            gbBlockSendInputResets = v176;
          goto LABEL_694;
        case 0x2024u:
          *(_DWORD *)Src = GetUserHandedness(v15, v8, v7, 1LL);
          v19 = v12;
          goto LABEL_694;
        case 0x2025u:
          a2 = 0;
          if ( (unsigned int)RIMIsDefaultUILanguageRTL(v15, v8, v7, 1LL) )
            LOBYTE(a2) = (_DWORD)Src == 0;
          else
            LOBYTE(a2) = (_DWORD)Src != 0;
LABEL_683:
          if ( v11 )
          {
            updated = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
            PointerDeviceSettingsFull = updated;
          }
          if ( PointerDeviceSettingsFull )
          {
            LOBYTE(v9) = a2 != 0;
            *(_DWORD *)(gpsi + 2056LL) = (_DWORD)v9;
            TraceLoggingSPISetMenuDropAlignmentEvent();
            v19 = v12;
            goto LABEL_694;
          }
          goto LABEL_40;
      }
LABEL_590:
      if ( v5 < 0xB2 )
      {
        UserSetLastError(1439);
        return 0LL;
      }
      v145 = v5 & 0x3000;
      if ( !v192 )
      {
        if ( v145 == 4096 )
        {
          v146 = 0;
          v147 = 0;
          if ( v5 < 0x103E )
          {
            if ( (int)gpdwCPUserPreferencesMask < 0 )
            {
              switch ( v5 )
              {
                case 0x1008u:
                case 0x1012u:
                case 0x1014u:
                case 0x1018u:
                case 0x101Au:
                  v147 = gbDisableAlpha != 0;
                  break;
                case 0x100Au:
                  v146 = (gdwPUDFlags >> 17) & 1;
                  v147 = v146;
                  break;
                case 0x1024u:
                  if ( gbDisableAlpha || gcOverlays )
                    v147 = 1;
                  break;
                default:
                  break;
              }
            }
            else if ( v5 != 4096 )
            {
              if ( v5 == 4106 )
              {
                v146 = 1;
                v147 = 1;
              }
              else if ( v5 != 4108 && v5 != 4124 )
              {
                v147 = v5 != 4126;
              }
            }
          }
          if ( v147 )
          {
            *(_DWORD *)Src = v146;
            v19 = v12;
          }
          else if ( v5 == 4158 && gProtocolType && !(unsigned int)IsWDAGContainer() )
          {
            LOBYTE(v9) = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) != 0;
            *(_DWORD *)Src = (_DWORD)v9;
            v19 = v12;
          }
          else
          {
            v148 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v5 - 4096) >> 6));
            LOBYTE(v9) = _bittest(&v148, (unsigned __int8)(((v5 - 4096) >> 1) - 32 * ((v5 - 4096) >> 6)));
            *(_DWORD *)Src = (_DWORD)v9;
            v19 = v12;
          }
          goto LABEL_694;
        }
        v149 = *(unsigned int *)UPDWORDPointer(v5);
        *(_DWORD *)Src = v149;
        if ( v5 == 8204 && !(_DWORD)v149 )
        {
          *(_DWORD *)Src = *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v149) + 32) + 8584LL);
          v19 = v12;
          goto LABEL_694;
        }
LABEL_40:
        v19 = v12;
        goto LABEL_694;
      }
      v150 = (__int64 *)CreateProfileUserName(&v189);
      v186 = v150;
      if ( v145 == 4096 )
      {
        if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4 )
        {
          v151 = CheckDesktopPolicy(v150, *((_QWORD *)&gpviCPUserPreferences + 1));
          v150 = v186;
          if ( v151 )
          {
            v11 = 0;
            PointerDeviceSettingsFull = 0;
          }
        }
        if ( v11 )
        {
          ProfileValue = FastGetProfileValue(
                           v150,
                           *((unsigned int *)&gpviCPUserPreferences + 1),
                           *((_QWORD *)&gpviCPUserPreferences + 1),
                           0LL,
                           v188,
                           8,
                           0);
          memmove((char *)v188 + ProfileValue, (char *)&gpdwCPUserPreferencesMask + ProfileValue, 8LL - ProfileValue);
          v153 = v5 - 4096;
          v154 = 1 << (((v5 - 4096) >> 1) - 32 * ((v5 - 4096) >> 6));
          v155 = (int *)v188 + ((unsigned __int64)(v5 - 4096) >> 6);
          v156 = *v155;
          if ( Src )
            v157 = v154 | v156;
          else
            v157 = ~v154 & v156;
          *v155 = v157;
          updated = FastWriteProfileValue(
                      v186,
                      *((unsigned int *)&gpviCPUserPreferences + 1),
                      *((_QWORD *)&gpviCPUserPreferences + 1),
                      3LL,
                      v188,
                      8);
          PointerDeviceSettingsFull = updated;
        }
        else
        {
          v153 = v5 - 4096;
        }
        if ( PointerDeviceSettingsFull )
        {
          v158 = 1 << ((v153 >> 1) - 32 * (v153 >> 6));
          v159 = (CursorApiRouter *)((unsigned __int64)v153 >> 6);
          if ( Src )
            *((_DWORD *)&gpdwCPUserPreferencesMask + (_QWORD)v159) |= v158;
          else
            *((_DWORD *)&gpdwCPUserPreferencesMask + (_QWORD)v159) &= ~v158;
          switch ( v5 )
          {
            case 0x1005u:
              *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 4;
              v19 = v12;
              break;
            case 0x1007u:
              *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 8;
              v19 = v12;
              break;
            case 0x1009u:
              goto LABEL_634;
            case 0x100Bu:
              *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 0x20;
              v19 = v12;
              break;
            case 0x101Bu:
              LOBYTE(v159) = 1;
              SetPointerInternal(v159, 6u);
              v19 = v12;
              break;
            case 0x1023u:
              v162 = *(_QWORD *)(gptiCurrent + 456LL);
              if ( v162 )
                v9 = *(struct tagWND **)(*(_QWORD *)(v162 + 8) + 24LL);
              goto LABEL_636;
            case 0x1025u:
              v163 = (void *)ReferenceDwmApiPort(v159);
              DwmAsyncNotifyWindowShadowChange(v163);
              v19 = v12;
              break;
            case 0x103Fu:
              v160 = (CursorApiRouter *)*(unsigned int *)(gpsi + 7004LL);
              *(_DWORD *)(gpsi + 7004LL) = (unsigned int)v160 ^ ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 0x80000000;
              LOBYTE(v160) = 1;
              SetPointerInternal(v160, 6u);
LABEL_634:
              CreateBitmapStrip();
              v161 = *(_QWORD *)(gptiCurrent + 456LL);
              if ( v161 )
                v9 = *(struct tagWND **)(*(_QWORD *)(v161 + 8) + 24LL);
LABEL_636:
              xxxInternalInvalidate(v9, (HRGN)1, 0x10485u);
              v19 = v12;
              break;
            case 0x104Fu:
            case 0x1051u:
              xxxWindowEvent(0x80000007, 0LL, v5, Src != 0LL, 0);
              v19 = v12;
              break;
            case 0x1053u:
              NotifyISMPenButtonYieldSettingChange();
              goto LABEL_647;
            default:
              goto LABEL_647;
          }
        }
        else
        {
LABEL_647:
          v19 = v12;
        }
      }
      else
      {
        if ( *(_DWORD *)(UPDWORDPointer(v5) + 4) == 4 )
        {
          v165 = UPDWORDPointer(v5);
          if ( (unsigned int)CheckDesktopPolicy(v186, *(_QWORD *)(v165 + 8)) )
          {
            v11 = 0;
            PointerDeviceSettingsFull = 0;
          }
        }
        v19 = v12;
        if ( v11 )
        {
          if ( v5 == 8235 || v5 == 8239 )
          {
            v19 = 0;
            if ( !DesktopRecalcSettings::ValidateDesktopRecalcSetting(
                    (DesktopRecalcSettings *)v5,
                    (unsigned int)Src,
                    v164) )
            {
              PointerDeviceSettingsFull = 0;
              v11 = 0;
            }
          }
          if ( v11 )
          {
            v166 = *(_QWORD *)(UPDWORDPointer(v5) + 8);
            v167 = UPDWORDPointer(v180);
            updated = FastWriteProfileValue(v186, *(unsigned int *)(v167 + 4), v166, 4LL, &Src, 4);
            PointerDeviceSettingsFull = updated;
            v5 = v180;
          }
        }
        v168 = *(_DWORD *)UPDWORDPointer(v5);
        if ( PointerDeviceSettingsFull )
        {
          v169 = (int)Src;
          *(_DWORD *)UPDWORDPointer(v180) = v169;
          switch ( v180 )
          {
            case 0x2001u:
              v174 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              v175 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v174 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                UPDWORDPointer(v180);
                WPP_RECORDER_AND_TRACE_SF_Dd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v174,
                  v175,
                  (_DWORD)gFullLog,
                  (_DWORD)v177,
                  v178,
                  v179);
              }
              break;
            case 0x2007u:
              *(_DWORD *)(gpsi + 7008LL) = *(_DWORD *)UPDWORDPointer(v180);
              break;
            case 0x200Bu:
              v170 = (_DWORD *)UPDWORDPointer(v180);
              GreSetFontEnumeration(8 * (*v170 & 2 | 4u));
              break;
            case 0x200Du:
              v171 = *(_DWORD *)UPDWORDPointer(v180);
              *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v172) + 32) + 8584LL) = v171;
              break;
            case 0x200Fu:
              if ( *(_DWORD *)UPDWORDPointer(v180) )
                *(_DWORD *)(gpsi + 2228LL) = *(_DWORD *)UPDWORDPointer(v180);
              break;
            case 0x2011u:
              if ( *(_DWORD *)UPDWORDPointer(v180) )
                *(_DWORD *)(gpsi + 2232LL) = *(_DWORD *)UPDWORDPointer(v180);
              break;
            case 0x2013u:
              v173 = (unsigned int *)UPDWORDPointer(v180);
              GreSetLCDOrientation(*v173);
              break;
            case 0x201Du:
              TraceLoggingMouseWheelRoutingModeChange((unsigned int)Src);
              break;
            case 0x201Fu:
              TraceLoggingSPISetPenVisualizationEvent(v168, (unsigned int)Src);
              break;
            case 0x2029u:
              CCursorSizes::zzzRefreshSizes(gpCursorSizes);
              break;
            default:
              break;
          }
        }
      }
      FreeProfileUserName(v186, &v189);
LABEL_694:
      v126 = v180;
LABEL_695:
      if ( updated )
      {
        if ( v19 )
          EditionxxxBroadcastSPIChange(v126, v210, 1LL, v16, v177, v178);
      }
      return PointerDeviceSettingsFull;
  }
}
