/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C01280D0
 * Callers:
 *     NtUserRealInternalGetMessage @ 0x1C00050A0 (NtUserRealInternalGetMessage.c)
 *     xxxInternalGetMessage @ 0x1C006A4F0 (xxxInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C01266B0 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C0127F20 (NtUserPeekMessage.c)
 * Callees:
 *     IsShellFrameHangResilient @ 0x1C0006E08 (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006E7C (IsAdaptiveQueueDetachExempted.c)
 *     FreeHidData @ 0x1C000E960 (FreeHidData.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00156F0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0015734 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     _IsChild @ 0x1C0016C4C (_IsChild.c)
 *     HMValidateHandleNoRip @ 0x1C00244B4 (HMValidateHandleNoRip.c)
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0040AE0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 *     PhkFirstGlobalValid @ 0x1C0071C04 (PhkFirstGlobalValid.c)
 *     xxxDoPaint @ 0x1C008BD2C (xxxDoPaint.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C008C400 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C008C668 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C00E5F30 (zzzCalcStartCursorHide.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C01158D4 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C011E130 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C011F1F0 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x1C011F540 (WPP_RECORDER_AND_TRACE_SF_qqdd.c)
 *     fnHkINLPMSG @ 0x1C0124E30 (fnHkINLPMSG.c)
 *     xxxSleepThread2 @ 0x1C0125E60 (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0125FC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C01267C0 (xxxReceiveMessage.c)
 *     ?xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z @ 0x1C01270D4 (-xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z.c)
 *     CalcWakeMask @ 0x1C012A4C0 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C012A770 (-HandleProcessSpinning@@YAHXZ.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C012A800 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C012A920 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C012B230 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C012B370 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage @ 0x1C0139694 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage.c)
 *     Feature_AlwaysWakeTargetThread_2__private_IsEnabledDeviceUsage @ 0x1C013A08C (Feature_AlwaysWakeTargetThread_2__private_IsEnabledDeviceUsage.c)
 *     Feature_LParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage @ 0x1C013A134 (Feature_LParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage.c)
 *     Feature_MTestAbSh1__private_IsEnabledDeviceUsage @ 0x1C013A188 (Feature_MTestAbSh1__private_IsEnabledDeviceUsage.c)
 *     Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage @ 0x1C013A1DC (Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C013AE70 (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     xxxDoSysExpungeIfNeeded @ 0x1C013D81C (xxxDoSysExpungeIfNeeded.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0150B38 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C0150E7A (IsMiPEnabledForWindow.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C01532FE (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     xxxClientCallDefWindowProc @ 0x1C01568E4 (xxxClientCallDefWindowProc.c)
 *     xxxClientCallDelegateThread @ 0x1C01569FE (xxxClientCallDelegateThread.c)
 *     _FreeTouchInputInfo @ 0x1C01B0580 (_FreeTouchInputInfo.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01B4FC0 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CallShellHandwritingDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01B50D8 (-CallShellHandwritingDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B5C70 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01B5FD8 (-UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01B6350 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     SlowAppThreadInShellFrame @ 0x1C01B6A9C (SlowAppThreadInShellFrame.c)
 *     TryDetachShellFrame @ 0x1C01B6D5C (TryDetachShellFrame.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01C5ACC (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01C60DC (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01C6364 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01F7D8C (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z @ 0x1C01F7F3C (-MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F8818 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C020276C (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeGestureInfo @ 0x1C0204B90 (_FreeGestureInfo.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C0211388 (xxxClientCallDefaultInputHandler.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRealInternalGetMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  struct tagWND *v9; // rsi
  int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r11d
  unsigned int v15; // r13d
  struct tagWND *v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _UNKNOWN **v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rsi
  _QWORD *v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  _QWORD *v31; // rdi
  __int64 v32; // rsi
  int v33; // ecx
  int v34; // ebx
  unsigned int v35; // eax
  unsigned int v36; // r12d
  int v37; // r15d
  int v38; // r13d
  unsigned int v39; // r14d
  __int64 v40; // rcx
  __int64 v41; // rcx
  struct tagWND *k; // rcx
  char v43; // bl
  unsigned __int64 i; // rax
  PERESOURCE *v45; // rax
  _QWORD **ThreadWin32Thread; // rax
  int v47; // ebx
  int v48; // esi
  int v49; // eax
  unsigned int v50; // r13d
  bool v51; // zf
  int v52; // edi
  __int16 v53; // bx
  __int64 v54; // rcx
  int v55; // eax
  int v56; // eax
  unsigned __int64 v57; // rbx
  int v58; // r12d
  unsigned int v59; // edx
  unsigned int v60; // r15d
  int v61; // ebx
  struct tagWND *v62; // r14
  int v63; // r12d
  _QWORD *v64; // rax
  _QWORD *v65; // rbx
  __int64 v66; // rax
  struct _KEVENT *v67; // rcx
  int v68; // eax
  __int64 *m; // r12
  __int64 v70; // rdx
  unsigned __int64 v71; // r14
  int v72; // r8d
  int v73; // r9d
  unsigned int v74; // edx
  _DWORD *v75; // rax
  __int64 v76; // rcx
  int v77; // edx
  __int64 v78; // rcx
  __int64 v79; // rbx
  _DWORD *v80; // rdi
  __int64 v81; // rsi
  _DWORD *v82; // rax
  __int64 v83; // r8
  unsigned int *v84; // rax
  int v85; // eax
  _DWORD *v86; // rbx
  __int64 v87; // rax
  _DWORD *v88; // rax
  int v89; // eax
  _QWORD *v90; // rax
  int v91; // r9d
  char v92; // dl
  __int64 v93; // r10
  unsigned int v94; // edx
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  int v99; // r8d
  __int64 v100; // rcx
  __int64 *v101; // rdx
  __int64 **v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rdx
  _QWORD *v105; // rcx
  int v106; // eax
  __int64 v107; // rax
  char v108; // r14
  int IsEnabledDeviceUsage; // eax
  __int64 j; // rcx
  int v111; // eax
  tagQ *v112; // rbx
  __int64 v113; // rbx
  __int64 v114; // rax
  unsigned int v115; // edx
  int v116; // r11d
  int v117; // eax
  unsigned int v118; // ebx
  struct tagWND *v119; // r14
  int v120; // edi
  tagQ *v121; // rcx
  __int64 v122; // rsi
  __int64 v123; // r14
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  BOOL v133; // eax
  __int64 v134; // rax
  __int64 v136; // rbx
  int v137; // edx
  unsigned __int64 v138; // r9
  int v139; // eax
  unsigned int v140; // r12d
  unsigned __int16 *v141; // rsi
  __int64 v142; // r15
  int v143; // eax
  int v144; // edi
  int v145; // eax
  int v146; // eax
  __int64 v147; // rcx
  int v148; // eax
  int v149; // eax
  __int64 *v150; // rax
  int v151; // ebx
  __int64 v152; // rbx
  __int64 v153; // rcx
  __int64 v154; // rcx
  unsigned __int16 v155; // bx
  __int64 v156; // rcx
  int v157; // eax
  int v158; // eax
  int v159; // eax
  __int64 v160; // rax
  int v161; // eax
  unsigned int v162; // ebx
  __int64 v163; // rax
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v165; // r8
  unsigned int v166; // ebx
  __int64 v167; // rax
  struct CInpLockGuard *v168; // rax
  void *v169; // r8
  __int64 v170; // r14
  int v171; // eax
  int v172; // eax
  int v173; // eax
  int v174; // eax
  __int64 v175; // rax
  __int64 v176; // r8
  __int64 v177; // rax
  __int64 v178; // rcx
  char *v179; // rax
  __int64 v180; // rcx
  int v181; // eax
  _QWORD *v182; // rax
  _QWORD *v183; // rbx
  __int64 v184; // rax
  struct _KEVENT *v185; // rcx
  int v186; // eax
  _DWORD *v187; // rdx
  __int64 v188; // rbx
  struct tagBWND *v189; // r9
  __int64 v190; // rdi
  __int64 v191; // rdx
  __int64 v192; // rcx
  struct tagWND **v193; // rsi
  __int64 v194; // r8
  struct tagWND *v195; // r8
  enum SLEEP_STATUS *v196; // [rsp+20h] [rbp-2D8h]
  __int64 v197; // [rsp+28h] [rbp-2D0h]
  unsigned __int64 v198; // [rsp+30h] [rbp-2C8h]
  __int64 v199; // [rsp+38h] [rbp-2C0h]
  int v200; // [rsp+70h] [rbp-288h]
  char v201; // [rsp+74h] [rbp-284h]
  unsigned int v202; // [rsp+78h] [rbp-280h]
  unsigned int v204; // [rsp+88h] [rbp-270h]
  int v205; // [rsp+9Ch] [rbp-25Ch]
  struct tagQMSG *v206; // [rsp+A0h] [rbp-258h] BYREF
  int v207; // [rsp+A8h] [rbp-250h]
  struct tagWND *v208; // [rsp+B0h] [rbp-248h]
  unsigned int v209; // [rsp+B8h] [rbp-240h]
  int v210; // [rsp+BCh] [rbp-23Ch] BYREF
  int v211; // [rsp+C0h] [rbp-238h]
  unsigned int v212; // [rsp+C4h] [rbp-234h]
  unsigned __int64 v213; // [rsp+C8h] [rbp-230h]
  int v214; // [rsp+D0h] [rbp-228h]
  int v215; // [rsp+D4h] [rbp-224h]
  __int64 *v216; // [rsp+D8h] [rbp-220h] BYREF
  int v217; // [rsp+E0h] [rbp-218h] BYREF
  int v218; // [rsp+E4h] [rbp-214h] BYREF
  int v219; // [rsp+E8h] [rbp-210h] BYREF
  int v220[3]; // [rsp+ECh] [rbp-20Ch] BYREF
  int v221; // [rsp+F8h] [rbp-200h]
  unsigned int v222; // [rsp+108h] [rbp-1F0h]
  unsigned int v223; // [rsp+10Ch] [rbp-1ECh]
  int v224; // [rsp+110h] [rbp-1E8h]
  __int64 *v225[2]; // [rsp+118h] [rbp-1E0h] BYREF
  int v226; // [rsp+128h] [rbp-1D0h]
  __int64 v227; // [rsp+130h] [rbp-1C8h] BYREF
  __int64 *v228; // [rsp+138h] [rbp-1C0h] BYREF
  __int64 *v229; // [rsp+140h] [rbp-1B8h] BYREF
  __int64 *v230; // [rsp+148h] [rbp-1B0h] BYREF
  _UNKNOWN **v231; // [rsp+150h] [rbp-1A8h] BYREF
  __int128 v232; // [rsp+158h] [rbp-1A0h] BYREF
  __int64 v233; // [rsp+168h] [rbp-190h]
  _OWORD v234[3]; // [rsp+170h] [rbp-188h] BYREF
  _OWORD v235[9]; // [rsp+1A0h] [rbp-158h] BYREF
  _BYTE v236[48]; // [rsp+230h] [rbp-C8h] BYREF
  _BYTE v237[48]; // [rsp+260h] [rbp-98h] BYREF
  __int64 v238[3]; // [rsp+290h] [rbp-68h] BYREF
  int v239; // [rsp+2A8h] [rbp-50h]
  int v240; // [rsp+2ACh] [rbp-4Ch]

  v209 = a3;
  v216 = (__int64 *)a1;
  v232 = 0LL;
  v233 = 0LL;
  v201 = 0;
  v210 = 0;
  v213 = 0LL;
  v207 = 0;
  v204 = 0;
  v200 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    a2 = 1LL;
LABEL_8:
    v9 = (struct tagWND *)a2;
    v208 = (struct tagWND *)a2;
    v11 = 0;
    goto LABEL_9;
  }
  if ( a2 < 2 )
    goto LABEL_8;
  v9 = (struct tagWND *)ValidateHwnd(a2);
  v208 = v9;
  if ( !v9 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  *(_QWORD *)&v232 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v232;
  *((_QWORD *)&v232 + 1) = v9;
  HMLockObject(v9);
  v11 = 1;
LABEL_9:
  v211 = v11;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL);
  v12 = 0xFFFFFFFFLL;
  if ( a4 )
    v12 = a4;
  v212 = v12;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v15 = CalcWakeMask(v209, v12, WORD1(a5));
  v202 = v15;
  v224 = v15 & 0x1C07;
  if ( (v15 & 0x1C07) != 0 )
  {
    v13 = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(gptiCurrent + 1448LL) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  v221 = v15 & 7;
  if ( v221 != 7 )
  {
    if ( (v15 & 6) == 0 )
      goto LABEL_22;
    v13 = gptiCurrent;
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
      goto LABEL_22;
  }
  if ( v14 )
  {
    if ( *((_QWORD *)v9 + 2) != gptiCurrent )
      goto LABEL_22;
    v16 = v9;
  }
  else
  {
    if ( a2 )
      goto LABEL_22;
    v16 = 0LL;
  }
  xxxUpdateInputHangInfo(v16, 1LL);
LABEL_22:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
    CurrentProcessWin32Process = 0LL;
  v21 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v21 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v21 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  xxxDoSysExpungeIfNeeded(gptiCurrent, v18, v19, v20);
  v205 = a5 & 1;
  if ( (a5 & 1) != 0
    && (v15 & 0x1CBF) != 0
    && (*(_DWORD *)(gptiCurrent + 1272LL) & 0x80000) != 0
    && (v15 & *(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL)) != 0 )
  {
    v26 = *((_QWORD *)PtiCurrentShared(v23, v22, v24, (__int64)v25) + 58);
    if ( !*(_QWORD *)(v26 + 56) && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v26, v22, v24, (__int64)v25) + 58) + 48LL) )
      TryAttachShellFrame(gptiCurrent, v22);
  }
  v27 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(gptiCurrent + 512LL)
    || (v28 = (_QWORD *)(v27 + 72), v29 = *(_QWORD *)(v27 + 72), v29 == gptiCurrent)
    && *(_QWORD *)(v27 + 80) == *(_QWORD *)(gptiCurrent + 576LL) )
  {
    LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v25 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = (_QWORD *)(v27 + 72);
      WPP_RECORDER_AND_TRACE_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v24,
        (_DWORD)gFullLog,
        4,
        18,
        20,
        (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
        v27,
        gptiCurrent,
        *(_QWORD *)(v27 + 72));
    }
    else
    {
      v30 = (_QWORD *)(v27 + 72);
    }
    v31 = 0LL;
    *v30 = 0LL;
    v201 = 1;
  }
  else
  {
    v30 = (_QWORD *)(v27 + 72);
    if ( v29 && !*(_DWORD *)(v29 + 908) && PhkFirstGlobalValid(gptiCurrent, 1) )
    {
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v24,
          (_DWORD)gFullLog,
          4,
          18,
          21,
          (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
          v27,
          gptiCurrent,
          *v28);
      *v28 = 0LL;
    }
    v31 = 0LL;
  }
  v32 = gptiCurrent;
  if ( *v30 != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 448LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 880LL) = 0;
  if ( (a5 & 2) == 0 )
  {
    v33 = *(_DWORD *)(gptiCurrent + 488LL);
    if ( (v33 & 0x80000) != 0 )
    {
      v226 = *(_DWORD *)(gptiCurrent + 488LL);
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 28LL) = v33 & 0xFFF7FFFF;
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL), 0x2000u);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL), 0x2000u);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x80000u;
    }
  }
  v222 = v15 & 0xFFFFFFBF;
  v223 = ~(v15 & 0xFFFFFFBF);
  while ( 2 )
  {
    while ( 2 )
    {
      v34 = v200;
LABEL_67:
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            v35 = v204;
            while ( 1 )
            {
              v36 = v35;
              v37 = v213;
              v38 = v207;
              v39 = v213;
              v206 = 0LL;
              _InterlockedOr(
                (volatile signed __int32 *)(*(_QWORD *)(v32 + 448) + 8LL),
                *(_DWORD *)(*(_QWORD *)(v32 + 448) + 12LL));
              if ( *(_QWORD *)(v32 + 456) == gpdeskRecalcQueueAttach )
              {
                gpdeskRecalcQueueAttach = 0LL;
                if ( *(_QWORD *)(v32 + 456) )
                {
                  v40 = *((_QWORD *)PtiCurrentShared(gpdeskRecalcQueueAttach, v22, v24, (__int64)v25) + 58);
                  if ( !*(_QWORD *)(v40 + 48)
                    && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v40, v22, v24, (__int64)v25) + 58) + 56LL) )
                  {
                    zzzReattachThreads(2, 0LL, 0LL);
                  }
                }
              }
              v41 = *(_QWORD *)(v32 + 448);
              *(_WORD *)(v32 + 880) |= *(_WORD *)(v41 + 4) & (unsigned __int16)v222;
              _InterlockedAnd((volatile signed __int32 *)(v41 + 4), v223);
              k = (struct tagWND *)*(unsigned int *)(*(_QWORD *)(v32 + 448) + 8LL);
              if ( ((unsigned __int8)k & 0x40) != 0 )
              {
                if ( ((unsigned __int8)v202 & (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v32 + 448) + 8LL) & 0x40) == 0 )
                {
                  v200 = v34 | 0x80;
                  v50 = v34 | 0x80;
                  goto LABEL_259;
                }
                do
                {
                  xxxReceiveMessage(v32);
                  k = (struct tagWND *)*(unsigned int *)(*(_QWORD *)(v32 + 448) + 8LL);
                }
                while ( ((unsigned __int8)k & 0x40) != 0 );
              }
              LOBYTE(k) = v224 != 0;
              v43 = v202;
              if ( v224 != 0 && (v202 & 0x40) != 0 && *(_DWORD *)(v32 + 1164) )
              {
                do
                {
                  *(_DWORD *)(v32 + 1164) = 0;
                  for ( i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(v32 + 1128));
                        i;
                        i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(v32 + 1128)) )
                  {
                    xxxNotifyCaptureChangeIfCaptured(i, (struct tagWND *)v22, v24);
                  }
                }
                while ( *(_DWORD *)(v32 + 1164) );
                v43 = v202;
              }
              if ( *(_QWORD *)(v32 + 1504) && (v43 & 8) != 0 )
              {
                v45 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(k, v22, v24, v25);
                if ( !ExIsResourceAcquiredSharedLite(*v45) )
                {
                  v214 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
                }
                ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( ThreadWin32Thread )
                  v31 = *ThreadWin32Thread;
                memset(v234, 0, 32);
                v47 = 0;
                v217 = 0;
                v227 = 0LL;
                v48 = 0;
                ZwSetIoCompletionEx(v31[183], v31[187], 0LL, 2LL, 0, 0LL);
                do
                {
                  while ( 1 )
                  {
                    LOBYTE(v197) = 0;
                    v49 = ZwRemoveIoCompletionEx(v31[183], v234, 1LL, &v217, &v227, v197);
                    if ( v49 )
                    {
                      if ( v49 == 258 )
                        v47 = 1;
                    }
                    else if ( DWORD2(v234[0]) == 1 )
                    {
                      v47 = 3;
                    }
                    else if ( DWORD2(v234[0]) == 2 )
                    {
                      v47 = 2;
                    }
                    else if ( !DWORD2(v234[0]) && v31[188] )
                    {
                      v47 = DWORD2(v234[0]) + 4;
                      xxxHandleCoreMessagingQueueCompletion(
                        (__int64)v31,
                        (ULONG64 *)v234,
                        (unsigned int)(DWORD2(v234[0]) + 1));
                    }
                    if ( v47 != 3 )
                      break;
                    v48 = 1;
                    v47 = 0;
                  }
                  v51 = v47 == 4;
                  v47 = 0;
                }
                while ( v51 );
                if ( v48 )
                  ZwAssociateWaitCompletionPacket(v31[186], v31[183], v31[185], 0LL, 1LL, 0, 0LL, 0LL);
                v32 = gptiCurrent;
              }
              v52 = *(_DWORD *)(*(_QWORD *)(v32 + 448) + 8LL);
              v53 = v202 & v52;
              if ( (v202 & v52) == 0 )
              {
                v50 = v200 | 0x100;
                v200 |= 0x100u;
                v31 = 0LL;
                goto LABEL_259;
              }
              v54 = *(_QWORD *)(v32 + 432);
              if ( *(_QWORD *)(v54 + 72) == v32 && (*(_DWORD *)(v54 + 396) & 0x400) != 0 )
              {
                EtwTraceInputQueueNoRemoveLocker();
                if ( (v53 & 0x3C07) != 0 )
                {
                  v55 = xxxScanSysQueue(v32, a1, v208, v209, v212, a5, v53 & 0x3C07, &v206);
                  if ( v55 == 1 )
                    goto LABEL_147;
                  if ( !v55 )
                    UnblockDeferredInput((struct tagTHREADINFO *)v32);
                }
                else if ( (v52 & 0x2000) != 0 )
                {
                  v50 = v200 | 0x200;
                  v200 |= 0x200u;
                  v31 = 0LL;
                  goto LABEL_259;
                }
              }
              if ( (v53 & 8) == 0 )
                goto LABEL_126;
              if ( (unsigned int)xxxReadPostMessage(
                                   (struct tagTHREADINFO *)v32,
                                   (struct tagMSG *)a1,
                                   v208,
                                   v209,
                                   v212,
                                   v205) )
              {
                if ( (a5 & 1) != 0 )
                {
                  v134 = *(unsigned int *)(a1 + 8);
                  if ( (unsigned int)v134 >= 0x400 ? 0 : (unsigned __int16)MessageTable[v134] >> 15 )
                    xxxSendPostedMessage((const struct tagMSG *)a1, (struct tagMSG *)a1);
                }
                v50 = v200 | 1;
                goto LABEL_330;
              }
              k = v208;
              if ( v208
                || (v22 = v209, v209 <= v212) && v212 >= 0x200 && v209 <= 0x20E && (v209 || v212 != -1) && v209 > 0x60 )
              {
                if ( (*(_DWORD *)(v32 + 1272) & 0x20000000) != 0 )
                {
                  memset(v235, 0, 48);
                  if ( (unsigned int)xxxReadPostMessage(
                                       (struct tagTHREADINFO *)v32,
                                       (struct tagMSG *)v235,
                                       0LL,
                                       0x60u,
                                       0x60u,
                                       1) )
                    xxxSendPostedMessage((const struct tagMSG *)v235, (struct tagMSG *)v235);
LABEL_126:
                  k = v208;
                }
              }
              if ( k == (struct tagWND *)1 )
              {
                v50 = v200 | 0x400;
                v200 |= 0x400u;
                v31 = 0LL;
                goto LABEL_259;
              }
              if ( (v53 & 0x3C07) == 0 )
              {
                if ( (v52 & 0x2000) == 0 )
                {
LABEL_150:
                  v31 = 0LL;
                  goto LABEL_151;
                }
                v50 = v200 | 0x800;
                v200 |= 0x800u;
                v31 = 0LL;
LABEL_259:
                v60 = v202;
LABEL_260:
                v63 = a5 & 2;
LABEL_261:
                v107 = *(_QWORD *)(v32 + 432);
                if ( *(_QWORD *)(v107 + 72) == v32 )
                {
                  *(_QWORD *)(v107 + 80) = 0LL;
                  LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                  LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_AND_TRACE_SF_qqq(
                      WPP_GLOBAL_Control->AttachedDevice,
                      v22,
                      v24,
                      (_DWORD)gFullLog,
                      4,
                      18,
                      22,
                      (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
                      *(_QWORD *)(v32 + 432),
                      v32,
                      *(_QWORD *)(*(_QWORD *)(v32 + 432) + 72LL));
                  *(_QWORD *)(*(_QWORD *)(v32 + 432) + 72LL) = 0LL;
                  **(_DWORD **)(v32 + 448) &= ~1u;
                  v108 = 1;
                  v201 = 1;
                }
                else
                {
                  v108 = v201;
                }
                IsEnabledDeviceUsage = Feature_AlwaysWakeTargetThread_2__private_IsEnabledDeviceUsage(k, v22, v24);
                j = IsEnabledDeviceUsage != 0;
                if ( IsEnabledDeviceUsage )
                {
                  if ( (unsigned int)Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage()
                    || (v111 = Feature_LParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage(), j = v111 != 0, v111) )
                  {
                    v201 = 1;
                    goto LABEL_277;
                  }
                }
                if ( v108 )
                {
LABEL_277:
                  v112 = *(tagQ **)(v32 + 432);
                  if ( tagQ::AreMultipleThreadsAttached(v112) )
                  {
                    v22 = 0LL;
                    v113 = *((_QWORD *)v112 + 3);
                    if ( !v113 )
                      goto LABEL_287;
                    if ( (*(_DWORD *)(v113 + 100) & 0x10) != 0 )
                      goto LABEL_287;
                    v114 = *(_QWORD *)(v113 + 104);
                    if ( v114 == v32 )
                      goto LABEL_287;
                    v31 = *(_QWORD **)(v113 + 104);
                    if ( !v114 )
                      goto LABEL_287;
                    v115 = CalcWakeMask(*(unsigned int *)(v113 + 24), *(unsigned int *)(v113 + 24), 0LL);
                    v117 = -8265;
                    if ( *(_DWORD *)(v113 + 96) )
                      v117 = -73;
                    v22 = v117 & v115;
                    if ( v116 != 786 )
                      LODWORD(v22) = v22 & 0xFFFFFF7F;
                    j = (unsigned int)v22 & *(_DWORD *)(v31[56] + 4LL);
                    if ( (_DWORD)j != (_DWORD)v22 )
                    {
LABEL_287:
                      if ( v31 )
                        SetWakeBit((__int64)v31, v22);
                    }
                  }
                }
                if ( !a6 )
                {
                  if ( v63 )
                    goto LABEL_485;
                  v182 = (_QWORD *)PsGetCurrentProcessWin32Process(j);
                  v183 = v182;
                  if ( v182 && !*v182 )
                    v183 = 0LL;
                  v184 = *(_QWORD *)(v32 + 424);
                  if ( !*(_QWORD *)(v184 + 328) )
                    *(_QWORD *)(v184 + 328) = v32;
                  if ( *(_QWORD *)(*(_QWORD *)(v32 + 424) + 328LL) == v32 )
                  {
                    EtwTraceWakeInputIdle(0LL, v32);
                    v185 = (struct _KEVENT *)v183[2];
                    if ( !v185 )
                      goto LABEL_480;
                    if ( v185 != (struct _KEVENT *)-1LL )
                    {
                      KeSetEvent(v185, 1, 0);
                      ObfDereferenceObject((PVOID)v183[2]);
LABEL_480:
                      v183[2] = -1LL;
                    }
                  }
                  v186 = *((_DWORD *)v183 + 3);
                  if ( (v186 & 4) != 0 )
                  {
                    *((_DWORD *)v183 + 3) = v186 & 0xFFFFFFFB;
                    zzzCalcStartCursorHide(0LL, 0LL);
                  }
                  for ( j = *(unsigned int *)(*(_QWORD *)(v32 + 448) + 8LL);
                        (j & 0x40) != 0;
                        j = *(unsigned int *)(*(_QWORD *)(v32 + 448) + 8LL) )
                  {
                    xxxReceiveMessage(v32);
                  }
                  goto LABEL_485;
                }
                v118 = 0;
                if ( v211 )
                {
                  if ( v221 == 7 || (v60 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
                  {
                    v119 = v208;
                    if ( *((_QWORD *)v208 + 2) == gptiCurrent )
                    {
                      v118 = 1;
                      xxxUpdateInputHangInfo(v208, 0LL);
                    }
                  }
                  else
                  {
                    v119 = v208;
                  }
                  v120 = xxxRealSleepThread(v60, 0LL, 1, 0, 0LL);
                  if ( v118 )
                    xxxUpdateInputHangInfo(v119, 1LL);
LABEL_320:
                  if ( v120 )
                  {
                    v31 = 0LL;
                    v34 = 0;
                    v200 = 0;
                    goto LABEL_67;
                  }
                  v50 |= 0x10000u;
LABEL_485:
                  v170 = a1;
                  v142 = gptiCurrent;
LABEL_486:
                  v140 = 0;
                  v141 = (unsigned __int16 *)(v170 + 16);
                  goto LABEL_487;
                }
                v210 = 0;
                v121 = *(tagQ **)(v32 + 432);
                v122 = *((_QWORD *)v121 + 10);
                v123 = *((_QWORD *)v121 + 9);
                if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) != 0 && tagQ::AreMultipleThreadsAttached(v121) )
                {
                  v129 = *((_QWORD *)PtiCurrentShared(v125, v124, v126, v127) + 58);
                  if ( !*(_QWORD *)(v129 + 48)
                    && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v129, v128, v130, v131) + 58) + 56LL)
                    && !(unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent) )
                  {
                    v118 = gdwMDAQTimeoutDefenseInDepth;
                    v207 = 0;
                    v204 = 0;
                    LODWORD(v213) = 0;
                  }
                }
                v120 = xxxSleepThread2(v202, v118, 1, 0, (enum SLEEP_STATUS *)&v210);
                v133 = 0;
                if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) != 0
                  && tagQ::AreMultipleThreadsAttached(*(tagQ **)(gptiCurrent + 432LL)) )
                {
                  j = *((_QWORD *)PtiCurrentShared(j, v22, v24, (__int64)v25) + 58);
                  if ( !*(_QWORD *)(j + 48) )
                  {
                    j = *((_QWORD *)PtiCurrentShared(j, v22, v24, (__int64)v25) + 58);
                    if ( !*(_QWORD *)(j + 56) && !(unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent) )
                      v133 = 1;
                  }
                }
                if ( !v133
                  || (j = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL), j != *(_QWORD *)(gptiCurrent + 1432LL))
                  && j
                  || !v210 )
                {
                  v32 = gptiCurrent;
                  goto LABEL_320;
                }
                v31 = 0LL;
                v176 = v122;
                v32 = gptiCurrent;
                v177 = SlowAppThreadInShellFrame(gptiCurrent, v123, v176, v210 == 2);
                v34 = v200;
                if ( v177 )
                  TryDetachShellFrame(gptiCurrent, v177, v210 == 2, 0LL);
                goto LABEL_67;
              }
              v56 = xxxScanSysQueue(v32, a1, v208, v209, v212, a5, v53 & 0x3C07, &v206);
              if ( v56 != 2 )
              {
                v31 = 0LL;
                v207 = 0;
                v204 = 0;
                v213 = 0LL;
                if ( v56 != 1 )
                  goto LABEL_151;
LABEL_147:
                v50 = v200 | 2;
                goto LABEL_330;
              }
              if ( !(unsigned int)IsShellFrameHangResilient(v32) || (v53 & 1) == 0 )
                goto LABEL_150;
              v31 = 0LL;
              if ( !a6 )
                goto LABEL_151;
              v57 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              v24 = 0LL;
              if ( v37 )
                v24 = v36;
              v204 = v24;
              v58 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              if ( v39 )
                v58 = v38;
              v207 = v58;
              if ( v39 )
                v57 = v39;
              v213 = v57;
              v59 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v57;
              if ( v59 >= 0xFA )
                break;
              xxxSleepThread2(v202, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v210);
              v35 = ++v204;
              v213 = v57;
              v207 = v58;
              v34 = v200;
            }
            if ( v58 == (_DWORD)v57 )
            {
              TraceLoggingSysQueueLockedRetryFailed(v24, v59);
              v207 = 0;
              v213 = v57;
              v24 = v204;
            }
LABEL_151:
            k = *(struct tagWND **)(v32 + 448);
            v22 = *((_DWORD *)k + 2) & 0x40;
            v60 = v202;
            if ( ((unsigned __int8)v202 & *((_BYTE *)k + 8) & 0x40) == 0 )
            {
              if ( !(_DWORD)v22 )
                goto LABEL_154;
              v50 = v200 | 0x1000;
              v200 |= 0x1000u;
              goto LABEL_260;
            }
            if ( (_DWORD)v22 )
            {
              do
              {
                xxxReceiveMessage(v32);
                k = *(struct tagWND **)(v32 + 448);
              }
              while ( (*((_DWORD *)k + 2) & 0x40) != 0 );
            }
LABEL_154:
            v61 = *((_DWORD *)k + 2);
            if ( (v202 & v61) == 0 )
            {
              v50 = v200 | 0x2000;
              v200 |= 0x2000u;
              goto LABEL_260;
            }
            v62 = v208;
            if ( ((unsigned __int8)v202 & (unsigned __int8)v61 & 0x20) == 0
              || !(unsigned int)xxxDoPaint((__int64)v208, a1) )
            {
              v63 = a5 & 2;
              if ( (a5 & 2) != 0 )
                goto LABEL_182;
              v64 = (_QWORD *)PsGetCurrentProcessWin32Process(k);
              v65 = v64;
              if ( v64 && !*v64 )
                v65 = 0LL;
              v66 = *(_QWORD *)(v32 + 424);
              if ( !*(_QWORD *)(v66 + 328) )
                *(_QWORD *)(v66 + 328) = v32;
              if ( *(_QWORD *)(*(_QWORD *)(v32 + 424) + 328LL) == v32 )
              {
                EtwTraceWakeInputIdle(0LL, v32);
                v67 = (struct _KEVENT *)v65[2];
                if ( !v67 )
                  goto LABEL_170;
                if ( v67 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v67, 1, 0);
                  ObfDereferenceObject((PVOID)v65[2]);
LABEL_170:
                  v65[2] = -1LL;
                }
              }
              v68 = *((_DWORD *)v65 + 3);
              if ( (v68 & 4) != 0 )
              {
                *((_DWORD *)v65 + 3) = v68 & 0xFFFFFFFB;
                zzzCalcStartCursorHide(0LL, 0LL);
              }
              for ( k = *(struct tagWND **)(v32 + 448); (*((_DWORD *)k + 2) & 0x40) != 0; k = *(struct tagWND **)(v32 + 448) )
                xxxReceiveMessage(v32);
              v22 = *((_DWORD *)k + 2) & 0x40;
              if ( ((unsigned __int8)v202 & *((_BYTE *)k + 8) & 0x40) != 0 )
              {
                if ( (_DWORD)v22 )
                {
                  do
                  {
                    xxxReceiveMessage(v32);
                    k = *(struct tagWND **)(v32 + 448);
                  }
                  while ( (*((_DWORD *)k + 2) & 0x40) != 0 );
                }
LABEL_178:
                v61 = *((_DWORD *)k + 2);
                if ( (v61 & v202) == 0 )
                {
                  v50 = v200 | 0x8000;
                  v200 |= 0x8000u;
                  goto LABEL_261;
                }
LABEL_182:
                if ( ((unsigned __int8)v61 & (unsigned __int8)v202 & 0x10) != 0 )
                {
                  for ( m = *(__int64 **)(gptiCurrent + 1256LL); ; m = (__int64 *)*m )
                  {
                    while ( 1 )
                    {
                      if ( m == (__int64 *)(gptiCurrent + 1256LL) )
                      {
                        v106 = 0;
                        goto LABEL_255;
                      }
                      if ( (*(_DWORD *)(m - 1) & 0x1000) == 0 )
                        break;
                      v215 = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1408LL);
                      m = (__int64 *)*m;
                    }
                    v70 = m[4];
                    if ( !v62 || v62 == (struct tagWND *)v70 || (unsigned int)IsChild((__int64)v62, v70) )
                      break;
                  }
                  if ( (gdwExtraInstrumentations & 2) != 0 )
                  {
                    v71 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                    v72 = v71 - *((_DWORD *)m + 18);
                    v73 = dword_1C035E380;
                    if ( !dword_1C035E380 )
                      v73 = v71;
                    dword_1C035E380 = v73;
                    v74 = 0;
                    v75 = &unk_1C0312ED8;
                    do
                    {
                      if ( *((_DWORD *)m - 4) <= *v75 )
                        break;
                      ++v74;
                      ++v75;
                    }
                    while ( v74 < 7 );
                    v76 = v74 + 8LL * gTimerCoalCurrentState;
                    ++gaTimerDeliveryDistribution[2 * v76];
                    v77 = v72 - *((_DWORD *)m - 4) + gaTimerDeliveryDistribution[2 * v76 + 1];
                    gaTimerDeliveryDistribution[2 * v76 + 1] = v77;
                    if ( gaTimerDeliveryDistribution[2 * v76] >= 0x7FFFFFFFu || (v78 = 0LL, v77 >= 0x3FFFFFFF) )
                      v78 = 1LL;
                    if ( (_DWORD)v78 || (unsigned int)(v71 - v73) >= 0xEA60 )
                    {
                      v79 = 0LL;
                      v80 = &unk_1C035DC08;
                      v81 = 4LL;
                      do
                      {
                        v82 = (_DWORD *)SGDGetUserSessionState(v78);
                        v83 = 0LL;
                        v78 = gServiceSessionId;
                        if ( *v82 != gServiceSessionId )
                          v83 = 4LL;
                        *v80 = *((_DWORD *)&gTimerCoalescingSpec + v79 + v83);
                        ++v79;
                        v80 += 16;
                        --v81;
                      }
                      while ( v81 );
                      v84 = (unsigned int *)SGDGetUserSessionState(gServiceSessionId);
                      EtwTraceTimerDelayStatistics(*v84, 8LL, 4LL, &unk_1C0312ED8, 32, 8, gaTimerDeliveryDistribution);
                      dword_1C035E380 = v71;
                      LODWORD(v78) = 1;
                      v32 = gptiCurrent;
                    }
                    if ( (_DWORD)v78 )
                      memset_0(gaTimerDeliveryDistribution, 0, 0x100uLL);
                  }
                  v85 = *((_DWORD *)m + 19);
                  if ( *((_DWORD *)m + 18) == v85 )
                    *((_DWORD *)m + 18) = v85;
                  if ( *(_DWORD *)(gptiCurrent + 824LL) < gUserPostMessageLimit )
                  {
                    v87 = SGDGetUserSessionState(gUserPostMessageLimit);
                    v88 = (_DWORD *)Win32AllocateFromPagedLookasideList(*(_QWORD *)(v87 + 16872));
                    v86 = v88;
                    if ( v88 )
                    {
                      memset_0(v88, 0, 0xA0uLL);
                      v89 = 8;
                      if ( *(_DWORD *)(gptiCurrent + 828LL) != 2 )
                        v89 = 4;
                      v86[25] |= v89;
                      v90 = *(_QWORD **)(gptiCurrent + 816LL);
                      if ( v90 )
                      {
                        *v90 = v86;
                        *((_QWORD *)v86 + 1) = *(_QWORD *)(gptiCurrent + 816LL);
                      }
                      else
                      {
                        *(_QWORD *)(gptiCurrent + 808LL) = v86;
                        *(_QWORD *)(gptiCurrent + 840LL) = 0LL;
                      }
                      *(_QWORD *)(gptiCurrent + 816LL) = v86;
                      v91 = *(_DWORD *)(gptiCurrent + 824LL) + 1;
                      *(_DWORD *)(gptiCurrent + 824LL) = v91;
                      v92 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                      if ( v92 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_AND_TRACE_SF_qqdd(
                          (__int64)WPP_GLOBAL_Control->AttachedDevice,
                          v92,
                          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                          v91,
                          (__int64)v196,
                          v197,
                          v198,
                          v199);
                      v31 = 0LL;
                    }
                    else
                    {
                      UserSetLastError(8);
                      v31 = 0LL;
                      v86 = 0LL;
                    }
                  }
                  else
                  {
                    UserSetLastError(1816);
                    v31 = 0LL;
                    v86 = 0LL;
                  }
                  if ( v86 )
                  {
                    v93 = m[4];
                    if ( v93 )
                    {
                      v94 = *(_DWORD *)(*(_QWORD *)(v93 + 40) + 288LL);
                    }
                    else
                    {
                      v95 = *(_QWORD *)(gptiCurrent + 432LL);
                      v96 = *(_QWORD *)(v95 + 128);
                      if ( v96 )
                        v97 = *(_QWORD *)(v96 + 16);
                      else
                        v97 = *(_QWORD *)(v95 + 104);
                      v94 = *(_DWORD *)(*(_QWORD *)(v97 + 424) + 280LL);
                    }
                    if ( (*(_DWORD *)(m - 1) & 2) == 0 || (v98 = 280LL, !*(m - 3)) )
                      v98 = *(m - 3);
                    v99 = 280;
                    if ( (*(_DWORD *)(m - 1) & 2) == 0 )
                      v99 = 275;
                    StoreQMessage(
                      (struct tagQMSG *)v86,
                      (struct _EX_PUSH_LOCK **)v93,
                      v99,
                      m[5],
                      v98,
                      0,
                      0LL,
                      0,
                      0LL,
                      0,
                      0LL,
                      v94,
                      0LL,
                      0LL);
                    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
                    {
                      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL), 0x108u);
                      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL), 0x108u);
                      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL) & 0x108) != 0 )
                        KeSetEvent(*(PRKEVENT *)(gptiCurrent + 736LL), 2, 0);
                    }
                  }
                  if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage() )
                  {
                    DecTimerCountAndClearReadyFlag((struct tagTIMER *)(m - 7));
                    goto LABEL_250;
                  }
                  *((_DWORD *)m - 2) &= ~1u;
                  v100 = *(m - 4);
                  v101 = (__int64 *)*m;
                  v102 = (__int64 **)m[1];
                  if ( *(__int64 **)(*m + 8) != m || *v102 != m )
                    goto LABEL_468;
                  *v102 = v101;
                  v101[1] = (__int64)v102;
                  v51 = (*(_DWORD *)(v100 + 604))-- == 1;
                  if ( v51 )
                    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v100 + 448) + 8LL), 0xFFFFFFEF);
LABEL_250:
                  v103 = m + 2;
                  v104 = m[2];
                  v105 = (_QWORD *)m[3];
                  if ( *(__int64 **)(v104 + 8) != m + 2
                    || (_QWORD *)*v105 != v103
                    || (*v105 = v104,
                        *(_QWORD *)(v104 + 8) = v105,
                        k = (struct tagWND *)gtmrListHead[0],
                        v22 = gtmrListHead[1],
                        *(_QWORD *)v22 != gtmrListHead[0]) )
                  {
LABEL_468:
                    __fastfail(3u);
                  }
                  *v103 = gtmrListHead[0];
                  m[3] = v22;
                  *(_QWORD *)v22 = v103;
                  gtmrListHead[1] = v103;
                  v106 = 1;
LABEL_255:
                  if ( v106 )
                  {
                    v34 = v200 | 8;
                    v200 |= 8u;
                    continue;
                  }
                  v50 = v200;
                  goto LABEL_259;
                }
                v50 = v200;
              }
              else
              {
                if ( !(_DWORD)v22 )
                  goto LABEL_178;
                v50 = v200 | 0x4000;
                v200 |= 0x4000u;
              }
              goto LABEL_261;
            }
            break;
          }
          v50 = v200 | 4;
LABEL_330:
          v200 = v50;
          v136 = a1;
          v137 = *(_DWORD *)(a1 + 8);
          if ( v137 == 595 && *(_QWORD *)(a1 + 24) == -1LL )
            v138 = -1LL;
          else
            v138 = 0LL;
          if ( (unsigned int)(v137 - 571) <= 1 )
          {
            v141 = (unsigned __int16 *)(a1 + 16);
            v142 = gptiCurrent;
            v140 = 1;
LABEL_344:
            v143 = 1;
            goto LABEL_345;
          }
          if ( (unsigned int)(v137 - 577) <= 3 || (unsigned int)(v137 - 581) <= 5 || (unsigned int)(v137 - 593) <= 2 )
          {
            v140 = 1;
            v139 = 1;
          }
          else
          {
            v139 = 0;
            v140 = 1;
          }
          v141 = (unsigned __int16 *)(a1 + 16);
          v142 = gptiCurrent;
          if ( v139 && (unsigned int)IsPointerMessageTouchpad(gptiCurrent, v138, *v141) )
            goto LABEL_344;
          v143 = 0;
LABEL_345:
          if ( !v143
            || (*(_DWORD *)(v142 + 1272) & 0x2000) != 0
            || (*(_DWORD *)(v142 + 1276) & 0x40) != 0
            || (v144 = 1,
                (unsigned int)IsPTPAllowedOnThread((struct tagTHREADINFO *)v142, *(_DWORD *)(a1 + 8), *(_QWORD *)v141)) )
          {
            v144 = 0;
          }
          v145 = *(_DWORD *)(a1 + 8);
          if ( v145 != 842 && v145 != 537 && v145 != 568
            || (v146 = Feature_MTestAbSh1__private_IsEnabledDeviceUsage(), v147 = 1LL, !v146) )
          {
            v147 = 0LL;
          }
          if ( (a5 & 1) != 0
            && ((v148 = *(_DWORD *)(a1 + 8), v148 == 258)
             || v148 == 582
             || v148 == 578
             || v148 == 583
             || v148 == 579
             || (_DWORD)v147
             || (v147 = 49152LL, (unsigned __int16)v148 >= 0xC000u)) )
          {
            v24 = (unsigned int)a5;
            v218 = 0;
            v147 = gpsi;
            if ( gpsi && *(_QWORD *)(gpsi + 856LL) )
            {
              if ( gptiCurrent == gptiRit
                || (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) != 0
                || !*(_QWORD *)(gptiCurrent + 456LL)
                || ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x400) != 0
                && (v240 = 0,
                    v238[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
                    v239 = 0,
                    v238[2] = (unsigned int)a5,
                    v238[1] = a1,
                    (unsigned int)xxxCallHook(0LL, 3uLL, (__int64)v238, 9LL)) )
              {
                v136 = a1;
              }
              else
              {
                v136 = a1;
                if ( (unsigned int)fnHkINLPMSG(
                                     196608LL,
                                     (unsigned int)a5,
                                     (__int128 *)a1,
                                     0LL,
                                     *(_QWORD *)(gpsi + 856LL),
                                     0,
                                     &v218) )
                {
                  v149 = *(_DWORD *)(a1 + 8);
                  if ( v149 == 258 )
                  {
                    *(_DWORD *)(a1 + 8) = 0;
                    *(_QWORD *)v141 = 0LL;
                    *(_QWORD *)(a1 + 24) = 0LL;
                  }
                  else if ( v149 == 842 )
                  {
                    *(_QWORD *)v141 = 0LL;
                    *(_QWORD *)(a1 + 24) = 0LL;
                  }
                }
              }
              goto LABEL_377;
            }
            v136 = a1;
          }
          else
          {
LABEL_377:
            v24 = (unsigned int)a5;
          }
          if ( ((a5 & 1) == 0 || !v206 || !*(_QWORD *)(v142 + 1304) && !*(_QWORD *)(v142 + 1320)) && !v144 )
          {
            v150 = *(__int64 **)(v142 + 464);
            v147 = *v150;
            if ( ((*(_BYTE *)(v142 + 680) | *(_BYTE *)(*v150 + 16)) & 0x10) != 0 )
              xxxCallHook(0LL, (unsigned int)v24, v136, 3LL);
          }
          v151 = a5 & 1;
          if ( (a5 & 1) != 0 )
          {
            if ( *(_DWORD *)(v142 + 1160) )
            {
              v152 = SGDGetUserSessionState(v147);
              if ( *(_WORD *)(SGDGetUserSessionState(v153) + 16280)
                && *(_QWORD *)(v152 + 16288) == v142
                && *(_DWORD *)(v152 + 16284) == *(_DWORD *)(v142 + 1160) )
              {
                ForceCompletePendingPromotion();
                xxxProcessMousePromotionQueue();
              }
              else
              {
                *(_DWORD *)(v142 + 1160) = 0;
              }
            }
            v154 = a1;
            if ( *(_DWORD *)(a1 + 8) == 583 && _bittest16((const signed __int16 *)(a1 + 18), 0xDu) )
            {
              PointerPromotion::MarkPendingPromotion((PointerPromotion *)v142, (struct tagTHREADINFO *)*v141, v24);
              v154 = a1;
            }
            v155 = 0;
            v156 = *(unsigned int *)(v154 + 8);
            if ( (unsigned int)(v156 - 577) <= 3 )
              goto LABEL_400;
            if ( (unsigned int)(v156 - 581) > 0x12 || (v157 = 1, (_DWORD)v156 == 589) )
              v157 = 0;
            v51 = v157 == 0;
            v158 = 0;
            if ( !v51 )
LABEL_400:
              v158 = 1;
            if ( !v158 || (v159 = 1, (_DWORD)v156 == 595) )
              v159 = 0;
            if ( v159 )
              v155 = *v141;
            v160 = SGDGetUserSessionState(v156);
            CTouchProcessor::UpdateThreadPointerList(
              *(CTouchProcessor **)(v160 + 3424),
              (struct tagTHREADINPUTPOINTERLIST *)(v142 + 1128),
              v155);
            v151 = a5 & 1;
          }
          if ( !v206 )
            goto LABEL_419;
          v161 = *((_DWORD *)v206 + 25);
          if ( (v161 & 0x100) == 0 )
            goto LABEL_419;
          if ( !v151 )
            goto LABEL_418;
          if ( *(_QWORD *)(v142 + 1320) )
          {
            InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v225, "ShellHandwriting Delegation", 0LL);
            InputTraceLogging::Delivery::CallShellHandwritingDelegateThread(v206);
            InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
              &v228,
              "ShellHandwriting DelegationCallout",
              (const struct InputTraceLogging::ThreadLockedPerfRegion *)v225);
            v32 = gptiCurrent;
            v162 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1320LL), a1, *(_QWORD *)(gptiCurrent + 1312LL));
            InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v228);
            if ( (*((_DWORD *)v206 + 25) & 0x20) != 0 )
            {
              v163 = SGDGetUserSessionState(v206);
              TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v163 + 3424));
              CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v237, TouchProcessorLock, v165);
              *((_DWORD *)v206 + 25) &= ~0x100u;
              _HandleShellHandwritingDelegatedInputWorker(gptiCurrent, v162, v206);
              CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v237);
            }
            v34 = 0x20000;
            v200 = 0x20000;
            InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v225);
            v31 = 0LL;
            continue;
          }
          break;
        }
        if ( *(_QWORD *)(v142 + 1304) )
        {
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v216, "Delegation", 0LL);
          EtwTraceBeginDelegateInputCallback(v206, a1);
          InputTraceLogging::Delivery::CallDelegateThread(v206);
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            &v229,
            "DelegationCallout",
            (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v216);
          v32 = gptiCurrent;
          v166 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1304LL), a1, *(_QWORD *)(gptiCurrent + 1312LL));
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v229);
          EtwTraceEndDelegateInputCallback(v206, a1);
          if ( (*((_DWORD *)v206 + 25) & 0x20) != 0 )
          {
            v167 = SGDGetUserSessionState(v206);
            v168 = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v167 + 3424));
            CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v236, v168, v169);
            *((_DWORD *)v206 + 25) &= ~0x100u;
            _HandleDelegatedInputWorker(gptiCurrent, v166, v206);
            CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v236);
          }
          v34 = 0x20000;
          v200 = 0x20000;
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v216);
          v31 = 0LL;
          continue;
        }
        break;
      }
LABEL_418:
      *((_DWORD *)v206 + 25) = v161 & 0xFFFFFEFF;
LABEL_419:
      if ( v144 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v230, "PTPDownleveling", 0LL);
        xxxClientCallDefaultInputHandler(a1);
        memset(&v235[3], 0, 48);
        *(_OWORD *)a1 = 0LL;
        *(_OWORD *)(a1 + 16) = 0LL;
        *(_OWORD *)(a1 + 32) = 0LL;
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v230);
        v32 = gptiCurrent;
        v31 = 0LL;
        continue;
      }
      break;
    }
    v22 = *(_QWORD *)v141;
    v170 = a1;
    j = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)(j - 577) <= 3
      || ((unsigned int)(j - 581) > 0x12 || (_DWORD)j == 589 ? (_QWORD *)(v31 = 0LL, v171 = 0) : (v171 = 1, v31 = 0LL),
          v171) )
    {
      v172 = 1;
      v31 = 0LL;
    }
    else
    {
      v172 = 0;
    }
    if ( v172 )
    {
      v173 = 0;
      goto LABEL_436;
    }
    if ( (_DWORD)j != 528 || (v174 = 1, (_WORD)v22 != 582) )
      v174 = 0;
    v51 = v174 == 0;
    v173 = 0;
    if ( !v51 )
    {
      v22 >>= 16;
LABEL_436:
      LOBYTE(v173) = (_WORD)v22 == 1;
    }
    if ( v173 )
    {
      v175 = HMValidateHandleNoSecure(*(_QWORD *)a1, 1);
      if ( v175 )
      {
        if ( !(unsigned int)IsMiPEnabledForWindow(v175) )
        {
          if ( (unsigned int)dword_1C0354098 > 5 )
          {
            v219 = v151;
            v220[0] = *(_DWORD *)(a1 + 8);
            v231 = v25;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              j,
              (int)&unk_1C031C3EF,
              v24,
              (__int64)v25,
              (__int64)&v231,
              (__int64)v220,
              (__int64)&v219);
          }
          if ( v151 )
            xxxClientCallDefWindowProc(a1);
          memset(&v235[6], 0, 48);
          *(_OWORD *)a1 = 0LL;
          *(_OWORD *)(a1 + 16) = 0LL;
          *(_OWORD *)(a1 + 32) = 0LL;
          v32 = gptiCurrent;
          continue;
        }
      }
    }
    break;
  }
  if ( a6 && *(_DWORD *)(a1 + 8) == 18 )
  {
    v50 |= 0x40000u;
    goto LABEL_486;
  }
  if ( v151 )
  {
    v178 = *(_QWORD *)(v142 + 1104);
    if ( v178 )
    {
      v179 = (char *)HMValidateHandleNoRip(v178, 18);
      if ( v179 )
        FreeHidData(v179);
      *(_QWORD *)(v142 + 1104) = 0LL;
    }
    v180 = *(_QWORD *)(v142 + 1112);
    if ( v180 )
    {
      FreeTouchInputInfo(v180, 1LL);
      *(_QWORD *)(v142 + 1112) = 0LL;
    }
    j = *(_QWORD *)(v142 + 1120);
    if ( j )
    {
      FreeGestureInfo(j, 1LL);
      *(_QWORD *)(v142 + 1120) = 0LL;
    }
    v181 = *(_DWORD *)(a1 + 8);
    if ( v181 == 255 )
    {
      if ( *(_QWORD *)v141 <= 1uLL )
        *(_QWORD *)(v142 + 1104) = *(_QWORD *)(a1 + 24);
    }
    else if ( v181 == 576 && HMValidateHandle(*(_QWORD *)(a1 + 24), 0x14u) )
    {
      *(_QWORD *)(v142 + 1112) = *(_QWORD *)(a1 + 24);
    }
    else if ( ((*(_DWORD *)(a1 + 8) - 281) & 0xFFFFFFFD) == 0 && HMValidateHandle(*(_QWORD *)(a1 + 24), 0x15u) )
    {
      *(_QWORD *)(v142 + 1120) = *(_QWORD *)(a1 + 24);
    }
  }
LABEL_487:
  if ( v211 )
    ThreadUnlock1(j, v22, v24);
  if ( !(unsigned int)HandleProcessSpinning() )
  {
    v140 = 0;
    goto LABEL_498;
  }
  if ( v140 )
  {
    if ( *(_DWORD *)(v170 + 8) == 512 && (*(_DWORD *)(v142 + 1272) & 0x40000) != 0 )
    {
      v187 = *(_DWORD **)(v142 + 672);
      if ( v187 )
      {
        if ( (v187[50] & 0x80000) != 0 && v187[69] )
        {
          v187[70] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v187[69];
          ++v187[71];
          v187[69] = 0;
        }
      }
    }
LABEL_498:
    if ( v140 )
    {
      *(_QWORD *)(v142 + 1224) = *(_QWORD *)v170;
      *(_DWORD *)(v142 + 1232) = *(_DWORD *)(v170 + 8);
      *(_QWORD *)(v142 + 1240) = *(_QWORD *)v141;
      v188 = *(_QWORD *)v170;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v188 < *(_QWORD *)(gpsi + 8LL)
        && ((v190 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v188,
             v193 = (struct tagWND **)HMPkheFromPhe(v190),
             LOWORD(v188) = WORD1(v188) & 0x7FFF,
             (WORD1(v188) & 0x7FFF) == *(_WORD *)(v190 + 26))
         || (_WORD)v188 == 0x7FFF
         || !(_WORD)v188 && PsGetCurrentProcessWow64Process(v192, v191, v194))
        && (*(_BYTE *)(v190 + 25) & 1) == 0
        && *(_BYTE *)(v190 + 24) == 1 )
      {
        v195 = *v193;
      }
      else
      {
        v195 = 0LL;
      }
      InputTraceLogging::Delivery::GetMessageW(
        (const struct tagMSG *)v170,
        (const struct tagTHREADINFO *)v142,
        v195,
        v189,
        v205);
    }
  }
  EtwTraceBeginAppMessageProcessing(a6, v50, v170);
  return v140;
}
