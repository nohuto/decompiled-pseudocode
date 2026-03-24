/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C0055720
 * Callers:
 *     NtUserRealInternalGetMessage @ 0x1C00545B0 (NtUserRealInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C0055130 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C0055560 (NtUserPeekMessage.c)
 *     xxxInternalGetMessage @ 0x1C00D9FB0 (xxxInternalGetMessage.c)
 * Callees:
 *     FreeHidData @ 0x1C00065B0 (FreeHidData.c)
 *     zzzReattachThreads @ 0x1C001194C (zzzReattachThreads.c)
 *     HMValidateHandleNoRip @ 0x1C0023C6C (HMValidateHandleNoRip.c)
 *     IsShellFrameHangResilient @ 0x1C003CDB4 (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C003CE40 (IsAdaptiveQueueDetachExempted.c)
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     xxxCallCtfHook @ 0x1C0052914 (xxxCallCtfHook.c)
 *     xxxDoPaint @ 0x1C00534A8 (xxxDoPaint.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0054100 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0055240 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     CalcWakeMask @ 0x1C00577A0 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C0057A80 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C0057B10 (xxxUpdateInputHangInfo.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C0057C50 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0057CA0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C00585A0 (WPP_RECORDER_SF_qqdd.c)
 *     xxxSleepThread2 @ 0x1C0058750 (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00588D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C0059000 (xxxReceiveMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PhkFirstGlobalValid @ 0x1C006672C (PhkFirstGlobalValid.c)
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     zzzCalcStartCursorHide @ 0x1C007FC90 (zzzCalcStartCursorHide.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00C14A4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00C14D0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C1800 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00C202C (WPP_RECORDER_SF_qqq.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDoSysExpunge @ 0x1C011D6C8 (xxxDoSysExpunge.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0121148 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     SlowAppThreadInShellFrame @ 0x1C0125054 (SlowAppThreadInShellFrame.c)
 *     WaitMaskIncludesUserInput @ 0x1C0126740 (WaitMaskIncludesUserInput.c)
 *     _IsChild @ 0x1C012BB3C (_IsChild.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0167740 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0167784 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     Feature_DeliverViaSendMessage__private_ReportDeviceUsage @ 0x1C01679CC (Feature_DeliverViaSendMessage__private_ReportDeviceUsage.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C01686FC (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01DCB40 (_FreeTouchInputInfo.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01DFFB8 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E131C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E162C (-UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E1860 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C01E1E88 (IsMiPEnabledForWindow.c)
 *     TryDetachShellFrame @ 0x1C01E2264 (TryDetachShellFrame.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F106C (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F15F0 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F18E8 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02189B8 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C02193F0 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0224510 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C02258A0 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeGestureInfo @ 0x1C0227C40 (_FreeGestureInfo.c)
 *     xxxClientCallDefWindowProc @ 0x1C0231770 (xxxClientCallDefWindowProc.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C02318E0 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallDelegateThread @ 0x1C0231A5C (xxxClientCallDelegateThread.c)
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
  struct tagWND *v9; // r13
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  __int64 v12; // r14
  unsigned int v14; // eax
  unsigned int v15; // esi
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v20; // ecx
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // r14d
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edx
  int v28; // ecx
  char v29; // r8
  int v30; // ecx
  __int16 v31; // bx
  __int64 v32; // rcx
  __int64 j; // rcx
  unsigned __int64 i; // rax
  struct tagWND *v35; // rdx
  int v36; // r8d
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v44; // rcx
  __int64 CurrentThreadProcess; // rax
  _QWORD **ThreadWin32Thread; // rax
  int v47; // r14d
  int v48; // eax
  int v49; // ebx
  int v50; // r14d
  __int16 v51; // bx
  struct tagWND *v52; // rsi
  int v53; // eax
  __int64 v54; // r9
  struct tagWND *v55; // r14
  int v56; // eax
  unsigned int v57; // r10d
  int v58; // r11d
  int v59; // eax
  int v60; // ebx
  unsigned int v61; // ecx
  __int16 v62; // dx
  unsigned int v63; // r8d
  int v64; // ebx
  __int64 v65; // rbx
  __int64 v66; // rdx
  struct _KEVENT *v67; // rcx
  __int64 v68; // rax
  struct _KEVENT *v69; // rcx
  int v70; // eax
  __int16 v71; // dx
  __int64 *v72; // rbx
  struct tagWND *v73; // rdx
  __int64 v74; // rdx
  unsigned __int64 v75; // rsi
  int v76; // r8d
  int v77; // r9d
  unsigned int v78; // edx
  const wchar_t *v79; // rax
  __int64 v80; // rcx
  int v81; // edx
  __int64 v82; // r8
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // r8
  int v86; // eax
  _DWORD *v87; // rax
  _DWORD *v88; // rsi
  int v89; // edx
  int v90; // r8d
  int v91; // r9d
  int v92; // eax
  _QWORD *v93; // rax
  int v94; // eax
  __int64 v95; // r10
  unsigned int v96; // edx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // r8d
  _QWORD *v102; // rbx
  __int64 v103; // rcx
  _QWORD *v104; // rax
  _QWORD *v105; // rcx
  __int64 v106; // rsi
  unsigned int v107; // ebx
  __int64 v108; // r11
  __int64 v109; // rax
  int v110; // eax
  int v111; // edx
  int v112; // ecx
  __int64 v113; // r11
  int v114; // eax
  unsigned int v115; // ebx
  int v116; // eax
  struct tagWND *v117; // rsi
  int v118; // r12d
  __int64 v119; // rcx
  __int64 v120; // r13
  __int64 v121; // rdx
  __int64 v122; // r8
  int v123; // ecx
  unsigned int v124; // eax
  unsigned int v125; // esi
  int v126; // eax
  int v127; // r14d
  int v128; // eax
  int v129; // r15d
  __int64 v130; // rdx
  __int64 v131; // r8
  BOOL v132; // eax
  int v133; // eax
  __int64 v134; // rsi
  int v135; // ecx
  unsigned __int64 v136; // r8
  BOOL v137; // ebx
  unsigned __int64 v138; // r8
  int v139; // eax
  int v140; // eax
  int v141; // eax
  int v142; // eax
  int v143; // ecx
  unsigned __int16 v144; // r8
  int v145; // r14d
  unsigned int v146; // ebx
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v148; // r8
  unsigned __int64 v149; // rdx
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rcx
  int v155; // eax
  __int64 v156; // rbx
  __int64 v157; // rdx
  __int64 v158; // rax
  int v159; // eax
  __int64 v160; // rcx
  _DWORD *v161; // rdx
  unsigned __int64 v162; // rsi
  struct _KTHREAD *v163; // r14
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // rax
  int v168; // ebx
  __int64 v169; // rcx
  __int64 v170; // rax
  struct tagBWND *v171; // r9
  __int64 v172; // rbx
  __int64 v173; // rcx
  struct tagWND **v174; // r14
  unsigned __int64 v175; // rsi
  int v176; // [rsp+20h] [rbp-1C8h]
  int v177; // [rsp+28h] [rbp-1C0h]
  unsigned int v178; // [rsp+70h] [rbp-178h]
  int v179; // [rsp+74h] [rbp-174h]
  unsigned int v180; // [rsp+7Ch] [rbp-16Ch]
  unsigned int v181; // [rsp+80h] [rbp-168h]
  int v182; // [rsp+84h] [rbp-164h]
  _BYTE v183[4]; // [rsp+88h] [rbp-160h] BYREF
  int v184; // [rsp+8Ch] [rbp-15Ch]
  int v185; // [rsp+90h] [rbp-158h]
  int v186; // [rsp+94h] [rbp-154h]
  struct tagQMSG *v187; // [rsp+98h] [rbp-150h]
  int v188; // [rsp+A0h] [rbp-148h] BYREF
  struct tagWND *v189; // [rsp+A8h] [rbp-140h]
  __int16 v190; // [rsp+B0h] [rbp-138h]
  int v191; // [rsp+B4h] [rbp-134h]
  int v192; // [rsp+B8h] [rbp-130h] BYREF
  int v193; // [rsp+BCh] [rbp-12Ch]
  int v194; // [rsp+C0h] [rbp-128h] BYREF
  int v195; // [rsp+C4h] [rbp-124h] BYREF
  int v196[6]; // [rsp+C8h] [rbp-120h] BYREF
  int v197; // [rsp+E0h] [rbp-108h]
  _BYTE v198[16]; // [rsp+E8h] [rbp-100h] BYREF
  __int64 v199; // [rsp+F8h] [rbp-F0h] BYREF
  char v200[8]; // [rsp+100h] [rbp-E8h] BYREF
  char v201[8]; // [rsp+108h] [rbp-E0h] BYREF
  __int64 v202; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v203; // [rsp+118h] [rbp-D0h]
  __int128 v204; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v205; // [rsp+130h] [rbp-B8h]
  _OWORD v206[3]; // [rsp+138h] [rbp-B0h] BYREF
  char v207[24]; // [rsp+168h] [rbp-80h] BYREF
  _BYTE v208[104]; // [rsp+180h] [rbp-68h] BYREF
  char v210; // [rsp+1F8h] [rbp+10h]

  v204 = 0LL;
  v205 = 0LL;
  v210 = 0;
  v9 = 0LL;
  v192 = 0;
  v188 = 0;
  v185 = 0;
  v184 = 0;
  v180 = 0;
  v10 = 0;
  v179 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    v11 = 1;
    a2 = 1LL;
LABEL_8:
    v12 = a2;
    v189 = (struct tagWND *)a2;
    v186 = 0;
    goto LABEL_9;
  }
  if ( a2 < 2 )
  {
    v11 = 1;
    goto LABEL_8;
  }
  v12 = ValidateHwnd(a2);
  v189 = (struct tagWND *)v12;
  if ( !v12 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  *(_QWORD *)&v204 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v204;
  *((_QWORD *)&v204 + 1) = v12;
  HMLockObject(v12);
  v11 = 1;
  v186 = 1;
LABEL_9:
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL);
  v14 = -1;
  if ( a4 )
    v14 = a4;
  v181 = v14;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v15 = v14;
  v16 = CalcWakeMask(a3, v14, WORD1(a5));
  v178 = v16;
  v197 = v16 & 0x1C07;
  if ( (v16 & 0x1C07) != 0 )
  {
    v17 = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(gptiCurrent + 1408LL) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  if ( (v16 & 7) == 7 || (v16 & 6) != 0 && (v17 = gptiCurrent, *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL)) )
  {
    if ( v186 )
    {
      if ( *(_QWORD *)(v12 + 16) != gptiCurrent )
        goto LABEL_22;
      v18 = v12;
    }
    else
    {
      if ( a2 )
        goto LABEL_22;
      v18 = 0LL;
    }
    xxxUpdateInputHangInfo(v18, 1LL);
  }
LABEL_22:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
  v20 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v20 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v20 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  v21 = *(_QWORD *)(gptiCurrent + 424LL);
  v22 = gcSysExpunge;
  if ( *(_DWORD *)(v21 + 400) != gcSysExpunge )
  {
    *(_DWORD *)(v21 + 400) = gcSysExpunge;
    LODWORD(v21) = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 404LL);
    if ( ((unsigned int)v21 & *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy) != 0 )
      xxxDoSysExpunge(gptiCurrent);
  }
  v182 = a5 & 1;
  v23 = v178;
  if ( (a5 & 1) != 0 && (v178 & 0x1CBF) != 0 && (*(_DWORD *)(gptiCurrent + 1232LL) & 0x80000) != 0 )
  {
    LODWORD(v21) = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL);
    if ( ((unsigned int)v21 & v178) != 0 )
    {
      v21 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464);
      if ( !*(_QWORD *)(v21 + 56) )
      {
        v21 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464);
        if ( !*(_QWORD *)(v21 + 48) )
          TryAttachShellFrame(gptiCurrent, v22);
      }
    }
  }
  v24 = *(_QWORD *)(gptiCurrent + 432LL);
  v25 = *(_QWORD *)(v24 + 64);
  if ( *(_QWORD *)(gptiCurrent + 512LL)
    || v25 == gptiCurrent && *(_QWORD *)(v24 + 72) == *(_QWORD *)(gptiCurrent + 576LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_qqq(
        v21,
        v22,
        18,
        15,
        (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
        v24,
        gptiCurrent,
        *(_QWORD *)(v24 + 64));
    }
    v210 = 1;
  }
  else
  {
    v26 = *(_QWORD *)(v24 + 64);
    if ( !v25 || *(_DWORD *)(v25 + 900) || !PhkFirstGlobalValid(gptiCurrent, 1LL) )
      goto LABEL_46;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v27) = 4;
      WPP_RECORDER_SF_qqq(
        v28,
        v27,
        18,
        16,
        (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
        v24,
        gptiCurrent,
        v29);
    }
  }
  v26 = 0LL;
  *(_QWORD *)(v24 + 64) = 0LL;
LABEL_46:
  if ( v26 != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 448LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 872LL) = 0;
  v193 = a5 & 2;
  if ( (a5 & 2) == 0 )
  {
    v30 = *(_DWORD *)(gptiCurrent + 488LL);
    if ( (v30 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 28LL) = v30 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x80000u;
    }
  }
  v31 = v178 & 0xFFBF;
  v190 = ~(v178 & 0xFFBF);
LABEL_52:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            v187 = 0LL;
            *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL);
            if ( *(_QWORD *)(gptiCurrent + 456LL) == gpdeskRecalcQueueAttach )
            {
              gpdeskRecalcQueueAttach = 0LL;
              if ( *(_QWORD *)(gptiCurrent + 456LL) )
              {
                if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464) + 48LL)
                  && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464) + 56LL) )
                {
                  zzzReattachThreads(2, 0LL, 0LL);
                }
              }
            }
            v32 = *(_QWORD *)(gptiCurrent + 448LL);
            *(_WORD *)(gptiCurrent + 872LL) |= *(_WORD *)(v32 + 4) & v31;
            *(_WORD *)(v32 + 4) &= v190;
            j = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL);
            if ( (j & 0x40) != 0 )
            {
              if ( ((unsigned __int8)v23 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 0x40) == 0 )
              {
                v10 |= 0x80u;
                v179 = v10;
                goto LABEL_170;
              }
              do
                xxxReceiveMessage(gptiCurrent);
              while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 0x40) != 0 );
            }
            LOBYTE(j) = v197 != 0;
            if ( v197 != 0 && (v23 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1124LL) )
            {
              do
              {
                *(_DWORD *)(gptiCurrent + 1124LL) = 0;
                for ( i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1088LL));
                      i;
                      i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1088LL)) )
                {
                  xxxNotifyCaptureChangeIfCaptured(i, v35, v36);
                }
              }
              while ( *(_DWORD *)(gptiCurrent + 1124LL) );
            }
            if ( *(_QWORD *)(gptiCurrent + 1464LL) && (v23 & 8) != 0 )
            {
              CurrentThread = KeGetCurrentThread();
              v38 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(j)
                || (CurrentProcess = PsGetCurrentProcess(v40, v39, v41),
                    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                    CurrentThreadProcess = PsGetCurrentThreadProcess(v44),
                    ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
              {
                ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
                if ( ThreadWin32Thread )
                  v38 = *ThreadWin32Thread;
              }
              memset(v206, 0, 32);
              v194 = 0;
              v199 = 0LL;
              v47 = 0;
              ZwSetIoCompletionEx(v38[178], v38[182], 0LL, 2LL, 0, 0LL);
              while ( 1 )
              {
                while ( 1 )
                {
                  LOBYTE(v177) = 0;
                  v48 = ZwRemoveIoCompletionEx(v38[178], v206, 1LL, &v194, &v199, v177);
                  v49 = 0;
                  if ( !v48 )
                    break;
                  if ( v48 == 258 )
                    goto LABEL_74;
LABEL_85:
                  if ( v49 != 4 )
                  {
LABEL_74:
                    if ( v47 )
                      ZwAssociateWaitCompletionPacket(v38[181], v38[178], v38[180], 0LL, 1LL, 0, 0LL, 0LL);
                    v15 = v181;
                    goto LABEL_77;
                  }
                }
                if ( DWORD2(v206[0]) != 1 )
                {
                  if ( DWORD2(v206[0]) == 2 )
                    goto LABEL_74;
                  if ( !DWORD2(v206[0]) && v38[183] )
                  {
                    v49 = DWORD2(v206[0]) + 4;
                    xxxHandleCoreMessagingQueueCompletion((__int64)v38, (ULONG64 *)v206, 1);
                  }
                  goto LABEL_85;
                }
                v47 = 1;
              }
            }
LABEL_77:
            v50 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL);
            v51 = v178 & v50;
            if ( (v178 & v50) == 0 )
            {
              v10 |= 0x100u;
              v179 = v10;
LABEL_169:
              v23 = v178;
LABEL_170:
              v74 = *(_QWORD *)(gptiCurrent + 432LL);
              if ( *(_QWORD *)(v74 + 64) == gptiCurrent )
              {
                *(_QWORD *)(v74 + 72) = 0LL;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v74) = 4;
                  WPP_RECORDER_SF_qqq(
                    *(_QWORD *)(gptiCurrent + 432LL),
                    v74,
                    18,
                    17,
                    (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
                    *(_QWORD *)(gptiCurrent + 432LL),
                    gptiCurrent,
                    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL));
                }
                *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = 0LL;
                **(_DWORD **)(gptiCurrent + 448LL) &= ~1u;
                v210 = 1;
                v74 = *(_QWORD *)(gptiCurrent + 432LL);
              }
              else if ( !v210 )
              {
                goto LABEL_237;
              }
              if ( *(_DWORD *)(v74 + 392) > 1u )
              {
                v106 = 0LL;
                LOWORD(v107) = 0;
                CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v207, v74);
                v108 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 24LL);
                if ( v108 )
                {
                  if ( (*(_DWORD *)(v108 + 100) & 0x10) == 0 )
                  {
                    v109 = *(_QWORD *)(v108 + 104);
                    if ( v109 != gptiCurrent )
                    {
                      v106 = *(_QWORD *)(v108 + 104);
                      if ( v109 )
                      {
                        v110 = CalcWakeMask(*(unsigned int *)(v108 + 24), *(unsigned int *)(v108 + 24), 0LL);
                        v112 = -8265;
                        if ( *(_DWORD *)(v113 + 96) )
                          v112 = -73;
                        v114 = v112 & v110;
                        v107 = v114 & 0xFFFFFF7F;
                        if ( v111 == 786 )
                          v107 = v114;
                        j = v107 & *(_WORD *)(*(_QWORD *)(v106 + 448) + 4LL);
                        if ( (_DWORD)j == v107 )
                          v106 = 0LL;
                      }
                    }
                  }
                }
                if ( v106 )
                  SetWakeBit(v106, v107);
              }
LABEL_237:
              if ( a6 )
              {
                v115 = 0;
                if ( v186 )
                {
                  v116 = WaitMaskIncludesUserInput(v23);
                  v117 = v189;
                  if ( v116 && *((_QWORD *)v189 + 2) == gptiCurrent )
                  {
                    v115 = 1;
                    xxxUpdateInputHangInfo(v189, 0LL);
                  }
                  v118 = xxxRealSleepThread(v23, 0, 1, 0, 0LL);
                  if ( v115 )
                    xxxUpdateInputHangInfo(v117, 1LL);
                }
                else
                {
                  v188 = 0;
                  v119 = *(_QWORD *)(gptiCurrent + 432LL);
                  v120 = *(_QWORD *)(v119 + 72);
                  v203 = *(_QWORD *)(v119 + 64);
                  if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) == 0
                    || *(_DWORD *)(v119 + 392) <= 1u
                    || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464) + 48LL)
                    || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464) + 56LL)
                    || IsAdaptiveQueueDetachExempted(gptiCurrent, v121, v122) )
                  {
                    v123 = 0;
                  }
                  else
                  {
                    v123 = 1;
                    v115 = gdwMDAQTimeoutDefenseInDepth;
                  }
                  v124 = 0;
                  if ( !v123 )
                    v124 = v180;
                  v180 = v124;
                  v125 = v124;
                  v126 = 0;
                  if ( !v123 )
                    v126 = v184;
                  v184 = v126;
                  v127 = v126;
                  v128 = 0;
                  if ( !v123 )
                    v128 = v185;
                  v185 = v128;
                  v129 = v128;
                  v118 = xxxSleepThread2(v178, v115, 1, 0, (enum SLEEP_STATUS *)&v188);
                  v132 = 0;
                  if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) != 0 )
                  {
                    j = *(_QWORD *)(gptiCurrent + 432LL);
                    if ( *(_DWORD *)(j + 392) > 1u )
                    {
                      j = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464);
                      if ( !*(_QWORD *)(j + 48) )
                      {
                        j = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464);
                        if ( !*(_QWORD *)(j + 56) && !IsAdaptiveQueueDetachExempted(gptiCurrent, v130, v131) )
                          v132 = 1;
                      }
                    }
                  }
                  if ( v132 )
                  {
                    j = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
                    if ( j == *(_QWORD *)(gptiCurrent + 1392LL) || (v185 = v129, v184 = v127, v180 = v125, !j) )
                    {
                      v185 = v129;
                      v184 = v127;
                      v180 = v125;
                      if ( v188 )
                      {
                        v151 = SlowAppThreadInShellFrame(gptiCurrent, v203, v120, v188 == 2);
                        v9 = 0LL;
                        if ( v151 )
                          TryDetachShellFrame(gptiCurrent, v151, v188 == 2, 0LL);
                        v185 = v129;
                        v184 = v127;
                        v180 = v125;
                        v11 = 1;
                        v10 = v179;
                        v23 = v178;
                        v15 = v181;
                        v31 = v178 & 0xFFBF;
                        continue;
                      }
                    }
                  }
                  v9 = 0LL;
                  v11 = 1;
                  v23 = v178;
                }
                if ( v118 )
                {
                  v10 = 0;
                  v179 = 0;
                  v15 = v181;
                  v31 = v178 & 0xFFBF;
                  continue;
                }
                v10 = v179 | 0x10000;
                goto LABEL_399;
              }
              if ( v193 )
              {
LABEL_399:
                v134 = a1;
                goto LABEL_400;
              }
              v156 = PsGetCurrentProcessWin32Process(j);
              *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
              if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
              {
                j = *(_QWORD *)(gptiCurrent + 616LL);
                if ( *(_QWORD *)(j + 24) )
                {
                  EtwTraceWakeInputIdle(0LL, gptiCurrent);
                  v157 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
                  j = *(_QWORD *)(v157 + 32);
                  if ( j )
                  {
                    if ( j != -1 )
                    {
                      KeSetEvent((PRKEVENT)j, 1, 0);
                      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
                      j = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
                      *(_QWORD *)(j + 32) = -1LL;
                    }
                  }
                  else
                  {
                    *(_QWORD *)(v157 + 32) = -1LL;
                  }
                }
                goto LABEL_395;
              }
              v158 = *(_QWORD *)(gptiCurrent + 424LL);
              if ( !*(_QWORD *)(v158 + 328) )
              {
                *(_QWORD *)(v158 + 328) = gptiCurrent;
                v158 = *(_QWORD *)(gptiCurrent + 424LL);
              }
              if ( *(_QWORD *)(v158 + 328) != gptiCurrent )
                goto LABEL_395;
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              j = *(_QWORD *)(v156 + 16);
              if ( j )
              {
                if ( j == -1 )
                {
LABEL_395:
                  v159 = *(_DWORD *)(v156 + 12);
                  if ( (v159 & 4) != 0 )
                  {
                    *(_DWORD *)(v156 + 12) = v159 & 0xFFFFFFFB;
                    zzzCalcStartCursorHide(0LL, 0LL);
                  }
                  while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 0x40) != 0 )
                    xxxReceiveMessage(gptiCurrent);
                  goto LABEL_399;
                }
                KeSetEvent((PRKEVENT)j, 1, 0);
                ObfDereferenceObject(*(PVOID *)(v156 + 16));
              }
              *(_QWORD *)(v156 + 16) = -1LL;
              goto LABEL_395;
            }
            break;
          }
          j = *(_QWORD *)(gptiCurrent + 432LL);
          if ( *(_QWORD *)(j + 64) != gptiCurrent || (*(_DWORD *)(j + 388) & 0x400) == 0 )
            goto LABEL_96;
          EtwTraceInputQueueNoRemoveLocker();
          if ( (v51 & 0x3C07) == 0 )
          {
            if ( (v50 & 0x2000) != 0 )
            {
              v10 |= 0x200u;
              v179 = v10;
              goto LABEL_169;
            }
LABEL_96:
            v52 = v189;
            goto LABEL_97;
          }
          v176 = v15;
          v52 = v189;
          v53 = xxxScanSysQueue(gptiCurrent, a1, v189, a3);
          if ( v53 == 1 )
          {
            v133 = 2;
            v134 = a1;
            goto LABEL_273;
          }
          if ( !v53 )
            UnblockDeferredInput(gptiCurrent);
LABEL_97:
          if ( (v51 & 8) == 0
            || !(unsigned int)xxxReadPostMessage(
                                gptiCurrent,
                                (struct tagMSG *)a1,
                                v52,
                                a3,
                                v181,
                                (struct _QMSG_POSTCHAR_FLAGS *)&v192,
                                v182) )
          {
            if ( v189 == (struct tagWND *)1 )
            {
              v10 |= 0x400u;
              v179 = v10;
              goto LABEL_169;
            }
            if ( (v51 & 0x3C07) != 0 )
            {
              v176 = v181;
              v55 = v189;
              v134 = a1;
              v56 = xxxScanSysQueue(gptiCurrent, a1, v189, a3);
              if ( v56 == 2 )
              {
                if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) && (v51 & 1) != 0 && a6 )
                {
                  v57 = 0;
                  if ( v185 )
                    v57 = v180;
                  v180 = v57;
                  v58 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  if ( v185 )
                    v58 = v184;
                  v184 = v58;
                  v59 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  if ( v185 )
                    v59 = v185;
                  v185 = v59;
                  v60 = v59;
                  v61 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v59;
                  if ( v61 < 0xFA )
                  {
                    v23 = v178;
                    xxxSleepThread2(v178, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v188);
                    ++v180;
                    v15 = v181;
                    v31 = v178 & 0xFFBF;
                    continue;
                  }
                  v185 = v59;
                  if ( v58 == v59 )
                  {
                    TraceLoggingSysQueueLockedRetryFailed(v57, v61);
                    v184 = 0;
                    v185 = v60;
                  }
                }
              }
              else
              {
                v184 = 0;
                v180 = 0;
                v185 = 0;
                if ( v56 == 1 )
                {
                  v133 = 2;
                  goto LABEL_273;
                }
              }
            }
            else
            {
              if ( (v50 & 0x2000) != 0 )
              {
                v10 |= 0x800u;
                v179 = v10;
                goto LABEL_169;
              }
              v55 = v189;
              v134 = a1;
            }
            j = *(_QWORD *)(gptiCurrent + 448LL);
            v62 = *(_WORD *)(j + 6) & 0x40;
            LOWORD(v63) = v178;
            if ( ((unsigned __int8)v178 & (unsigned __int8)*(_WORD *)(j + 6) & 0x40) != 0 )
            {
              if ( v62 )
              {
                do
                {
                  xxxReceiveMessage(gptiCurrent);
                  j = *(_QWORD *)(gptiCurrent + 448LL);
                }
                while ( (*(_BYTE *)(j + 6) & 0x40) != 0 );
                LOWORD(v63) = v178;
              }
            }
            else if ( v62 )
            {
              v10 |= 0x1000u;
              v179 = v10;
              goto LABEL_169;
            }
            LOWORD(v64) = *(_WORD *)(j + 6);
            if ( ((unsigned __int16)v63 & (unsigned __int16)v64) == 0 )
            {
              v10 |= 0x2000u;
              v179 = v10;
              goto LABEL_169;
            }
            if ( ((unsigned __int8)v63 & (unsigned __int8)v64 & 0x20) != 0 )
            {
              if ( (unsigned int)xxxDoPaint(v55, v134) )
              {
                v133 = 4;
                goto LABEL_273;
              }
              LOBYTE(v63) = v178;
            }
            if ( v193 )
            {
LABEL_159:
              if ( ((unsigned __int8)v64 & (unsigned __int8)v63 & 0x10) != 0 )
              {
                v72 = *(__int64 **)(gptiCurrent + 1216LL);
                if ( v72 != (__int64 *)(gptiCurrent + 1216LL) )
                {
                  while ( 1 )
                  {
                    if ( (*(_DWORD *)(v72 - 1) & 0x1000) != 0 )
                    {
                      v191 = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1292LL);
                    }
                    else
                    {
                      v73 = (struct tagWND *)v72[4];
                      if ( !v55 || v55 == v73 || (unsigned int)IsChild(v55, v73) )
                      {
                        if ( (gdwExtraInstrumentations & 2) != 0 )
                        {
                          v75 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                          v76 = v75 - *((_DWORD *)v72 + 18);
                          v77 = dword_1C033B0E4;
                          if ( !dword_1C033B0E4 )
                            v77 = v75;
                          dword_1C033B0E4 = v77;
                          v78 = 0;
                          v79 = L"\n";
                          do
                          {
                            if ( *((_DWORD *)v72 - 4) <= *(_DWORD *)v79 )
                              break;
                            ++v78;
                            v79 += 2;
                          }
                          while ( v78 < 7 );
                          v80 = v78 + 8LL * gTimerCoalCurrentState;
                          ++gaTimerDeliveryDistribution[2 * v80];
                          v81 = v76 - *((_DWORD *)v72 - 4) + gaTimerDeliveryDistribution[2 * v80 + 1];
                          gaTimerDeliveryDistribution[2 * v80 + 1] = v81;
                          if ( gaTimerDeliveryDistribution[2 * v80] >= 0x7FFFFFFFu
                            || v81 >= 0x3FFFFFFF
                            || (unsigned int)(v75 - v77) >= 0xEA60 )
                          {
                            v82 = 0LL;
                            if ( gSessionId != gServiceSessionId )
                              v82 = 16LL;
                            dword_1C0339C98 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v82);
                            v83 = 4LL;
                            if ( gSessionId != gServiceSessionId )
                              v83 = 20LL;
                            dword_1C0339CD8 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v83);
                            v84 = 8LL;
                            if ( gSessionId != gServiceSessionId )
                              v84 = 24LL;
                            dword_1C0339D18 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v84);
                            v85 = 12LL;
                            if ( gSessionId != gServiceSessionId )
                              v85 = 28LL;
                            dword_1C0339D58 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v85);
                            v176 = 32;
                            EtwTraceTimerDelayStatistics((unsigned int)gSessionId, 8LL, 4LL, L"\n");
                            dword_1C033B0E4 = v75;
                            memset(gaTimerDeliveryDistribution, 0, 0x100uLL);
                          }
                        }
                        v86 = *((_DWORD *)v72 + 19);
                        if ( *((_DWORD *)v72 + 18) == v86 )
                          *((_DWORD *)v72 + 18) = v86;
                        if ( *(_DWORD *)(gptiCurrent + 824LL) < gUserPostMessageLimit )
                        {
                          v87 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
                          v88 = v87;
                          if ( v87 )
                          {
                            memset(v87, 0, 0xA0uLL);
                            v92 = 8;
                            if ( *(_DWORD *)(gptiCurrent + 828LL) != 2 )
                              v92 = 4;
                            v88[25] |= v92;
                            v93 = *(_QWORD **)(gptiCurrent + 816LL);
                            if ( v93 )
                            {
                              *v93 = v88;
                              *((_QWORD *)v88 + 1) = *(_QWORD *)(gptiCurrent + 816LL);
                            }
                            else
                            {
                              *(_QWORD *)(gptiCurrent + 808LL) = v88;
                            }
                            *(_QWORD *)(gptiCurrent + 816LL) = v88;
                            v94 = *(_DWORD *)(gptiCurrent + 824LL) + 1;
                            *(_DWORD *)(gptiCurrent + 824LL) = v94;
                            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                              WPP_RECORDER_SF_qqdd(
                                (unsigned int)&WPP_RECORDER_INITIALIZED,
                                v89,
                                v90,
                                v91,
                                v176,
                                (char)v88,
                                gptiCurrent + 40,
                                *(_DWORD *)(gptiCurrent + 828LL),
                                v94);
                            v95 = v72[4];
                            if ( v95 )
                            {
                              v96 = *(_DWORD *)(*(_QWORD *)(v95 + 40) + 288LL);
                            }
                            else
                            {
                              v97 = *(_QWORD *)(gptiCurrent + 432LL);
                              v98 = *(_QWORD *)(v97 + 120);
                              if ( v98 )
                                v99 = *(_QWORD *)(v98 + 16);
                              else
                                v99 = *(_QWORD *)(v97 + 96);
                              v96 = *(_DWORD *)(*(_QWORD *)(v99 + 424) + 280LL);
                            }
                            if ( (*(_DWORD *)(v72 - 1) & 2) == 0 || (v100 = 280LL, !*(v72 - 3)) )
                              v100 = *(v72 - 3);
                            v101 = 280;
                            if ( (*(_DWORD *)(v72 - 1) & 2) == 0 )
                              v101 = 275;
                            StoreQMessage(
                              (struct tagQMSG *)v88,
                              (struct tagWND *)v95,
                              v101,
                              v72[5],
                              v100,
                              0,
                              0LL,
                              0,
                              0LL,
                              0,
                              0LL,
                              v96,
                              0LL,
                              0LL);
                            if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
                            {
                              *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) |= 0x108u;
                              *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL) |= 0x108u;
                              if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) & 0x108) != 0 )
                                KeSetEvent(*(PRKEVENT *)(gptiCurrent + 736LL), 2, 0);
                            }
                          }
                          else
                          {
                            UserSetLastError(8LL);
                          }
                        }
                        else
                        {
                          UserSetLastError(1816LL);
                        }
                        DecTimerCountAndClearReadyFlag((struct tagTIMER *)(v72 - 7));
                        v102 = v72 + 2;
                        v103 = *v102;
                        v104 = (_QWORD *)v102[1];
                        if ( *(_QWORD **)(*v102 + 8LL) != v102
                          || (_QWORD *)*v104 != v102
                          || (*v104 = v103,
                              *(_QWORD *)(v103 + 8) = v104,
                              v105 = (_QWORD *)gtmrListHead[1],
                              *v105 != gtmrListHead[0]) )
                        {
                          __fastfail(3u);
                        }
                        *v102 = gtmrListHead[0];
                        v102[1] = v105;
                        *v105 = v102;
                        gtmrListHead[1] = v102;
                        v10 = v179 | 8;
                        v179 |= 8u;
                        v11 = 1;
                        v23 = v178;
                        v15 = v181;
                        v31 = v178 & 0xFFBF;
                        goto LABEL_52;
                      }
                    }
                    v72 = (__int64 *)*v72;
                    if ( v72 == (__int64 *)(gptiCurrent + 1216LL) )
                    {
                      v10 = v179;
                      break;
                    }
                  }
                }
                v11 = 1;
              }
              goto LABEL_169;
            }
            v65 = PsGetCurrentProcessWin32Process(j);
            *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
            if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
              {
                EtwTraceWakeInputIdle(0LL, gptiCurrent);
                v66 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
                v67 = *(struct _KEVENT **)(v66 + 32);
                if ( v67 )
                {
                  if ( v67 != (struct _KEVENT *)-1LL )
                  {
                    KeSetEvent(v67, 1, 0);
                    ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL) = -1LL;
                  }
                }
                else
                {
                  *(_QWORD *)(v66 + 32) = -1LL;
                }
              }
            }
            else
            {
              v68 = *(_QWORD *)(gptiCurrent + 424LL);
              if ( !*(_QWORD *)(v68 + 328) )
              {
                *(_QWORD *)(v68 + 328) = gptiCurrent;
                v68 = *(_QWORD *)(gptiCurrent + 424LL);
              }
              if ( *(_QWORD *)(v68 + 328) == gptiCurrent )
              {
                EtwTraceWakeInputIdle(0LL, gptiCurrent);
                v69 = *(struct _KEVENT **)(v65 + 16);
                if ( v69 )
                {
                  if ( v69 == (struct _KEVENT *)-1LL )
                    goto LABEL_147;
                  KeSetEvent(v69, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(v65 + 16));
                }
                *(_QWORD *)(v65 + 16) = -1LL;
              }
            }
LABEL_147:
            v70 = *(_DWORD *)(v65 + 12);
            if ( (v70 & 4) != 0 )
            {
              *(_DWORD *)(v65 + 12) = v70 & 0xFFFFFFFB;
              zzzCalcStartCursorHide(0LL, 0LL);
            }
            for ( j = *(_QWORD *)(gptiCurrent + 448LL);
                  (*(_BYTE *)(j + 6) & 0x40) != 0;
                  j = *(_QWORD *)(gptiCurrent + 448LL) )
            {
              xxxReceiveMessage(gptiCurrent);
            }
            v71 = *(_WORD *)(j + 6) & 0x40;
            v63 = v178;
            if ( ((unsigned __int8)v178 & (unsigned __int8)*(_WORD *)(j + 6) & 0x40) != 0 )
            {
              if ( v71 )
              {
                do
                {
                  xxxReceiveMessage(gptiCurrent);
                  j = *(_QWORD *)(gptiCurrent + 448LL);
                }
                while ( (*(_BYTE *)(j + 6) & 0x40) != 0 );
                v63 = v178;
              }
            }
            else if ( v71 )
            {
              v10 |= 0x4000u;
              v179 = v10;
              goto LABEL_169;
            }
            v64 = *(unsigned __int16 *)(j + 6);
            if ( (v64 & v63) == 0 )
            {
              v10 |= 0x8000u;
              v179 = v10;
              goto LABEL_169;
            }
            goto LABEL_159;
          }
          break;
        }
        Feature_DeliverViaSendMessage__private_ReportDeviceUsage();
        v133 = 1;
        v134 = a1;
LABEL_273:
        v10 |= v133;
        v179 = v10;
        v135 = *(_DWORD *)(v134 + 8);
        if ( v135 != 595 || (v136 = -1LL, *(_QWORD *)(v134 + 24) != -1LL) )
          v136 = 0LL;
        v137 = ((unsigned int)(v135 - 571) <= 1
             || ((unsigned int)(v135 - 577) <= 3 || (unsigned int)(v135 - 581) <= 5 || (unsigned int)(v135 - 593) <= 2)
             && CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, gptiCurrent, v136, *(_WORD *)(v134 + 16)))
            && (*(_DWORD *)(gptiCurrent + 1232LL) & 0x2000) == 0
            && !(unsigned int)IsPTPAllowedOnThread(gptiCurrent, *(_DWORD *)(v134 + 8), *(_QWORD *)(v134 + 16));
        v138 = a5 & 1;
        if ( ((a5 & 1) == 0 || !v187 || !*(_QWORD *)(gptiCurrent + 1256LL)) && !v137 )
        {
          if ( (a5 & 1) == 0 )
          {
LABEL_308:
            if ( !v137
              && ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x10) != 0 )
            {
              xxxCallHook(0, (unsigned int)a5, v134, 3);
              v138 = a5 & 1;
            }
            goto LABEL_311;
          }
          if ( *(_DWORD *)(v134 + 8) == 258 && (*(_DWORD *)(gptiCurrent + 1344LL) & 1) != 0 && (v192 & 1) != 0 )
          {
            v139 = xxxKeyboardCorrectionCallout(v134);
            v138 = a5 & 1;
            if ( v139 == 1296 )
            {
              *(_DWORD *)(v134 + 8) = 0;
              *(_QWORD *)(v134 + 16) = 0LL;
              *(_QWORD *)(v134 + 24) = 0LL;
            }
          }
        }
        if ( !(_DWORD)v138 )
          goto LABEL_308;
        v140 = *(_DWORD *)(v134 + 8);
        if ( v140 == 258
          || v140 == 582
          || v140 == 578
          || v140 == 583
          || v140 == 579
          || (unsigned __int16)v140 >= 0xC000u )
        {
          v141 = xxxCallCtfHook(3, 0, (unsigned int)a5, v134);
          v138 = a5 & 1;
          if ( v141 )
          {
            if ( *(_DWORD *)(v134 + 8) == 258 )
            {
              *(_DWORD *)(v134 + 8) = 0;
              *(_QWORD *)(v134 + 16) = 0LL;
              *(_QWORD *)(v134 + 24) = 0LL;
            }
          }
        }
        if ( !(_DWORD)v138 || !v187 || !*(_QWORD *)(gptiCurrent + 1256LL) )
          goto LABEL_308;
LABEL_311:
        if ( (_DWORD)v138 )
        {
          v142 = *(_DWORD *)(gptiCurrent + 1120LL);
          if ( v142 )
          {
            if ( word_1C033ABB0 && qword_1C033ABB8 == gptiCurrent && dword_1C033ABB4 == v142 )
            {
              ForceCompletePendingPromotion();
              xxxProcessMousePromotionQueue();
            }
            else
            {
              *(_DWORD *)(gptiCurrent + 1120LL) = 0;
            }
          }
          v143 = *(_DWORD *)(v134 + 8);
          if ( v143 == 583
            && (*(_WORD *)(v134 + 18) & 0x2000) != 0
            && word_1C033ABB0
            && word_1C033ABB0 == *(_WORD *)(v134 + 16)
            && qword_1C033ABB8 == gptiCurrent )
          {
            *(_DWORD *)(gptiCurrent + 1120LL) = dword_1C033ABB4;
            v143 = *(_DWORD *)(v134 + 8);
          }
          v144 = 0;
          if ( ((unsigned int)(v143 - 577) <= 3 || (unsigned int)(v143 - 581) <= 0x12 && v143 != 589) && v143 != 595 )
            v144 = *(_WORD *)(v134 + 16);
          CTouchProcessor::UpdateThreadPointerList(
            gpTouchProcessor,
            (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1088LL),
            v144);
        }
        if ( v187 && (*((_DWORD *)v187 + 25) & 0x100) != 0 )
        {
          CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
            (CMultiPerObjectLockExclusivePpiPtiQ *)v183,
            gptiCurrent);
          v145 = a5 & 1;
          if ( (a5 & 1) != 0 && *(_QWORD *)(gptiCurrent + 1256LL) )
          {
            InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
              (InputTraceLogging::ThreadLockedPerfRegion *)v198,
              "Delegation",
              0LL);
            EtwTraceBeginDelegateInputCallback(v187, v134);
            InputTraceLogging::Delivery::CallDelegateThread(v187);
            InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
              (InputTraceLogging::ThreadLockedPerfRegion *)v200,
              "DelegationCallout",
              (const struct InputTraceLogging::ThreadLockedPerfRegion *)v198);
            v146 = xxxClientCallDelegateThread(
                     *(_QWORD *)(gptiCurrent + 1256LL),
                     v134,
                     *(_QWORD *)(gptiCurrent + 1264LL));
            InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v200);
            EtwTraceEndDelegateInputCallback(v187, v134);
            if ( (*((_DWORD *)v187 + 25) & 0x20) != 0 )
            {
              TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
              CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v208, TouchProcessorLock, v148);
              *((_DWORD *)v187 + 25) &= ~0x100u;
              _HandleDelegatedInputWorker(gptiCurrent, v146, v187);
              CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v208);
            }
            v10 = 0x20000;
            v179 = 0x20000;
            InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v198);
            CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v183);
            v23 = v178;
            v15 = v181;
            v31 = v178 & 0xFFBF;
            continue;
          }
          *((_DWORD *)v187 + 25) &= ~0x100u;
          CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v183);
        }
        else
        {
          v145 = a5 & 1;
        }
        break;
      }
      if ( v137 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)v201,
          "PTPDownleveling",
          0LL);
        xxxClientCallDefaultInputHandler(v134);
        *(_OWORD *)v134 = 0LL;
        *(_OWORD *)(v134 + 16) = 0LL;
        *(_OWORD *)(v134 + 32) = 0LL;
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v201);
        v23 = v178;
        v15 = v181;
        v31 = v178 & 0xFFBF;
        continue;
      }
      break;
    }
    v149 = *(_QWORD *)(v134 + 16);
    j = *(unsigned int *)(v134 + 8);
    if ( (unsigned int)(j - 577) <= 3 || (unsigned int)(j - 581) <= 0x12 && (_DWORD)j != 589 )
    {
LABEL_347:
      if ( (_WORD)v149 == 1 )
      {
        LOBYTE(v149) = 1;
        v150 = HMValidateHandleNoSecure(*(_QWORD *)v134, v149);
        v54 = v150;
        if ( v150 )
        {
          if ( !(unsigned int)IsMiPEnabledForWindow(v150) )
          {
            if ( (unsigned int)dword_1C032B3D8 > 5 )
            {
              v195 = v145;
              v196[0] = *(_DWORD *)(v134 + 8);
              v202 = v54;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                j,
                (unsigned int)&unk_1C02F2FD5,
                v138,
                v54,
                (__int64)&v202,
                (__int64)v196,
                (__int64)&v195);
            }
            if ( v145 )
              xxxClientCallDefWindowProc(v134);
            *(_OWORD *)v134 = 0LL;
            *(_OWORD *)(v134 + 16) = 0LL;
            *(_OWORD *)(v134 + 32) = 0LL;
            v179 = v10;
            v23 = v178;
            v15 = v181;
            v31 = v178 & 0xFFBF;
            continue;
          }
        }
      }
      goto LABEL_358;
    }
    break;
  }
  if ( (_DWORD)j == 528 && (_WORD)v149 == 582 )
  {
    v149 >>= 16;
    goto LABEL_347;
  }
LABEL_358:
  if ( !a6 || *(_DWORD *)(v134 + 8) != 18 )
  {
    if ( v145 )
    {
      v152 = *(_QWORD *)(gptiCurrent + 1064LL);
      if ( v152 )
      {
        v153 = HMValidateHandleNoRip(v152, 18);
        if ( v153 )
          FreeHidData(v153);
        *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
      }
      v154 = *(_QWORD *)(gptiCurrent + 1072LL);
      if ( v154 )
      {
        FreeTouchInputInfo(v154, 1LL);
        *(_QWORD *)(gptiCurrent + 1072LL) = 0LL;
      }
      j = *(_QWORD *)(gptiCurrent + 1080LL);
      if ( j )
      {
        FreeGestureInfo(j, 1LL, v138, v54);
        *(_QWORD *)(gptiCurrent + 1080LL) = 0LL;
      }
      v155 = *(_DWORD *)(v134 + 8);
      if ( v155 == 255 )
      {
        if ( *(_QWORD *)(v134 + 16) <= 1uLL )
          *(_QWORD *)(gptiCurrent + 1064LL) = *(_QWORD *)(v134 + 24);
      }
      else if ( v155 == 576 && (LOBYTE(v149) = 20, HMValidateHandle(*(_QWORD *)(v134 + 24), v149)) )
      {
        *(_QWORD *)(gptiCurrent + 1072LL) = *(_QWORD *)(v134 + 24);
      }
      else if ( ((*(_DWORD *)(v134 + 8) - 281) & 0xFFFFFFFD) == 0 )
      {
        LOBYTE(v149) = 21;
        if ( HMValidateHandle(*(_QWORD *)(v134 + 24), v149) )
          *(_QWORD *)(gptiCurrent + 1080LL) = *(_QWORD *)(v134 + 24);
      }
    }
    goto LABEL_401;
  }
  v10 |= 0x40000u;
LABEL_400:
  v11 = 0;
LABEL_401:
  if ( v186 )
    ThreadUnlock1(j);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v11 )
    {
      if ( *(_DWORD *)(v134 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) != 0 )
      {
        v161 = *(_DWORD **)(gptiCurrent + 672LL);
        if ( v161 )
        {
          if ( (v161[49] & 0x100000) != 0 && v161[82] )
          {
            v160 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                 - v161[82];
            v161[83] += v160;
            ++v161[84];
            v161[82] = 0;
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1184LL) = *(_QWORD *)v134;
      *(_DWORD *)(gptiCurrent + 1192LL) = *(_DWORD *)(v134 + 8);
      *(_QWORD *)(gptiCurrent + 1200LL) = *(_QWORD *)(v134 + 16);
      v162 = *(_QWORD *)v134;
      v163 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v160)
        || (v167 = PsGetCurrentProcess(v165, v164, v166),
            v168 = PsGetProcessSessionIdEx(v167),
            v170 = PsGetCurrentThreadProcess(v169),
            v168 == (unsigned int)PsGetProcessSessionIdEx(v170)) )
      {
        PsGetThreadWin32Thread(v163);
      }
      if ( (unsigned __int64)(unsigned __int16)v162 < *(_QWORD *)(gpsi + 8LL) )
      {
        v172 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v162 * LODWORD(gSharedInfo[2]);
        v174 = (struct tagWND **)HMPkheFromPhe(v172);
        v175 = v162 >> 16;
        if ( ((_WORD)v175 == *(_WORD *)(v172 + 26)
           || (_WORD)v175 == 0xFFFF
           || !(_WORD)v175 && PsGetCurrentProcessWow64Process(v173))
          && (*(_BYTE *)(v172 + 25) & 1) == 0
          && *(_BYTE *)(v172 + 24) == 1 )
        {
          v9 = *v174;
        }
      }
      v134 = a1;
      InputTraceLogging::Delivery::GetMessageW((const struct tagMSG *)a1, gptiCurrent, v9, v171, v182);
    }
  }
  else
  {
    v11 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v10, v134);
  return v11;
}
