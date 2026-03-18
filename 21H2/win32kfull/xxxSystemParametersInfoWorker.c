/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x1C009EBF8
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x1C009EBE0 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     GetWindowNCMetrics @ 0x1C006492C (GetWindowNCMetrics.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00779AC (IsWindowUnderActiveLockScreen.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C009A8A4 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     CheckWinstaAttributeAccess @ 0x1C009EAE0 (CheckWinstaAttributeAccess.c)
 *     ReadPointerDeviceSettingsFull @ 0x1C00A08E4 (ReadPointerDeviceSettingsFull.c)
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C00A1484 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00A1974 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     PostShellHookMessagesEx @ 0x1C00A6128 (PostShellHookMessagesEx.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     SetPointer @ 0x1C00B2D10 (SetPointer.c)
 *     SetMouseTrails @ 0x1C00B537C (SetMouseTrails.c)
 *     GreSetFontEnumeration @ 0x1C00B9324 (GreSetFontEnumeration.c)
 *     GetEasTimeout @ 0x1C00B9500 (GetEasTimeout.c)
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     GetProcessDpiServerInfo @ 0x1C00BA408 (GetProcessDpiServerInfo.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00BA6DC (xxxUpdateSystemIconsFromRegistry.c)
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     CreateBitmapStrip @ 0x1C00C6030 (CreateBitmapStrip.c)
 *     SortMonitorsInSpatialOrder @ 0x1C00C7FB0 (SortMonitorsInSpatialOrder.c)
 *     bSetDevDragWidth @ 0x1C00C8184 (bSetDevDragWidth.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00C8BFC (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C00C9E24 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00D0F08 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     SetKeyboardRate @ 0x1C00D58C4 (SetKeyboardRate.c)
 *     SetDesktopPattern @ 0x1C00F2908 (SetDesktopPattern.c)
 *     ClearKeyboardStates @ 0x1C010ACBC (ClearKeyboardStates.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     _SetDoubleClickTime @ 0x1C010D2A8 (_SetDoubleClickTime.c)
 *     xxxSetDeskWallpaper @ 0x1C011A1CC (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C011A528 (LoadWallpaperFilenameFromRegistry.c)
 *     GetKbdLangSwitch @ 0x1C01202D8 (GetKbdLangSwitch.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1C012036C (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x1C0120DDC (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C01222F0 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0122338 (xxxInvalidateWallpaperWindow.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C0157F48 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     UpdateWinIniInt @ 0x1C0158014 (UpdateWinIniInt.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01580A8 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C015823C (xxxMetricsRecalc.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C0158B30 (EditionxxxBroadcastSPIChange.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C015935C (DwmAsyncNotifyWindowShadowChange.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444@Z @ 0x1C01D1FF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@.c)
 *     ?IsWDAGContainer@@YAHXZ @ 0x1C01D2234 (-IsWDAGContainer@@YAHXZ.c)
 *     ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x1C01D2398 (-NotifyISMPenButtonYieldSettingChange@@YAXXZ.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D26C0 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01D2930 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01D2A30 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01E4B28 (-_SwapMouseButton@@YAHH@Z.c)
 *     GetUserHandedness @ 0x1C01E8E90 (GetUserHandedness.c)
 *     WritePointerDeviceSettingsFull @ 0x1C021122C (WritePointerDeviceSettingsFull.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C021E9B0 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C021EE48 (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C021EEC4 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C021EF40 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z @ 0x1C023B0A0 (-ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C024F068 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C024FEF4 (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetMonitorMenuRect @ 0x1C025A588 (GetMonitorMenuRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfoWorker(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 CurrentProcessWin32Process; // r9
  int updated; // r12d
  unsigned int v9; // r13d
  int v10; // r15d
  unsigned int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // r11d
  _QWORD *v16; // r8
  _OWORD *v17; // rax
  unsigned __int16 *v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  unsigned int PointerDeviceSettingsFull; // eax
  int v23; // ebx
  int v24; // r8d
  int v25; // ecx
  int v26; // ecx
  int *v27; // rax
  int v28; // ecx
  unsigned int v29; // ecx
  bool v30; // zf
  int v31; // ecx
  int SystemArgument1; // ecx
  int v33; // edx
  bool v34; // zf
  unsigned int v35; // eax
  __int64 DPIMetrics; // rax
  char *v37; // r8
  int v38; // ebx
  int v39; // eax
  __int64 v40; // rdx
  _DWORD *v41; // rbx
  unsigned int DpiForSystem; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 DispInfo; // rax
  _OWORD *MonitorWorkRect; // rax
  _DWORD *v52; // rdx
  int *v53; // rax
  char *v54; // rcx
  unsigned int *v55; // rcx
  int v56; // eax
  unsigned int ProfileValue; // eax
  unsigned int v58; // r13d
  int v59; // edx
  unsigned __int64 v60; // rcx
  unsigned int v61; // eax
  int v62; // edx
  int v63; // edx
  unsigned __int64 v64; // rcx
  unsigned int v65; // edi
  unsigned int v66; // edi
  unsigned int v67; // edi
  unsigned int v68; // edi
  int v69; // eax
  __int64 v70; // rdi
  unsigned int *v71; // rax
  unsigned int v72; // edi
  int v73; // ecx
  BOOL v74; // edx
  char *v75; // r8
  int v76; // ecx
  int v77; // edx
  __int64 v78; // rax
  int *v79; // rdi
  __int64 v80; // rcx
  __int64 v81; // rcx
  unsigned int *v82; // rax
  __int128 *v83; // r14
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  DesktopRecalc *Current; // r14
  __int64 v89; // rdx
  unsigned int *v90; // r9
  __int64 v91; // rax
  PDEVICE_OBJECT v92; // rcx
  _UNKNOWN **v93; // r8
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  struct CMonitorTopology *v99; // rdx
  _UNKNOWN **v100; // r8
  __int64 v101; // rcx
  struct _UNICODE_STRING *v102; // rbx
  __int64 v103; // r8
  int v104; // ecx
  unsigned int v105; // edx
  struct _UNICODE_STRING *v106; // rdi
  int v107; // ebx
  int v108; // edx
  __int64 v109; // rax
  struct tagWND *v110; // rcx
  void *v111; // rax
  unsigned int v112; // edi
  __int64 v113; // rdx
  __int64 v114; // r8
  struct _UNICODE_STRING *v115; // rax
  __int64 ProcessDpiServerInfo; // rax
  unsigned int *v117; // r14
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rcx
  unsigned __int8 v123; // al
  void *v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rdx
  int v127; // eax
  unsigned int v128; // eax
  __int64 v129; // rcx
  int UserHandedness; // eax
  __int64 v131; // rcx
  unsigned int v132; // edx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  unsigned int v136; // edi
  unsigned int v137; // eax
  __int64 v138; // rax
  struct tagWND *v139; // rcx
  __int64 v140; // rcx
  unsigned int v141; // eax
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rax
  unsigned int v145; // edi
  unsigned int v146; // eax
  struct tagMOUSEKEYS *v147; // rdi
  int v148; // r8d
  unsigned int v149; // eax
  __int64 v150; // r8
  struct _UNICODE_STRING *v151; // rbx
  unsigned int v152; // r10d
  __int64 v153; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v155; // r8d
  _UNKNOWN **v156; // r8
  int v157; // edx
  const wchar_t *v158; // r9
  const wchar_t *v159; // r9
  struct tagSOUNDSENTRYW *v160; // rdi
  int v161; // r8d
  unsigned int v162; // eax
  __int64 v163; // r8
  struct _UNICODE_STRING *v164; // rbx
  unsigned int v165; // ebx
  __int64 v166; // rax
  unsigned int i; // ebx
  unsigned int *v168; // rax
  unsigned int *v169; // rdi
  __int64 v170; // rax
  __int64 v171; // rbx
  const wchar_t *v172; // rdi
  const wchar_t *v173; // r9
  int v174; // r12d
  __int64 v175; // rdx
  __int64 v176; // rcx
  unsigned int v177; // eax
  __int64 v178; // rax
  int v179; // eax
  int v180; // ecx
  _DWORD *v181; // rcx
  InteractiveControlManager *v182; // rax
  InteractiveControlManager *v183; // rax
  __int64 v184; // rax
  __int64 v185; // rcx
  int v186; // eax
  unsigned int v187; // r8d
  __int64 v188; // rax
  __int64 v189; // rbx
  __int64 v190; // rax
  int v191; // ebx
  void *v192; // rax
  _DWORD *v193; // rax
  int v194; // [rsp+20h] [rbp-478h]
  unsigned int v195; // [rsp+90h] [rbp-408h]
  void *Src; // [rsp+98h] [rbp-400h] BYREF
  int v197; // [rsp+A0h] [rbp-3F8h] BYREF
  int v198; // [rsp+A4h] [rbp-3F4h] BYREF
  INT v199; // [rsp+A8h] [rbp-3F0h] BYREF
  unsigned int *v200; // [rsp+B0h] [rbp-3E8h] BYREF
  int v201; // [rsp+B8h] [rbp-3E0h] BYREF
  unsigned int v202; // [rsp+C0h] [rbp-3D8h] BYREF
  unsigned int v203[4]; // [rsp+C8h] [rbp-3D0h] BYREF
  __int128 v204; // [rsp+D8h] [rbp-3C0h] BYREF
  __int64 v205; // [rsp+E8h] [rbp-3B0h]
  int v206; // [rsp+F0h] [rbp-3A8h] BYREF
  int v207; // [rsp+F4h] [rbp-3A4h] BYREF
  int v208; // [rsp+F8h] [rbp-3A0h] BYREF
  int v209; // [rsp+FCh] [rbp-39Ch] BYREF
  int v210; // [rsp+100h] [rbp-398h] BYREF
  int v211; // [rsp+104h] [rbp-394h] BYREF
  int v212; // [rsp+108h] [rbp-390h] BYREF
  int v213; // [rsp+10Ch] [rbp-38Ch] BYREF
  int v214; // [rsp+110h] [rbp-388h] BYREF
  int v215; // [rsp+114h] [rbp-384h] BYREF
  __int64 v216; // [rsp+118h] [rbp-380h] BYREF
  __int128 v217; // [rsp+120h] [rbp-378h]
  __int128 v218; // [rsp+130h] [rbp-368h]
  __int128 v219; // [rsp+148h] [rbp-350h] BYREF
  __int128 v220; // [rsp+160h] [rbp-338h] BYREF
  __int128 v221; // [rsp+170h] [rbp-328h] BYREF
  struct tagRECT v222; // [rsp+180h] [rbp-318h] BYREF
  __int128 v223; // [rsp+190h] [rbp-308h]
  unsigned __int16 v224[40]; // [rsp+1A0h] [rbp-2F8h] BYREF
  _WORD v225[40]; // [rsp+1F0h] [rbp-2A8h] BYREF
  _BYTE v226[528]; // [rsp+240h] [rbp-258h] BYREF

  v203[0] = a4;
  v5 = a1;
  v195 = a1;
  v202 = a1;
  Src = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v200 = (unsigned int *)CurrentProcessWin32Process;
  updated = 0;
  v197 = 0;
  v9 = v203[0] & 1;
  v10 = (v203[0] >> 1) & 1;
  v207 = v10;
  v11 = !(v203[0] & 1);
  v198 = v11;
  v12 = v203[0] & 0x8000;
  v203[0] = v203[0] & 0x8000;
  v199 = 0;
  v204 = 0LL;
  v205 = 0LL;
  v225[0] = 0;
  if ( v5 > 0x50 )
  {
    if ( v5 > 0x52 )
    {
      if ( v5 <= 0x54 )
        goto LABEL_889;
      if ( v5 > 0x56 )
      {
        if ( v5 == 92 || v5 == 97 )
          goto LABEL_390;
        goto LABEL_11;
      }
    }
    return 1LL;
  }
  if ( v5 >= 0x4F )
  {
LABEL_889:
    *(_DWORD *)Src = 0;
    return 1LL;
  }
  if ( v5 >= 7 && (v5 <= 8 || v5 == 12 || v5 > 0x26 && (v5 <= 0x28 || v5 == 49 || v5 > 0x3D && v5 <= 0x3F)) )
    goto LABEL_390;
LABEL_11:
  v13 = gpepCSRSS;
  if ( *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS )
  {
    if ( v5 <= 0x39 )
    {
      if ( v5 != 57 )
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
            break;
          case 0xDu:
          case 0x18u:
            if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              v201 = 2;
              goto LABEL_25;
            }
            if ( a2 )
              goto LABEL_164;
            return 1LL;
          default:
            goto LABEL_22;
        }
      }
    }
    else if ( v5 > 0x60 )
    {
      if ( v5 != 99
        && v5 != 101
        && v5 != 103
        && v5 != 107
        && v5 != 109
        && v5 != 119
        && v5 != 161
        && v5 != 163
        && v5 != 4135 )
      {
        goto LABEL_22;
      }
    }
    else if ( v5 != 96 )
    {
      if ( v5 > 0x47 )
      {
        if ( v5 != 73 && (v5 <= 0x4A || v5 > 0x4D && (v5 <= 0x56 || v5 > 0x58 && (v5 <= 0x59 || v5 > 0x5B))) )
          goto LABEL_22;
      }
      else if ( v5 != 71 && v5 != 59 && v5 != 61 && v5 != 65 && v5 != 67 && v5 != 69 )
      {
LABEL_22:
        if ( (v5 & 0x3000) != 0 && (v5 & 1) != 0 )
        {
LABEL_164:
          v201 = 16;
          goto LABEL_165;
        }
        v14 = 2;
LABEL_24:
        v201 = v14;
        if ( v14 == 2 )
        {
LABEL_25:
          if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 2u) )
          {
            v81 = 5LL;
            goto LABEL_391;
          }
LABEL_26:
          v6 = 2LL;
          v15 = 10;
          v12 = v203[0];
          CurrentProcessWin32Process = (__int64)v200;
          if ( v201 != 2 )
            goto LABEL_28;
          goto LABEL_27;
        }
LABEL_165:
        if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
          return 0LL;
        goto LABEL_26;
      }
    }
    v14 = 16;
    goto LABEL_24;
  }
  v6 = 2LL;
  v15 = 10;
LABEL_27:
  v198 = 1;
  v11 = 1;
LABEL_28:
  if ( v5 > 0x1026 )
  {
    if ( v5 == 4135 )
    {
      v202 = a2 != 0;
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
      v20 = v10;
      if ( v11 )
        gbBlockSendInputResets = v202;
      goto LABEL_72;
    }
    if ( v5 != 8228 )
    {
      if ( v5 != 8229 )
        goto LABEL_76;
      a2 = 0;
      if ( (unsigned int)RIMIsDefaultUILanguageRTL(v13, 2LL, v12, CurrentProcessWin32Process) )
        LOBYTE(a2) = (_DWORD)Src == 0;
      else
        LOBYTE(a2) = (_DWORD)Src != 0;
      goto LABEL_322;
    }
    UserHandedness = GetUserHandedness(v13, 2LL, v12, CurrentProcessWin32Process);
LABEL_564:
    *(_DWORD *)Src = UserHandedness;
    goto LABEL_71;
  }
  if ( v5 == 4134 )
  {
    v34 = gbBlockSendInputResets == 0;
    goto LABEL_160;
  }
  if ( v5 <= 0x58 )
  {
    if ( v5 == 88 )
    {
      v102 = (struct _UNICODE_STRING *)CreateProfileUserName(&v204, 2LL, v12, CurrentProcessWin32Process);
      xxxUpdateSystemIconsFromRegistry(v102);
      goto LABEL_447;
    }
    if ( v5 > 0x24 )
    {
      if ( v5 > 0x40 )
      {
        if ( v5 <= 0x48 )
        {
          if ( v5 == 72 )
          {
            v52 = Src;
            if ( Src && a2 == 8 )
            {
              *(_DWORD *)Src = 8;
              v52[1] = *((_WORD *)&gdwPUDFlags + 1) & 1;
              goto LABEL_127;
            }
          }
          else
          {
            if ( v5 != 65 )
            {
              switch ( v5 )
              {
                case 'B':
                  v16 = Src;
                  *((_DWORD *)Src + 1) = gHighContrast[1];
                  v17 = (_OWORD *)v16[1];
                  v18 = gHighContrastDefaultScheme;
                  do
                  {
                    *v17 = *(_OWORD *)v18;
                    v17[1] = *((_OWORD *)v18 + 1);
                    v17[2] = *((_OWORD *)v18 + 2);
                    v17[3] = *((_OWORD *)v18 + 3);
                    v17[4] = *((_OWORD *)v18 + 4);
                    v17[5] = *((_OWORD *)v18 + 5);
                    v17[6] = *((_OWORD *)v18 + 6);
                    v17 += 8;
                    *(v17 - 1) = *((_OWORD *)v18 + 7);
                    v18 += 64;
                    --v6;
                  }
                  while ( v6 );
                  v19 = v195;
                  v20 = v10;
                  goto LABEL_41;
                case 'C':
                  updated = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)Src, v9, &v198);
                  v20 = v10;
                  v11 = v198;
                  goto LABEL_72;
                case 'D':
                  v31 = gdwPUDFlags >> 17;
                  goto LABEL_125;
                case 'E':
                  if ( v9 )
                  {
                    v159 = L"1";
                    if ( !a2 )
                      v159 = L"0";
                    updated = FastWriteProfileStringW(0LL, 27LL, L"On", v159);
                    v11 = updated;
                  }
                  if ( v11 )
                  {
                    if ( a2 )
                      gdwPUDFlags |= 0x20000u;
                    else
                      gdwPUDFlags &= ~0x20000u;
                  }
                  break;
                case 'F':
                  v31 = gdwPUDFlags >> 18;
                  goto LABEL_125;
                default:
                  if ( v9 )
                  {
                    v158 = L"1";
                    if ( !a2 )
                      v158 = L"0";
                    updated = FastWriteProfileStringW(0LL, 28LL, L"On", v158);
                    v11 = updated;
                  }
                  if ( v11 )
                  {
                    if ( a2 )
                      gdwPUDFlags |= 0x40000u;
                    else
                      gdwPUDFlags &= ~0x40000u;
                  }
                  break;
              }
              goto LABEL_71;
            }
            v160 = (struct tagSOUNDSENTRYW *)Src;
            if ( !a2 || a2 == 56 )
            {
              if ( Src )
              {
                if ( *(_DWORD *)Src == 56 )
                {
                  v161 = *((_DWORD *)Src + 1);
                  if ( (v161 & 7) == v161
                    && *((_DWORD *)Src + 8) <= 3u
                    && !*((_DWORD *)Src + 2)
                    && !*((_DWORD *)Src + 5) )
                  {
                    v162 = v161 & 0xFFFFFFFD;
                    v163 = v161 | 2u;
                    if ( (HIDWORD(gSoundSentry) & 2) == 0 )
                      v163 = v162;
                    *((_DWORD *)Src + 1) = v163;
                    if ( v9 )
                    {
                      v164 = (struct _UNICODE_STRING *)CreateProfileUserName(
                                                         &v204,
                                                         2LL,
                                                         v163,
                                                         CurrentProcessWin32Process);
                      updated = SetSoundSentry(v164, v160);
                      v11 = updated;
                      if ( !updated )
                        SetSoundSentry(v164, gSoundSentry);
                      FreeProfileUserName(v164, &v204);
                    }
                    if ( v11 )
                    {
                      memmove(gSoundSentry, v160, *(unsigned int *)v160);
                      LODWORD(gSoundSentry) = 56;
                      SetAccessEnabledFlag();
                    }
                    goto LABEL_71;
                  }
                }
              }
            }
          }
          return 0LL;
        }
        if ( v5 != 73 )
        {
          switch ( v5 )
          {
            case 'J':
              v31 = gulFontInformation >> 1;
LABEL_125:
              SystemArgument1 = v31 & 1;
LABEL_126:
              *(_DWORD *)Src = SystemArgument1;
LABEL_127:
              v20 = v10;
              goto LABEL_72;
            case 'K':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
              {
                v9 = 0;
                v11 = 0;
              }
              v165 = a2 != 0 ? 2 : 0;
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 200LL, v165);
                v11 = updated;
              }
              if ( v11 )
                GreSetFontEnumeration(v165 | 4);
              goto LABEL_71;
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
              goto LABEL_71;
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
              goto LABEL_71;
            case 'W':
              v102 = (struct _UNICODE_STRING *)CreateProfileUserName(&v204, 2LL, v12, CurrentProcessWin32Process);
              xxxUpdateSystemCursorsFromRegistry(v102, 2LL);
LABEL_447:
              v101 = (__int64)v102;
              goto LABEL_445;
          }
          goto LABEL_76;
        }
LABEL_296:
        v69 = xxxSetSPIMetrics(0LL, v5, Src, v9, &v197);
        updated = v197;
        if ( v69 )
        {
          if ( v9 )
            v11 = v197;
        }
        else
        {
          v11 = 0;
        }
        RtlLoadStringOrError(135LL, v225, 40LL, 0LL);
        goto LABEL_71;
      }
      if ( v5 == 64 )
      {
        if ( !a2 || a2 == 56 )
        {
          v54 = (char *)Src;
          if ( Src )
          {
            if ( *(_DWORD *)Src == 56 )
            {
              *(_OWORD *)((char *)Src + 4) = *(_OWORD *)((char *)&gSoundSentry + 4);
              *(_OWORD *)(v54 + 20) = *(_OWORD *)((char *)&gSoundSentry + 20);
              *(_OWORD *)(v54 + 36) = *(_OWORD *)((char *)&gSoundSentry + 36);
              *((_DWORD *)v54 + 13) = *((_DWORD *)&gSoundSentry + 13);
              goto LABEL_127;
            }
          }
        }
        return 0LL;
      }
      if ( v5 <= 0x2E )
      {
        switch ( v5 )
        {
          case '.':
            goto LABEL_296;
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
              if ( a2 == 1 )
                gdwPUDFlags |= 0x100000u;
              else
                gdwPUDFlags &= ~0x100000u;
            }
            goto LABEL_127;
          case '&':
            v31 = gdwPUDFlags >> 20;
            goto LABEL_125;
          case ')':
            if ( Src )
            {
              GetWindowNCMetrics((__int64)Src);
              goto LABEL_71;
            }
            return 0LL;
          case '*':
            goto LABEL_296;
          case '+':
            CurrentProcessWin32Process = (__int64)Src;
            *(_DWORD *)Src = 20;
            *(_DWORD *)(CurrentProcessWin32Process + 4) = *(_DWORD *)(gpsi + 2124LL) - 6;
            *(_DWORD *)(CurrentProcessWin32Process + 8) = *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
            *(_DWORD *)(CurrentProcessWin32Process + 12) = *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
            *(_DWORD *)(CurrentProcessWin32Process + 16) = *(_DWORD *)(gpsi + 2120LL);
            goto LABEL_127;
          case ',':
            goto LABEL_296;
        }
        v41 = Src;
        *(_DWORD *)Src = 108;
        DpiForSystem = GetDpiForSystem(v13, 2LL);
        v41[1] = GetDpiDependentMetric(18LL, DpiForSystem);
        v45 = GetDpiForSystem(v44, v43);
        v41[2] = GetDpiDependentMetric(19LL, v45);
        v46 = (gdwPUDFlags >> 21) & 1;
        v41[3] = v46;
        DPIMetrics = GetDPIMetrics(v46, v47, v48, v49);
        v37 = (char *)(v41 + 4);
LABEL_183:
        GreExtGetObjectW(*(HBRUSH *)(DPIMetrics + 64), 92LL, v37);
        goto LABEL_71;
      }
      if ( v5 != 47 )
      {
        switch ( v5 )
        {
          case '0':
            DispInfo = GetDispInfo(v13, 2LL, v12, CurrentProcessWin32Process);
            MonitorWorkRect = (_OWORD *)GetMonitorWorkRect((__int64)&v221, *(_QWORD *)(DispInfo + 96));
LABEL_211:
            *(_OWORD *)Src = *MonitorWorkRect;
            goto LABEL_71;
          case '6':
            if ( !a2 || a2 == 28 )
            {
              v75 = (char *)Src;
              if ( Src )
              {
                if ( *(_DWORD *)Src == 28 )
                {
                  *(_OWORD *)((char *)Src + 4) = *(_OWORD *)((char *)&gMouseKeys + 4);
                  *(struct tagMOUSEKEYS **)(v75 + 20) = *(struct tagMOUSEKEYS *const *)((char *)&gMouseKeys + 20);
                  v76 = *((_DWORD *)v75 + 1) & 0x4CFFFFFF;
                  *((_DWORD *)v75 + 1) = v76;
                  if ( gbMKMouseMode )
                  {
                    v76 |= 0x80000000;
                    *((_DWORD *)v75 + 1) = v76;
                  }
                  v77 = v76 | ((gwMKButtonState & 3) << 24);
                  *((_DWORD *)v75 + 1) = v77;
                  *((_DWORD *)v75 + 1) = v77 | ((gwMKCurrentButton & 3) << 28);
                  goto LABEL_127;
                }
              }
            }
            return 0LL;
          case '7':
            v147 = (struct tagMOUSEKEYS *)Src;
            if ( !a2 || a2 == 28 )
            {
              if ( Src )
              {
                if ( *(_DWORD *)Src == 28 )
                {
                  v148 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
                  *((_DWORD *)Src + 1) = v148;
                  if ( (unsigned __int8)v148 == v148 )
                  {
                    v149 = v148 & 0xFFFFFFFD;
                    v150 = v148 | 2u;
                    if ( (HIDWORD(gMouseKeys) & 2) == 0 )
                      v150 = v149;
                    *((_DWORD *)v147 + 1) = v150;
                    if ( (unsigned int)(*((_DWORD *)v147 + 2) - 10) <= 0x15E
                      && (unsigned int)(*((_DWORD *)v147 + 3) - 1000) <= 0xFA0 )
                    {
                      if ( v9 )
                      {
                        v151 = (struct _UNICODE_STRING *)CreateProfileUserName(
                                                           &v204,
                                                           2LL,
                                                           v150,
                                                           CurrentProcessWin32Process);
                        updated = SetMouseKeys(v151, v147);
                        v11 = updated;
                        if ( !updated )
                          SetMouseKeys(v151, gMouseKeys);
                        FreeProfileUserName(v151, &v204);
                      }
                      if ( v11 )
                      {
                        memmove(gMouseKeys, v147, *(unsigned int *)v147);
                        LODWORD(gMouseKeys) = 28;
                        CalculateMouseTable();
                        v152 = HIDWORD(gMouseKeys);
                        if ( (v152 & 1) != 0 )
                        {
                          gbMKMouseMode = ((v152 >> 7) & 1) != (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)gNumLockVk >> 2]) != 0);
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
                      }
                      goto LABEL_71;
                    }
                  }
                }
              }
            }
            return 0LL;
          case '8':
            v31 = gdwPUDFlags >> 15;
            goto LABEL_125;
          case '9':
            if ( v9 )
            {
              RtlStringCchPrintfW(v224, 0x28uLL, L"%d", a2 == 1);
              updated = FastWriteProfileStringW(0LL, 20LL, L"On", v224);
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
            goto LABEL_127;
        }
LABEL_76:
        if ( v5 >= 0xB2 )
        {
          v23 = v5 & 0x3000;
          if ( (v5 & 1) == 0 )
          {
            CurrentProcessWin32Process = 4096LL;
            if ( v23 != 4096 )
            {
              v27 = (int *)UPDWORDPointer(v5);
              v28 = *v27;
              *(_DWORD *)Src = *v27;
              if ( v5 != 8204 || v28 )
                goto LABEL_71;
              v29 = gulGamma;
              goto LABEL_91;
            }
            v24 = 0;
            v25 = 0;
            if ( v5 >= 0x103E )
              goto LABEL_80;
            if ( (int)gpdwCPUserPreferencesMask >= 0 )
            {
              if ( v5 == 4096 )
                goto LABEL_80;
              if ( v5 != 4106 )
              {
                if ( v5 == 4108 || v5 == 4124 )
                  goto LABEL_80;
                v30 = v5 == 4126;
LABEL_113:
                if ( !v30 )
                  goto LABEL_844;
                goto LABEL_80;
              }
              v24 = 1;
            }
            else
            {
              switch ( v5 )
              {
                case 0x1008u:
                  goto LABEL_184;
                case 0x100Au:
                  v24 = (gdwPUDFlags >> 17) & 1;
                  v25 = v24;
                  goto LABEL_80;
                case 0x1012u:
                case 0x1014u:
                case 0x1018u:
                case 0x101Au:
LABEL_184:
                  if ( gbDisableAlpha )
                    v25 = 1;
                  goto LABEL_80;
              }
              if ( v5 != 4132 )
              {
LABEL_80:
                if ( v25 )
                {
                  *(_DWORD *)Src = v24;
                  goto LABEL_71;
                }
                if ( v5 != 4158 || !gProtocolType || (v186 = IsWDAGContainer()) != 0 )
                {
                  v26 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v5 - 4096) >> 6));
                  *(_DWORD *)Src = _bittest(&v26, (unsigned __int8)(((v5 - 4096) >> 1) - 32 * ((v5 - 4096) >> 6)));
                  goto LABEL_71;
                }
                v29 = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) != 0;
                goto LABEL_91;
              }
              if ( !gbDisableAlpha )
              {
                v30 = gcOverlays == 0;
                goto LABEL_113;
              }
            }
LABEL_844:
            v25 = 1;
            goto LABEL_80;
          }
          v55 = (unsigned int *)CreateProfileUserName(&v204, 2LL, v12, CurrentProcessWin32Process);
          v200 = v55;
          if ( v23 != 4096 )
          {
            if ( *(_DWORD *)(UPDWORDPointer(v5) + 4) == 4 )
            {
              v188 = UPDWORDPointer(v5);
              if ( (unsigned int)CheckDesktopPolicy(v200, *(_QWORD *)(v188 + 8)) )
              {
                v9 = 0;
                v11 = 0;
              }
            }
            v20 = v10;
            if ( v9 )
            {
              if ( v195 == 8235 || v195 == 8239 )
              {
                v20 = 0;
                if ( !DesktopRecalcSettings::ValidateDesktopRecalcSetting(
                        (DesktopRecalcSettings *)v195,
                        (unsigned int)Src,
                        v187) )
                {
                  v11 = 0;
                  v9 = 0;
                }
              }
              if ( v9 )
              {
                v189 = *(_QWORD *)(UPDWORDPointer(v195) + 8);
                v190 = UPDWORDPointer(v195);
                updated = FastWriteProfileValue(v200, *(unsigned int *)(v190 + 4), v189, 4LL, &Src, 4);
                v11 = updated;
              }
            }
            v202 = *(_DWORD *)UPDWORDPointer(v195);
            if ( v11 )
            {
              v191 = (int)Src;
              *(_DWORD *)UPDWORDPointer(v195) = v191;
              switch ( v195 )
              {
                case 0x2007u:
                  *(_DWORD *)(gpsi + 7008LL) = *(_DWORD *)UPDWORDPointer(8199LL);
                  break;
                case 0x200Bu:
                  v193 = (_DWORD *)UPDWORDPointer(8203LL);
                  GreSetFontEnumeration(8 * (*v193 & 2 | 4u));
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
                  v30 = (*(_DWORD *)UPDWORDPointer(8211LL) & 1) == 0;
                  v192 = &unk_1C02E1790;
                  if ( v30 )
                    v192 = &unk_1C02F2B10;
                  off_1C03260D0 = v192;
                  break;
                case 0x201Du:
                  TraceLoggingMouseWheelRoutingModeChange((unsigned int)Src);
                  break;
                case 0x201Fu:
                  TraceLoggingSPISetPenVisualizationEvent(v202, (unsigned int)Src);
                  break;
                case 0x2029u:
                  CCursorSizes::zzzRefreshSizes(gpCursorSizes);
                  break;
              }
            }
            goto LABEL_290;
          }
          if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4 )
          {
            v56 = CheckDesktopPolicy(v55, *((_QWORD *)&gpviCPUserPreferences + 1));
            v55 = v200;
            if ( v56 )
            {
              v9 = 0;
              v11 = 0;
            }
          }
          if ( v9 )
          {
            ProfileValue = FastGetProfileValue(
                             v55,
                             *((unsigned int *)&gpviCPUserPreferences + 1),
                             *((_QWORD *)&gpviCPUserPreferences + 1),
                             0LL,
                             v203,
                             8,
                             0);
            memmove((char *)v203 + ProfileValue, (char *)&gpdwCPUserPreferencesMask + ProfileValue, 8LL - ProfileValue);
            v58 = v5 - 4096;
            v59 = 1 << (((v5 - 4096) >> 1) - 32 * ((v5 - 4096) >> 6));
            v60 = (unsigned __int64)(v5 - 4096) >> 6;
            v61 = v203[v60];
            if ( Src )
              v62 = v61 | v59;
            else
              v62 = v61 & ~v59;
            v203[v60] = v62;
            updated = FastWriteProfileValue(
                        v200,
                        *((unsigned int *)&gpviCPUserPreferences + 1),
                        *((_QWORD *)&gpviCPUserPreferences + 1),
                        3LL,
                        v203,
                        8);
            v11 = updated;
          }
          else
          {
            v58 = v5 - 4096;
          }
          if ( !v11 )
          {
LABEL_289:
            v20 = v10;
LABEL_290:
            FreeProfileUserName(v200, &v204);
            goto LABEL_72;
          }
          v63 = 1 << ((v58 >> 1) - 32 * (v58 >> 6));
          v64 = (unsigned __int64)v58 >> 6;
          if ( Src )
            *((_DWORD *)&gpdwCPUserPreferencesMask + v64) |= v63;
          else
            *((_DWORD *)&gpdwCPUserPreferencesMask + v64) &= ~v63;
          if ( v5 <= 0x1023 )
          {
            if ( v5 == 4131 )
            {
LABEL_483:
              v109 = *(_QWORD *)(gptiCurrent + 456LL);
              if ( v109 )
                v110 = *(struct tagWND **)(*(_QWORD *)(v109 + 8) + 24LL);
              else
                v110 = 0LL;
              xxxInternalInvalidate(v110, (HRGN)1, 0x10485u);
              goto LABEL_289;
            }
            v65 = v5 - 4101;
            if ( v65 )
            {
              v66 = v65 - 2;
              if ( v66 )
              {
                v67 = v66 - 2;
                if ( v67 )
                {
                  v68 = v67 - 2;
                  if ( v68 )
                  {
                    if ( v68 == 16 )
                      SetPointer(1LL);
                    goto LABEL_289;
                  }
                  v103 = gpsi;
                  v104 = *(_DWORD *)(gpsi + 7004LL);
                  v105 = ((unsigned int)gpdwCPUserPreferencesMask ^ v104) & 0x20;
                  goto LABEL_461;
                }
                goto LABEL_852;
              }
              v103 = gpsi;
              v104 = *(_DWORD *)(gpsi + 7004LL);
              v105 = ((unsigned int)gpdwCPUserPreferencesMask ^ v104) & 8;
            }
            else
            {
              v103 = gpsi;
              v104 = *(_DWORD *)(gpsi + 7004LL);
              v105 = ((unsigned int)gpdwCPUserPreferencesMask ^ v104) & 4;
            }
LABEL_461:
            *(_DWORD *)(v103 + 7004) = v104 ^ v105;
            goto LABEL_289;
          }
          if ( v5 == 4133 )
          {
            v111 = (void *)ReferenceDwmApiPort(0LL);
            DwmAsyncNotifyWindowShadowChange(v111);
            goto LABEL_289;
          }
          if ( v5 != 4159 )
          {
            if ( v5 == 4175 || v5 == 4177 )
            {
              xxxWindowEvent(0x80000007, 0LL, v5, Src != 0LL, 0);
            }
            else if ( v5 == 4179 )
            {
              NotifyISMPenButtonYieldSettingChange();
            }
            goto LABEL_289;
          }
          *(_DWORD *)(gpsi + 7004LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7004LL)) & 0x80000000;
          SetPointer(1LL);
LABEL_852:
          CreateBitmapStrip();
          goto LABEL_483;
        }
        v81 = 1439LL;
LABEL_391:
        UserSetLastError(v81, v6);
        return 0LL;
      }
      v219 = 0LL;
      if ( Src )
      {
        if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
          return 0LL;
        v82 = (unsigned int *)MonitorFromRect((struct tagRECT *)Src, 1u, 0);
      }
      else
      {
        v82 = *(unsigned int **)(GetDispInfo(v13, 2LL, v12, CurrentProcessWin32Process) + 96);
      }
      v200 = v82;
      v220 = *(_OWORD *)GetMonitorRect((__int64)v203, (__int64)v82);
      v83 = &v220;
      if ( Src )
        v83 = (__int128 *)Src;
      if ( (unsigned int)IntersectRect(&v219, (int *)v83, (int *)&v220) )
      {
        v84 = v219 - *(_QWORD *)v83;
        if ( (_QWORD)v219 == *(_QWORD *)v83 )
          v84 = *((_QWORD *)&v219 + 1) - *((_QWORD *)v83 + 1);
        if ( !v84 )
        {
          v221 = *(_OWORD *)GetMonitorWorkRect((__int64)&v222, (__int64)v200);
          v85 = v221 - v219;
          if ( (_QWORD)v221 == (_QWORD)v219 )
            v85 = *((_QWORD *)&v221 + 1) - *((_QWORD *)&v219 + 1);
          if ( v85 )
          {
            Current = (DesktopRecalc *)CTopologyManager::GetCurrent();
            if ( !Current )
              return 0LL;
            v197 = 1;
            if ( (W32GetCurrentThreadDpiAwarenessContext(v87, v86) & 0xF) != 2 )
            {
              if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
              {
                v153 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL);
                if ( (*(_DWORD *)(v153 + 64) & 1) != 0 )
                {
                  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v153, v89);
                  LogicalToPhysicalDPIRect(&v219, &v219, CurrentThreadDpiAwarenessContext, &v200);
                }
              }
            }
            v90 = v200;
            v91 = *((_QWORD *)v200 + 5);
            v217 = *(_OWORD *)(v91 + 44);
            v218 = *(_OWORD *)(v91 + 28);
            if ( (unsigned int)dword_1C032BE20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 32LL) )
            {
              v199 = a2 != 0;
              v201 = HIDWORD(v219);
              v208 = DWORD2(v219);
              v209 = DWORD1(v219);
              v210 = v219;
              v211 = HIDWORD(v217);
              v212 = DWORD2(v217);
              v213 = DWORD1(v217);
              v214 = v217;
              v215 = HIDWORD(v218);
              v206 = DWORD2(v218);
              v207 = DWORD1(v218);
              v202 = v218;
              v216 = *(_QWORD *)v90;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (unsigned int)&dword_1C032BE20,
                (unsigned int)&unk_1C02EE1BE,
                v155,
                (_DWORD)v90,
                (__int64)&v216,
                (__int64)&v202,
                (__int64)&v207,
                (__int64)&v206,
                (__int64)&v215,
                (__int64)&v214,
                (__int64)&v213,
                (__int64)&v212,
                (__int64)&v211,
                (__int64)&v210,
                (__int64)&v209,
                (__int64)&v208,
                (__int64)&v201,
                (__int64)&v199);
              v90 = v200;
            }
            *(_OWORD *)(*((_QWORD *)v90 + 5) + 44LL) = v219;
            v92 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
              || (LOBYTE(v89) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v89) = 0;
            }
            v93 = &WPP_RECORDER_INITIALIZED;
            LOBYTE(v93) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v89 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_dddddddd(
                WPP_GLOBAL_Control->AttachedDevice,
                v89,
                (_DWORD)v93,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v194,
                23,
                10,
                (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
                *(_DWORD *)(*((_QWORD *)v200 + 5) + 44LL),
                *(_DWORD *)(*((_QWORD *)v200 + 5) + 48LL),
                *(_DWORD *)(*((_QWORD *)v200 + 5) + 52LL),
                *(_DWORD *)(*((_QWORD *)v200 + 5) + 56LL),
                v219,
                SBYTE4(v219),
                SBYTE8(v219),
                SBYTE12(v219));
            CTopologyManager::UpdateCurrent(v92, v89, v93);
            v98 = GetDispInfo(v95, v94, v96, v97);
            if ( v200 == *(unsigned int **)(v98 + 96) )
              SortMonitorsInSpatialOrder();
            if ( a2 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
                || (LOBYTE(v99) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v99) = 0;
              }
              v100 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v99 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v100) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v99,
                  (_DWORD)v100,
                  CurrentProcessWin32Process,
                  4,
                  23,
                  11,
                  (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
              }
              DesktopRecalc::OnWorkAreaChanged(Current, v99);
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
                || (LOBYTE(CurrentProcessWin32Process) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(CurrentProcessWin32Process) = 0;
              }
              v156 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)CurrentProcessWin32Process
                || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v157 = 12;
                LOBYTE(v157) = CurrentProcessWin32Process;
                LOBYTE(v156) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v157,
                  (_DWORD)v156,
                  CurrentProcessWin32Process,
                  3,
                  23,
                  12,
                  (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
              }
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)Current, 0xFFFFFFFF) == 1 )
              Win32FreePool(Current);
            updated = v197;
          }
          goto LABEL_434;
        }
      }
LABEL_390:
      v81 = 87LL;
      goto LABEL_391;
    }
    if ( v5 == 36 )
      goto LABEL_127;
    if ( v5 > 0x15 )
    {
      if ( v5 <= 0x1D )
      {
        if ( v5 == 29 )
        {
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 97LL, a2);
            v11 = updated;
          }
          if ( v11 )
            *(_DWORD *)(gpsi + 2040LL) = a2;
          goto LABEL_71;
        }
        if ( v5 == 22 )
        {
          SystemArgument1 = (gnKeyboardSpeed >> 5) & 3;
          goto LABEL_126;
        }
        if ( v5 != 23 )
        {
          if ( v5 != 24 )
          {
            switch ( v5 )
            {
              case 0x19u:
                v31 = gdwPUDFlags >> 21;
                goto LABEL_125;
              case 0x1Au:
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
                goto LABEL_71;
              case 0x1Bu:
                v33 = *(_DWORD *)(gpsi + 2056LL);
                goto LABEL_142;
            }
LABEL_322:
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
              v11 = updated;
            }
            if ( v11 )
            {
              v73 = *(_DWORD *)(gpsi + 2056LL);
              v74 = a2 != 0;
              *(_DWORD *)(gpsi + 2056LL) = v74;
              TraceLoggingSPISetMenuDropAlignmentEvent(v73, v74);
            }
            goto LABEL_71;
          }
          if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
          {
            if ( a2 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v13, 2LL) & 0xF) != 0 )
              {
                v142 = PsGetCurrentProcessWin32Process(v140);
                v199 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v142 + 284));
                v144 = PsGetCurrentProcessWin32Process(v143);
                a2 = EngMulDiv(v199, 96, *(unsigned __int16 *)(v144 + 284));
                v141 = v199;
              }
              else
              {
                v141 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
              }
              v145 = *(_DWORD *)(gpsi + 2308LL);
              if ( v141 > v145 )
                v145 = v141;
              v146 = *(_DWORD *)(gpsi + 2428LL);
              if ( a2 > v146 )
                v146 = a2;
              v199 = v146;
              if ( v9 )
              {
                updated = SetWindowMetricInt(0LL, 0x41u, v145);
                v11 = updated;
              }
              if ( v11 )
              {
                SetDpiDepSysMet(19LL, v145);
                *(_DWORD *)(gpsi + 2480LL) = v199;
              }
            }
            goto LABEL_71;
          }
          v128 = GetDpiForSystem(v13, 2LL);
          v129 = 19LL;
          goto LABEL_562;
        }
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
          v11 = updated;
        }
        if ( !v11 )
          goto LABEL_71;
        gnKeyboardSpeed = gnKeyboardSpeed & 0xFFFFFF9F | (32 * a2);
LABEL_304:
        SetKeyboardRate(v13, v6, v12, CurrentProcessWin32Process);
        goto LABEL_71;
      }
      switch ( v5 )
      {
        case 0x1Eu:
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
            v11 = updated;
          }
          if ( v11 )
            *(_DWORD *)(gpsi + 2044LL) = a2;
          goto LABEL_71;
        case 0x1Fu:
          DPIMetrics = GetDPIMetrics(v13, 2LL, v12, CurrentProcessWin32Process);
          v37 = (char *)Src;
          goto LABEL_183;
        case 0x20u:
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
            v11 = updated;
          }
          if ( v11 )
            SetDoubleClickTime(a2, v6, v12, CurrentProcessWin32Process);
          goto LABEL_71;
        case 0x21u:
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
            v11 = updated;
          }
          if ( v11 )
            _SwapMouseButton(a2 != 0);
          goto LABEL_71;
      }
      if ( v5 != 34 )
      {
        *(_DWORD *)Src = 1;
        goto LABEL_127;
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
      v106 = (struct _UNICODE_STRING *)CreateProfileUserName(&v204, 2LL, v12, CurrentProcessWin32Process);
      v107 = xxxSetSPIMetrics(v106, 0x22u, Src, v9, &v197);
      FreeProfileUserName(v106, &v204);
      updated = v197;
      if ( v107 )
      {
        if ( v9 )
          v11 = v197;
        goto LABEL_71;
      }
LABEL_610:
      v11 = 0;
      goto LABEL_71;
    }
    if ( v5 == 21 )
    {
      v200 = (unsigned int *)Src;
      if ( a2 == -1 && Src )
        goto LABEL_390;
      v70 = CreateProfileUserName(&v204, 2LL, v12, CurrentProcessWin32Process);
      if ( (unsigned int)CheckDesktopPolicy(v70, 2LL) )
      {
        v9 = 0;
        v11 = 0;
      }
      v71 = v200;
      if ( v9 && v200 )
      {
        FastGetProfileStringFromIDW(v70, 4LL, 2LL, &word_1C02E3794, v226, 260, 0);
        updated = FastUpdateWinIni(v70, 4LL, 2LL, v200);
        v11 = updated;
        v71 = v200;
      }
      if ( v11 )
      {
        if ( !(unsigned int)SetDesktopPattern(v70, v71) )
        {
          if ( v9 && v200 )
            FastUpdateWinIni(v70, 4LL, 2LL, v226);
          FreeProfileUserName(v70, &v204);
          return 0LL;
        }
        xxxSendNotifyMessage(-1LL, 21LL, 0LL, 0LL, 1);
        v138 = *(_QWORD *)(gptiCurrent + 456LL);
        if ( v138 )
          v139 = *(struct tagWND **)(*(_QWORD *)(v138 + 8) + 24LL);
        else
          v139 = 0LL;
        xxxInternalInvalidate(v139, (HRGN)1, 0x10485u);
      }
      goto LABEL_444;
    }
    if ( v5 > 0xB )
    {
      switch ( v5 )
      {
        case 0xDu:
          if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
          {
            if ( a2 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v13, 2LL) & 0xF) != 0 )
              {
                v133 = PsGetCurrentProcessWin32Process(v131);
                v199 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v133 + 284));
                v135 = PsGetCurrentProcessWin32Process(v134);
                a2 = EngMulDiv(v199, 96, *(unsigned __int16 *)(v135 + 284));
                v132 = v199;
              }
              else
              {
                v132 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
              }
              v136 = *(_DWORD *)(gpsi + 2304LL);
              if ( v132 > v136 )
                v136 = v132;
              v137 = *(_DWORD *)(gpsi + 2424LL);
              if ( a2 > v137 )
                v137 = a2;
              v199 = v137;
              if ( v9 )
              {
                updated = SetWindowMetricInt(0LL, 0x40u, v136);
                v11 = updated;
              }
              if ( v11 )
              {
                SetDpiDepSysMet(18LL, v136);
                *(_DWORD *)(gpsi + 2476LL) = v199;
              }
            }
            goto LABEL_71;
          }
          v128 = GetDpiForSystem(v13, 2LL);
          v129 = 18LL;
LABEL_562:
          UserHandedness = GetDpiDependentMetric(v129, v128);
          goto LABEL_564;
        case 0xEu:
          v33 = (int)abs32(giScreenSaveTimeOutMs) / 1000;
          goto LABEL_142;
        case 0xFu:
          if ( gfSwitchInProgress )
            return 0LL;
          if ( gdwRITdaemonLockState && !(_DWORD)v12 )
            goto LABEL_834;
          v38 = 1000 * a2;
          v39 = 1000 * GetEasTimeout(v13, 2LL, v12, CurrentProcessWin32Process);
          v201 = v39;
          if ( v39 )
          {
            if ( (v199 = 1, giScreenSaveTimeOutMs > 0) && v39 < v38 || v38 <= 0 )
            {
              UserSetLastError(1260LL, v40);
              v9 = 0;
              v11 = 0;
              v198 = 0;
            }
          }
          if ( (unsigned int)CheckDesktopPolicy(0LL, 99LL) )
          {
            if ( v199 )
            {
              v203[0] = 0;
              if ( !(unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
                goto LABEL_196;
              v127 = 1000 * v203[0];
              v203[0] = v127;
              if ( !v127 || v127 >= v201 || giScreenSaveTimeOutMs <= 0 || v127 >= v38 )
                goto LABEL_196;
              UserSetLastError(1260LL, v126);
            }
            v198 = 0;
            v11 = 0;
            v9 = 0;
          }
LABEL_196:
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 99LL, v38 / 0x3E8u);
            v197 = updated;
            v11 = updated;
            v198 = updated;
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
              updated = v197;
              v11 = v198;
            }
            if ( giScreenSaveTimeOutMs < 0 && !v199 )
              v38 = -v38;
            giScreenSaveTimeOutMs = v38;
          }
          goto LABEL_71;
        case 0x10u:
          SystemArgument1 = giScreenSaveTimeOutMs > 0;
          goto LABEL_126;
        case 0x11u:
          if ( a2 - 2 <= 0xFFFFFFFC )
            return 0LL;
          if ( !gdwRITdaemonLockState || (_DWORD)v12 )
          {
            gbLockConsoleActive = a2 == -1;
            if ( gfSwitchInProgress )
              return 0LL;
            if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
            {
              v9 = 0;
              v11 = 0;
              v198 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
              v197 = updated;
              v11 = updated;
              v198 = updated;
            }
            if ( !v11 )
              goto LABEL_71;
            if ( !gbBlockSendInputResets )
            {
              CInputGlobals::UpdateLastInputTime(
                gpInputGlobals,
                (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                7LL);
              updated = v197;
              v11 = v198;
            }
            if ( giScreenSaveTimeOutMs < 0 )
            {
              if ( a2 )
                goto LABEL_264;
              if ( giScreenSaveTimeOutMs < 0 )
                goto LABEL_71;
            }
            if ( a2 )
              goto LABEL_71;
LABEL_264:
            giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
            goto LABEL_71;
          }
LABEL_834:
          v81 = 329LL;
          goto LABEL_391;
      }
      if ( v5 != 20 )
        goto LABEL_76;
      v70 = CreateProfileUserName(&v204, 2LL, v12, CurrentProcessWin32Process);
      if ( (unsigned int)CheckDesktopPolicy(v70, 67LL) )
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
          FastGetProfileStringFromIDW(v70, 4LL, 67LL, &word_1C02E3794, v226, 260, 8);
          updated = FastUpdateWinIni(v70, 4LL, 67LL, Src);
          v11 = updated;
        }
      }
      if ( v11 )
      {
        if ( (unsigned int)xxxSetDeskWallpaper(v70, Src) )
        {
          xxxInvalidateWallpaperWindow();
        }
        else
        {
          if ( v9 )
          {
            if ( a2 == -1 )
              goto LABEL_444;
            FastUpdateWinIni(v70, 4LL, 67LL, v226);
          }
          v11 = 0;
          updated = 0;
        }
      }
LABEL_444:
      v101 = v70;
LABEL_445:
      FreeProfileUserName(v101, &v204);
      goto LABEL_71;
    }
    switch ( v5 )
    {
      case 0xBu:
        v72 = 31;
        if ( a2 <= 0x1F )
          v72 = a2;
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 13LL, 13LL, v72);
          v11 = updated;
        }
        if ( !v11 )
          goto LABEL_71;
        gnKeyboardSpeed = v72 | gnKeyboardSpeed & 0xFFFFFFE0;
        goto LABEL_304;
      case 1u:
        v31 = gdwPUDFlags >> 19;
        goto LABEL_125;
      case 2u:
        if ( v9 )
        {
          RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), v224, 10LL, 0LL);
          updated = FastUpdateWinIni(0LL, 11LL, 9LL, v224);
          v11 = updated;
        }
        if ( v11 )
        {
          if ( a2 )
            gdwPUDFlags |= 0x80000u;
          else
            gdwPUDFlags &= ~0x80000u;
        }
        goto LABEL_71;
      case 3u:
        *(_DWORD *)Src = gMouseThresh1;
        v125 = (unsigned int)gMouseThresh2;
        *((_DWORD *)Src + 1) = gMouseThresh2;
        *((_DWORD *)Src + 2) = (unsigned __int8)MouseAccelerationEnabled(v125, 2LL, v12, CurrentProcessWin32Process);
        goto LABEL_71;
    }
    if ( v5 != 4 )
    {
      if ( v5 == 5 )
      {
        v29 = *(_DWORD *)(GetDPIServerInfo(v13, 2LL, v12, CurrentProcessWin32Process) + 4);
        goto LABEL_91;
      }
      if ( v5 != 6 )
      {
        if ( v5 == 10 )
        {
          SystemArgument1 = gnKeyboardSpeed & 0x1F;
          goto LABEL_126;
        }
        goto LABEL_76;
      }
      v112 = 1;
      if ( (int)a2 > 1 )
        v112 = a2;
      if ( v112 >= 0x32 )
        v112 = 50;
      if ( v112 != (__int64)*(int *)(GetDPIServerInfo(v13, 2LL, v12, CurrentProcessWin32Process) + 4) )
      {
        v115 = (struct _UNICODE_STRING *)CreateProfileUserName(&v204, v113, v114, CurrentProcessWin32Process);
        v102 = v115;
        if ( v9 )
        {
          updated = SetWindowMetricInt(v115, 0x88u, v112);
          v11 = updated;
        }
        if ( v11 )
        {
          xxxSetAndDrawNCMetrics(v102, v112, 0LL);
          ProcessDpiServerInfo = GetProcessDpiServerInfo();
          bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), (unsigned int)(*(_DWORD *)(ProcessDpiServerInfo + 4) + 3));
        }
        goto LABEL_447;
      }
LABEL_434:
      v11 = 1;
      goto LABEL_127;
    }
    if ( !v9 )
    {
LABEL_524:
      if ( v11 )
      {
        v124 = Src;
        gMouseThresh1 = *(_DWORD *)Src;
        gMouseThresh2 = *((_DWORD *)Src + 1);
        LOBYTE(v124) = *((_DWORD *)Src + 2) != 0;
        EnableMouseAcceleration(v124, v6, v12, CurrentProcessWin32Process);
      }
      goto LABEL_71;
    }
    v117 = (unsigned int *)CreateProfileUserName(&v204, 2LL, v12, CurrentProcessWin32Process);
    v200 = v117;
    v203[0] = UpdateWinIniInt(v117, 12LL, 10LL, *(unsigned int *)Src);
    v199 = UpdateWinIniInt(v117, 12LL, 11LL, *((unsigned int *)Src + 1));
    v118 = UpdateWinIniInt(v117, 12LL, 12LL, *((unsigned int *)Src + 2));
    v201 = v118;
    v122 = v203[0];
    if ( v203[0] )
    {
      if ( v199 && v118 )
      {
        updated = 1;
LABEL_523:
        v11 = updated;
        FreeProfileUserName(v200, &v204);
        goto LABEL_524;
      }
      UpdateWinIniInt(v117, 12LL, 10LL, (unsigned int)gMouseThresh1);
    }
    if ( v199 )
      UpdateWinIniInt(v117, 12LL, 11LL, (unsigned int)gMouseThresh2);
    if ( v201 )
    {
      v123 = MouseAccelerationEnabled(v122, v119, v120, v121);
      UpdateWinIniInt(v117, 12LL, 12LL, v123);
    }
    goto LABEL_523;
  }
  if ( v5 <= 0x7A )
  {
    if ( v5 == 122 )
    {
      SystemArgument1 = gdwWaitToKillTimeout;
      goto LABEL_126;
    }
    if ( v5 <= 0x6B )
    {
      if ( v5 == 107 )
      {
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
        if ( v11 )
          gdtMNDropDown = a2;
        goto LABEL_71;
      }
      if ( v5 > 0x62 )
      {
        switch ( v5 )
        {
          case 'c':
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 91LL, a2);
              v11 = updated;
            }
            if ( v11 )
              gcxMouseHover = a2;
            goto LABEL_71;
          case 'd':
            SystemArgument1 = gcyMouseHover;
            goto LABEL_126;
          case 'e':
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
              v11 = updated;
            }
            if ( v11 )
              gcyMouseHover = a2;
            goto LABEL_71;
          case 'f':
            SystemArgument1 = (int)WPP_MAIN_CB.Dpc.SystemArgument1;
            goto LABEL_126;
          case 'g':
            if ( a2 >= 0xA )
              v15 = a2;
            if ( v15 > 0x7FFFFFFF )
              v15 = 0x7FFFFFFF;
            v202 = v15;
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 93LL, v15);
              v11 = updated;
              v15 = v202;
            }
            if ( v11 )
              LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = v15;
            goto LABEL_71;
          case 'j':
            SystemArgument1 = gdtMNDropDown;
            goto LABEL_126;
        }
        goto LABEL_76;
      }
      switch ( v5 )
      {
        case 'b':
          SystemArgument1 = gcxMouseHover;
          goto LABEL_126;
        case 'Y':
          if ( gspklBaseLayout )
          {
            *(_QWORD *)Src = *(_QWORD *)(gspklBaseLayout + 40LL);
            goto LABEL_127;
          }
          v81 = 21LL;
          goto LABEL_391;
        case 'Z':
          v166 = HKLtoPKL(gptiCurrent, *(_QWORD *)Src, v12, CurrentProcessWin32Process);
          if ( v166 )
          {
            if ( v11 )
            {
              *(_QWORD *)&v220 = gspklBaseLayout;
              *((_QWORD *)&v220 + 1) = v166;
              v221 = v220;
              HMAssignmentLock(&v221, 0LL);
            }
            goto LABEL_71;
          }
          return 0LL;
        case '[':
          return GetKbdLangSwitch(0LL, 2LL, v12, CurrentProcessWin32Process);
        case ']':
          if ( v9 )
          {
            RtlStringCchPrintfW(v224, 0x28uLL, L"%d", a2);
            updated = FastUpdateWinIni(0LL, 12LL, 613LL, v224);
            v11 = updated;
          }
          if ( v11 )
            SetMouseTrails(a2, v6, v12, CurrentProcessWin32Process);
          goto LABEL_71;
        case '^':
          SystemArgument1 = LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) + 1;
          if ( !LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
            SystemArgument1 = 0;
          goto LABEL_126;
      }
      if ( v5 != 95 )
      {
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 12LL, 7LL, a2 != 0);
          v11 = updated;
        }
        if ( v11 )
        {
          if ( a2 )
            *(_DWORD *)(gpsi + 7004LL) |= 2u;
          else
            *(_DWORD *)(gpsi + 7004LL) &= ~2u;
        }
        goto LABEL_71;
      }
      v108 = *(_DWORD *)(gpsi + 7004LL) >> 1;
    }
    else
    {
      if ( v5 <= 0x73 )
      {
        switch ( v5 )
        {
          case 's':
            if ( g_pWallpaperSettings )
            {
              RtlStringCchCopyW((char *)Src, 260LL, (char *)(g_pWallpaperSettings + 4LL));
              goto LABEL_71;
            }
            v102 = (struct _UNICODE_STRING *)CreateProfileUserName(&v204, 2LL, 0LL, CurrentProcessWin32Process);
            LoadWallpaperFilenameFromRegistry(v102, Src, 260LL);
            goto LABEL_447;
          case 'l':
            v33 = *(_DWORD *)(gpsi + 4992LL);
LABEL_142:
            *(_DWORD *)Src = v33;
            goto LABEL_127;
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
            goto LABEL_71;
          case 'n':
            v34 = HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) == 0;
            break;
          case 'o':
            v11 = xxxSetIMEShowStatus(a2 != 0, v9, &v197);
            v20 = v10;
            updated = v197;
            goto LABEL_72;
          case 'p':
            UserHandedness = GetMouseSensitivity(0LL, 2LL, v12, CurrentProcessWin32Process);
            goto LABEL_564;
          case 'q':
            if ( (unsigned __int8)IsValidMouseSensitivity((unsigned int)Src, 2LL, v12, CurrentProcessWin32Process) )
            {
              if ( v9 )
              {
                RtlStringCchPrintfW(v224, 0x28uLL, L"%d", Src);
                updated = FastUpdateWinIni(0LL, 12LL, 608LL, v224);
                v11 = updated;
              }
              if ( v11 )
              {
                UpdateMouseSensitivity((unsigned int)Src);
                for ( i = 0; i < 2; ++i )
                  ResetAccelerationCurves(i);
              }
              goto LABEL_71;
            }
            return 0LL;
          default:
            v34 = gppiScreenSaver == 0LL;
            break;
        }
LABEL_160:
        SystemArgument1 = !v34;
        goto LABEL_126;
      }
      if ( v5 == 116 )
      {
        if ( (!a2 || a2 == 12) && Src && *(_DWORD *)Src == 12 )
        {
          *(void **)((char *)Src + 4) = *(void *const *)((char *)&gAudioDescription + 4);
          goto LABEL_127;
        }
        return 0LL;
      }
      if ( v5 == 117 )
      {
        v169 = (unsigned int *)Src;
        v200 = (unsigned int *)Src;
        if ( (!a2 || a2 == 12) && Src && *(_DWORD *)Src == 12 )
        {
          if ( v9 )
          {
            v170 = CreateProfileUserName(&v204, 2LL, v12, CurrentProcessWin32Process);
            v171 = v170;
            v172 = L"1";
            v173 = L"1";
            if ( !*((_DWORD *)Src + 1) )
              v173 = L"0";
            v174 = FastWriteProfileStringW(v170, 48LL, L"On", v173);
            RtlStringCchPrintfW(v224, 0x28uLL, L"%d", v200[2]);
            updated = FastWriteProfileStringW(v171, 48LL, L"Locale", v224) & v174;
            v11 = updated;
            if ( !updated )
            {
              if ( !HIDWORD(gAudioDescription) )
                v172 = L"0";
              FastWriteProfileStringW(v171, 48LL, L"On", v172);
              RtlStringCchPrintfW(v224, 0x28uLL, L"%d", *((unsigned int *)&gAudioDescription + 2));
              FastWriteProfileStringW(v171, 48LL, L"Locale", v224);
            }
            FreeProfileUserName(v171, &v204);
            v169 = v200;
          }
          if ( v11 )
          {
            memmove(gAudioDescription, v169, *v169);
            LODWORD(gAudioDescription) = 12;
          }
          goto LABEL_71;
        }
        return 0LL;
      }
      if ( v5 != 118 )
      {
        if ( v5 == 119 )
        {
          if ( !gdwRITdaemonLockState || (_DWORD)v12 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
            {
              v9 = 0;
              v11 = 0;
              v198 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 618LL, a2 != 0);
              v197 = updated;
              v11 = updated;
              v198 = updated;
            }
            if ( v11 )
            {
              if ( a2 )
                _InterlockedOr(gpsi, 0x200u);
              else
                _InterlockedAnd(gpsi, 0xFFFFFDFF);
              v11 = v198;
              updated = v197;
            }
            goto LABEL_71;
          }
          goto LABEL_834;
        }
        if ( v5 != 120 )
        {
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
            goto LABEL_71;
          v168 = (unsigned int *)gdwHungAppTimeout;
          goto LABEL_764;
        }
        v53 = (int *)gdwHungAppTimeout;
LABEL_240:
        SystemArgument1 = *v53;
        goto LABEL_126;
      }
      v108 = *gpsi >> 9;
    }
    v33 = v108 & 1;
    goto LABEL_142;
  }
  if ( v5 <= 0x9E )
  {
    if ( v5 != 158 )
    {
      if ( v5 > 0x97 )
      {
        if ( v5 != 152 && (v5 == 153 || v5 != 154 && v5 != 156) )
          goto LABEL_809;
LABEL_69:
        PointerDeviceSettingsFull = ReadPointerDeviceSettingsFull(v5, Src, v12, CurrentProcessWin32Process);
        goto LABEL_70;
      }
      if ( v5 == 151 )
        goto LABEL_809;
      if ( v5 != 124 )
      {
        if ( v5 == 123 )
        {
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
          if ( v11 )
            gdwWaitToKillTimeout = a2;
          goto LABEL_71;
        }
        if ( v5 != 125 )
        {
          if ( v5 <= 0x91 )
          {
            LOBYTE(CurrentProcessWin32Process) = v9;
            v35 = WindowArrangementSPI::ArrangementParameterInfo(v5, a2, Src, CurrentProcessWin32Process, v11 != 0);
            updated = v35 & 1;
            v11 = (v35 >> 1) & 1;
            goto LABEL_127;
          }
          if ( v5 != 148 && v5 != 150 )
          {
            if ( v5 != 149 )
              goto LABEL_76;
LABEL_809:
            updated = WritePointerDeviceSettingsFull(v5, Src, v9, CurrentProcessWin32Process);
            goto LABEL_71;
          }
          goto LABEL_69;
        }
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
          goto LABEL_71;
        v168 = (unsigned int *)gdwWaitToKillServiceTimeout;
LABEL_764:
        *v168 = a2;
        goto LABEL_71;
      }
      v53 = (int *)gdwWaitToKillServiceTimeout;
      goto LABEL_240;
    }
LABEL_825:
    v222 = 0LL;
    v223 = 0LL;
    if ( (int)DrvDisplayConfigGetScaleFactorOverrides(&v222, 1LL, v12, CurrentProcessWin32Process) < 0 )
      return 0LL;
    if ( a2 != 158 )
    {
      v181 = Src;
      *(_QWORD *)Src = *(_QWORD *)((char *)&v223 + 4);
      v181[2] = HIDWORD(v223);
      goto LABEL_71;
    }
    v29 = DWORD2(v223);
LABEL_91:
    *(_DWORD *)Src = v29;
    goto LABEL_71;
  }
  if ( v5 > 0xA7 )
  {
    if ( v5 == 168 )
    {
      SystemArgument1 = gbLockScreenAutoLockActive;
      goto LABEL_126;
    }
    if ( v5 == 169 )
    {
      if ( gfSwitchInProgress )
        return 0LL;
      if ( gdwRITdaemonLockState && !(_DWORD)v12 )
        goto LABEL_834;
      gbLockScreenAutoLockActive = a2 != 0;
      if ( !v9 )
        goto LABEL_71;
      PointerDeviceSettingsFull = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
      updated = PointerDeviceSettingsFull;
LABEL_70:
      v11 = PointerDeviceSettingsFull;
      goto LABEL_71;
    }
    if ( v5 != 170 )
    {
      switch ( v5 )
      {
        case 0xABu:
          if ( *(_DWORD *)(CurrentProcessWin32Process + 56) == gpidLogonUI )
          {
            gbLockScreenActive = a2 != 0;
            if ( gbLockScreenActive )
            {
              if ( !gptiForeground
                || (v184 = *(_QWORD *)(gptiForeground + 432LL)) == 0
                || (v185 = *(_QWORD *)(v184 + 120)) == 0
                || (unsigned int)IsWindowUnderActiveLockScreen(v185) )
              {
                xxxSetForegroundWindow2(0LL, 0LL, 0);
              }
              ClearKeyboardStates();
            }
            GreLddmProcessLockScreen(gbLockScreenActive, v6, v12);
            goto LABEL_71;
          }
          return 0LL;
        case 0xACu:
          v183 = InteractiveControlManager::Instance();
          v11 = (int)InteractiveControlManager::GetExternalParameters(v183, (struct tagINTERACTIVECTRL_PARAMETERS *)Src) >= 0;
          goto LABEL_71;
        case 0xADu:
          v182 = InteractiveControlManager::Instance();
          LOBYTE(updated) = (int)InteractiveControlManager::SetExternalParameters(
                                   v182,
                                   (struct tagINTERACTIVECTRL_PARAMETERS *)Src,
                                   v9) >= 0;
          goto LABEL_71;
      }
      goto LABEL_76;
    }
    v53 = (int *)gbLockScreenActive;
    goto LABEL_240;
  }
  switch ( v5 )
  {
    case 0xA7u:
      goto LABEL_825;
    case 0x9Fu:
LABEL_243:
      if ( a2 + 11 > 0x16 )
        return 0LL;
      if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
      {
        v9 = 0;
        v11 = 0;
      }
      if ( !v9 )
        goto LABEL_71;
      v222 = 0LL;
      LODWORD(v223) = 0;
      DWORD1(v223) = a2;
      v203[0] = a2 != 159;
      v179 = DrvDisplayConfigSetScaleFactorOverride(&v222, v203);
      if ( v179 >= 0 )
      {
        if ( a2 == 159 )
          TraceLoggingSPISetModernDPIOverrideEvent(v180, 159);
        else
          TraceLoggingSPISetDesktopDPIOverrideEvent(v180, a2);
        v11 = 1;
        goto LABEL_71;
      }
      goto LABEL_610;
    case 0xA0u:
      *(_DWORD *)Src = 6;
      goto LABEL_127;
    case 0xA1u:
      goto LABEL_434;
    case 0xA2u:
      v178 = GetDispInfo(v13, 2LL, v12, CurrentProcessWin32Process);
      MonitorWorkRect = (_OWORD *)GetMonitorMenuRect(&v222, *(struct tagMONITOR **)(v178 + 96));
      goto LABEL_211;
  }
  if ( v5 != 163 )
  {
    if ( v5 == 165 )
      goto LABEL_825;
    if ( v5 != 166 )
      goto LABEL_76;
    goto LABEL_243;
  }
  v220 = 0LL;
  if ( Src )
  {
    if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
      return 0LL;
    v78 = MonitorFromRect((struct tagRECT *)Src, 1u, 0);
  }
  else
  {
    v78 = *(_QWORD *)(GetDispInfo(v13, 2LL, v12, CurrentProcessWin32Process) + 96);
  }
  *(_QWORD *)v203 = v78;
  v221 = *(_OWORD *)GetMonitorRect((__int64)&v222, v78);
  v79 = (int *)&v221;
  if ( Src )
    v79 = (int *)Src;
  if ( !(unsigned int)IntersectRect(&v220, v79, (int *)&v221) )
    goto LABEL_390;
  v80 = v220 - *(_QWORD *)v79;
  if ( (_QWORD)v220 == *(_QWORD *)v79 )
    v80 = *((_QWORD *)&v220 + 1) - *((_QWORD *)v79 + 1);
  if ( v80 )
    goto LABEL_390;
  if ( (W32GetCurrentThreadDpiAwarenessContext(0LL, v6) & 0xF) != 2 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
    {
      v176 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL);
      if ( (*(_DWORD *)(v176 + 64) & 1) != 0 )
      {
        v177 = W32GetCurrentThreadDpiAwarenessContext(v176, v175);
        LogicalToPhysicalDPIRect(*(_QWORD *)v203 + 112LL, &v220, v177, v203);
        updated = v197;
        v11 = v198;
        goto LABEL_71;
      }
    }
    updated = v197;
    v11 = v198;
  }
  *(_OWORD *)(*(_QWORD *)v203 + 112LL) = v220;
LABEL_71:
  v20 = v10;
LABEL_72:
  v19 = v195;
LABEL_41:
  if ( updated )
  {
    if ( v20 )
      EditionxxxBroadcastSPIChange(v19, v225, 1LL, CurrentProcessWin32Process);
  }
  return v11;
}
