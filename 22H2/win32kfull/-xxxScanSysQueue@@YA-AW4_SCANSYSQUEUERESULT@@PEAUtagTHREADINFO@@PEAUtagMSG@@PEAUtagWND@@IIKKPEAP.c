/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 * Callees:
 *     LockExchangeW32Thread @ 0x1C0007B10 (LockExchangeW32Thread.c)
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     IsInsideMenuLoop @ 0x1C000E860 (IsInsideMenuLoop.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C002C89C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     xxxTrackMouseMove @ 0x1C002D520 (xxxTrackMouseMove.c)
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0038EA8 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     _PostTransformableMessage @ 0x1C003F8B8 (_PostTransformableMessage.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004B5B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     PtInRect @ 0x1C004DE1C (PtInRect.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004F2B4 (WPP_RECORDER_SF_qq.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FBD0 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     SetWakeBit @ 0x1C0051880 (SetWakeBit.c)
 *     xxxCallCtfHook @ 0x1C0052874 (xxxCallCtfHook.c)
 *     WPP_RECORDER_SF_qiqdd @ 0x1C00585D0 (WPP_RECORDER_SF_qiqdd.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     FreeQEntry @ 0x1C0065CB8 (FreeQEntry.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0066248 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     DelQEntry @ 0x1C00667AC (DelQEntry.c)
 *     IsHiddenByInputService @ 0x1C0066884 (IsHiddenByInputService.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0066A2C (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C006A1C4 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     IsThreadDesktopComposed @ 0x1C006A378 (IsThreadDesktopComposed.c)
 *     IsPointerInputMessage @ 0x1C006B2D4 (IsPointerInputMessage.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006B6A0 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C006B720 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006B87C (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006FC20 (_GetTopLevelWindow.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C0778 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00C07B8 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxDCEWindowHitTest @ 0x1C00C0FA4 (xxxDCEWindowHitTest.c)
 *     ThreadLockExchangeAlways @ 0x1C00C0FFC (ThreadLockExchangeAlways.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00C1040 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     IsMiPActive @ 0x1C00C11DC (IsMiPActive.c)
 *     IsMiPEnabledForThread @ 0x1C00C1220 (IsMiPEnabledForThread.c)
 *     ThreadLockExchange @ 0x1C00C1250 (ThreadLockExchange.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00C1298 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x1C00C13F0 (TransferWakeBit.c)
 *     CheckPwndFilter @ 0x1C00C14F0 (CheckPwndFilter.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     xxxProcessEventMessage @ 0x1C00C15B8 (xxxProcessEventMessage.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00C1CCC (WPP_RECORDER_SF_qqq.c)
 *     xxxWindowHitTest @ 0x1C00D700C (xxxWindowHitTest.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00D72C8 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetMessageWindow @ 0x1C00D7404 (GetMessageWindow.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00E5B10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F0DC8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C0100F54 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     GetThreadDesktopWindow @ 0x1C0103DD0 (GetThreadDesktopWindow.c)
 *     xxxImmProcessKey @ 0x1C01068C4 (xxxImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C0106BA4 (GetAppImeCompatFlags.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C010D500 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxCallMouseHook @ 0x1C012AC8C (xxxCallMouseHook.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0136CA8 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     xxxSnapWindow @ 0x1C016040C (xxxSnapWindow.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C01665F8 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C0166FE8 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0167424 (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 *     strcmp_0 @ 0x1C016DAF2 (strcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D1F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DF510 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DF974 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01DFF2C (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01E0234 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01E0B94 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E0CBC (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E0CE8 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C01E18C8 (IsMiPEnabledForWindow.c)
 *     SetMiPPromotion @ 0x1C01E1C0C (SetMiPPromotion.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E550C (PhysicalToLogicalInPlacePointWithParent.c)
 *     FreePointerMessageParams @ 0x1C01EF458 (FreePointerMessageParams.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F0108 (xxxRetrievePointerInputMessage.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F0AAC (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0221234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C02317E4 (xxxClientCallLocalMouseHooks.c)
 *     MNItemHitTest @ 0x1C0236668 (MNItemHitTest.c)
 *     xxxCallHandleMenuMessages @ 0x1C0236AD0 (xxxCallHandleMenuMessages.c)
 *     xxxDefPointerProc @ 0x1C0243640 (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C02438CC (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02440A4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C0251778 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0256D78 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C025CF24 (_W32ExceptionHandler.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScanSysQueue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        int a7,
        struct tagQMSG **a8)
{
  struct tagQMSG *v8; // r13
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v26; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 *v40; // rax
  struct _KTHREAD *v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // ebx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 *v51; // rax
  struct _KTHREAD *v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  int v58; // ebx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 *v62; // rax
  struct _KTHREAD *v63; // rsi
  unsigned __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  int v69; // ebx
  __int64 v70; // rcx
  __int64 v71; // rax
  struct CMultiPerObjectLockExclusivePpiPtiQ *v72; // r9
  const struct tagWND **v73; // rax
  struct tagQMSG *v74; // rdx
  struct tagQMSG *NextSysMsg; // rax
  PDEVICE_OBJECT v76; // rcx
  int v77; // eax
  unsigned __int64 v78; // r15
  struct _KTHREAD *v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  int v85; // ebx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rcx
  unsigned __int64 *v90; // rsi
  __int64 v91; // rcx
  bool v92; // zf
  __int64 v93; // rbx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // rbx
  __int64 v99; // rcx
  _QWORD *v100; // rdx
  __int64 v101; // rdx
  int v102; // eax
  int v103; // eax
  __int64 v104; // rcx
  __int64 v105; // rdi
  __int64 v106; // r8
  __int64 v107; // r10
  unsigned int v108; // r14d
  char v109; // r9
  int v110; // ebx
  bool v111; // zf
  BOOL v112; // ebx
  __int64 v113; // rcx
  unsigned int v114; // ecx
  unsigned int v115; // edx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 *v118; // rbx
  __int64 v119; // rsi
  __int64 v120; // rcx
  const struct tagWND *v121; // rbx
  unsigned __int64 MouseKeyFlags; // rsi
  __int64 v123; // rax
  unsigned __int64 v124; // rbx
  __int64 *v125; // rbx
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rcx
  unsigned int v130; // r13d
  __int64 v131; // rbx
  char v132; // dl
  struct tagQMSG *v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  int v136; // ebx
  int v137; // eax
  char v138; // bl
  __int64 v139; // rcx
  __int64 v140; // rbx
  unsigned int *v141; // rbx
  int v142; // ecx
  __int64 v143; // r8
  unsigned __int64 v144; // rdx
  int v145; // ecx
  unsigned __int64 v146; // rax
  __int64 v147; // rcx
  __int64 v148; // rax
  int v149; // ebx
  __int64 v150; // rcx
  __int64 v151; // rcx
  int v152; // eax
  __int64 v153; // r15
  __int64 v154; // rsi
  __int64 v155; // rcx
  InteractiveControlManager *v156; // rax
  int v157; // ebx
  int v158; // ebx
  __int64 v159; // rax
  struct tagWND *v160; // rbx
  HWND v161; // rbx
  struct tagWND *v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rbx
  __int64 v165; // rsi
  __int64 v166; // rbx
  _DWORD *v167; // rax
  _DWORD *v168; // rax
  int v169; // ebx
  unsigned int v170; // eax
  __int64 v171; // rcx
  char *v172; // rax
  char v173; // cl
  int v174; // eax
  unsigned int v175; // edx
  unsigned int v176; // r8d
  int v177; // ecx
  int v178; // eax
  int v179; // ebx
  int v180; // r8d
  int v181; // r9d
  __int64 v182; // rax
  __int64 *v183; // rcx
  int v184; // eax
  HWND v185; // rbx
  struct tagWND *v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rcx
  __int64 v189; // rax
  __int64 v190; // rdx
  __int64 v191; // r8
  int v192; // ebx
  unsigned int v193; // r8d
  __int64 v194; // r9
  __int64 v195; // rdx
  __int64 v196; // rax
  bool v197; // cf
  int v198; // r8d
  __int64 v199; // rax
  __int64 v200; // rax
  int v201; // eax
  __int64 v202; // rax
  const char *v203; // rcx
  int v204; // r12d
  __int64 v205; // rcx
  __int64 v206; // r13
  struct tagPOINT v207; // r8
  unsigned __int64 v208; // rbx
  int v209; // eax
  int v210; // eax
  __int64 v211; // rcx
  int v212; // ecx
  __int64 v213; // rcx
  unsigned __int16 v214; // si
  __int64 v215; // rdi
  int v216; // eax
  unsigned __int64 v217; // rdx
  unsigned __int64 v218; // rdx
  unsigned __int64 v219; // rdx
  unsigned int v220; // edi
  int v221; // esi
  __int64 v222; // rcx
  int v223; // eax
  int v224; // r13d
  __int64 v225; // rbx
  __int64 v226; // rax
  char v227; // al
  __int64 v228; // rdx
  int v229; // ecx
  __int64 v230; // rax
  __int64 v231; // r11
  int v232; // r10d
  int v233; // r9d
  int v234; // kr04_4
  int v235; // edx
  __int64 v236; // rcx
  int v237; // eax
  int v238; // ecx
  int TouchTimeFromCPLValue; // ecx
  int v240; // eax
  __int64 v241; // rcx
  unsigned int v242; // ebx
  unsigned __int64 v243; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v247; // rdx
  unsigned __int64 v248; // r8
  __int64 v249; // rcx
  struct tagQMSG *v250; // rbx
  struct tagQMSG *v251; // r8
  struct tagQMSG *v252; // r9
  __int64 v253; // rcx
  int v254; // r9d
  _DWORD *v255; // rax
  _DWORD *v256; // rax
  __int64 v257; // rax
  unsigned __int64 v258; // rbx
  __int64 v259; // rcx
  __int64 v260; // rax
  __int64 v261; // rax
  __int64 v262; // rcx
  __int64 v263; // rax
  int v264; // r13d
  const struct tagQMSG *v265; // rbx
  int v266; // ebx
  unsigned int v267; // ecx
  __int64 v268; // rbx
  int v269; // ebx
  __int64 v270; // rbx
  int v271; // ebx
  int v272; // ebx
  int v273; // ebx
  __int64 v274; // rcx
  unsigned __int64 v275; // rcx
  int v276; // ebx
  unsigned __int64 MiPWindowFlags; // rax
  int v278; // edx
  __int64 v279; // rax
  struct tagQMSG *v280; // rcx
  unsigned __int64 v281; // rax
  __int64 v282; // r8
  unsigned int v283; // edx
  __int64 v284; // r13
  unsigned int v285; // edi
  unsigned __int64 *v286; // rcx
  unsigned __int64 v287; // rax
  unsigned __int64 v288; // rax
  unsigned int v289; // r15d
  _DWORD *v290; // rax
  unsigned __int64 v291; // rax
  int v292; // eax
  __int64 v293; // rcx
  __int128 *v294; // r10
  __int128 *v295; // r9
  __int64 v296; // r8
  __int64 v297; // rdx
  __int64 v298; // rcx
  __int64 v299; // rbx
  struct _KTHREAD *v300; // rsi
  __int64 v301; // rdi
  __int64 v302; // rdx
  __int64 v303; // rcx
  __int64 v304; // r8
  __int64 v305; // rax
  int v306; // ebx
  __int64 v307; // rcx
  __int64 v308; // rax
  __int64 *v309; // rax
  __int64 v310; // rcx
  struct _KTHREAD *v311; // rsi
  __int64 v312; // rdi
  __int64 v313; // rdx
  __int64 v314; // rcx
  __int64 v315; // r8
  __int64 v316; // rax
  int v317; // ebx
  __int64 v318; // rcx
  __int64 v319; // rax
  __int64 *v320; // rax
  __int64 v321; // rcx
  struct _KTHREAD *v322; // rsi
  __int64 v323; // rdi
  __int64 v324; // rdx
  __int64 v325; // rcx
  __int64 v326; // r8
  __int64 v327; // rax
  int v328; // ebx
  __int64 v329; // rcx
  __int64 v330; // rax
  __int64 *v331; // rax
  __int64 v332; // rcx
  struct _KTHREAD *v333; // rsi
  __int64 v334; // rdi
  __int64 v335; // rdx
  __int64 v336; // rcx
  __int64 v337; // r8
  __int64 v338; // rax
  int v339; // ebx
  __int64 v340; // rcx
  __int64 v341; // rax
  __int64 *v342; // rax
  __int64 v343; // rcx
  struct _KTHREAD *v344; // rdi
  __int64 v345; // rdx
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 v348; // rax
  int v349; // ebx
  __int64 v350; // rcx
  __int64 v351; // rax
  __int64 *v352; // rax
  __int64 v353; // rcx
  __int64 v354; // [rsp+40h] [rbp-7F8h]
  __int64 v355; // [rsp+48h] [rbp-7F0h]
  int v356; // [rsp+70h] [rbp-7C8h]
  _BYTE v357[4]; // [rsp+80h] [rbp-7B8h] BYREF
  unsigned int v358[2]; // [rsp+84h] [rbp-7B4h]
  int v359; // [rsp+8Ch] [rbp-7ACh]
  int v360; // [rsp+90h] [rbp-7A8h] BYREF
  int v361; // [rsp+94h] [rbp-7A4h]
  bool v362; // [rsp+98h] [rbp-7A0h]
  unsigned int v363[3]; // [rsp+9Ch] [rbp-79Ch] BYREF
  int v364; // [rsp+A8h] [rbp-790h] BYREF
  __int64 v365; // [rsp+B0h] [rbp-788h] BYREF
  __int64 v366; // [rsp+B8h] [rbp-780h]
  struct tagWND *ThreadDesktopWindow; // [rsp+C0h] [rbp-778h] BYREF
  unsigned __int64 v368; // [rsp+C8h] [rbp-770h] BYREF
  __int64 v369; // [rsp+D0h] [rbp-768h]
  int v370; // [rsp+D8h] [rbp-760h] BYREF
  bool v371; // [rsp+DCh] [rbp-75Ch]
  bool v372; // [rsp+DDh] [rbp-75Bh]
  int v373; // [rsp+E0h] [rbp-758h]
  struct tagQMSG *v374; // [rsp+E8h] [rbp-750h]
  int v375; // [rsp+F0h] [rbp-748h]
  int v376; // [rsp+F4h] [rbp-744h]
  int v377; // [rsp+F8h] [rbp-740h]
  struct tagQMSG *v378; // [rsp+100h] [rbp-738h]
  __int64 v379; // [rsp+108h] [rbp-730h]
  int v380; // [rsp+110h] [rbp-728h]
  int v381; // [rsp+114h] [rbp-724h]
  int v382; // [rsp+118h] [rbp-720h]
  _OWORD v383[10]; // [rsp+120h] [rbp-718h] BYREF
  __int64 v384; // [rsp+1C0h] [rbp-678h]
  unsigned int v385; // [rsp+1C8h] [rbp-670h]
  int v386; // [rsp+1CCh] [rbp-66Ch]
  __int64 v387; // [rsp+1D0h] [rbp-668h]
  __int64 v388; // [rsp+1D8h] [rbp-660h]
  __int64 v389; // [rsp+1E0h] [rbp-658h]
  __int64 v390; // [rsp+1E8h] [rbp-650h]
  unsigned int v391; // [rsp+1F0h] [rbp-648h]
  __int128 v392; // [rsp+1F8h] [rbp-640h]
  __int64 v393; // [rsp+208h] [rbp-630h]
  __int64 v394; // [rsp+210h] [rbp-628h]
  __int64 v395; // [rsp+218h] [rbp-620h]
  __int64 v396; // [rsp+220h] [rbp-618h] BYREF
  unsigned __int64 v397; // [rsp+228h] [rbp-610h]
  __int64 v398; // [rsp+230h] [rbp-608h]
  __int64 v399[2]; // [rsp+238h] [rbp-600h] BYREF
  __int128 v400; // [rsp+248h] [rbp-5F0h]
  __int64 v401; // [rsp+258h] [rbp-5E0h]
  __int64 v402; // [rsp+260h] [rbp-5D8h]
  int v403; // [rsp+268h] [rbp-5D0h]
  int v404; // [rsp+26Ch] [rbp-5CCh] BYREF
  __int128 v405; // [rsp+270h] [rbp-5C8h] BYREF
  __int64 v406; // [rsp+280h] [rbp-5B8h]
  __int64 v407; // [rsp+288h] [rbp-5B0h] BYREF
  __int64 v408; // [rsp+290h] [rbp-5A8h]
  void (*v409)(void); // [rsp+298h] [rbp-5A0h]
  __int64 v410; // [rsp+2A0h] [rbp-598h] BYREF
  __int64 v411; // [rsp+2A8h] [rbp-590h]
  void (*v412)(void); // [rsp+2B0h] [rbp-588h]
  __int64 v413; // [rsp+2B8h] [rbp-580h] BYREF
  __int64 v414; // [rsp+2C0h] [rbp-578h]
  void (*v415)(void); // [rsp+2C8h] [rbp-570h]
  __int64 v416; // [rsp+2D0h] [rbp-568h]
  struct tagMENUSTATE *v417; // [rsp+2E0h] [rbp-558h] BYREF
  struct InteractiveControlDevice *v418; // [rsp+2E8h] [rbp-550h] BYREF
  struct InteractiveControlInput *v419; // [rsp+2F0h] [rbp-548h] BYREF
  __int64 v420; // [rsp+2F8h] [rbp-540h] BYREF
  __int64 v421; // [rsp+300h] [rbp-538h]
  void (*v422)(void); // [rsp+308h] [rbp-530h]
  __int64 v423; // [rsp+310h] [rbp-528h] BYREF
  __int64 v424; // [rsp+318h] [rbp-520h]
  void (*v425)(void); // [rsp+320h] [rbp-518h]
  _DWORD v426[4]; // [rsp+328h] [rbp-510h] BYREF
  __int64 v427; // [rsp+338h] [rbp-500h] BYREF
  __int64 v428; // [rsp+340h] [rbp-4F8h] BYREF
  _DWORD v429[2]; // [rsp+350h] [rbp-4E8h] BYREF
  __int128 v430; // [rsp+358h] [rbp-4E0h]
  int *v431; // [rsp+368h] [rbp-4D0h]
  int v432; // [rsp+370h] [rbp-4C8h]
  int v433; // [rsp+374h] [rbp-4C4h]
  char *v434; // [rsp+378h] [rbp-4C0h]
  __int64 v435; // [rsp+380h] [rbp-4B8h]
  __int64 v436; // [rsp+388h] [rbp-4B0h]
  __int128 v437; // [rsp+390h] [rbp-4A8h]
  __int128 v438; // [rsp+3A0h] [rbp-498h]
  __int128 v439; // [rsp+3B0h] [rbp-488h]
  __int128 v440; // [rsp+3C0h] [rbp-478h]
  __int128 v441; // [rsp+3D0h] [rbp-468h]
  __int128 v442; // [rsp+3E0h] [rbp-458h]
  __int128 v443; // [rsp+3F0h] [rbp-448h]
  _QWORD v444[3]; // [rsp+400h] [rbp-438h] BYREF
  _QWORD v445[7]; // [rsp+418h] [rbp-420h] BYREF
  __int128 v446; // [rsp+450h] [rbp-3E8h]
  __int128 v447; // [rsp+460h] [rbp-3D8h]
  __int128 v448; // [rsp+470h] [rbp-3C8h]
  __int128 v449; // [rsp+480h] [rbp-3B8h]
  __int128 v450; // [rsp+490h] [rbp-3A8h]
  __int64 v451; // [rsp+4A0h] [rbp-398h] BYREF
  int v452; // [rsp+4A8h] [rbp-390h]
  __int128 v453; // [rsp+4ACh] [rbp-38Ch]
  __int128 v454; // [rsp+4BCh] [rbp-37Ch]
  int v455; // [rsp+4CCh] [rbp-36Ch]
  __int128 v456; // [rsp+4D0h] [rbp-368h]
  int v457[2]; // [rsp+4F0h] [rbp-348h]
  __int128 v458; // [rsp+4F8h] [rbp-340h]
  __int64 v459; // [rsp+508h] [rbp-330h]
  __int128 v460; // [rsp+510h] [rbp-328h]
  __int128 v461; // [rsp+520h] [rbp-318h]
  __int128 v462; // [rsp+530h] [rbp-308h]
  __int128 v463; // [rsp+540h] [rbp-2F8h]
  __int128 v464; // [rsp+550h] [rbp-2E8h]
  __int128 v465; // [rsp+560h] [rbp-2D8h]
  __int128 v466; // [rsp+570h] [rbp-2C8h] BYREF
  __int128 v467; // [rsp+580h] [rbp-2B8h]
  __int128 v468; // [rsp+590h] [rbp-2A8h]
  __int128 v469; // [rsp+5A0h] [rbp-298h]
  __int128 v470; // [rsp+5B0h] [rbp-288h]
  __int128 v471; // [rsp+5C0h] [rbp-278h]
  __int128 v472; // [rsp+5D0h] [rbp-268h]
  __int128 v473; // [rsp+5E0h] [rbp-258h]
  __int128 v474; // [rsp+5F0h] [rbp-248h]
  __int128 v475; // [rsp+600h] [rbp-238h]
  _OWORD v476[10]; // [rsp+610h] [rbp-228h] BYREF
  _OWORD v477[10]; // [rsp+6B0h] [rbp-188h] BYREF
  _DWORD v478[40]; // [rsp+750h] [rbp-E8h] BYREF

  v9 = a1;
  v394 = a1;
  v416 = a1;
  v387 = a1;
  v391 = a4;
  v385 = a5;
  v384 = a1;
  v402 = a1;
  memset(v383, 0, sizeof(v383));
  v10 = 0LL;
  v365 = 0LL;
  *(_QWORD *)&v363[1] = 0LL;
  v370 = 0;
  v364 = 0;
  *(_OWORD *)v399 = 0LL;
  v400 = 0LL;
  v401 = 0LL;
  v386 = 0;
  v398 = 0LL;
  v405 = 0LL;
  v406 = 0LL;
  v360 = a6 & 1;
  v375 = 0;
  v11 = 0;
  v359 = 0;
  LOBYTE(v8) = 0;
  v358[1] = (unsigned int)v8;
  v362 = 0;
  CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
    (CMultiPerObjectLockExclusivePpiPtiQ *)v357,
    (struct tagTHREADINFO *)v9);
  v378 = 0LL;
  *a8 = 0LL;
  if ( a7 == 0x2000 )
  {
    v12 = *(_QWORD *)(v9 + 432);
    if ( *(_QWORD *)(v12 + 80) )
    {
      EtwTraceInputQueueLockedPeekRecursion();
LABEL_904:
      CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
      return 0LL;
    }
  }
  v380 = 0;
  v373 = 0;
  v377 = 0;
  v13 = *(_QWORD *)(v9 + 432);
  if ( !*(_QWORD *)(v13 + 64) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qqq(v12, 4u, 0x12u, 0x1Au, (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids, v13, v9, v9);
      v13 = *(_QWORD *)(v9 + 432);
    }
    *(_QWORD *)(v13 + 64) = v9;
    **(_DWORD **)(v9 + 448) |= 1u;
  }
  if ( (a7 & 0x1C07) != 0 )
  {
    v14 = *(_QWORD *)(v9 + 432);
    v15 = *(_DWORD *)(v14 + 388);
    if ( (a6 & 1) != 0 )
      v16 = v15 & 0xFFFFFBFF;
    else
      v16 = v15 | 0x400;
    *(_DWORD *)(v14 + 388) = v16;
  }
  v17 = *(_QWORD *)(v9 + 432);
  if ( *(_QWORD *)(v17 + 64) != v9 )
  {
    EtwTraceInputQueueLocked();
    CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
    return 2LL;
  }
  v369 = 0LL;
  v366 = 0LL;
  v388 = 0LL;
  v390 = 0LL;
  v379 = 0LL;
  v395 = 0LL;
  v389 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v17)
    || (CurrentProcess = PsGetCurrentProcess(v22, v21, v23),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v26),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v20 = *ThreadWin32Thread;
  }
  v410 = *(_QWORD *)(v20 + 16);
  *(_QWORD *)(v20 + 16) = &v410;
  v411 = 0LL;
  v412 = (void (*)(void))DereferenceW32Thread;
  v30 = KeGetCurrentThread();
  v31 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v28)
    || (v35 = PsGetCurrentProcess(v33, v32, v34),
        v36 = PsGetProcessSessionIdEx(v35),
        v38 = PsGetCurrentThreadProcess(v37),
        v36 == (unsigned int)PsGetProcessSessionIdEx(v38)) )
  {
    v40 = (__int64 *)PsGetThreadWin32Thread(v30);
    if ( v40 )
      v31 = *v40;
  }
  v413 = *(_QWORD *)(v31 + 16);
  *(_QWORD *)(v31 + 16) = &v413;
  v414 = 0LL;
  v415 = (void (*)(void))DereferenceW32Thread;
  v41 = KeGetCurrentThread();
  v42 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v39)
    || (v46 = PsGetCurrentProcess(v44, v43, v45),
        v47 = PsGetProcessSessionIdEx(v46),
        v49 = PsGetCurrentThreadProcess(v48),
        v47 == (unsigned int)PsGetProcessSessionIdEx(v49)) )
  {
    v51 = (__int64 *)PsGetThreadWin32Thread(v41);
    if ( v51 )
      v42 = *v51;
  }
  v407 = *(_QWORD *)(v42 + 16);
  *(_QWORD *)(v42 + 16) = &v407;
  v408 = 0LL;
  v409 = (void (*)(void))DereferenceW32Thread;
  v52 = KeGetCurrentThread();
  v53 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v50)
    || (v57 = PsGetCurrentProcess(v55, v54, v56),
        v58 = PsGetProcessSessionIdEx(v57),
        v60 = PsGetCurrentThreadProcess(v59),
        v58 == (unsigned int)PsGetProcessSessionIdEx(v60)) )
  {
    v62 = (__int64 *)PsGetThreadWin32Thread(v52);
    if ( v62 )
      v53 = *v62;
  }
  v423 = *(_QWORD *)(v53 + 16);
  *(_QWORD *)(v53 + 16) = &v423;
  v424 = 0LL;
  v425 = (void (*)(void))DereferenceW32Thread;
  v63 = KeGetCurrentThread();
  v64 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v61)
    || (v68 = PsGetCurrentProcess(v66, v65, v67),
        v69 = PsGetProcessSessionIdEx(v68),
        v71 = PsGetCurrentThreadProcess(v70),
        v69 == (unsigned int)PsGetProcessSessionIdEx(v71)) )
  {
    v73 = (const struct tagWND **)PsGetThreadWin32Thread(v63);
    if ( v73 )
      v64 = (unsigned __int64)*v73;
  }
  v420 = *(_QWORD *)(v64 + 16);
  *(_QWORD *)(v64 + 16) = &v420;
  v421 = 0LL;
  v422 = (void (*)(void))DereferenceW32Thread;
  v396 = *(_QWORD *)(v9 + 416);
  *(_QWORD *)(v9 + 416) = &v396;
  v397 = 0LL;
LABEL_36:
  while ( 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(v9 + 432),
        5u,
        0x12u,
        0x1Bu,
        (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
        *(_QWORD *)(v9 + 432),
        *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
    *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_43:
            v403 = (**(_DWORD **)(v9 + 480) >> 9) & 1;
            v74 = *(struct tagQMSG **)(*(_QWORD *)(v9 + 432) + 80LL);
            if ( v74 )
            {
              if ( !(_BYTE)v8 )
              {
                v358[1] = ((v11 - 1) & 0xFFFFFFFD) == 0;
                v362 = ((v11 - 1) & 0xFFFFFFFD) == 0;
              }
              LODWORD(v64) = v358[1];
            }
            else
            {
              v11 = 0;
              v359 = 0;
              LOBYTE(v64) = 0;
              v358[1] = v64;
              v362 = 0;
            }
            v361 = 0;
            v376 = 0;
            v368 = 0LL;
            v382 = 0;
            NextSysMsg = xxxGetNextSysMsg((struct tagTHREADINFO *)v9, v74, (struct tagQMSG *)v383, v72);
            v8 = NextSysMsg;
            v374 = NextSysMsg;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v76 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_qqq(
                  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL),
                  5u,
                  0x12u,
                  0x1Cu,
                  (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
                  NextSysMsg,
                  *(_QWORD *)(v9 + 432),
                  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
            }
            *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) = v8;
            if ( (unsigned __int64)v8 <= 1 )
              break;
            v77 = DWORD1(v383[6]);
            if ( (BYTE4(v383[6]) & 0x20) != 0 )
            {
              *a8 = v8;
              *((_DWORD *)v8 + 25) |= 0x100u;
              v360 = 0;
              v77 = DWORD1(v383[6]);
            }
            if ( (v77 & 0x10000) != 0 )
            {
              if ( *((_QWORD *)&v383[6] + 1) == v9 )
                v11 = 1;
              v359 = v11;
              LOBYTE(v8) = 1;
              v358[1] = (unsigned int)v8;
              v362 = 1;
            }
            else if ( (v77 & 0x80000) != 0 )
            {
              LOBYTE(v8) = v358[1];
              if ( *((_QWORD *)&v383[6] + 1) == v9 )
              {
                v11 = 3;
                v359 = 3;
              }
            }
            else if ( LODWORD(v383[6]) == 4 && (_BYTE)v64 )
            {
              DeferSysPeekMsg(v9, 3LL);
              LOBYTE(v8) = v358[1];
            }
            else if ( (v77 & 0x20000) != 0 )
            {
              LOBYTE(v8) = v358[1];
              if ( *((_QWORD *)&v383[6] + 1) == v9 )
              {
                v11 = 2;
                v359 = 2;
              }
            }
            else
            {
              if ( !(unsigned int)ShouldDeferMessage(v11, v383) )
                break;
              DeferSysPeekMsg(v9, 3LL);
              v11 = 3;
              v359 = 3;
              LOBYTE(v8) = v358[1];
            }
          }
          if ( !*(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) )
          {
            if ( a7 == 0x2000 )
              ClearWakeBit((struct tagTHREADINFO *)v9, 0x2000u, 0);
            goto LABEL_348;
          }
          ThreadUnlock1(v76);
          v64 = *(_QWORD *)&v383[1];
          v78 = 0LL;
          v79 = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v80)
            || (v84 = PsGetCurrentProcess(v82, v81, v83),
                v85 = PsGetProcessSessionIdEx(v84),
                v87 = PsGetCurrentThreadProcess(v86),
                v85 == (unsigned int)PsGetProcessSessionIdEx(v87)) )
          {
            PsGetThreadWin32Thread(v79);
          }
          if ( (unsigned __int64)(unsigned __int16)v64 < *(_QWORD *)(gpsi + 8LL) )
          {
            v88 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v64 * LODWORD(gSharedInfo[2]);
            v90 = (unsigned __int64 *)HMPkheFromPhe(v88);
            v64 >>= 16;
            if ( ((_WORD)v64 == *(_WORD *)(v88 + 26)
               || (_WORD)v64 == 0xFFFF
               || !(_WORD)v64 && PsGetCurrentProcessWow64Process(v89))
              && (*(_BYTE *)(v88 + 25) & 1) == 0
              && *(_BYTE *)(v88 + 24) == 1 )
            {
              v78 = *v90;
            }
          }
          ThreadDesktopWindow = (struct tagWND *)v78;
          v396 = *(_QWORD *)(v9 + 416);
          *(_QWORD *)(v9 + 416) = &v396;
          v397 = v78;
          if ( v78 )
            HMLockObject(v78);
          if ( !LODWORD(v383[6]) )
            break;
          if ( LODWORD(v383[6]) == 4 )
          {
            v11 = v359;
            LOBYTE(v8) = v358[1];
            if ( *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) != *(_QWORD *)(*(_QWORD *)(v9 + 432) + 24LL) )
              continue;
          }
          if ( LODWORD(v383[6]) != 9 || DWORD2(v383[1]) != 96 )
            goto LABEL_99;
          v91 = *((_QWORD *)&v383[0] + 1);
          v92 = *((_QWORD *)&v383[0] + 1) == 0LL;
          if ( *((_QWORD *)&v383[0] + 1) )
          {
            do
            {
              if ( !IsHiddenByInputService(v91) )
                break;
              v91 = *(_QWORD *)(v91 + 8);
            }
            while ( v91 );
            v92 = v91 == 0;
          }
          v11 = v359;
          LOBYTE(v8) = v358[1];
          if ( v92 )
          {
LABEL_99:
            v93 = *((_QWORD *)&v383[6] + 1);
            if ( !*((_QWORD *)&v383[6] + 1) || *((_QWORD *)&v383[6] + 1) == v9 )
            {
              EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
              v97 = *(_QWORD *)(v9 + 432);
              v98 = *(_QWORD *)(v97 + 80);
              v99 = v97 + 24;
              v100 = *(_QWORD **)(v98 + 8);
              if ( v100 )
                *v100 = *(_QWORD *)v98;
              v101 = *(_QWORD *)v98;
              if ( *(_QWORD *)v98 )
                *(_QWORD *)(v101 + 8) = *(_QWORD *)(v98 + 8);
              if ( *(_QWORD *)v99 == v98 )
                *(_QWORD *)v99 = *(_QWORD *)v98;
              if ( *(_QWORD *)(v97 + 32) == v98 )
                *(_QWORD *)(v97 + 32) = *(_QWORD *)(v98 + 8);
              v102 = *(_DWORD *)(v98 + 100);
              if ( (v102 & 0x10000) == 0 && (v102 & 0x20000) == 0 && (v102 & 0x80000) == 0 )
              {
                v103 = *(_DWORD *)(v99 + 16) - 1;
                *(_DWORD *)(v99 + 16) = v103;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v355) = v103;
                  LODWORD(v354) = *(_DWORD *)(v99 + 20);
                  WPP_RECORDER_SF_qiqdd(
                    v99,
                    v101,
                    v96,
                    0x14u,
                    (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
                    v98,
                    *(_QWORD *)(v98 + 136),
                    v99,
                    v354,
                    v355);
                }
              }
              if ( (*(_DWORD *)(v98 + 100) & 8) != 0
                && !*(_DWORD *)(v98 + 96)
                && IsPointerInputMessage(*(_DWORD *)(v98 + 24)) )
              {
                FreePointerMessageParams(v98);
              }
              Win32FreeToPagedLookasideList(QEntryLookaside, v98);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_qq(
                  *(_QWORD *)(v9 + 432),
                  5u,
                  0x12u,
                  0x1Eu,
                  (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
                  *(_QWORD *)(v9 + 432),
                  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
              }
              *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) = 0LL;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              xxxProcessEventMessage(v9, (__int64)v383);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              v11 = v359;
              LOBYTE(v8) = v358[1];
            }
            else
            {
              v94 = *(_QWORD *)(v9 + 432);
              if ( *(_QWORD *)(*((_QWORD *)&v383[6] + 1) + 432LL) == v94 )
              {
                v390 = *((_QWORD *)&v383[6] + 1);
                ObfReferenceObject(**((PVOID **)&v383[6] + 1));
                _InterlockedIncrement((volatile signed __int32 *)(v93 + 8));
                v95 = v408;
                v408 = v93;
                if ( v95 )
                  v409();
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_qq(
                    *(_QWORD *)(v9 + 432),
                    5u,
                    0x12u,
                    0x1Du,
                    (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
                    *(_QWORD *)(v9 + 432),
                    *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
                }
                *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) = 0LL;
                goto LABEL_348;
              }
              CleanEventMessage(*(struct tagQMSG **)(v94 + 80));
              DelQEntry(
                (unsigned int **)(*(_QWORD *)(v9 + 432) + 24LL),
                *(unsigned int **)(*(_QWORD *)(v9 + 432) + 80LL),
                1);
              v11 = v359;
              LOBYTE(v8) = v358[1];
            }
            goto LABEL_36;
          }
        }
        if ( a7 == 0x2000 )
          goto LABEL_41;
        LODWORD(v64) = DWORD2(v383[1]);
        v358[0] = DWORD2(v383[1]);
        v363[0] = DWORD2(v383[1]);
        if ( DWORD2(v383[1]) <= 0x20A )
          break;
        switch ( DWORD2(v383[1]) )
        {
          case 0x20E:
            goto LABEL_372;
          case 0x238:
            goto LABEL_445;
          case 0x240:
LABEL_439:
            if ( !v78 )
              goto LABEL_381;
            v172 = *(char **)(v78 + 40);
            if ( v172[20] < 0 )
              goto LABEL_381;
            if ( v172[19] < 0 )
              goto LABEL_381;
            v173 = v172[31];
            if ( (v173 & 8) != 0 )
              goto LABEL_381;
            if ( (v173 & 0x10) == 0 )
            {
              MouseKeyFlags = v368;
              v108 = v360;
              goto LABEL_772;
            }
LABEL_445:
            v365 = *((_QWORD *)&v383[2] + 1);
            MouseKeyFlags = *(_QWORD *)&v383[2];
            v368 = *(_QWORD *)&v383[2];
            if ( !v78 )
              goto LABEL_382;
            if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v78, v8, &v370, &v360, a8) )
              goto LABEL_348;
            if ( v370 )
              goto LABEL_382;
            if ( !a4 && a5 == -1 )
              goto LABEL_456;
            if ( a4 <= a5 )
            {
              LOBYTE(v8) = v358[1];
              if ( (unsigned int)v64 < a4 || (unsigned int)v64 > a5 )
                goto LABEL_42;
            }
            else if ( (unsigned int)v64 >= a5 && (unsigned int)v64 <= a4 )
            {
              goto LABEL_41;
            }
LABEL_456:
            v174 = CheckPwndFilter(v78, a3);
            LOBYTE(v8) = v358[1];
            if ( v174 )
            {
              if ( !v360 )
                goto LABEL_810;
              goto LABEL_458;
            }
            goto LABEL_42;
          case 0x245:
          case 0x246:
          case 0x247:
          case 0x249:
          case 0x24A:
          case 0x251:
          case 0x252:
          case 0x253:
            v108 = v360;
            goto LABEL_759;
          case 0x2E8:
          case 0x2E9:
          case 0x2EA:
          case 0x2EB:
          case 0x2EC:
          case 0x2ED:
          case 0x2EE:
          case 0x2EF:
          case 0x2F0:
          case 0x2F1:
          case 0x2F2:
          case 0x2F3:
          case 0x2F4:
          case 0x2F5:
            if ( !a4 && a5 == -1 )
              goto LABEL_359;
            if ( a4 <= a5 )
            {
              if ( DWORD2(v383[1]) < v391 || DWORD2(v383[1]) > v385 )
                goto LABEL_348;
            }
            else if ( DWORD2(v383[1]) >= v385 && DWORD2(v383[1]) <= v391 )
            {
              goto LABEL_348;
            }
LABEL_359:
            if ( (unsigned int)IsInsideMenuLoop(v9) )
              goto LABEL_381;
            v108 = v360;
            if ( v360 )
              xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 1u);
            if ( !v78 )
            {
              v78 = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 112LL);
              ThreadDesktopWindow = (struct tagWND *)v78;
            }
            v365 = *((_QWORD *)&v383[2] + 1);
            MouseKeyFlags = *(_QWORD *)&v383[2];
            v368 = *(_QWORD *)&v383[2];
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            v64 = MouseKeyFlags >> 16;
            v156 = InteractiveControlManager::Instance();
            v418 = 0LL;
            v419 = 0LL;
            if ( (int)InteractiveControlManager::FindDevice(v156, (unsigned __int16)MouseKeyFlags, 0LL, &v418, 0LL) >= 0
              && v418
              && (unsigned int)InteractiveControlDevice::GetInputReport(v418, WORD1(MouseKeyFlags), &v419) )
            {
              *((_DWORD *)v419 + 6) = 1;
              v157 = 1;
            }
            else
            {
              v157 = 2;
            }
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            v158 = v157 - 1;
            if ( !v158 )
              goto LABEL_810;
            if ( v158 == 1 )
              goto LABEL_844;
            goto LABEL_772;
          default:
LABEL_460:
            v363[1] = SWORD4(v383[2]);
            v363[2] = SWORD5(v383[2]);
            v364 = 1;
            if ( (BYTE4(v383[6]) & 0x20) == 0 )
              goto LABEL_470;
            if ( !v78 )
              goto LABEL_470;
            v175 = *(_DWORD *)(*(_QWORD *)(v78 + 40) + 288LL);
            v176 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 16) + 424LL) + 280LL);
            if ( (((unsigned __int16)(v175 >> 8) ^ (unsigned __int16)(v176 >> 8)) & 0x1FF) != 0 )
              goto LABEL_470;
            if ( (v175 & 0xF) != 2 || (v177 = 1, (v175 & 0x20000000) == 0) )
              v177 = 0;
            if ( (v176 & 0xF) != 2 || (v178 = 1, (v176 & 0x20000000) == 0) )
              v178 = 0;
            if ( v177 != v178 )
            {
LABEL_470:
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              if ( !v78 || (v179 = 1, !(unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)v78)) )
                v179 = 0;
              v375 = v179;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              v182 = *(_QWORD *)(v9 + 432);
              v183 = *(__int64 **)(v182 + 104);
              if ( v183 )
              {
                v78 = *(_QWORD *)(v182 + 104);
                ThreadDesktopWindow = (struct tagWND *)v78;
                if ( (unsigned int)dword_1C032FB20 > 4
                  && (qword_1C032FB30 & 0x40) != 0
                  && (qword_1C032FB38 & 0x40) == qword_1C032FB38 )
                {
                  v427 = *v183;
                  v404 = DWORD2(v383[1]);
                  v428 = *((_QWORD *)&v383[8] + 1);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    (unsigned int)&dword_1C032FB20,
                    (unsigned int)&unk_1C02F0CE7,
                    v180,
                    v181,
                    (__int64)&v428,
                    (__int64)&v404,
                    (__int64)&v427);
                }
                if ( v179 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                  v192 = IsCompositionInputWindowForHitTest((struct tagWND *)v78);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                  if ( !v192 )
                  {
                    DWORD1(v383[6]) &= ~0x2000u;
                    if ( v8 )
                    {
                      if ( IsMiPActive(v9, (__int64)v8) )
                        *((_DWORD *)v8 + 25) &= ~0x2000u;
                    }
                  }
                }
              }
              else
              {
                if ( !v179 )
                {
                  v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
                  *(_QWORD *)&v405 = *(_QWORD *)(v9 + 416);
                  *(_QWORD *)(v9 + 416) = &v405;
                  *((_QWORD *)&v405 + 1) = v78;
                  if ( v78 )
                    HMLockObject(v78);
                }
                if ( (unsigned int)IsThreadDesktopComposed(v9) )
                {
                  v429[0] = DWORD2(v383[1]);
                  v429[1] = 0;
                  v430 = v383[2];
                  v431 = &v364;
                  v184 = 1;
                  if ( v179 )
                    v184 = 9;
                  v432 = v184;
                  v433 = 0;
                  v434 = (char *)&v383[5] + 8;
                  v435 = 0LL;
                  v436 = 0LL;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                  v185 = xxxDCEWindowHitTestIndirect_Iterative(
                           (struct tagWND *)v78,
                           *(struct tagPOINT *)&v383[5],
                           0,
                           (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v429);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                  if ( v185 && (_DWORD)v435 )
                  {
                    *((_QWORD *)&v383[2] + 1) = *((_QWORD *)&v430 + 1);
                    DWORD1(v383[3]) = SWORD4(v430);
                    DWORD2(v383[3]) = SWORD5(v430);
                    *(_QWORD *)&v363[1] = *(_QWORD *)((char *)&v383[3] + 4);
                  }
                }
                else
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                  v185 = (HWND)xxxWindowHitTest(v78);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                }
                v186 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v185, 1);
                InputTraceLogging::Mouse::SecondaryHitTest(
                  (const struct tagQMSG *)v383,
                  (const struct tagPOINT *)&v363[1],
                  v186);
                if ( !v375 )
                  ThreadUnlock1(v187);
                v78 = HMValidateHandleNoSecure((unsigned __int64)v185, 1);
                ThreadDesktopWindow = (struct tagWND *)v78;
                if ( !v78 )
                {
                  v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 456) + 8LL) + 24LL);
                  ThreadDesktopWindow = (struct tagWND *)v78;
                  if ( !v78 )
                  {
                    v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
                    ThreadDesktopWindow = (struct tagWND *)v78;
                  }
                }
                if ( !*(_QWORD *)(v9 + 608)
                  && IsMiPEnabledForThread(v9)
                  && (v188 = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 440LL)) != 0
                  && (v189 = ValidateHwnd(v188)) != 0
                  && ((v190 = *(_QWORD *)(v189 + 16), v191 = *(_QWORD *)(v9 + 432), *(_QWORD *)(v190 + 432) == v191)
                   || *(_QWORD *)(v190 + 424) == *(_QWORD *)(v9 + 424)) )
                {
                  v78 = v189;
                  ThreadDesktopWindow = (struct tagWND *)v189;
                  v364 = 1;
                  *(_DWORD *)(v191 + 148) = 0;
                }
                else
                {
                  *(_DWORD *)(*(_QWORD *)(v384 + 432) + 148LL) = v364 != 1;
                }
              }
              if ( v78 == *(_QWORD *)(*(_QWORD *)(v9 + 432) + 104LL) )
              {
                v193 = *(_DWORD *)(*(_QWORD *)(v78 + 40) + 288LL);
                v194 = *(_QWORD *)(*(_QWORD *)(v78 + 16) + 432LL);
                v195 = *(_QWORD *)(v194 + 104);
                v196 = v195 ? *(_QWORD *)(v195 + 16) : *(_QWORD *)(v194 + 88);
                if ( (((unsigned __int16)(v193 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v196 + 424) + 280LL) >> 8)) & 0x1FF) != 0 )
                  goto LABEL_528;
                if ( (v193 & 0xF) != 2 || (v197 = (v193 & 0x20000000) != 0, v198 = 1, !v197) )
                  v198 = 0;
                if ( v195 )
                  v199 = *(_QWORD *)(v195 + 16);
                else
                  v199 = *(_QWORD *)(v194 + 88);
                if ( (*(_DWORD *)(*(_QWORD *)(v199 + 424) + 280LL) & 0xF) != 2
                  || (!v195 ? (v200 = *(_QWORD *)(v194 + 88)) : (v200 = *(_QWORD *)(v195 + 16)),
                      v92 = (*(_DWORD *)(*(_QWORD *)(v200 + 424) + 280LL) & 0x20000000) == 0,
                      v201 = 1,
                      v92) )
                {
                  v201 = 0;
                }
                if ( v198 != v201
                  || *(_QWORD *)(v78 + 104) == GetMessageWindow(v78)
                  && (v202 = *(_QWORD *)(v78 + 136)) != 0
                  && (v203 = *(const char **)(v202 + 104)) != 0LL
                  && !strcmp_0(v203, "CLIPBRDWNDCLASS") )
                {
LABEL_528:
                  *(_QWORD *)&v363[1] = *(_QWORD *)&v383[5];
                  PhysicalToLogicalInPlacePointWithParent(v78, &v363[1], (char *)&v383[5] + 8);
                  v365 = (LOWORD(v363[2]) << 16) | LOWORD(v363[1]);
                  *(_QWORD *)((char *)&v383[3] + 4) = *(_QWORD *)&v363[1];
                }
              }
            }
            ThreadLockExchange(v78, (__int64)&v396);
            if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v78, v8, &v370, &v360, a8) )
              goto LABEL_348;
            v204 = v370;
            if ( v370 )
            {
              v205 = *(_QWORD *)(v78 + 16);
              v206 = a1;
              if ( *(_QWORD *)(v205 + 432) != *(_QWORD *)(a1 + 432) )
                goto LABEL_532;
              if ( !v369 )
              {
                v369 = *(_QWORD *)(v78 + 16);
                LockExchangeW32Thread(v205, (__int64)&v413);
              }
            }
            else
            {
              if ( (WORD2(v383[6]) & 0x1000) != 0
                && !(unsigned __int8)CheckAccess(&v383[7], *(_QWORD *)(*(_QWORD *)(v78 + 16) + 424LL) + 880LL) )
              {
                EtwTraceUIPIMsgError(
                  0LL,
                  *(_QWORD *)(*(_QWORD *)(v78 + 16) + 424LL),
                  (unsigned int)v64,
                  *(_QWORD *)&v383[2],
                  *((_QWORD *)&v383[2] + 1));
LABEL_532:
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                MouseKeyFlags = v368;
                v108 = v360;
                v9 = a1;
                goto LABEL_772;
              }
              v206 = a1;
            }
            v207 = *(struct tagPOINT *)&v363[1];
            v208 = *(_QWORD *)&v363[1];
            v209 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 16) + 432LL) + 148LL);
            if ( v209 && (v210 = v209 - 2) != 0 )
            {
              if ( v210 != 1 )
                goto LABEL_551;
              v211 = *(_QWORD *)(v78 + 40);
              if ( (*(_BYTE *)(v211 + 26) & 0x40) != 0 )
                v363[1] = *(_DWORD *)(v211 + 96) - v363[1];
              else
                v363[1] -= *(_DWORD *)(v211 + 88);
              v212 = *(_DWORD *)(*(_QWORD *)(v78 + 40) + 92LL);
            }
            else
            {
              v213 = *(_QWORD *)(v78 + 40);
              if ( (*(_BYTE *)(v213 + 26) & 0x40) != 0 )
                v363[1] = *(_DWORD *)(v213 + 112) - v363[1];
              else
                v363[1] -= *(_DWORD *)(v213 + 104);
              v212 = *(_DWORD *)(*(_QWORD *)(v78 + 40) + 108LL);
            }
            v363[2] -= v212;
            v207 = *(struct tagPOINT *)&v363[1];
LABEL_551:
            if ( v204 || *(_QWORD *)(v206 + 432) != gpqCursor )
              goto LABEL_588;
            LOBYTE(v10) = *(_QWORD *)(*(_QWORD *)(v206 + 456) + 184LL) != v78;
            v214 = v364;
            if ( v364 == 5
              && (v215 = *(_QWORD *)(v78 + 168)) != 0
              && (*(_BYTE *)(*(_QWORD *)(v78 + 40) + 16LL) & 1) != 0 )
            {
              v216 = MNItemHitTest(*(_QWORD *)(v78 + 168), v78);
              if ( v216 < 0 )
                goto LABEL_563;
              v217 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v215 + 88) + 96LL * v216) + 96LL);
              if ( v217 <= 6 )
              {
                if ( v217 >= 5 )
                {
                  v220 = ((unsigned __int16)v216 << 16) | 0x44;
                  goto LABEL_578;
                }
                v218 = v217 - 1;
                if ( !v218 )
                {
                  v220 = ((unsigned __int16)v216 << 16) | 0x41;
                  goto LABEL_578;
                }
                v219 = v218 - 1;
                if ( !v219 )
                {
                  v220 = ((unsigned __int16)v216 << 16) | 0x42;
                  goto LABEL_578;
                }
                if ( v219 == 1 )
                  goto LABEL_562;
LABEL_569:
                v220 = ((unsigned __int16)v216 << 16) | 0x45;
                goto LABEL_578;
              }
              if ( v217 == 7 )
              {
LABEL_562:
                v214 = 67;
LABEL_563:
                v220 = v214 | ((unsigned __int16)v216 << 16);
                goto LABEL_578;
              }
              if ( v217 != -1LL )
                goto LABEL_569;
              v220 = ((unsigned __int16)v216 << 16) | 0xFFFE;
            }
            else if ( v364 == 7 && (*(_BYTE *)(*(_QWORD *)(v78 + 40) + 16LL) & 2) != 0 )
            {
              v220 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v78, v364 - 6, v207) | 0x10000;
            }
            else if ( v364 == 6 && (*(_BYTE *)(*(_QWORD *)(v78 + 40) + 16LL) & 4) != 0 )
            {
              v220 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v78, 0, v207);
            }
            else
            {
              v220 = v364;
            }
LABEL_578:
            v221 = v358[0];
            if ( v358[0] != 512 || (_DWORD)v10 || *(_DWORD *)(*(_QWORD *)(v206 + 456) + 192LL) != v220 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              xxxTrackMouseMove((struct tagWND *)v78, v220, v221);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            }
            LODWORD(v64) = v358[0];
            if ( !(_DWORD)v10 )
            {
              v222 = *(_QWORD *)(v206 + 456);
              if ( (*(_DWORD *)(v222 + 48) & 0x40) != 0 && (v358[0] != 512 || !PtInRect((_DWORD *)(v222 + 196), v208)) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                ResetMouseHover(*(struct tagDESKTOP **)(v206 + 456), (struct tagPOINT)v208);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              }
            }
            v10 = 0LL;
LABEL_588:
            v223 = CheckPwndFilter(v78, a3);
            LOBYTE(v8) = v358[1];
            if ( !v223 )
            {
              v9 = a1;
LABEL_42:
              v11 = v359;
              goto LABEL_43;
            }
            v224 = 0;
            v381 = 0;
            switch ( (int)v64 )
            {
              case 513:
                v225 = a1;
                v92 = (unsigned __int8)IsMessageInputSourceTouch(v383) == 0;
                v226 = *(_QWORD *)(a1 + 432);
                if ( v92 )
                  *(_DWORD *)(v226 + 388) &= ~0x800000u;
                else
                  *(_DWORD *)(v226 + 388) |= 0x800000u;
                v227 = IsMessageInputSourcePen(v383);
                v228 = *(_QWORD *)(v384 + 432);
                v229 = *(_DWORD *)(v228 + 388);
                if ( v227 )
                  *(_DWORD *)(v228 + 388) = v229 | 0x1000000;
                else
                  *(_DWORD *)(v228 + 388) = v229 & 0xFEFFFFFF;
                goto LABEL_597;
              case 514:
              case 517:
              case 520:
              case 524:
                v225 = a1;
                goto LABEL_610;
              case 516:
              case 519:
              case 523:
                v225 = a1;
LABEL_597:
                if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v78 + 136) + 8LL) + 8LL) & 8) != 0
                  || *(_DWORD *)(*(_QWORD *)(v225 + 432) + 148LL) == 1
                  || (v230 = *(_QWORD *)(v225 + 608)) != 0 && (*(_DWORD *)(v230 + 8) & 1) != 0 )
                {
                  v224 = 1;
                  v381 = 1;
                  v231 = *(_QWORD *)(v225 + 432);
                  if ( LODWORD(v383[3]) <= *(_DWORD *)(v231 + 160)
                    && !gbClientDoubleClickSupport
                    && *(_QWORD *)v78 == *(_QWORD *)(v231 + 168)
                    && (_DWORD)v64 == *(_DWORD *)(v231 + 152)
                    && ((_DWORD)v64 != 523 || WORD1(v383[2]) == *(_WORD *)(v231 + 156)) )
                  {
                    v232 = *(_DWORD *)(gpsi + 2040LL) / 2;
                    v233 = *(_DWORD *)(v231 + 176);
                    v426[0] = v233 - v232;
                    v234 = *(_DWORD *)(gpsi + 2044LL);
                    v235 = *(_DWORD *)(v231 + 180);
                    v426[1] = v235 - v234 / 2;
                    v426[2] = v232 + v233;
                    v426[3] = v235 + v234 / 2;
                    if ( PtInRect(v426, *(unsigned __int64 *)((char *)&v383[3] + 4)) )
                    {
                      LODWORD(v64) = v64 + 2;
                      v358[0] = v64;
                      v363[0] = v64;
                      v224 = 2;
                      v381 = 2;
                    }
                  }
                }
LABEL_610:
                v236 = *(_QWORD *)(v225 + 432);
                v237 = *(_DWORD *)(v236 + 388);
                if ( (v237 & 8) != 0 )
                  *(_DWORD *)(v236 + 388) = v237 | 4;
                if ( (unsigned int)(v64 - 514) <= 0xA )
                {
                  v238 = 1097;
                  if ( _bittest(&v238, v64 - 514) )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(v225 + 432) + 160LL) && ((DWORD2(v383[7]) - 4) & 0xFFFFFFFB) == 0 )
                    {
                      if ( DWORD2(v383[7]) == 4 )
                      {
                        TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(300LL, 180LL, 5LL, 1LL);
                      }
                      else if ( gPenMonitor || (unsigned int)LoadPointerDevicePenSettings() )
                      {
                        TouchTimeFromCPLValue = *((_DWORD *)off_1C032A038 + 11);
                        if ( TouchTimeFromCPLValue == -1 )
                          TouchTimeFromCPLValue = *((_DWORD *)off_1C032A038 + 10);
                      }
                      else
                      {
                        TouchTimeFromCPLValue = gdtDblClk;
                      }
                      *(_DWORD *)(*(_QWORD *)(v225 + 432) + 160LL) = DWORD2(v383[9]) + TouchTimeFromCPLValue;
                    }
                  }
                }
                break;
              default:
                break;
            }
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 16) + 432LL) + 148LL) == 1 )
            {
              LODWORD(v64) = v64 - 352;
              v358[0] = v64;
              v363[0] = v64;
              MouseKeyFlags = (unsigned int)v364;
              v368 = (unsigned int)v364;
            }
            else
            {
              MouseKeyFlags = v368;
            }
            if ( !(unsigned int)MiPCheckMsgFilter(v374, (unsigned int)v64, a4, a5) )
            {
              v9 = a1;
LABEL_41:
              LOBYTE(v8) = v358[1];
              goto LABEL_42;
            }
            v92 = v204 == 0;
            v9 = a1;
            if ( !v92 )
              goto LABEL_348;
            if ( (unsigned int)(v64 - 512) <= 0xE && (*(_DWORD *)(a1 + 488) & 0x8000) != 0 )
              goto LABEL_41;
            v240 = *(_DWORD *)(a1 + 488);
            if ( (v240 & 0x100000) != 0 )
            {
              *(_DWORD *)(a1 + 488) = v240 & 0xFFEFFFFF;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1u);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            }
            v399[0] = *(_QWORD *)((char *)&v383[3] + 4);
            v399[1] = *(_QWORD *)v78;
            LODWORD(v400) = v364;
            *((_QWORD *)&v400 + 1) = *((_QWORD *)&v383[4] + 1);
            LODWORD(v401) = v383[2];
            v108 = v360;
            if ( v360 && (_DWORD)v64 != 512 && (_DWORD)v64 != 160 )
            {
              v373 = 1;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              if ( (unsigned int)xxxCallCtfHook(7, 0, (unsigned int)v64, (__int64)v399) )
                goto LABEL_771;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            }
            if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_DWORD *)(a1 + 680)) & 0x100) != 0 )
            {
              v373 = 1;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              if ( (unsigned int)xxxCallMouseHook((unsigned int)v64, v399, v108) )
                goto LABEL_771;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            }
            if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
            {
              v241 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
              v372 = 0;
              v372 = *(_QWORD *)(v241 + 248) != 0LL;
              if ( v372 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                v108 = v360;
                v242 = v363[0];
                v358[0] = v363[0];
                if ( xxxClientCallLocalMouseHooks(v363[0], v399, (unsigned int)v360) )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                  MouseKeyFlags = v368;
                  goto LABEL_773;
                }
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                v78 = (unsigned __int64)ThreadDesktopWindow;
                MouseKeyFlags = v368;
              }
              else
              {
                v78 = (unsigned __int64)ThreadDesktopWindow;
                v242 = v363[0];
                v358[0] = v363[0];
                MouseKeyFlags = v368;
                v108 = v360;
              }
            }
            else
            {
              v242 = v358[0];
            }
            if ( (*(_DWORD *)(a1 + 1232) & 0x2000) == 0 && ((v364 + 2) & 0xFFFFFFFD) == 0 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              v243 = 0LL;
              if ( v375 )
              {
                CompositionInputWindowUIOwner = (struct tagWND *)v78;
                if ( (unsigned int)IsIndependentInputWindow((const struct tagWND *)v78) )
                  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v78);
                TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                v243 = (unsigned __int64)TopLevelWindow;
                if ( TopLevelWindow )
                {
                  LOBYTE(v64) = 0;
                  if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) && v358[0] == 161 )
                    LODWORD(v64) = *(_QWORD *)(*(_QWORD *)(v243 + 16) + 432LL) == gpqForeground;
                  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v243);
                  v243 = (unsigned __int64)CompositeAppFrameWindowOrSelf;
                  if ( (_BYTE)v64 )
                  {
                    v247 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 2);
                    if ( *(_QWORD *)(v247 + 432) != gpqForeground )
                      *(_DWORD *)(v247 + 488) |= 0x20u;
                  }
                  *(_QWORD *)&v405 = *(_QWORD *)(a1 + 416);
                  *(_QWORD *)(a1 + 416) = &v405;
                  *((_QWORD *)&v405 + 1) = CompositeAppFrameWindowOrSelf;
                  if ( CompositeAppFrameWindowOrSelf )
                  {
                    HMLockObject(CompositeAppFrameWindowOrSelf);
                    v248 = *(_QWORD *)v243;
                  }
                  else
                  {
                    v248 = 0LL;
                  }
                  xxxSendMessage(
                    v243,
                    0x20u,
                    v248,
                    (struct _LARGE_STRING *)((unsigned __int16)v364 | (WORD4(v383[1]) << 16)));
                  ThreadUnlock1(v249);
                }
              }
              if ( !v243 )
                xxxSendMessage(
                  v78,
                  0x20u,
                  *(_QWORD *)v78,
                  (struct _LARGE_STRING *)((unsigned __int16)v364 | (WORD4(v383[1]) << 16)));
              v250 = v374;
              if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 432) + 80LL) == v374
                && v374
                && IsMiPActive(a1, (__int64)v374)
                && (*((_DWORD *)v250 + 25) & 0x800) != 0
                && (unsigned int)IsGenuineMouseInput((char *)v250 + 120)
                && (unsigned int)IsMiPMouseMessage(*((unsigned int *)v250 + 6)) )
              {
                memset(v478, 0, sizeof(v478));
                v251 = v250;
                v242 = v358[0];
                GeneratePointerMessageFromMouse((struct tagQMSG *)v478, v358[0], v251, (struct tagWND *)v78, v108);
                SetMiPPromotion(*(_QWORD *)(v78 + 16), v478[6]);
              }
              else
              {
                v242 = v358[0];
              }
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              goto LABEL_773;
            }
            v252 = v374;
            if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 432) + 80LL) != v374 )
            {
LABEL_844:
              v10 = 0LL;
              goto LABEL_348;
            }
            v437 = 0LL;
            v460 = 0LL;
            v461 = 0LL;
            v462 = 0LL;
            v463 = 0LL;
            v464 = 0LL;
            v465 = 0LL;
            v438 = 0LL;
            v439 = 0LL;
            v440 = 0LL;
            v441 = 0LL;
            v442 = 0LL;
            v443 = 0LL;
            LODWORD(v64) = 0;
            v466 = v383[0];
            v467 = v383[1];
            v468 = v383[2];
            v469 = v383[3];
            v470 = v383[4];
            v471 = v383[5];
            v472 = v383[6];
            v473 = v383[7];
            v474 = v383[8];
            v475 = v383[9];
            if ( v374 && IsMiPActive(a1, (__int64)v374) )
            {
              DWORD2(v467) = v242;
              *(_QWORD *)&v468 = MouseKeyFlags;
              if ( (*((_DWORD *)v252 + 25) & 0x800) != 0 )
              {
                memset(v476, 0, sizeof(v476));
                v253 = *(_QWORD *)(a1 + 1280);
                if ( v253 && (*(_DWORD *)v253 & 1) != 0 )
                {
                  v437 = *(_OWORD *)(v253 + 24);
                  v438 = v437;
                  v439 = *(_OWORD *)(v253 + 40);
                  v440 = *(_OWORD *)(v253 + 56);
                  v441 = *(_OWORD *)(v253 + 72);
                  v442 = *(_OWORD *)(v253 + 88);
                  v443 = *(_OWORD *)(v253 + 104);
                  LODWORD(v64) = 1;
                }
                if ( GeneratePointerMessageFromMouse((struct tagQMSG *)v476, v358[0], v374, (struct tagWND *)v78, v108) )
                {
                  v383[0] = v476[0];
                  v383[1] = v476[1];
                  v383[2] = v476[2];
                  v383[3] = v476[3];
                  v383[4] = v476[4];
                  v383[5] = v476[5];
                  v383[6] = v476[6];
                  v383[7] = v476[7];
                  v383[8] = v476[8];
                  v383[9] = v476[9];
                  v361 = 1;
                  v376 = 1;
                  v254 = DWORD2(v476[1]);
                  if ( DWORD2(v476[1]) == 582 && (unsigned int)IsMiPEnabledForWindow(v78) )
                  {
                    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 440LL) = *(_QWORD *)v78;
                  }
                  else if ( ((v254 - 579) & 0xFFFFFFFB) == 0 )
                  {
                    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 440LL) = 0LL;
                  }
                }
                if ( v108 || !(unsigned int)IsMiPEnabledForWindow(v78) )
                {
                  v252 = v374;
                  *((_DWORD *)v374 + 25) &= ~0x800u;
                  goto LABEL_701;
                }
              }
              else
              {
                if ( !v108 )
                  goto LABEL_734;
                if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)v252 + 6)) )
                {
                  if ( (unsigned int)IsGenuineMouseInput((char *)v374 + 120) )
                  {
                    v255 = *(_DWORD **)(a1 + 1280);
                    if ( v255 )
                    {
                      if ( (*v255 & 2) == 0 && (*v255 & 4) == 0 )
                        goto LABEL_414;
                    }
                  }
                  v256 = *(_DWORD **)(a1 + 1280);
                  if ( v256 )
                    *v256 &= ~2u;
                }
              }
              v252 = v374;
            }
            else
            {
              v242 = DWORD2(v467);
            }
LABEL_701:
            if ( !v108 )
            {
LABEL_734:
              LODWORD(v64) = v361;
              goto LABEL_735;
            }
            if ( (v242 == 512 || v242 == 160)
              && *(_QWORD *)v78 != gMiPTracking
              && (unsigned int)IsGenuineMouseInput((char *)v252 + 120) )
            {
              v257 = HMValidateHandleNoSecure(gMiPTracking, 1);
              v258 = v257;
              if ( v257
                && IsMiPActive(*(_QWORD *)(v257 + 16), 0LL)
                && (GetMiPWindowFlags((struct tagWND *)v258) & 1) == 0 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                v259 = *(_QWORD *)(v258 + 16);
                if ( v259 == a1 )
                {
                  v260 = *(_QWORD *)(a1 + 1280);
                  v446 = *(_OWORD *)(v260 + 24);
                  v450 = *(_OWORD *)(v260 + 40);
                  v449 = *(_OWORD *)(v260 + 56);
                  v456 = *(_OWORD *)(v260 + 72);
                  v448 = *(_OWORD *)(v260 + 88);
                  v447 = *(_OWORD *)(v260 + 104);
                  if ( (_DWORD)v64 )
                  {
                    *(_OWORD *)(v260 + 24) = v437;
                    *(_OWORD *)(v260 + 40) = v439;
                    *(_OWORD *)(v260 + 56) = v440;
                    *(_OWORD *)(v260 + 72) = v441;
                    *(_OWORD *)(v260 + 88) = v442;
                    *(_OWORD *)(v260 + 104) = v443;
                    v260 = *(_QWORD *)(v384 + 1280);
                  }
                  *(_QWORD *)v457 = ((*(_DWORD *)(v260 + 36) & 0xFFFFE1F7) << 16) | 1LL;
                  v458 = 0LL;
                  v459 = 0LL;
                  v445[2] = 0LL;
                  v261 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v445[0] = *(_QWORD *)(v261 + 416);
                  *(_QWORD *)(v261 + 416) = v445;
                  v445[1] = v258;
                  HMLockObject(v258);
                  FindTimer(v258, 65523LL, 2u, 1, 0LL);
                  if ( (unsigned int)IsMiPEnabledForWindow(v258) )
                  {
                    _InterlockedIncrement(&glSendMessage);
                    xxxSendTransformableMessageTimeout(v258, 0x24Au, *(unsigned __int64 *)v457, 0LL, 0, 0, 0LL, 1, 0);
                  }
                  ThreadUnlock1(v262);
                  v78 = (unsigned __int64)ThreadDesktopWindow;
                  MouseKeyFlags = v368;
                  v108 = v360;
                  if ( (_DWORD)v64 )
                  {
                    v263 = *(_QWORD *)(a1 + 1280);
                    *(_OWORD *)(v263 + 24) = v446;
                    *(_OWORD *)(v263 + 40) = v450;
                    *(_OWORD *)(v263 + 56) = v449;
                    *(_OWORD *)(v263 + 72) = v456;
                    *(_OWORD *)(v263 + 88) = v448;
                    *(_OWORD *)(v263 + 104) = v447;
                  }
                  v358[0] = v363[0];
                }
                else
                {
                  PostEventMessageEx(
                    (struct tagTHREADINFO *)v259,
                    *(struct tagQ **)(v259 + 432),
                    0x15u,
                    (struct tagWND *)v258,
                    0,
                    0LL,
                    0LL,
                    0LL);
                }
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              }
              LODWORD(v64) = v361;
              if ( v361 )
                gMiPTracking = *(_QWORD *)v78;
              else
                gMiPTracking = 0LL;
            }
            else
            {
              LODWORD(v64) = v361;
            }
            if ( !(_DWORD)v64 )
            {
              v264 = v224 - 1;
              if ( v264 )
              {
                if ( v264 == 1 )
                  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) = 0;
              }
              else
              {
                *(_DWORD *)(*(_QWORD *)(a1 + 432) + 152LL) = DWORD2(v383[1]);
                *(_WORD *)(*(_QWORD *)(a1 + 432) + 156LL) = WORD1(v383[2]);
                *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) = gdtDblClk + LODWORD(v383[3]);
                *(_QWORD *)(*(_QWORD *)(a1 + 432) + 168LL) = *(_QWORD *)v78;
                *(_QWORD *)(*(_QWORD *)(a1 + 432) + 176LL) = *(_QWORD *)((char *)&v383[3] + 4);
              }
            }
            v265 = (const struct tagQMSG *)&v466;
            if ( !(_DWORD)v64 )
              v265 = (const struct tagQMSG *)v383;
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            v266 = xxxMouseActivate((struct tagTHREADINFO *)a1, (struct tagWND *)v78, v265, v364);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            if ( v266 == 1 )
              goto LABEL_772;
LABEL_735:
            if ( v108 )
            {
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v383, 1u);
              if ( v373 )
              {
                if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_BYTE *)(a1 + 680)) & 0x40) != 0 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                  xxxCallHook(6, v358[0], (__int64)v399, 5);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                }
              }
            }
            v373 = 0;
            v365 = (LOWORD(v363[2]) << 16) | LOWORD(v363[1]);
            v267 = v358[0];
            if ( v358[0] >= 0x200 )
            {
              MouseKeyFlags = (unsigned int)GetMouseKeyFlags(*(_QWORD *)(a1 + 432));
              v368 = MouseKeyFlags;
              v267 = v358[0];
            }
            if ( (v267 - 171 <= 2 || v267 - 523 <= 2) && !(_DWORD)v64 )
            {
              MouseKeyFlags |= *(_QWORD *)&v383[2];
              v368 = MouseKeyFlags;
            }
            v268 = *(_QWORD *)(a1 + 608);
            if ( v364 == 5
              && v108
              && v268
              && (*(_DWORD *)(v268 + 8) & 0x100) != 0
              && *(_QWORD *)v268
              && (**(_DWORD **)v268 & 1) != 0 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                (MenuStateOwnerLockxxxUnlock *)&v417,
                (struct tagMENUSTATE *)v268);
              if ( (unsigned int)xxxCallHandleMenuMessages(v268, v78, v358[0], MouseKeyFlags, v365) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                v10 = 0LL;
                v11 = v359;
                LOBYTE(v8) = v358[1];
                if ( v417 )
                  xxxUnlockMenuStateInternal(v417, 0);
                goto LABEL_36;
              }
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              if ( v417 )
                xxxUnlockMenuStateInternal(v417, 0);
            }
            v269 = v361;
            if ( !v361 )
              goto LABEL_811;
            v8 = v374;
            break;
        }
LABEL_758:
        LODWORD(v64) = DWORD2(v383[1]);
LABEL_759:
        if ( ((DWORD2(v383[7]) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v383[7]) != 50 )
        {
          v363[0] = v64;
          v365 = *((_QWORD *)&v383[2] + 1);
          v368 = *(_QWORD *)&v383[2];
LABEL_786:
          if ( v108 )
          {
            if ( IsMiPActive(v9, 0LL) && v361 )
            {
              if ( v78 )
                v275 = *(_QWORD *)v78;
              else
                v275 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v9 + 1280) + 48LL) = v275;
              if ( (*(_DWORD *)(*(_QWORD *)(v9 + 1280) + 36LL) & 0x400000) != 0 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                v276 = IsCompositionInputWindow((const struct tagWND *)v78);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                if ( !v276 )
                  *(_DWORD *)(*(_QWORD *)(v9 + 1280) + 36LL) &= ~0x400000u;
              }
              MiPWindowFlags = GetMiPWindowFlags((struct tagWND *)v78);
              SetMiPWindowFlags((struct tagWND *)v78, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
              if ( ((DWORD2(v383[1]) - 578) & 0xFFFFFFFB) != 0 )
              {
                if ( ((DWORD2(v383[1]) - 579) & 0xFFFFFFFB) == 0 )
                  **(_DWORD **)(v9 + 1280) &= ~8u;
              }
              else
              {
                v278 = 0;
                if ( DWORD2(v383[1]) == 578 )
                  v278 = 8;
                **(_DWORD **)(v9 + 1280) = v278 | **(_DWORD **)(v9 + 1280) & 0xFFFFFFF7;
              }
            }
            else
            {
              xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 1u);
            }
          }
          v269 = v361;
          if ( CTouchProcessor::IsPointerMessageTouchpad(
                 gpTouchProcessor,
                 (struct tagTHREADINFO *)v9,
                 *((unsigned __int64 *)&v383[2] + 1),
                 v361) )
          {
            if ( !v108
              && !(unsigned int)IsPTPAllowedOnThread(
                                  (struct tagTHREADINFO *)v9,
                                  DWORD2(v383[1]),
                                  *(unsigned __int64 *)&v383[2]) )
            {
              xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 1u);
            }
            v279 = v365;
            if ( (_DWORD)v64 == 595 )
              v279 = -1LL;
            v365 = v279;
          }
          goto LABEL_811;
        }
        EtwTraceBeginPointerMessageRetrieve(v8, LOWORD(v383[2]), (unsigned int)v64);
        LODWORD(v64) = (_DWORD)a8;
        v10 = 0LL;
        v270 = (unsigned int)xxxRetrievePointerInputMessage(
                               v9,
                               a3,
                               a4,
                               a5,
                               1,
                               0,
                               &v360,
                               v8,
                               (__int64)&ThreadDesktopWindow,
                               (__int64)v363,
                               (__int64)&v368,
                               (__int64)&v365,
                               &v370,
                               a8,
                               v356);
        InputTraceLogging::Pointer::RetrieveMessage(v8, 0LL, v270);
        EtwTraceEndPointerMessageRetrieve(v8, LOWORD(v383[2]), DWORD2(v383[1]));
        v78 = (unsigned __int64)ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          ThreadLockExchange((__int64)ThreadDesktopWindow, (__int64)&v396);
        v271 = v270 - 1;
        if ( !v271 )
        {
          LODWORD(v64) = v363[0];
          v108 = v360;
          goto LABEL_786;
        }
        v272 = v271 - 1;
        if ( !v272 )
        {
          if ( v370 )
          {
            v389 = *(_QWORD *)(v78 + 16);
            LockExchangeW32Thread(v389, (__int64)&v420);
          }
          goto LABEL_348;
        }
        v273 = v272 - 1;
        if ( v273 )
        {
          *a8 = 0LL;
          if ( v273 == 1 )
            goto LABEL_41;
          v242 = v363[0];
          MouseKeyFlags = v368;
          v108 = v360;
        }
        else
        {
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
          xxxDefPointerProc(v274, DWORD2(v383[1]), *(_QWORD *)&v383[2], *((_QWORD *)&v383[2] + 1));
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
          *a8 = 0LL;
          v242 = v363[0];
          MouseKeyFlags = v368;
          v108 = v360;
        }
LABEL_773:
        xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 1u);
        if ( v373 )
        {
          if ( ((*(_BYTE *)(v9 + 680) | *(_BYTE *)(**(_QWORD **)(v9 + 464) + 16LL)) & 0x40) != 0 )
          {
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            xxxCallHook(6, v242, (__int64)v399, 5);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
          }
          v373 = 0;
        }
        if ( v377 )
        {
          if ( ((*(_BYTE *)(v9 + 680) | *(_BYTE *)(**(_QWORD **)(v9 + 464) + 16LL)) & 0x40) != 0 )
          {
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            xxxCallHook(7, MouseKeyFlags, v365, 5);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
          }
          v377 = 0;
        }
        v92 = v108 == 0;
        v10 = 0LL;
        v11 = v359;
        LOBYTE(v8) = v358[1];
        if ( !v92 )
          goto LABEL_36;
      }
      if ( DWORD2(v383[1]) == 522 )
        break;
      switch ( DWORD2(v383[1]) )
      {
        case 0x23:
          v365 = *((_QWORD *)&v383[2] + 1);
          if ( v78 )
          {
            v104 = *(_QWORD *)(v78 + 16);
            if ( v104 != v9 )
            {
              if ( *(_QWORD *)(v104 + 432) == *(_QWORD *)(v9 + 432) )
              {
                v105 = v369;
                if ( !v369 )
                {
                  v105 = *(_QWORD *)(v78 + 16);
                  LockExchangeW32Thread(v104, (__int64)&v413);
                }
                goto LABEL_349;
              }
LABEL_381:
              MouseKeyFlags = v368;
LABEL_382:
              v108 = v360;
              goto LABEL_772;
            }
          }
          if ( !(unsigned int)MiPCheckMsgFilter(v8, DWORD2(v383[1]), a4, a5) )
            goto LABEL_348;
          if ( !v360 )
            goto LABEL_810;
          goto LABEL_458;
        case 0xFE:
          goto LABEL_445;
        case 0xFF:
          v365 = *((_QWORD *)&v383[2] + 1);
          MouseKeyFlags = *(_QWORD *)&v383[2];
          v368 = *(_QWORD *)&v383[2];
          v78 = 0LL;
          ThreadDesktopWindow = 0LL;
          v146 = 0LL;
          v64 = 0LL;
          if ( *((_QWORD *)&v383[2] + 1) )
          {
            v147 = HMValidateHandle(*((unsigned __int64 *)&v383[2] + 1), 0x12u);
            v146 = 0LL;
            if ( v147 )
            {
              v78 = *(_QWORD *)(v147 + 24);
              ThreadDesktopWindow = (struct tagWND *)v78;
              v146 = v78;
              v64 = v78;
            }
          }
          if ( !v146 )
          {
            v148 = *(_QWORD *)(v9 + 432);
            v78 = *(_QWORD *)(v148 + 112);
            ThreadDesktopWindow = (struct tagWND *)v78;
            v64 = v78;
            if ( !v78 )
            {
              v78 = *(_QWORD *)(v148 + 120);
              ThreadDesktopWindow = (struct tagWND *)v78;
              v64 = v78;
              if ( !v78 )
                goto LABEL_382;
            }
          }
          ThreadLockExchangeAlways(v78, (__int64)&v396);
          if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v78, v8, &v370, &v360, a8) )
            goto LABEL_348;
          v149 = v370;
          if ( !v370 )
            goto LABEL_330;
          v64 += 16LL;
          if ( *(_QWORD *)(*(_QWORD *)v64 + 432LL) != *(_QWORD *)(v9 + 432) )
            goto LABEL_382;
          if ( (unsigned int)IsInsideMenuLoop(v9) )
          {
            v150 = *(_QWORD *)(**(_QWORD **)(v9 + 608) + 8LL);
          }
          else
          {
            v151 = *(_QWORD *)(v9 + 672);
            if ( !v151 )
              goto LABEL_328;
            v150 = *(_QWORD *)(v151 + 16);
          }
          if ( v150 )
          {
            v78 = v150;
            ThreadDesktopWindow = (struct tagWND *)v150;
            v64 = v150 + 16;
            v149 = *(_QWORD *)(v150 + 16) != v387;
            v370 = v149;
            ThreadLockExchangeAlways(v150, (__int64)&v396);
          }
LABEL_328:
          if ( !v379 )
          {
            v379 = *(_QWORD *)v64;
            v395 = v379;
            LockExchangeW32Thread(v379, (__int64)&v423);
          }
LABEL_330:
          if ( !a4 && a5 == -1 )
            goto LABEL_338;
          if ( a4 <= a5 )
          {
            LOBYTE(v8) = v358[1];
            if ( v358[0] < a4 || v358[0] > a5 )
              goto LABEL_42;
          }
          else if ( v358[0] >= a5 && v358[0] <= a4 )
          {
            goto LABEL_41;
          }
LABEL_338:
          v152 = CheckPwndFilter(v78, a3);
          LOBYTE(v8) = v358[1];
          if ( v152 )
          {
            if ( v149 )
            {
LABEL_348:
              v105 = v369;
LABEL_349:
              v153 = v366;
              *(_QWORD *)(*(_QWORD *)(v9 + 432) + 72LL) = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(
                  *(_QWORD *)(v9 + 432),
                  4u,
                  0x12u,
                  0x20u,
                  (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
                  *(_QWORD *)(v9 + 432),
                  v9,
                  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 64LL));
              *(_QWORD *)(*(_QWORD *)(v9 + 432) + 64LL) = 0LL;
              **(_DWORD **)(v9 + 448) &= ~1u;
              v154 = v379;
              if ( v153 || v105 || v390 || v379 || v389 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                if ( v390 )
                  v294 = (__int128 *)(v390 + 392);
                else
                  v294 = (__int128 *)gObjDummyLock;
                if ( v389 )
                  v295 = (__int128 *)(v389 + 392);
                else
                  v295 = (__int128 *)gObjDummyLock;
                v296 = gObjDummyLock;
                if ( v154 )
                  v296 = v154 + 392;
                v297 = gObjDummyLock;
                if ( v105 )
                  v297 = v105 + 392;
                v298 = gObjDummyLock;
                if ( v153 )
                  v298 = v153 + 392;
                v392 = gpsiLock;
                v393 = *((_QWORD *)&gpsiLock + 2);
                v392 = *(_OWORD *)(v9 + 392);
                v393 = *(_QWORD *)(v9 + 408);
                v392 = *(_OWORD *)v298;
                v393 = *(_QWORD *)(v298 + 16);
                v392 = *(_OWORD *)v297;
                v393 = *(_QWORD *)(v297 + 16);
                v392 = *(_OWORD *)v296;
                v393 = *(_QWORD *)(v296 + 16);
                v392 = *v295;
                v393 = *((_QWORD *)v295 + 2);
                v392 = *v294;
                v393 = *((_QWORD *)v294 + 2);
                if ( v153 )
                {
                  SetWakeBit(v153, 0x4001u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x4001u, 0);
                }
                if ( v105 )
                {
                  SetWakeBit(v105, 0x4006u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x4006u, 0);
                }
                if ( v154 )
                {
                  SetWakeBit(v154, 0x4400u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x4400u, 0);
                }
                if ( v389 )
                {
                  SetWakeBit(v389, 0x5000u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x5000u, 0);
                }
                v299 = v390;
                if ( v390 )
                {
                  if ( (*(_DWORD *)(v390 + 488) & 1) == 0 )
                  {
                    *(_WORD *)(*(_QWORD *)(v390 + 448) + 6LL) |= 0x2040u;
                    *(_WORD *)(*(_QWORD *)(v299 + 448) + 4LL) |= 0x2040u;
                    if ( (*(_WORD *)(*(_QWORD *)(v299 + 448) + 10LL) & 0x2040) != 0 )
                      KeSetEvent(*(PRKEVENT *)(v299 + 736), 2, 0);
                  }
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x2000u, 0);
                }
                else if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL) )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                  *(_WORD *)(*(_QWORD *)(v9 + 448) + 8LL) |= *(_WORD *)(*(_QWORD *)(v9 + 448) + 6LL) & 0x5C07;
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x5C07u, 0);
                  *(_WORD *)(*(_QWORD *)(v9 + 448) + 4LL) &= 0xA3F8u;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                }
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              }
              else
              {
                *(_WORD *)(*(_QWORD *)(v9 + 448) + 8LL) = 0;
                ClearWakeBit((struct tagTHREADINFO *)v9, 0x7C07u, 1);
              }
              v300 = KeGetCurrentThread();
              v301 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v155)
                || (v305 = PsGetCurrentProcess(v303, v302, v304),
                    v306 = PsGetProcessSessionIdEx(v305),
                    v308 = PsGetCurrentThreadProcess(v307),
                    v306 == (unsigned int)PsGetProcessSessionIdEx(v308)) )
              {
                v309 = (__int64 *)PsGetThreadWin32Thread(v300);
                if ( v309 )
                  v301 = *v309;
              }
              *(_QWORD *)(v301 + 16) = v420;
              v310 = v421;
              if ( v421 )
                v422();
              v311 = KeGetCurrentThread();
              v312 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v310)
                || (v316 = PsGetCurrentProcess(v314, v313, v315),
                    v317 = PsGetProcessSessionIdEx(v316),
                    v319 = PsGetCurrentThreadProcess(v318),
                    v317 == (unsigned int)PsGetProcessSessionIdEx(v319)) )
              {
                v320 = (__int64 *)PsGetThreadWin32Thread(v311);
                if ( v320 )
                  v312 = *v320;
              }
              *(_QWORD *)(v312 + 16) = v423;
              v321 = v424;
              if ( v424 )
                v425();
              v322 = KeGetCurrentThread();
              v323 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v321)
                || (v327 = PsGetCurrentProcess(v325, v324, v326),
                    v328 = PsGetProcessSessionIdEx(v327),
                    v330 = PsGetCurrentThreadProcess(v329),
                    v328 == (unsigned int)PsGetProcessSessionIdEx(v330)) )
              {
                v331 = (__int64 *)PsGetThreadWin32Thread(v322);
                if ( v331 )
                  v323 = *v331;
              }
              *(_QWORD *)(v323 + 16) = v407;
              v332 = v408;
              if ( v408 )
                v409();
              v333 = KeGetCurrentThread();
              v334 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v332)
                || (v338 = PsGetCurrentProcess(v336, v335, v337),
                    v339 = PsGetProcessSessionIdEx(v338),
                    v341 = PsGetCurrentThreadProcess(v340),
                    v339 == (unsigned int)PsGetProcessSessionIdEx(v341)) )
              {
                v342 = (__int64 *)PsGetThreadWin32Thread(v333);
                if ( v342 )
                  v334 = *v342;
              }
              *(_QWORD *)(v334 + 16) = v413;
              v343 = v414;
              if ( v414 )
                v415();
              v344 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v343)
                || (v348 = PsGetCurrentProcess(v346, v345, v347),
                    v349 = PsGetProcessSessionIdEx(v348),
                    v351 = PsGetCurrentThreadProcess(v350),
                    v349 == (unsigned int)PsGetProcessSessionIdEx(v351)) )
              {
                v352 = (__int64 *)PsGetThreadWin32Thread(v344);
                if ( v352 )
                  v10 = *v352;
              }
              *(_QWORD *)(v10 + 16) = v410;
              v353 = v411;
              if ( v411 )
                v412();
              ThreadUnlock1(v353);
              goto LABEL_904;
            }
            if ( !v360 )
              goto LABEL_810;
LABEL_458:
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 1u);
            goto LABEL_810;
          }
          goto LABEL_42;
        case 0x100:
        case 0x104:
          v380 = 1;
          if ( (*(_DWORD *)(v9 + 488) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v9) < 0 )
            goto LABEL_348;
          v106 = *(_QWORD *)&v383[2];
          v107 = LOBYTE(v383[2]);
          v108 = v360;
          if ( v360 && (DWORD1(v383[6]) & 0x40000) != 0 )
            goto LABEL_175;
          if ( LOBYTE(v383[2]) != 18LL )
          {
            *(_DWORD *)(*(_QWORD *)(v9 + 432) + 388LL) &= 0xFFFFFFF3;
            v106 = *(_QWORD *)&v383[2];
          }
          v109 = *(_BYTE *)(*(_QWORD *)(v9 + 432) + 232LL);
          v110 = v109 & 0x10;
          if ( v107 != 44 )
            goto LABEL_162;
          if ( (v109 & 0x10) == 0 )
          {
            if ( (*(_DWORD *)(v9 + 876) & 0x20) != 0 )
              goto LABEL_162;
LABEL_154:
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 1u);
            if ( v110 || (DWORD2(v383[2]) & 0xFF0000) == 0x10000LL )
            {
              v64 = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 120LL);
              v111 = v64 == 0;
              if ( !v64 )
                goto LABEL_160;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              v64 = (unsigned __int64)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v64);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            }
            else
            {
              v64 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 456) + 8LL) + 24LL);
            }
            v111 = v64 == 0;
LABEL_160:
            v10 = 0LL;
            v11 = v359;
            LOBYTE(v8) = v358[1];
            if ( !v111 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              v112 = HIDWORD(v383[7]) != 1;
              *(_QWORD *)&v405 = *(_QWORD *)(v9 + 416);
              *(_QWORD *)(v9 + 416) = &v405;
              *((_QWORD *)&v405 + 1) = v64;
              HMLockObject(v64);
              xxxSnapWindow(v64, v112);
              ThreadUnlock1(v113);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            }
            goto LABEL_36;
          }
          if ( (*(_DWORD *)(v9 + 876) & 0x10) == 0 )
            goto LABEL_154;
LABEL_162:
          if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
          {
            v114 = v107 | 0x400;
            if ( (v109 & 0x10) == 0 )
              v114 = v107;
            v115 = v114 | 0x200;
            if ( (v109 & 4) == 0 )
              v115 = v114;
            v116 = v115;
            LODWORD(v116) = v115 | 0x100;
            if ( (v109 & 1) == 0 )
              v116 = v115;
            v117 = HotKeyToWindow(v116);
            v118 = (__int64 *)v117;
            if ( v117 )
            {
              if ( *(_QWORD *)(v9 + 456) == *(_QWORD *)(*(_QWORD *)(v117 + 16) + 456LL) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                v10 = 0LL;
                PostTransformableMessage(
                  *(struct tagWND **)(*(_QWORD *)(v9 + 432) + 120LL),
                  0x112u,
                  0xF150uLL,
                  *v118,
                  0);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
LABEL_174:
                xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 1u);
                v11 = v359;
                LOBYTE(v8) = v358[1];
                goto LABEL_36;
              }
            }
          }
LABEL_175:
          if ( v107 == 231 )
          {
            *(_WORD *)(v9 + 874) = WORD1(v106);
            v106 = 231LL;
          }
LABEL_178:
          v119 = (unsigned __int8)v106;
          if ( (unsigned __int8)v106 == 231LL )
            v106 = 231LL;
          *(_QWORD *)&v383[2] = v106;
          if ( !v108 || (DWORD1(v383[6]) & 0x40000) == 0 )
          {
            if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
            {
              if ( (GetAppImeCompatFlags(0LL) & 0x800000) == 0 && BYTE10(v383[2]) == 41 )
              {
                if ( v108 )
                {
                  v120 = *(_QWORD *)(v9 + 432);
                  if ( (*(_BYTE *)(v120 + 232) & 0x15) == 0
                    && (*(_BYTE *)(v120 + 250) & 0x40) == 0
                    && (*(_BYTE *)(v120 + 251) & 1) == 0 )
                  {
                    v121 = *(const struct tagWND **)(v120 + 112);
                    v64 = (unsigned __int64)v121;
                    if ( !v121 )
                    {
                      v121 = *(const struct tagWND **)(v120 + 120);
                      v64 = (unsigned __int64)v121;
                    }
                    if ( !v64 || *((_QWORD *)v121 + 2) == v9 )
                    {
                      xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 1u);
                      v10 = 0LL;
                      v11 = v359;
                      LOBYTE(v8) = v358[1];
                      if ( !v380 && v64 )
                      {
                        v451 = *(_QWORD *)v121;
                        v452 = 80;
                        v453 = 0LL;
                        v454 = 0LL;
                        v455 = 0;
                        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                        xxxCallCtfHook(3, 0, 1LL, (__int64)&v451);
                        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                      }
                      goto LABEL_36;
                    }
                    LODWORD(v64) = v358[0];
                  }
                }
              }
            }
          }
          if ( v119 == 121 )
          {
            LODWORD(v64) = v64 | 4;
            v358[0] = v64;
            v363[0] = v64;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v9 + 432) + 232LL) & 4) != 0 && v119 == 27 )
          {
            LODWORD(v64) = v64 | 4;
            v358[0] = v64;
            v363[0] = v64;
          }
          if ( (*(_DWORD *)(v9 + 488) & 8) == 0 )
            *((_QWORD *)&v383[2] + 1) &= ~0x2000000uLL;
LABEL_205:
          MouseKeyFlags = LOBYTE(v383[2]);
          v123 = *(_QWORD *)(v9 + 432);
          v78 = *(_QWORD *)(v123 + 112);
          ThreadDesktopWindow = (struct tagWND *)v78;
          v124 = v78;
          if ( !v78 )
          {
            v78 = *(_QWORD *)(v123 + 120);
            v124 = v78;
            ThreadDesktopWindow = (struct tagWND *)v78;
            if ( !v78 )
              goto LABEL_772;
            if ( (unsigned int)(v64 - 256) <= 3 )
            {
              v358[0] = v64 + 4;
              v363[0] = v64 + 4;
            }
          }
          ThreadLockExchangeAlways(v78, (__int64)&v396);
          v125 = (__int64 *)(v124 + 16);
          v126 = *v125;
          LODWORD(v64) = *v125 != v387;
          v370 = v64;
          if ( v126 != v394 )
          {
            if ( *(_QWORD *)(v126 + 432) != *(_QWORD *)(v9 + 432) )
              goto LABEL_772;
            if ( (unsigned int)IsInsideMenuLoop(v9) )
            {
              v128 = *(_QWORD *)(**(_QWORD **)(v9 + 608) + 8LL);
LABEL_215:
              if ( v128 )
              {
                v78 = v128;
                ThreadDesktopWindow = (struct tagWND *)v128;
                v125 = (__int64 *)(v128 + 16);
                LODWORD(v64) = *(_QWORD *)(v128 + 16) != v127;
                v370 = v64;
                ThreadLockExchangeAlways(v128, (__int64)&v396);
              }
            }
            else
            {
              v129 = *(_QWORD *)(v9 + 672);
              if ( v129 )
              {
                v128 = *(_QWORD *)(v129 + 16);
                goto LABEL_215;
              }
            }
            if ( !v366 )
            {
              v366 = *v125;
              v388 = v366;
              LockExchangeW32Thread(v366, (__int64)&v410);
            }
          }
          if ( !a4 && a5 == -1 )
          {
            v130 = v358[0];
          }
          else
          {
            v130 = v358[0];
            if ( a4 <= a5 )
            {
              if ( v358[0] < a4 || v358[0] > a5 )
              {
LABEL_46:
                v10 = 0LL;
                goto LABEL_41;
              }
            }
            else if ( v358[0] >= a5 && v358[0] <= a4 )
            {
              v10 = 0LL;
              goto LABEL_41;
            }
          }
          if ( !(unsigned int)CheckPwndFilter(v78, a3) )
            goto LABEL_46;
          if ( (_DWORD)v64 )
            goto LABEL_844;
          if ( v108 )
          {
            if ( (DWORD1(v383[6]) & 0x40000) != 0 )
              goto LABEL_253;
            if ( !(unsigned int)IsInsideMenuLoop(v9) )
            {
              if ( MouseKeyFlags == 93 && v130 == 257 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                PostTransformableMessage((struct tagWND *)v78, 0x7Bu, *(_QWORD *)v78, -1LL, 0);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              }
              if ( MouseKeyFlags == 112 && v130 == 256 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                PostMessage(v78, 77, 0, 0);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              }
            }
          }
          if ( MouseKeyFlags == 16 )
          {
            v131 = DWORD2(v383[2]) & 0x1000000;
            if ( !v380 )
            {
              v132 = 1;
              if ( (DWORD2(v383[2]) & 0x1000000) == 0 )
                v132 = 4;
              if ( ((unsigned __int8)v132 & *(_BYTE *)(*(_QWORD *)(v9 + 432) + 268LL)) != 0
                && (unsigned int)IsDesktopApp(*(_QWORD *)(v9 + 424))
                && (*(_DWORD *)(v9 + 488) & 8) == 0 )
              {
                v10 = 0LL;
                *(_QWORD *)&v383[2] = (v131 != 0) + 160LL;
                goto LABEL_174;
              }
            }
          }
          v386 = *(unsigned __int8 *)((MouseKeyFlags >> 2) + *(_QWORD *)(v9 + 432) + 228) & (1 << (2
                                                                                                 * (MouseKeyFlags & 3)));
          if ( !v386 )
          {
LABEL_253:
            v133 = v374;
            goto LABEL_254;
          }
          v133 = v374;
          if ( !v108 )
            goto LABEL_260;
          if ( (unsigned __int64)v374 > 1 )
            *((_QWORD *)v374 + 5) |= 0x40000000uLL;
LABEL_254:
          if ( !v108 )
            goto LABEL_260;
          if ( (DWORD1(v383[6]) & 0x40000) != 0
            || (unsigned __int64)v133 <= 1
            || (*(_DWORD *)(v9 + 1232) & 0x10000000) == 0 )
          {
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 1u);
LABEL_260:
            v64 = (unsigned __int64)v378;
            goto LABEL_261;
          }
          v64 = (unsigned __int64)xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 0);
          v378 = (struct tagQMSG *)v64;
LABEL_261:
          v365 = *((_QWORD *)&v383[2] + 1);
          MouseKeyFlags = *(_QWORD *)&v383[2];
          v368 = *(_QWORD *)&v383[2];
          if ( v386 )
            v365 = *((_QWORD *)&v383[2] + 1) | 0x40000000LL;
          if ( v130 == 257 || v130 == 261 )
            v365 |= 0x80000000uLL;
          v134 = *(_QWORD *)(v9 + 432);
          if ( (*(_BYTE *)(v134 + 232) & 0x10) != 0 )
            v365 |= 0x20000000uLL;
          v135 = *(_QWORD *)(v9 + 608);
          if ( v135 && (*(_DWORD *)(v135 + 8) & 1) != 0 )
            v365 |= 0x10000000uLL;
          if ( (*(_DWORD *)(v134 + 388) & 0x4000) != 0 )
            v365 |= 0x8000000uLL;
          if ( (v403 || gpImeHotKeyListHeader) && (DWORD1(v383[6]) & 0x40000) == 0 )
          {
            if ( !v108 )
              goto LABEL_303;
            if ( (!v135 || (*(_DWORD *)(v135 + 8) & 1) == 0) && (*(_DWORD *)(v9 + 488) & 0x2000000) == 0 )
            {
              v136 = v383[2];
              if ( *(_QWORD *)&v383[2] == 231LL )
                v136 = (*(unsigned __int16 *)(v9 + 874) << 16) | 0xE7;
              *(_QWORD *)(v9 + 1240) = *((_QWORD *)&v383[7] + 1);
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              v137 = xxxImmProcessKey(*(_QWORD *)(v9 + 432), v78, v130, v136, v365);
              v138 = v137;
              v382 = v137;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              if ( (v138 & 0x11) != 0 )
              {
                if ( v64 )
                  FreeQEntry((unsigned int *)v64);
                v378 = 0LL;
                goto LABEL_772;
              }
            }
          }
          if ( !v108 )
            goto LABEL_303;
          v377 = 1;
          LODWORD(v64) = 0;
          if ( (DWORD1(v383[6]) & 0x40000) != 0 )
            goto LABEL_302;
          v139 = *(_QWORD *)(v9 + 432);
          v140 = *(_QWORD *)(v139 + 408);
          *(_QWORD *)(v139 + 408) = *((_QWORD *)&v383[4] + 1);
          *(_QWORD *)(v9 + 1240) = *((_QWORD *)&v383[7] + 1);
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
          LODWORD(v64) = xxxCallCtfHook(2, v382 & 2, MouseKeyFlags, v365);
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
          *(_QWORD *)(*(_QWORD *)(v9 + 432) + 408LL) = v140;
          v141 = (unsigned int *)v378;
          if ( !v378 )
            goto LABEL_302;
          if ( (unsigned int)(v64 - 2) > 1
            || (*(_DWORD *)(v9 + 1232) & 0x20000000) != 0
            || !AllocQEntryEx((struct tagMLIST *)(*(_QWORD *)(v9 + 432) + 24LL), v378, 1) )
          {
            FreeQEntry(v141);
            v378 = 0LL;
LABEL_302:
            if ( !(_DWORD)v64 )
            {
LABEL_303:
              if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 464) + 16LL) | *(_BYTE *)(v9 + 680)) & 8) == 0 )
                goto LABEL_308;
              v377 = 1;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
              v142 = 3;
              if ( v108 )
                v142 = 0;
              if ( !(unsigned int)xxxCallHook(v142, MouseKeyFlags, v365, 2) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
LABEL_308:
                if ( v377
                  && v108
                  && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 464) + 16LL) | *(_BYTE *)(v9 + 680)) & 0x40) != 0 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
                  v143 = v365;
                  v144 = MouseKeyFlags;
                  v145 = 7;
                  goto LABEL_312;
                }
                goto LABEL_810;
              }
LABEL_771:
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
            }
LABEL_772:
            v242 = v358[0];
            goto LABEL_773;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_qqq(
              *(_QWORD *)(v9 + 432),
              5u,
              0x12u,
              0x1Fu,
              (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
              *(_QWORD *)(*(_QWORD *)(v9 + 432) + 24LL),
              *(_QWORD *)(v9 + 432),
              *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
          }
          *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 24LL);
          if ( (_DWORD)v64 == 2 )
          {
            v11 = 1;
            v359 = 1;
          }
          else
          {
            v11 = v359;
            if ( (_DWORD)v64 == 3 )
              v11 = 2;
            v359 = v11;
          }
          DeferSysPeekMsg(v9, v11);
          v10 = 0LL;
          v378 = 0LL;
          LOBYTE(v8) = v358[1];
          break;
        case 0x101:
        case 0x105:
          v106 = *(_QWORD *)&v383[2];
          v108 = v360;
          goto LABEL_178;
        case 0x102:
          v108 = v360;
          goto LABEL_205;
        case 0x119:
        case 0x11B:
          goto LABEL_439;
        default:
          goto LABEL_460;
      }
    }
LABEL_372:
    if ( (*(_DWORD *)(v9 + 488) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v9) < 0 )
      goto LABEL_348;
    if ( (unsigned int)IsInsideMenuLoop(v9) )
      goto LABEL_381;
    if ( (DWORD1(v383[6]) & 0x800000) != 0 )
    {
      v78 = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 112LL);
      ThreadDesktopWindow = (struct tagWND *)v78;
    }
    else
    {
      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
      if ( v78 && (unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)v78) )
      {
        LODWORD(v64) = 1;
        if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v78) )
        {
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
          goto LABEL_381;
        }
      }
      else
      {
        ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(0LL);
        LODWORD(v64) = 0;
      }
      v444[2] = 0LL;
      v159 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v444[0] = *(_QWORD *)(v159 + 416);
      *(_QWORD *)(v159 + 416) = v444;
      v160 = ThreadDesktopWindow;
      v444[1] = ThreadDesktopWindow;
      if ( ThreadDesktopWindow )
        HMLockObject(ThreadDesktopWindow);
      v161 = xxxDCEWindowHitTest(
               v160,
               512,
               *(__int64 *)&v383[2],
               *((__int64 *)&v383[2] + 1),
               *(struct tagPOINT *)&v383[5],
               (__int64)&v364,
               8 * (int)v64 + 1);
      v78 = HMValidateHandleNoSecure((unsigned __int64)v161, 1);
      ThreadDesktopWindow = (struct tagWND *)v78;
      v162 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v161, 1);
      InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)v383, (const struct tagPOINT *)&v383[5], v162);
      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
      ThreadUnlock1(v163);
      LODWORD(v64) = v363[0];
      v358[0] = v363[0];
    }
    if ( !v78 )
      goto LABEL_381;
    ThreadLockExchangeAlways(v78, (__int64)&v396);
    v164 = *(_QWORD *)(v78 + 16);
    v370 = v164 != v387;
    v165 = v394;
    if ( v164 != v394 )
    {
      if ( *(_QWORD *)(v164 + 432) != *(_QWORD *)(v9 + 432) )
        goto LABEL_381;
      if ( !v366 )
      {
        v366 = v164;
        v388 = v164;
        LockExchangeW32Thread(v164, (__int64)&v410);
      }
    }
    if ( !(unsigned int)MiPCheckMsgFilter(v8, (unsigned int)v64, a4, a5) || !(unsigned int)CheckPwndFilter(v78, a3) )
      goto LABEL_41;
    if ( v164 != v165 )
      goto LABEL_348;
    if ( !v8 || !IsMiPActive(v9, (__int64)v8) )
    {
      v108 = v360;
      goto LABEL_418;
    }
    if ( (*((_DWORD *)v8 + 25) & 0x800) != 0 )
    {
      memset(v477, 0, sizeof(v477));
      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
      v392 = *(_OWORD *)(v78 + 56);
      v393 = *(_QWORD *)(v78 + 72);
      v166 = *(_QWORD *)(v78 + 272);
      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
      if ( !v166 )
        *((_DWORD *)v8 + 25) &= ~0x2000u;
      v108 = v360;
      if ( !GeneratePointerMessageFromMouse((struct tagQMSG *)v477, v64, v8, (struct tagWND *)v78, v360) )
      {
        if ( v108 || !(unsigned int)IsMiPEnabledForWindow(v78) )
          *((_DWORD *)v8 + 25) &= ~0x800u;
        goto LABEL_418;
      }
      v383[0] = v477[0];
      v383[1] = v477[1];
      v383[2] = v477[2];
      v383[3] = v477[3];
      v383[4] = v477[4];
      v383[5] = v477[5];
      v383[6] = v477[6];
      v383[7] = v477[7];
      v383[8] = v477[8];
      v383[9] = v477[9];
      v361 = 1;
      v376 = 1;
      if ( v108 || !(unsigned int)IsMiPEnabledForWindow(v78) )
        *((_DWORD *)v8 + 25) &= ~0x800u;
      goto LABEL_758;
    }
    v108 = v360;
    if ( !v360 )
      goto LABEL_420;
    if ( !(unsigned int)IsMiPMouseMessage(*((unsigned int *)v8 + 6)) )
      goto LABEL_418;
    if ( (unsigned int)IsGenuineMouseInput((char *)v8 + 120) )
    {
      v167 = *(_DWORD **)(v9 + 1280);
      if ( v167 )
      {
        if ( (*v167 & 2) == 0 && (*v167 & 4) == 0 )
        {
LABEL_414:
          xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 1u);
          v10 = 0LL;
          v11 = v359;
          LOBYTE(v8) = v358[1];
          continue;
        }
      }
    }
    break;
  }
  v168 = *(_DWORD **)(v9 + 1280);
  if ( v168 )
    *v168 &= ~2u;
LABEL_418:
  if ( v108 )
  {
    v169 = 1;
    xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v383, 1u);
  }
  else
  {
LABEL_420:
    v169 = 1;
  }
  v170 = GetMouseKeyFlags(*(_QWORD *)(v9 + 432));
  MouseKeyFlags = *(_QWORD *)&v383[2] | v170;
  v368 = MouseKeyFlags;
  v363[1] = SWORD4(v383[2]);
  v363[2] = SWORD5(v383[2]);
  PhysicalToLogicalDPIPointWithHitTest(&v363[1], &v363[1], 0LL, v78);
  v365 = (LOWORD(v363[2]) << 16) | LOWORD(v363[1]);
  *(_QWORD *)((char *)&v383[3] + 4) = *(_QWORD *)&v363[1];
  v399[0] = *(_QWORD *)&v363[1];
  v399[1] = *(_QWORD *)v78;
  LODWORD(v400) = 0;
  *((_QWORD *)&v400 + 1) = *((_QWORD *)&v383[4] + 1);
  LODWORD(v401) = v383[2];
  if ( v108 )
  {
    v373 = 1;
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
    if ( (unsigned int)xxxCallCtfHook(7, 0, (unsigned int)v64, (__int64)v399) )
      goto LABEL_771;
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
  }
  if ( ((*(_DWORD *)(**(_QWORD **)(v9 + 464) + 16LL) | *(_DWORD *)(v9 + 680)) & 0x100) != 0 )
  {
    v373 = 1;
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
    if ( (unsigned int)xxxCallMouseHook((unsigned int)v64, v399, v108) )
      goto LABEL_771;
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
  }
  else
  {
    v169 = v373;
  }
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
    goto LABEL_435;
  v171 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
  v371 = 0;
  v371 = *(_QWORD *)(v171 + 248) != 0LL;
  if ( !v371 )
  {
    LODWORD(v64) = v363[0];
    v108 = v360;
    goto LABEL_434;
  }
  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
  v108 = v360;
  LODWORD(v64) = v363[0];
  v358[0] = v363[0];
  if ( xxxClientCallLocalMouseHooks(v363[0], v399, (unsigned int)v360) )
  {
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
    MouseKeyFlags = v368;
    goto LABEL_772;
  }
  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
LABEL_434:
  v78 = (unsigned __int64)ThreadDesktopWindow;
LABEL_435:
  if ( v169
    && v108
    && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 464) + 16LL) | *(_BYTE *)(v9 + 680)) & 0x40) != 0 )
  {
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
    v144 = (unsigned int)v64;
    v143 = (__int64)v399;
    v145 = 6;
LABEL_312:
    xxxCallHook(v145, v144, v143, 5);
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
  }
LABEL_810:
  v269 = v361;
LABEL_811:
  if ( *(_QWORD *)(v9 + 764) != *(_QWORD *)((char *)&v383[3] + 4) )
    *(_DWORD *)(v9 + 488) |= 0x100000u;
  v280 = v374;
  if ( (unsigned __int64)v374 > 1 && (BYTE4(v383[6]) & 0x20) != 0 )
  {
    if ( *((_DWORD *)v374 + 6) == 512 )
    {
      v281 = 0LL;
      if ( v78 )
        v281 = *(_QWORD *)v78;
      *((_QWORD *)v374 + 2) = v281;
      *((_DWORD *)v280 + 25) |= 0x400u;
    }
    *((_QWORD *)v280 + 8) = v365;
  }
  *(_QWORD *)(v9 + 764) = *(_QWORD *)((char *)&v383[3] + 4);
  *(_DWORD *)(v9 + 772) = *(_DWORD *)(*(_QWORD *)(v78 + 40) + 288LL);
  *(_QWORD *)(v9 + 776) = *(_QWORD *)&v383[5];
  *(_DWORD *)(v9 + 568) = v383[3];
  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 408LL) = *((_QWORD *)&v383[4] + 1);
  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 72LL) = 1LL;
  *(_QWORD *)(v9 + 576) = 1LL;
  *(_QWORD *)(v9 + 1240) = *((_QWORD *)&v383[7] + 1);
  *(_DWORD *)(v9 + 1288) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v282 = v384;
  v283 = *(_DWORD *)(v384 + 1232) | 0x20000;
  if ( *(_DWORD *)(v9 + 1244) != 1 )
    v283 = *(_DWORD *)(v384 + 1232) & 0xFFFDFFFF;
  *(_DWORD *)(v384 + 1232) = v283;
  **(_DWORD **)(v9 + 448) &= ~8u;
  **(_QWORD **)(v9 + 480) &= 0x7FFFFFFFuLL;
  v284 = 0LL;
  v285 = v360;
  if ( v360 )
  {
    v286 = *(unsigned __int64 **)(v282 + 480);
    v287 = *v286;
    if ( (BYTE4(v383[6]) & 1) != 0 )
      v288 = v287 | 0x1000;
    else
      v288 = v287 & 0xFFFFFFFFFFFFEFFFuLL;
    *v286 = v288;
  }
  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
  v289 = v363[0];
  TransferWakeBit(v9, v363[0]);
  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
  ClearWakeBit((struct tagTHREADINFO *)v9, 0x7C07u, 1);
  if ( v285 )
  {
    if ( v269 )
    {
      v290 = *(_DWORD **)(v9 + 1280);
      if ( v290 )
      {
        if ( (*v290 & 1) != 0 && (*v290 & 4) != 0 )
          SetMiPWakeBit((struct tagTHREADINFO *)v9);
      }
    }
  }
  if ( ThreadDesktopWindow )
    v284 = *(_QWORD *)ThreadDesktopWindow;
  *(_QWORD *)a2 = v284;
  *(_DWORD *)(a2 + 8) = v289;
  v291 = v368;
  if ( (v382 & 2) != 0 )
    v291 = 229LL;
  *(_QWORD *)(a2 + 16) = v291;
  *(_QWORD *)(a2 + 24) = v365;
  *(_DWORD *)(a2 + 32) = v383[3];
  *(_QWORD *)(a2 + 36) = *(_QWORD *)((char *)&v383[3] + 4);
  InputTraceLogging::Delivery::ScanSysQueue(
    (const struct tagQMSG *)v383,
    (const struct tagMSG *)a2,
    (const struct tagTHREADINFO *)v9,
    v285 != 0);
  if ( v285 )
  {
    EtwTraceInputProcessDelay(v9);
    *(_DWORD *)(*(_QWORD *)(v9 + 432) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v292 = *(_DWORD *)(a2 + 8);
    if ( v292 == 256 )
    {
      *(_DWORD *)(v9 + 1344) |= 1u;
      *(_QWORD *)(v9 + 1328) = *(_QWORD *)(v9 + 1240);
      *(_DWORD *)(v9 + 1320) = *(unsigned __int16 *)(a2 + 26);
      *(_DWORD *)(v9 + 1324) = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(v9 + 1336) = *(_QWORD *)&v383[9];
    }
    else if ( ((v292 - 257) & 0xFFFFFFFB) == 0 )
    {
      *(_DWORD *)(v9 + 1344) &= ~1u;
    }
    v285 = v360;
  }
  EtwTraceRetrieveInputMessage(a2, v285);
  PopAndFreeW32ThreadLock((__int64)&v420);
  PopAndFreeW32ThreadLock((__int64)&v423);
  PopAndFreeW32ThreadLock((__int64)&v407);
  PopAndFreeW32ThreadLock((__int64)&v413);
  PopAndFreeW32ThreadLock((__int64)&v410);
  ThreadUnlock1(v293);
  CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v357);
  return 1LL;
}
