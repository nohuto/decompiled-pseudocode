/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C0055460
 * Callers:
 *     NtUserPeekMessage @ 0x1C00552B0 (NtUserPeekMessage.c)
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C00E3AC0 (NtUserGetMessage.c)
 *     NtUserRealInternalGetMessage @ 0x1C00F5DD0 (NtUserRealInternalGetMessage.c)
 * Callees:
 *     FreeHidData @ 0x1C0003270 (FreeHidData.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0004870 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PhkFirstGlobalValid @ 0x1C004DAB0 (PhkFirstGlobalValid.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxSleepThread2 @ 0x1C0052D3C (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0052EC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     CalcWakeMask @ 0x1C0057150 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C0057434 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C00574C0 (xxxUpdateInputHangInfo.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C0057600 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C0057F44 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     DoTimer @ 0x1C005BF94 (DoTimer.c)
 *     xxxDoPaint @ 0x1C005C838 (xxxDoPaint.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     zzzCalcStartCursorHide @ 0x1C0073330 (zzzCalcStartCursorHide.c)
 *     xxxCallCtfHook @ 0x1C0075F08 (xxxCallCtfHook.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007EDA8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007F7CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A5D18 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     IsShellFrameHangResilient @ 0x1C00A98EC (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00A9974 (IsAdaptiveQueueDetachExempted.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00AC870 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     ?WaitMaskIncludesUserInput@@YAHI@Z @ 0x1C0110768 (-WaitMaskIncludesUserInput@@YAHI@Z.c)
 *     SlowAppThreadInShellFrame @ 0x1C0116CD4 (SlowAppThreadInShellFrame.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0123C6C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C01591BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     xxxDoSysExpungeIfNeeded @ 0x1C015D208 (xxxDoSysExpungeIfNeeded.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C016B120 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01D7140 (_FreeTouchInputInfo.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01DB7F4 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01DC5A0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z @ 0x1C01DC9AC (-xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C01DCDE0 (IsMiPEnabledForWindow.c)
 *     TryDetachShellFrame @ 0x1C01DD074 (TryDetachShellFrame.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01EBB68 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01EC0F4 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01EC350 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02137B0 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0214098 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C021F274 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeGestureInfo @ 0x1C0221710 (_FreeGestureInfo.c)
 *     xxxClientCallDefWindowProc @ 0x1C022B2E4 (xxxClientCallDefWindowProc.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C022B400 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallDelegateThread @ 0x1C022B528 (xxxClientCallDelegateThread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRealInternalGetMessage(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  int v9; // esi
  __int64 v10; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r13d
  struct tagWND *v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rcx
  bool v24; // r10
  int v25; // ecx
  int v26; // edi
  unsigned int v27; // eax
  unsigned __int8 v28; // bl
  int v29; // r14d
  unsigned int v30; // r13d
  __int64 v31; // rcx
  struct tagWND *j; // rcx
  unsigned __int64 i; // rax
  _QWORD *v34; // rbx
  _QWORD *ThreadWin32Thread; // rax
  int v36; // eax
  int v37; // edi
  unsigned int v38; // r12d
  unsigned int v39; // r13d
  int v40; // esi
  __int16 v41; // di
  __int64 v42; // rcx
  struct tagMSG *v43; // rbx
  int v44; // eax
  __int64 *v45; // rbx
  int v46; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  int v48; // eax
  unsigned __int64 v49; // rdi
  unsigned int v50; // ebx
  int v51; // r12d
  unsigned int v52; // edx
  int v53; // eax
  __int64 v54; // r13
  int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rbx
  __int64 v58; // r8
  struct _KEVENT *v59; // rcx
  __int64 v60; // rax
  struct _KEVENT *v61; // rcx
  int v62; // eax
  __int64 v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // rax
  unsigned int v66; // edx
  int v67; // eax
  unsigned int v68; // ebx
  int v69; // edi
  tagQ *v70; // rcx
  __int64 v71; // rsi
  __int64 v72; // r14
  __int64 v73; // rax
  int v74; // ecx
  __int64 v75; // rbx
  ULONG_PTR v76; // rdi
  __int64 *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  unsigned int v81; // r14d
  int v82; // ecx
  unsigned __int64 v83; // r8
  BOOL v84; // ebx
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // ecx
  unsigned __int16 v89; // r8
  int v90; // eax
  unsigned int v91; // ebx
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v93; // r8
  __int64 v94; // rax
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // rcx
  char *v98; // rax
  __int64 v99; // rcx
  int v100; // eax
  __int64 v101; // rbx
  struct _KEVENT *v102; // rcx
  __int64 v103; // rax
  struct _KEVENT *v104; // rcx
  int v105; // eax
  _DWORD *v106; // rdx
  __int64 v107; // rbx
  struct tagBWND *v108; // r9
  __int64 v109; // rdi
  __int64 v110; // rcx
  struct tagWND **v111; // rsi
  struct tagWND *v112; // rbx
  int v113; // [rsp+28h] [rbp-240h]
  int v114; // [rsp+30h] [rbp-238h]
  int v115; // [rsp+60h] [rbp-208h]
  unsigned int v116; // [rsp+64h] [rbp-204h]
  int v117; // [rsp+68h] [rbp-200h]
  unsigned int v118; // [rsp+6Ch] [rbp-1FCh]
  int v119; // [rsp+70h] [rbp-1F8h]
  int v120; // [rsp+78h] [rbp-1F0h]
  int v121; // [rsp+7Ch] [rbp-1ECh]
  struct tagWND *v122; // [rsp+80h] [rbp-1E8h]
  int v123; // [rsp+88h] [rbp-1E0h] BYREF
  struct tagQMSG *v124; // [rsp+90h] [rbp-1D8h]
  unsigned int v125; // [rsp+98h] [rbp-1D0h]
  int v126; // [rsp+9Ch] [rbp-1CCh]
  unsigned int v127; // [rsp+A8h] [rbp-1C0h]
  unsigned int v128; // [rsp+ACh] [rbp-1BCh]
  int v129; // [rsp+B0h] [rbp-1B8h]
  int v130; // [rsp+B4h] [rbp-1B4h] BYREF
  int v131; // [rsp+B8h] [rbp-1B0h]
  int v132; // [rsp+BCh] [rbp-1ACh] BYREF
  _DWORD v133[4]; // [rsp+C0h] [rbp-1A8h] BYREF
  _BYTE v134[16]; // [rsp+D0h] [rbp-198h] BYREF
  int v135; // [rsp+E0h] [rbp-188h]
  __int64 v136; // [rsp+E8h] [rbp-180h] BYREF
  _BYTE v137[8]; // [rsp+F0h] [rbp-178h] BYREF
  _BYTE v138[8]; // [rsp+F8h] [rbp-170h] BYREF
  __int64 v139; // [rsp+100h] [rbp-168h] BYREF
  __int128 v140; // [rsp+108h] [rbp-160h] BYREF
  __int64 v141; // [rsp+118h] [rbp-150h]
  __int128 v142; // [rsp+120h] [rbp-148h] BYREF
  __int64 v143; // [rsp+130h] [rbp-138h]
  _OWORD v144[3]; // [rsp+138h] [rbp-130h] BYREF
  _OWORD v145[9]; // [rsp+168h] [rbp-100h] BYREF
  _BYTE v146[112]; // [rsp+1F8h] [rbp-70h] BYREF
  char v148; // [rsp+278h] [rbp+10h]

  v140 = 0LL;
  v141 = 0LL;
  v148 = 0;
  v9 = 0;
  v123 = 0;
  v119 = 0;
  v120 = 0;
  v118 = 0;
  v115 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    a2 = 1LL;
LABEL_8:
    v10 = a2;
    v122 = (struct tagWND *)a2;
    v121 = 0;
    goto LABEL_9;
  }
  if ( a2 < 2 )
    goto LABEL_8;
  v10 = ValidateHwnd(a2);
  v122 = (struct tagWND *)v10;
  if ( !v10 )
  {
    *a1 = 0LL;
    *((_DWORD *)a1 + 2) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  *(_QWORD *)&v140 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v140;
  *((_QWORD *)&v140 + 1) = v10;
  HMLockObject(v10);
  v121 = 1;
LABEL_9:
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL);
  v12 = 0xFFFFFFFFLL;
  if ( a4 )
    v12 = a4;
  v125 = v12;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v14 = CalcWakeMask(a3, v12, WORD1(a5));
  v116 = v14;
  v129 = v14 & 0x1C07;
  if ( (v14 & 0x1C07) != 0 )
  {
    v13 = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(gptiCurrent + 1408LL) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  if ( (v14 & 7) == 7 || (v14 & 6) != 0 && (v13 = gptiCurrent, *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL)) )
  {
    if ( v121 )
    {
      if ( *(_QWORD *)(v10 + 16) != gptiCurrent )
        goto LABEL_22;
      v15 = (struct tagWND *)v10;
    }
    else
    {
      if ( a2 )
        goto LABEL_22;
      v15 = 0LL;
    }
    xxxUpdateInputHangInfo(v15);
  }
LABEL_22:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  v19 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v19 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v19 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  xxxDoSysExpungeIfNeeded(gptiCurrent, v17, v18);
  v117 = a5 & 1;
  if ( (a5 & 1) != 0
    && (v14 & 0x1CBF) != 0
    && (*(_DWORD *)(gptiCurrent + 1256LL) & 0x80000) != 0
    && (v14 & *(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL)) != 0
    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL)
    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 48LL) )
  {
    TryAttachShellFrame(gptiCurrent, v20);
  }
  v22 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(gptiCurrent + 512LL)
    || (v23 = *(_QWORD *)(v22 + 64), v23 == gptiCurrent) && *(_QWORD *)(v22 + 72) == *(_QWORD *)(gptiCurrent + 576LL) )
  {
    LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        v20,
        v21,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        18,
        15,
        (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
        v22,
        gptiCurrent,
        *(_QWORD *)(v22 + 64));
    v148 = 1;
    goto LABEL_54;
  }
  if ( v23 && !*(_DWORD *)(v23 + 900) && PhkFirstGlobalValid(gptiCurrent, 1) )
  {
    v24 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        v24,
        v21,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        18,
        16,
        (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
        v22,
        gptiCurrent,
        *(_QWORD *)(v22 + 64));
LABEL_54:
    *(_QWORD *)(v22 + 64) = 0LL;
  }
  if ( *(_QWORD *)(v22 + 64) != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 448LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 872LL) = 0;
  v126 = a5 & 2;
  if ( (a5 & 2) == 0 )
  {
    v25 = *(_DWORD *)(gptiCurrent + 488LL);
    if ( (v25 & 0x80000) != 0 )
    {
      v135 = *(_DWORD *)(gptiCurrent + 488LL);
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 28LL) = v25 & 0xFFF7FFFF;
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL), 0x2000u);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL), 0x2000u);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x80000u;
    }
  }
  v127 = v14 & 0xFFFFFFBF;
  v128 = ~(v14 & 0xFFFFFFBF);
  v26 = 0;
LABEL_61:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        v27 = v118;
        v28 = v116;
LABEL_62:
        v29 = v119;
        while ( 1 )
        {
          v30 = v27;
          v131 = v120;
          v124 = 0LL;
          _InterlockedOr(
            (volatile signed __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL),
            *(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL));
          if ( *(_QWORD *)(gptiCurrent + 456LL) == gpdeskRecalcQueueAttach )
          {
            gpdeskRecalcQueueAttach = 0LL;
            if ( *(_QWORD *)(gptiCurrent + 456LL) )
            {
              if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 48LL)
                && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL) )
              {
                zzzReattachThreads(2LL, 0LL, 0LL);
              }
            }
          }
          v31 = *(_QWORD *)(gptiCurrent + 448LL);
          *(_WORD *)(gptiCurrent + 872LL) |= (unsigned __int16)v127 & *(_WORD *)(v31 + 4);
          _InterlockedAnd((volatile signed __int32 *)(v31 + 4), v128);
          j = (struct tagWND *)*(unsigned int *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL);
          if ( ((unsigned __int8)j & 0x40) != 0 )
          {
            if ( (v28 & (unsigned __int8)*(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) & 0x40) == 0 )
            {
              v115 = v26 | 0x80;
              v38 = v26 | 0x80;
              v39 = v116;
              goto LABEL_190;
            }
            do
            {
              xxxReceiveMessage(gptiCurrent, v20, v21);
              j = (struct tagWND *)*(unsigned int *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL);
            }
            while ( ((unsigned __int8)j & 0x40) != 0 );
          }
          LOBYTE(j) = v129 != 0;
          if ( v129 != 0 && (v28 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1148LL) )
          {
            do
            {
              *(_DWORD *)(gptiCurrent + 1148LL) = 0;
              for ( i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1112LL));
                    i;
                    i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1112LL)) )
              {
                xxxNotifyCaptureChangeIfCaptured(i, (struct tagWND *)v20, v21);
              }
            }
            while ( *(_DWORD *)(gptiCurrent + 1148LL) );
            v28 = v116;
          }
          if ( *(_QWORD *)(gptiCurrent + 1464LL) && (v28 & 8) != 0 )
          {
            v34 = 0LL;
            ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( ThreadWin32Thread )
              v34 = (_QWORD *)*ThreadWin32Thread;
            memset(v144, 0, 32);
            v130 = 0;
            v136 = 0LL;
            ZwSetIoCompletionEx(v34[178], v34[182], 0LL, 2LL, 0, 0LL);
            while ( 1 )
            {
              LOBYTE(v113) = 0;
              v36 = ZwRemoveIoCompletionEx(v34[178], v144, 1LL, &v130, &v136, v113);
              v37 = 0;
              if ( v36 )
              {
                if ( v36 == 258 )
                  goto LABEL_93;
              }
              else
              {
                if ( DWORD2(v144[0]) == 1 )
                {
                  v9 = 1;
                  continue;
                }
                if ( DWORD2(v144[0]) == 2 )
                  goto LABEL_93;
                if ( !DWORD2(v144[0]) && v34[183] )
                {
                  v37 = DWORD2(v144[0]) + 4;
                  xxxHandleCoreMessagingQueueCompletion(v34, v144, (unsigned int)(DWORD2(v144[0]) + 1));
                }
              }
              if ( v37 != 4 )
              {
LABEL_93:
                if ( v9 )
                  ZwAssociateWaitCompletionPacket(v34[181], v34[178], v34[180], 0LL, 1LL, 0, 0LL, 0LL);
                break;
              }
            }
          }
          v40 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL);
          v41 = v116 & v40;
          if ( (v116 & v40) == 0 )
          {
            v38 = v115 | 0x100;
            v115 |= 0x100u;
            v9 = 0;
            v39 = v116;
            goto LABEL_190;
          }
          v42 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( *(_QWORD *)(v42 + 64) != gptiCurrent || (*(_DWORD *)(v42 + 388) & 0x400) == 0 )
            goto LABEL_110;
          EtwTraceInputQueueNoRemoveLocker();
          if ( (v41 & 0x3C07) == 0 )
          {
            if ( (v40 & 0x2000) != 0 )
            {
              v38 = v115 | 0x200;
              v115 |= 0x200u;
              v9 = 0;
              v39 = v116;
              goto LABEL_190;
            }
            goto LABEL_110;
          }
          v114 = v41 & 0x3C07;
          v43 = (struct tagMSG *)a1;
          v44 = xxxScanSysQueue(gptiCurrent, a1, v122, a3, v125, a5);
          if ( v44 == 1 )
            goto LABEL_146;
          if ( !v44 && (*(_DWORD *)(gptiCurrent + 1256LL) & 0x20000000) != 0 )
          {
            v45 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 24LL);
            if ( v45 )
            {
              while ( 1 )
              {
                v46 = *((_DWORD *)v45 + 25);
                if ( ((v46 & 0x2000) != 0 || (v46 & 0x4000) != 0) && v45[13] == gptiCurrent )
                  break;
                v45 = (__int64 *)*v45;
                if ( !v45 )
                  goto LABEL_108;
              }
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              if ( (unsigned int)RIMQpcCountToMilliSecs(PerformanceCounter.QuadPart - v45[16]) > 0x2710 )
              {
                HandleDeferredInput(gptiCurrent, 4LL);
                goto LABEL_110;
              }
LABEL_108:
              if ( v45 )
                goto LABEL_110;
            }
            *(_DWORD *)(gptiCurrent + 1256LL) &= ~0x20000000u;
LABEL_110:
            v43 = (struct tagMSG *)a1;
          }
          if ( (v41 & 8) == 0 )
            goto LABEL_123;
          if ( (unsigned int)xxxReadPostMessage(gptiCurrent, v43, v122, a3, v125, v117) )
            break;
          j = v122;
          if ( v122 || (v20 = v125, a3 <= v125) && v125 >= 0x200 && a3 <= 0x20E && (a3 || v125 != -1) && a3 > 0x60 )
          {
            if ( (*(_DWORD *)(gptiCurrent + 1256LL) & 0x20000000) != 0 )
            {
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_DeliverDespiteMessageFilter__private_reporting,
                0x1C8CE4Du,
                0LL,
                0LL,
                (const struct FEATURE_LOGGED_TRAITS *)&Feature_DeliverDespiteMessageFilter_logged_traits,
                1,
                v114);
              memset(v145, 0, 48);
              if ( (unsigned int)xxxReadPostMessage(gptiCurrent, (struct tagMSG *)v145, 0LL, 0x60u, 0x60u, 1) )
                xxxSendPostedMessage((const struct tagMSG *)v145, (struct tagMSG *)v145);
LABEL_123:
              j = v122;
            }
          }
          if ( j == (struct tagWND *)1 )
          {
            v38 = v115 | 0x400;
            v115 |= 0x400u;
            v9 = 0;
            v39 = v116;
            goto LABEL_190;
          }
          if ( (v41 & 0x3C07) == 0 )
          {
            if ( (v40 & 0x2000) != 0 )
            {
              v38 = v115 | 0x800;
              v115 |= 0x800u;
              v9 = 0;
              v39 = v116;
              goto LABEL_190;
            }
LABEL_149:
            v9 = 0;
LABEL_150:
            v29 = v119;
            goto LABEL_151;
          }
          v114 = v41 & 0x3C07;
          v48 = xxxScanSysQueue(gptiCurrent, v43, v122, a3, v125, a5);
          if ( v48 == 2 )
          {
            if ( !(unsigned int)IsShellFrameHangResilient(gptiCurrent) || (v41 & 1) == 0 )
              goto LABEL_149;
            v9 = 0;
            if ( a6 )
            {
              v49 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              v50 = 0;
              if ( v29 )
                v50 = v30;
              v118 = v50;
              v51 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              if ( v29 )
                v51 = v131;
              v120 = v51;
              if ( v29 )
                LODWORD(v49) = v29;
              v119 = v49;
              v52 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v49;
              if ( v52 < 0xFA )
              {
                v28 = v116;
                xxxSleepThread2(v116, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v123);
                v27 = ++v118;
                v119 = v49;
                v120 = v51;
                v26 = v115;
                goto LABEL_62;
              }
              if ( v51 == (_DWORD)v49 )
              {
                TraceLoggingSysQueueLockedRetryFailed(v50, v52);
                v120 = 0;
                v119 = v49;
                v118 = v50;
              }
            }
            goto LABEL_150;
          }
          v9 = 0;
          v120 = 0;
          v118 = 0;
          v29 = 0;
          v119 = 0;
          if ( v48 == 1 )
          {
LABEL_146:
            v53 = 2;
            v54 = (__int64)a1;
            goto LABEL_248;
          }
LABEL_151:
          j = *(struct tagWND **)(gptiCurrent + 448LL);
          v20 = *((_DWORD *)j + 2) & 0x40;
          v39 = v116;
          if ( ((unsigned __int8)v116 & *((_BYTE *)j + 8) & 0x40) != 0 )
          {
            if ( (_DWORD)v20 )
            {
              do
              {
                xxxReceiveMessage(gptiCurrent, v20, v21);
                j = *(struct tagWND **)(gptiCurrent + 448LL);
              }
              while ( (*((_DWORD *)j + 2) & 0x40) != 0 );
            }
          }
          else if ( (_DWORD)v20 )
          {
            v38 = v115 | 0x1000;
            v115 |= 0x1000u;
            goto LABEL_190;
          }
          v55 = *((_DWORD *)j + 2);
          if ( (v116 & v55) == 0 )
          {
            v38 = v115 | 0x2000;
            v115 |= 0x2000u;
            goto LABEL_190;
          }
          if ( ((unsigned __int8)v116 & (unsigned __int8)v55 & 0x20) != 0 )
          {
            v54 = (__int64)a1;
            if ( !(unsigned int)xxxDoPaint(v122, a1) )
            {
              v39 = v116;
              goto LABEL_161;
            }
            v53 = 4;
LABEL_248:
            v81 = 1;
            goto LABEL_249;
          }
LABEL_161:
          if ( v126 )
            goto LABEL_186;
          v57 = PsGetCurrentProcessWin32Process(j);
          *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
          if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v56 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
              v59 = *(struct _KEVENT **)(v56 + 32);
              if ( v59 )
              {
                if ( v59 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v59, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL) = -1LL;
                }
              }
              else
              {
                *(_QWORD *)(v56 + 32) = -1LL;
              }
            }
            goto LABEL_175;
          }
          v60 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( !*(_QWORD *)(v60 + 328) )
          {
            *(_QWORD *)(v60 + 328) = gptiCurrent;
            v60 = *(_QWORD *)(gptiCurrent + 424LL);
          }
          if ( *(_QWORD *)(v60 + 328) != gptiCurrent )
            goto LABEL_175;
          EtwTraceWakeInputIdle(0LL, gptiCurrent);
          v61 = *(struct _KEVENT **)(v57 + 16);
          if ( !v61 )
            goto LABEL_174;
          if ( v61 != (struct _KEVENT *)-1LL )
          {
            KeSetEvent(v61, 1, 0);
            ObfDereferenceObject(*(PVOID *)(v57 + 16));
LABEL_174:
            *(_QWORD *)(v57 + 16) = -1LL;
          }
LABEL_175:
          v62 = *(_DWORD *)(v57 + 12);
          if ( (v62 & 4) != 0 )
          {
            *(_DWORD *)(v57 + 12) = v62 & 0xFFFFFFFB;
            zzzCalcStartCursorHide(0LL, 0LL);
          }
          for ( j = *(struct tagWND **)(gptiCurrent + 448LL);
                (*((_DWORD *)j + 2) & 0x40) != 0;
                j = *(struct tagWND **)(gptiCurrent + 448LL) )
          {
            xxxReceiveMessage(gptiCurrent, v56, v58);
          }
          v20 = *((_DWORD *)j + 2) & 0x40;
          if ( ((unsigned __int8)v39 & *((_BYTE *)j + 8) & 0x40) != 0 )
          {
            if ( (_DWORD)v20 )
            {
              do
              {
                xxxReceiveMessage(gptiCurrent, v20, v58);
                j = *(struct tagWND **)(gptiCurrent + 448LL);
              }
              while ( (*((_DWORD *)j + 2) & 0x40) != 0 );
            }
          }
          else if ( (_DWORD)v20 )
          {
            v38 = v115 | 0x4000;
            v115 |= 0x4000u;
            goto LABEL_190;
          }
          v55 = *((_DWORD *)j + 2);
          if ( (v55 & v39) == 0 )
          {
            v38 = v115 | 0x8000;
            v115 |= 0x8000u;
            goto LABEL_190;
          }
LABEL_186:
          if ( ((unsigned __int8)v55 & (unsigned __int8)v39 & 0x10) == 0 || !(unsigned int)DoTimer(v122) )
          {
            v38 = v115;
LABEL_190:
            v21 = *(_QWORD *)(gptiCurrent + 432LL);
            if ( *(_QWORD *)(v21 + 64) == gptiCurrent )
            {
              *(_QWORD *)(v21 + 72) = 0LL;
              LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v20,
                  v21,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  18,
                  17,
                  (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
                  *(_QWORD *)(gptiCurrent + 432LL),
                  gptiCurrent,
                  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL));
              }
              *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = 0LL;
              **(_DWORD **)(gptiCurrent + 448LL) &= ~1u;
              v148 = 1;
              v21 = *(_QWORD *)(gptiCurrent + 432LL);
LABEL_201:
              if ( tagQ::AreMultipleThreadsAttached((tagQ *)v21) )
              {
                v63 = 0LL;
                v20 = 0LL;
                v64 = *(_QWORD *)(v21 + 24);
                if ( !v64 )
                  goto LABEL_211;
                if ( (*(_DWORD *)(v64 + 100) & 0x10) != 0 )
                  goto LABEL_211;
                v65 = *(_QWORD *)(v64 + 104);
                if ( v65 == gptiCurrent )
                  goto LABEL_211;
                v63 = *(_QWORD *)(v64 + 104);
                if ( !v65 )
                  goto LABEL_211;
                v66 = CalcWakeMask(*(unsigned int *)(v64 + 24), *(unsigned int *)(v64 + 24), 0LL);
                v67 = -8265;
                if ( *(_DWORD *)(v64 + 96) )
                  v67 = -73;
                v20 = v67 & v66;
                if ( (_DWORD)j != 786 )
                  LODWORD(v20) = v20 & 0xFFFFFF7F;
                v21 = (unsigned int)v20 & *(_DWORD *)(*(_QWORD *)(v63 + 448) + 4LL);
                if ( (_DWORD)v21 != (_DWORD)v20 )
                {
LABEL_211:
                  if ( v63 )
                    SetWakeBit(v63, v20);
                }
              }
            }
            else if ( v148 )
            {
              goto LABEL_201;
            }
            if ( !a6 )
            {
              if ( v126 )
                goto LABEL_364;
              v101 = PsGetCurrentProcessWin32Process(j);
              *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
              if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
                {
                  EtwTraceWakeInputIdle(0LL, gptiCurrent);
                  v20 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
                  v102 = *(struct _KEVENT **)(v20 + 32);
                  if ( v102 )
                  {
                    if ( v102 != (struct _KEVENT *)-1LL )
                    {
                      KeSetEvent(v102, 1, 0);
                      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL) = -1LL;
                    }
                  }
                  else
                  {
                    *(_QWORD *)(v20 + 32) = -1LL;
                  }
                }
                goto LABEL_360;
              }
              v103 = *(_QWORD *)(gptiCurrent + 424LL);
              if ( !*(_QWORD *)(v103 + 328) )
              {
                *(_QWORD *)(v103 + 328) = gptiCurrent;
                v103 = *(_QWORD *)(gptiCurrent + 424LL);
              }
              if ( *(_QWORD *)(v103 + 328) != gptiCurrent )
                goto LABEL_360;
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v104 = *(struct _KEVENT **)(v101 + 16);
              if ( v104 )
              {
                if ( v104 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v104, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(v101 + 16));
                  goto LABEL_359;
                }
              }
              else
              {
LABEL_359:
                *(_QWORD *)(v101 + 16) = -1LL;
              }
LABEL_360:
              v105 = *(_DWORD *)(v101 + 12);
              if ( (v105 & 4) != 0 )
              {
                *(_DWORD *)(v101 + 12) = v105 & 0xFFFFFFFB;
                zzzCalcStartCursorHide(0LL, 0LL);
              }
              for ( j = (struct tagWND *)*(unsigned int *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL);
                    ((unsigned __int8)j & 0x40) != 0;
                    j = (struct tagWND *)*(unsigned int *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) )
              {
                xxxReceiveMessage(gptiCurrent, v20, v21);
              }
              goto LABEL_364;
            }
            v68 = 0;
            if ( v121 )
            {
              if ( (unsigned int)WaitMaskIncludesUserInput(v39) && *((_QWORD *)v122 + 2) == gptiCurrent )
              {
                v68 = 1;
                xxxUpdateInputHangInfo(v122);
              }
              v69 = xxxRealSleepThread(v39, 0, 1, 0LL, 0LL);
              if ( v68 )
                xxxUpdateInputHangInfo(v122);
LABEL_235:
              if ( v69 )
              {
                v26 = 0;
                v115 = 0;
                goto LABEL_61;
              }
              v38 |= 0x10000u;
LABEL_364:
              v54 = (__int64)a1;
LABEL_365:
              v81 = 0;
              goto LABEL_366;
            }
            v123 = 0;
            v70 = *(tagQ **)(gptiCurrent + 432LL);
            v71 = *((_QWORD *)v70 + 9);
            v72 = *((_QWORD *)v70 + 8);
            if ( (*(_DWORD *)(gptiCurrent + 1256LL) & 0x40000) != 0
              && tagQ::AreMultipleThreadsAttached(v70)
              && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 48LL)
              && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL)
              && !(unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent) )
            {
              v68 = gdwMDAQTimeoutDefenseInDepth;
              v120 = 0;
              v118 = 0;
              v119 = 0;
            }
            v69 = xxxSleepThread2(v39, v68, 1, 0, (enum SLEEP_STATUS *)&v123);
            if ( (*(_DWORD *)(gptiCurrent + 1256LL) & 0x40000) == 0
              || !tagQ::AreMultipleThreadsAttached(*(tagQ **)(gptiCurrent + 432LL))
              || (j = *(struct tagWND **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464),
                  *((_QWORD *)j + 6))
              || (j = *(struct tagWND **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464),
                  *((_QWORD *)j + 7))
              || (unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent)
              || (j = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL),
                  j != *(struct tagWND **)(gptiCurrent + 1392LL))
              && j
              || !v123 )
            {
              v9 = 0;
              goto LABEL_235;
            }
            v96 = SlowAppThreadInShellFrame(gptiCurrent, v72, v71, v123 == 2);
            v9 = 0;
            v26 = v115;
            if ( v96 )
              TryDetachShellFrame(gptiCurrent, v96, v123 == 2, 0LL);
            goto LABEL_61;
          }
          v26 = v115 | 8;
          v115 |= 8u;
          v28 = v116;
          v27 = v118;
        }
        v54 = (__int64)a1;
        if ( (a5 & 1) != 0 )
        {
          v73 = *((unsigned int *)a1 + 2);
          if ( (unsigned int)v73 >= 0x400 )
          {
            v75 = 0LL;
            v74 = 0;
          }
          else
          {
            v74 = (unsigned __int16)MessageTable[v73] >> 15;
            v75 = 0LL;
          }
          if ( v74 )
          {
            v76 = ValidateHwnd(*a1);
            if ( v76 )
            {
              v142 = 0LL;
              v143 = 0LL;
              v77 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v77 )
                v75 = *v77;
              *(_QWORD *)&v142 = *(_QWORD *)(v75 + 416);
              *(_QWORD *)(v75 + 416) = &v142;
              *((_QWORD *)&v142 + 1) = v76;
              HMLockObject(v76);
              xxxSendMessage(v76);
              ThreadUnlock1(v79, v78, v80);
              a1[2] |= 0x80000000uLL;
            }
          }
        }
        v81 = 1;
        v53 = 1;
LABEL_249:
        v26 = v53 | v115;
        v115 |= v53;
        v82 = *(_DWORD *)(v54 + 8);
        if ( v82 == 595 && *(_QWORD *)(v54 + 24) == -1LL )
        {
          v9 = 0;
          v83 = -1LL;
        }
        else
        {
          v9 = 0;
          v83 = 0LL;
        }
        v84 = ((unsigned int)(v82 - 571) <= 1
            || ((unsigned int)(v82 - 577) <= 3 || (unsigned int)(v82 - 581) <= 5 || (unsigned int)(v82 - 593) <= 2)
            && CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, gptiCurrent, v83, *(_WORD *)(v54 + 16)))
           && (*(_DWORD *)(gptiCurrent + 1256LL) & 0x2000) == 0
           && !(unsigned int)IsPTPAllowedOnThread(gptiCurrent, *(_DWORD *)(v54 + 8), *(_QWORD *)(v54 + 16));
        v21 = a5 & 1;
        if ( (a5 & 1) == 0 )
          goto LABEL_276;
        v85 = *(_DWORD *)(v54 + 8);
        if ( v85 == 258 || v85 == 582 || v85 == 578 || v85 == 583 || v85 == 579 || (unsigned __int16)v85 >= 0xC000u )
        {
          v86 = xxxCallCtfHook(3LL, 0LL, (unsigned int)a5, v54);
          v21 = a5 & 1;
          if ( v86 )
          {
            if ( *(_DWORD *)(v54 + 8) == 258 )
            {
              *(_DWORD *)(v54 + 8) = 0;
              *(_QWORD *)(v54 + 16) = 0LL;
              *(_QWORD *)(v54 + 24) = 0LL;
            }
          }
        }
        if ( !(_DWORD)v21 || !v124 || !*(_QWORD *)(gptiCurrent + 1288LL) )
        {
LABEL_276:
          if ( !v84
            && ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x10) != 0 )
          {
            xxxCallHook(0, (unsigned int)a5, v54, 3);
            v21 = a5 & 1;
          }
        }
        if ( (_DWORD)v21 )
        {
          v87 = *(_DWORD *)(gptiCurrent + 1144LL);
          if ( v87 )
          {
            if ( word_1C0335D70 && qword_1C0335D78 == gptiCurrent && dword_1C0335D74 == v87 )
            {
              ForceCompletePendingPromotion();
              xxxProcessMousePromotionQueue();
            }
            else
            {
              *(_DWORD *)(gptiCurrent + 1144LL) = 0;
            }
          }
          v88 = *(_DWORD *)(v54 + 8);
          if ( v88 == 583
            && (*(_WORD *)(v54 + 18) & 0x2000) != 0
            && word_1C0335D70
            && word_1C0335D70 == *(_WORD *)(v54 + 16)
            && qword_1C0335D78 == gptiCurrent )
          {
            *(_DWORD *)(gptiCurrent + 1144LL) = dword_1C0335D74;
            v88 = *(_DWORD *)(v54 + 8);
          }
          v89 = 0;
          if ( ((unsigned int)(v88 - 577) <= 3 || (unsigned int)(v88 - 581) <= 0x12 && v88 != 589) && v88 != 595 )
            v89 = *(_WORD *)(v54 + 16);
          CTouchProcessor::UpdateThreadPointerList(
            gpTouchProcessor,
            (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1112LL),
            v89);
        }
        if ( v124 )
        {
          v90 = *((_DWORD *)v124 + 25);
          if ( (v90 & 0x100) != 0 )
          {
            if ( (a5 & 1) != 0 && *(_QWORD *)(gptiCurrent + 1288LL) )
            {
              InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
                (InputTraceLogging::ThreadLockedPerfRegion *)v134,
                "Delegation",
                0LL);
              EtwTraceBeginDelegateInputCallback(v124, v54);
              InputTraceLogging::Delivery::CallDelegateThread(v124);
              InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
                (InputTraceLogging::ThreadLockedPerfRegion *)v137,
                "DelegationCallout",
                (const struct InputTraceLogging::ThreadLockedPerfRegion *)v134);
              v91 = xxxClientCallDelegateThread(
                      *(_QWORD *)(gptiCurrent + 1288LL),
                      v54,
                      *(_QWORD *)(gptiCurrent + 1296LL));
              InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v137);
              EtwTraceEndDelegateInputCallback(v124, v54);
              if ( (*((_DWORD *)v124 + 25) & 0x20) != 0 )
              {
                TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
                CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v146, TouchProcessorLock, v93);
                *((_DWORD *)v124 + 25) &= ~0x100u;
                _HandleDelegatedInputWorker(gptiCurrent, v91, v124);
                CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v146);
              }
              v26 = 0x20000;
              v115 = 0x20000;
              InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v134);
              continue;
            }
            *((_DWORD *)v124 + 25) = v90 & 0xFFFFFEFF;
          }
        }
        break;
      }
      if ( v84 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)v138,
          "PTPDownleveling",
          0LL);
        xxxClientCallDefaultInputHandler(v54);
        memset(&v145[3], 0, 48);
        *(_OWORD *)v54 = 0LL;
        *(_OWORD *)(v54 + 16) = 0LL;
        *(_OWORD *)(v54 + 32) = 0LL;
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v138);
        continue;
      }
      break;
    }
    v20 = *(_QWORD *)(v54 + 16);
    j = (struct tagWND *)*(unsigned int *)(v54 + 8);
    if ( (unsigned int)((_DWORD)j - 577) <= 3 || (unsigned int)((_DWORD)j - 581) <= 0x12 && (_DWORD)j != 589 )
      goto LABEL_313;
    if ( (_DWORD)j == 528 && (_WORD)v20 == 582 )
    {
      v20 >>= 16;
LABEL_313:
      if ( (_WORD)v20 != 1 )
        break;
      v94 = HMValidateHandleNoSecure(*(_QWORD *)v54, 1);
      if ( !v94 || (unsigned int)IsMiPEnabledForWindow(v94) )
        break;
      if ( (unsigned int)dword_1C03263F8 > 5 )
      {
        v132 = a5 & 1;
        v133[0] = *(_DWORD *)(v54 + 8);
        v139 = v95;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (_DWORD)j,
          (unsigned int)&unk_1C02F013C,
          v21,
          v95,
          (__int64)&v139,
          (__int64)v133,
          (__int64)&v132);
      }
      if ( (a5 & 1) != 0 )
        xxxClientCallDefWindowProc(v54);
      memset(&v145[6], 0, 48);
      *(_OWORD *)v54 = 0LL;
      *(_OWORD *)(v54 + 16) = 0LL;
      *(_OWORD *)(v54 + 32) = 0LL;
      v115 = v26;
      continue;
    }
    break;
  }
  if ( a6 && *(_DWORD *)(v54 + 8) == 18 )
  {
    v38 = v26 | 0x40000;
    goto LABEL_365;
  }
  if ( (a5 & 1) != 0 )
  {
    v97 = *(_QWORD *)(gptiCurrent + 1088LL);
    if ( v97 )
    {
      LOBYTE(v20) = 18;
      v98 = (char *)HMValidateHandleNoRip(v97, v20);
      if ( v98 )
        FreeHidData(v98);
      *(_QWORD *)(gptiCurrent + 1088LL) = 0LL;
    }
    v99 = *(_QWORD *)(gptiCurrent + 1096LL);
    if ( v99 )
    {
      FreeTouchInputInfo(v99, 1LL);
      *(_QWORD *)(gptiCurrent + 1096LL) = 0LL;
    }
    j = *(struct tagWND **)(gptiCurrent + 1104LL);
    if ( j )
    {
      FreeGestureInfo(j, 1LL);
      *(_QWORD *)(gptiCurrent + 1104LL) = 0LL;
    }
    v100 = *(_DWORD *)(v54 + 8);
    if ( v100 == 255 )
    {
      if ( *(_QWORD *)(v54 + 16) <= 1uLL )
      {
        *(_QWORD *)(gptiCurrent + 1088LL) = *(_QWORD *)(v54 + 24);
        v38 = v26;
        goto LABEL_366;
      }
    }
    else
    {
      if ( v100 == 576 && HMValidateHandle(*(_QWORD *)(v54 + 24), 0x14u) )
      {
        *(_QWORD *)(gptiCurrent + 1096LL) = *(_QWORD *)(v54 + 24);
        v38 = v26;
        goto LABEL_366;
      }
      if ( ((*(_DWORD *)(v54 + 8) - 281) & 0xFFFFFFFD) == 0 && HMValidateHandle(*(_QWORD *)(v54 + 24), 0x15u) )
        *(_QWORD *)(gptiCurrent + 1104LL) = *(_QWORD *)(v54 + 24);
    }
  }
  v38 = v26;
LABEL_366:
  if ( v121 )
    ThreadUnlock1(j, v20, v21);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v81 )
    {
      if ( *(_DWORD *)(v54 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1256LL) & 0x40000) != 0 )
      {
        v106 = *(_DWORD **)(gptiCurrent + 672LL);
        if ( v106 )
        {
          if ( (v106[50] & 0x100000) != 0 && v106[70] )
          {
            v106[71] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v106[70];
            ++v106[72];
            v106[70] = 0;
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1208LL) = *(_QWORD *)v54;
      *(_DWORD *)(gptiCurrent + 1216LL) = *(_DWORD *)(v54 + 8);
      *(_QWORD *)(gptiCurrent + 1224LL) = *(_QWORD *)(v54 + 16);
      v107 = *(_QWORD *)v54;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v107 < *(_QWORD *)(gpsi + 8LL)
        && ((v109 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v107 * *((_DWORD *)&gSharedInfo + 4),
             v111 = (struct tagWND **)HMPkheFromPhe(v109),
             LOWORD(v107) = WORD1(v107) & 0x7FFF,
             (WORD1(v107) & 0x7FFF) == *(_WORD *)(v109 + 26))
         || (_WORD)v107 == 0x7FFF
         || !(_WORD)v107 && PsGetCurrentProcessWow64Process(v110))
        && (*(_BYTE *)(v109 + 25) & 1) == 0
        && *(_BYTE *)(v109 + 24) == 1 )
      {
        v112 = *v111;
      }
      else
      {
        v112 = 0LL;
      }
      InputTraceLogging::Delivery::GetMessageW((const struct tagMSG *)v54, gptiCurrent, v112, v108, v117);
    }
  }
  else
  {
    v81 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v38, v54);
  return v81;
}
