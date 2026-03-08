/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     DeferMessagesOnQueue @ 0x1C000AF98 (DeferMessagesOnQueue.c)
 *     xxxCallMouseHook @ 0x1C000D82C (xxxCallMouseHook.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000FFD0 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     LockExchangeW32Thread @ 0x1C001660C (LockExchangeW32Thread.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0016900 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00291D4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035AC4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00375B4 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C003768C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     IsPointerInputMessage @ 0x1C0038580 (IsPointerInputMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00388C0 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     PhkNextValid @ 0x1C0039A4C (PhkNextValid.c)
 *     GetThreadDesktopWindow @ 0x1C003BE08 (GetThreadDesktopWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0042A88 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00468F4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C0047DBC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0049D3C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0049E70 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C0072420 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C0072510 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0096318 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     xxxTrackMouseMove @ 0x1C00BD950 (xxxTrackMouseMove.c)
 *     _PostTransformableMessage @ 0x1C00CB714 (_PostTransformableMessage.c)
 *     TransferWakeBit @ 0x1C00CCF54 (TransferWakeBit.c)
 *     IsInsideMenuLoop @ 0x1C00CE5D4 (IsInsideMenuLoop.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D34C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C00D6C0C (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00D6C70 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     xxxCallCtfHook @ 0x1C00D6FB4 (xxxCallCtfHook.c)
 *     IsMiPActive @ 0x1C00D7EB8 (IsMiPActive.c)
 *     IsMiPEnabledForThread @ 0x1C00D7F08 (IsMiPEnabledForThread.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00D895C (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1C00DA8CC (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     GetAppImeCompatFlags @ 0x1C00DABBC (GetAppImeCompatFlags.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C00DEDBC (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C00DEE6C (ThreadLockExchangeAlways.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     CheckPwndFilter @ 0x1C00E10D0 (CheckPwndFilter.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C00E77B4 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00E8454 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     IsThreadDesktopComposed @ 0x1C0101360 (IsThreadDesktopComposed.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ThreadLockExchange @ 0x1C010A0D0 (ThreadLockExchange.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     Feature_DropHtTransparentOffThread__private_IsEnabledDeviceUsage @ 0x1C012D678 (Feature_DropHtTransparentOffThread__private_IsEnabledDeviceUsage.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C012D6CC (Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C012D774 (Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     strcmp_0 @ 0x1C0130AE2 (strcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01432F0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01433FC (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01436FA (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0143AD6 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C0143BA8 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0143CBE (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C0143CEA (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x1C0143D62 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C014417A (IsMiPEnabledForWindow.c)
 *     SetMiPPromotion @ 0x1C0144240 (SetMiPPromotion.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C0144B3C (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C0145150 (PhysicalToLogicalInPlacePointWithParent.c)
 *     FreePointerMessageParams @ 0x1C0146536 (FreePointerMessageParams.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C01465CE (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     GetMessageWindow @ 0x1C0149156 (GetMessageWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C014A6E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01B5C70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BC8CC (xxxCallJournalPlaybackHook.c)
 *     SetJournalTimer @ 0x1C01C19C8 (SetJournalTimer.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01C61D4 (xxxRetrievePointerInputMessage.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01C6C2C (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     GetPenDoubleClickTime @ 0x1C01F4C04 (GetPenDoubleClickTime.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0201C0C (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C0214240 (xxxClientCallLocalMouseHooks.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x1C02182B0 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C0219674 (xxxCallHandleMenuMessages.c)
 *     xxxDefPointerProc @ 0x1C02259C4 (xxxDefPointerProc.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C02265B0 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     xxxSnapWindow @ 0x1C022AF08 (xxxSnapWindow.c)
 *     HotKeyToWindow @ 0x1C022B44C (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C022BCB4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C024E444 (_W32ExceptionHandler.c)
 */

__int64 __fastcall xxxScanSysQueue(
        struct tagTHREADINFO *a1,
        struct tagMSG *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        int a7,
        struct tagQMSG **a8)
{
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r12
  unsigned int v11; // r13d
  __int64 *v12; // r15
  __int64 v13; // rdx
  char v14; // al
  __int64 v16; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rbx
  __int64 *v23; // rax
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  char v28; // r8
  _BOOL8 v29; // r8
  _DWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // r13d
  __int64 v34; // rax
  __int64 v35; // rcx
  bool IsLockedShared; // al
  __int64 Valid; // rcx
  unsigned __int64 v38; // rdi
  unsigned int v39; // eax
  struct tagMLIST *v40; // rcx
  unsigned __int64 *v41; // rax
  int v42; // eax
  struct tagTHREADINFO *v43; // rax
  PDEVICE_OBJECT v44; // rcx
  int v45; // eax
  struct tagQMSG **v46; // rcx
  __int64 v47; // rbx
  int v48; // ebx
  __int64 ThreadDesktopWindow; // r15
  _DWORD *v50; // rcx
  __int64 v51; // rdi
  __int64 *v52; // rsi
  __int64 v53; // rcx
  bool v54; // zf
  int v55; // eax
  bool v56; // cf
  int v57; // eax
  __int64 v58; // rbx
  __int64 v59; // rcx
  char v60; // dl
  char v61; // r8
  __int64 v62; // rbx
  __int64 v63; // rdi
  _QWORD *v64; // rcx
  PDEVICE_OBJECT v65; // rcx
  int v66; // eax
  int v67; // eax
  int v68; // r9d
  char v69; // dl
  __int64 v70; // rax
  char v71; // dl
  char v72; // r8
  unsigned int v73; // ebx
  unsigned int v74; // r14d
  unsigned __int64 MouseKeyFlags; // r13
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdi
  int v79; // r14d
  int v80; // ebx
  struct tagWND *v81; // rdi
  bool v82; // zf
  BOOL v83; // ebx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  char v87; // r8
  unsigned int v88; // ecx
  unsigned int v89; // edx
  __int64 v90; // rcx
  _QWORD *v91; // rax
  __int64 v92; // rsi
  __int64 AppImeCompatFlags; // rax
  struct tagQ *v94; // rcx
  _QWORD *v95; // rbx
  _QWORD *v96; // rdi
  _QWORD *v97; // rax
  unsigned int v98; // edx
  __int64 v99; // rax
  unsigned int v100; // edi
  struct tagQ **v101; // rcx
  BOOL v102; // ebx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rcx
  int v106; // eax
  int v107; // eax
  struct tagQMSG *v108; // rax
  __int64 v109; // rbx
  char v110; // al
  struct tagQ *v111; // rcx
  __int64 v112; // rax
  int v113; // eax
  __int64 v114; // rax
  int v115; // eax
  unsigned __int64 v116; // rbx
  __int64 v117; // rax
  int v118; // eax
  int v119; // ebx
  __int64 v120; // rdi
  unsigned int v121; // ebx
  int v122; // eax
  struct tagQ **v123; // rcx
  struct tagQMSG *v124; // rdi
  char v125; // dl
  char v126; // r8
  __int64 v127; // rax
  __int64 **v128; // rdx
  int v129; // ecx
  __int64 v130; // rax
  __int64 v131; // rdi
  __int64 v132; // rcx
  struct tagQ *v133; // rax
  struct tagQMSG *v134; // rsi
  int v135; // ebx
  struct tagTHREADINFO *v136; // rdi
  __int64 v137; // rcx
  __int64 v138; // rcx
  int v139; // eax
  int v140; // eax
  int v141; // eax
  int v142; // eax
  struct tagQ **v143; // r13
  bool v144; // bl
  BOOL v145; // ecx
  int v146; // eax
  unsigned int v147; // eax
  HWND v148; // rbx
  __int64 v149; // rdx
  __int64 v150; // rdx
  struct tagWND *v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // rcx
  BOOL v156; // ebx
  int v157; // eax
  int v158; // eax
  int v159; // ebx
  _DWORD *v160; // rax
  _DWORD *v161; // rax
  unsigned int v162; // eax
  unsigned int v163; // ebx
  __int64 **v164; // rdi
  __int64 v165; // rcx
  int v166; // edx
  __int64 v167; // rcx
  char *v168; // rax
  char v169; // cl
  int v170; // eax
  int v171; // eax
  int v172; // eax
  int v173; // edx
  int v174; // eax
  unsigned int v175; // r9d
  struct tagWND *v176; // rcx
  HWND v177; // rbx
  int v178; // eax
  struct tagWND *v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  int v183; // ebx
  BOOL v184; // ecx
  struct tagQ **v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rax
  __int64 v188; // rdx
  struct tagQ *v189; // r8
  int v190; // r8d
  __int64 v191; // r9
  __int64 v192; // r8
  __int64 v193; // rcx
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rdx
  BOOL v197; // r8d
  __int64 v198; // rax
  const char *v199; // rcx
  __int64 v200; // rbx
  int v201; // r12d
  __int64 v202; // rcx
  struct tagQ **v203; // rdx
  struct tagPOINT v204; // r8
  struct tagPOINT v205; // rbx
  _QWORD *v206; // rsi
  int v207; // eax
  int v208; // eax
  __int64 v209; // rcx
  int v210; // ecx
  __int64 v211; // rcx
  struct tagTHREADINFO *v212; // r13
  BOOL v213; // r14d
  unsigned __int16 v214; // di
  __int64 v215; // rsi
  int v216; // eax
  unsigned __int64 v217; // rdx
  unsigned __int64 v218; // rdx
  unsigned __int64 v219; // rdx
  int v220; // edx
  int v221; // eax
  char v222; // al
  struct tagQ **v223; // rbx
  struct tagQ *v224; // rax
  char v225; // al
  struct tagQ *v226; // rcx
  __int64 v227; // rax
  int v228; // eax
  __int64 v229; // rcx
  struct tagQ *v230; // r11
  int v231; // r10d
  int v232; // r9d
  int v233; // kr04_4
  int v234; // edx
  int v235; // eax
  int v236; // ecx
  int TouchTimeFromCPLValue; // eax
  int v238; // eax
  struct tagTHREADINFO *v239; // r12
  _DWORD *v240; // rcx
  unsigned int v241; // ebx
  __int64 **v242; // r15
  _DWORD *v243; // rbx
  __int64 v244; // rcx
  __int64 v245; // rcx
  int v246; // eax
  char *v247; // r12
  __int64 v248; // rcx
  __int64 v249; // rax
  struct tagTHREADINFO *v250; // r8
  const struct tagWND *v251; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  const struct tagWND *TopLevelWindow; // rax
  bool v254; // di
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v256; // rdx
  __int64 v257; // rdx
  __int64 v258; // rcx
  __int64 v259; // r8
  struct tagQMSG *v260; // rbx
  struct tagTHREADINFO *v261; // rcx
  __int128 v262; // xmm12
  __int128 v263; // xmm13
  __int128 v264; // xmm14
  __int128 v265; // xmm15
  int v266; // esi
  __int128 *v267; // rcx
  __int64 v268; // r11
  __int64 v269; // rcx
  int v270; // r9d
  unsigned int *v271; // rax
  _DWORD *v272; // rax
  __int64 v273; // rax
  __int64 v274; // rdi
  __int64 v275; // rdx
  __int64 v276; // rax
  struct tagWND *v277; // rbx
  __int64 v278; // rcx
  BOOL v279; // ecx
  struct tagQ **v280; // rcx
  struct tagTHREADINFO *v281; // rdx
  __int64 v282; // rax
  __int128 v283; // xmm6
  __int128 v284; // xmm7
  __int128 v285; // xmm8
  __int128 v286; // xmm9
  __int128 v287; // xmm10
  __int128 v288; // xmm11
  __int64 v289; // rdx
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // rax
  int v293; // edi
  struct tagQ **v294; // rbx
  unsigned __int64 v295; // rcx
  __int64 v296; // rax
  const struct tagQMSG *v297; // r8
  unsigned int v298; // r11d
  __int64 v299; // r10
  int v300; // r10d
  int v301; // r11d
  __int64 v302; // rbx
  __int64 v303; // rcx
  int v304; // ebx
  int v305; // ebx
  int v306; // ebx
  __int64 v307; // rcx
  BOOL v308; // ecx
  __int64 v309; // rcx
  unsigned __int64 MiPWindowFlags; // rax
  int v311; // edx
  __int64 v312; // rax
  struct tagTHREADINFO *v313; // r13
  __int64 v314; // rax
  struct tagQ **v315; // r8
  unsigned int v316; // edx
  int v317; // r15d
  unsigned int v318; // ebx
  unsigned __int64 v319; // rax
  unsigned __int64 v320; // rax
  unsigned int v321; // r14d
  _DWORD *v322; // rax
  struct tagMSG *v323; // rdx
  __int64 v324; // rax
  __int64 v325; // rbx
  __int64 *v326; // rax
  __int64 v327; // rbx
  __int64 *v328; // rax
  __int64 v329; // rbx
  __int64 *v330; // rax
  __int64 v331; // rbx
  __int64 *v332; // rax
  __int64 *v333; // rax
  __int64 v334; // rdx
  __int64 v335; // r8
  __int64 v336; // rcx
  char v337; // dl
  struct tagQ **v338; // rdx
  __int64 v339; // r14
  __int64 v340; // rcx
  __int64 v341; // rax
  __int64 v342; // rbx
  __int64 *v343; // rax
  __int64 v344; // rcx
  __int64 v345; // rbx
  __int64 v346; // rbx
  __int64 *v347; // rax
  __int64 v348; // rbx
  __int64 *v349; // rax
  __int64 v350; // rbx
  __int64 *v351; // rax
  __int64 v352; // rbx
  __int64 *v353; // rax
  __int64 *v354; // rax
  __int64 v355; // rdx
  __int64 v356; // r8
  __int64 v357; // rcx
  __int64 v358; // [rsp+20h] [rbp-988h]
  int *v359; // [rsp+28h] [rbp-980h]
  unsigned int v360[2]; // [rsp+70h] [rbp-938h] BYREF
  struct tagQ **v361; // [rsp+78h] [rbp-930h]
  int v362; // [rsp+80h] [rbp-928h] BYREF
  BOOL v363; // [rsp+84h] [rbp-924h]
  struct tagTHREADINFO *v364; // [rsp+88h] [rbp-920h]
  bool v365; // [rsp+90h] [rbp-918h]
  struct tagQMSG *v366; // [rsp+98h] [rbp-910h]
  int v367; // [rsp+A0h] [rbp-908h] BYREF
  struct tagPOINT v368; // [rsp+A8h] [rbp-900h] BYREF
  char v369; // [rsp+B0h] [rbp-8F8h]
  __int64 v370; // [rsp+B8h] [rbp-8F0h] BYREF
  __int64 v371; // [rsp+C0h] [rbp-8E8h] BYREF
  __int64 v372; // [rsp+C8h] [rbp-8E0h] BYREF
  int v373; // [rsp+D0h] [rbp-8D8h] BYREF
  bool v374; // [rsp+D4h] [rbp-8D4h]
  bool v375; // [rsp+D5h] [rbp-8D3h]
  int v376; // [rsp+D8h] [rbp-8D0h]
  int v377; // [rsp+DCh] [rbp-8CCh]
  int v378; // [rsp+E0h] [rbp-8C8h]
  int v379; // [rsp+E4h] [rbp-8C4h]
  int v380; // [rsp+E8h] [rbp-8C0h]
  int v381; // [rsp+ECh] [rbp-8BCh]
  unsigned int v382; // [rsp+F0h] [rbp-8B8h]
  int v383; // [rsp+F8h] [rbp-8B0h]
  struct tagQMSG **v384; // [rsp+100h] [rbp-8A8h]
  __int64 v385; // [rsp+108h] [rbp-8A0h]
  int v386; // [rsp+110h] [rbp-898h]
  struct tagQMSG *v387; // [rsp+118h] [rbp-890h]
  __int64 **v388; // [rsp+120h] [rbp-888h]
  __int128 v389; // [rsp+130h] [rbp-878h] BYREF
  __int128 v390; // [rsp+140h] [rbp-868h]
  __int128 v391; // [rsp+150h] [rbp-858h]
  __int128 v392; // [rsp+160h] [rbp-848h]
  __int128 v393; // [rsp+170h] [rbp-838h]
  __int128 v394; // [rsp+180h] [rbp-828h] BYREF
  __int128 v395; // [rsp+190h] [rbp-818h]
  __int128 v396; // [rsp+1A0h] [rbp-808h] BYREF
  __int128 v397; // [rsp+1B0h] [rbp-7F8h]
  __int128 v398; // [rsp+1C0h] [rbp-7E8h]
  _BYTE *v399; // [rsp+1D0h] [rbp-7D8h]
  int v400; // [rsp+1D8h] [rbp-7D0h]
  unsigned __int64 v401; // [rsp+1E0h] [rbp-7C8h]
  struct tagTHREADINFO *v402; // [rsp+1E8h] [rbp-7C0h]
  __int64 v403; // [rsp+1F0h] [rbp-7B8h]
  __int64 v404; // [rsp+1F8h] [rbp-7B0h]
  char *v405; // [rsp+200h] [rbp-7A8h]
  int v406; // [rsp+208h] [rbp-7A0h]
  __int64 *v407; // [rsp+210h] [rbp-798h]
  __int64 v408; // [rsp+218h] [rbp-790h] BYREF
  __int64 v409; // [rsp+220h] [rbp-788h]
  __int64 v410; // [rsp+228h] [rbp-780h]
  struct tagTHREADINFO *v411; // [rsp+230h] [rbp-778h]
  __int64 v412; // [rsp+238h] [rbp-770h] BYREF
  __int64 v413; // [rsp+240h] [rbp-768h]
  void (*v414)(void); // [rsp+248h] [rbp-760h]
  int v415; // [rsp+250h] [rbp-758h]
  unsigned int v416; // [rsp+254h] [rbp-754h] BYREF
  __int64 v417; // [rsp+258h] [rbp-750h]
  __int64 v418; // [rsp+260h] [rbp-748h]
  char *v419; // [rsp+268h] [rbp-740h]
  struct tagTHREADINFO *v420; // [rsp+270h] [rbp-738h]
  __int64 v421; // [rsp+278h] [rbp-730h] BYREF
  __int64 v422; // [rsp+280h] [rbp-728h]
  void (*v423)(void); // [rsp+288h] [rbp-720h]
  __int64 v424; // [rsp+290h] [rbp-718h] BYREF
  __int64 v425; // [rsp+298h] [rbp-710h]
  void (*v426)(void); // [rsp+2A0h] [rbp-708h]
  __int128 v427; // [rsp+2A8h] [rbp-700h] BYREF
  __int64 v428; // [rsp+2B8h] [rbp-6F0h]
  __int64 v429; // [rsp+2C0h] [rbp-6E8h] BYREF
  __int64 v430; // [rsp+2C8h] [rbp-6E0h]
  void (*v431)(void); // [rsp+2D0h] [rbp-6D8h]
  __int64 v432; // [rsp+2D8h] [rbp-6D0h] BYREF
  __int64 v433; // [rsp+2E0h] [rbp-6C8h]
  void (*v434)(void); // [rsp+2E8h] [rbp-6C0h]
  struct tagTHREADINFO *v435; // [rsp+2F0h] [rbp-6B8h]
  struct tagTHREADINFO *v436; // [rsp+2F8h] [rbp-6B0h]
  struct tagMENUSTATE *v437; // [rsp+300h] [rbp-6A8h] BYREF
  unsigned __int64 **v438; // [rsp+308h] [rbp-6A0h]
  struct tagMSG *v439; // [rsp+310h] [rbp-698h]
  __int128 v440; // [rsp+318h] [rbp-690h] BYREF
  __int64 v441; // [rsp+328h] [rbp-680h]
  _DWORD v442[4]; // [rsp+330h] [rbp-678h] BYREF
  _QWORD v443[2]; // [rsp+340h] [rbp-668h] BYREF
  __int128 v444; // [rsp+350h] [rbp-658h]
  __int64 v445; // [rsp+360h] [rbp-648h] BYREF
  __int64 v446[3]; // [rsp+368h] [rbp-640h] BYREF
  _DWORD v447[2]; // [rsp+380h] [rbp-628h] BYREF
  __int128 v448; // [rsp+388h] [rbp-620h]
  int *v449; // [rsp+398h] [rbp-610h]
  unsigned int v450; // [rsp+3A0h] [rbp-608h]
  int v451; // [rsp+3A4h] [rbp-604h]
  char *v452; // [rsp+3A8h] [rbp-600h]
  __int64 v453; // [rsp+3B0h] [rbp-5F8h]
  __int64 v454; // [rsp+3B8h] [rbp-5F0h]
  _DWORD v455[2]; // [rsp+3C0h] [rbp-5E8h] BYREF
  __int128 v456; // [rsp+3C8h] [rbp-5E0h]
  int *v457; // [rsp+3D8h] [rbp-5D0h]
  int v458; // [rsp+3E0h] [rbp-5C8h]
  int v459; // [rsp+3E4h] [rbp-5C4h]
  char *v460; // [rsp+3E8h] [rbp-5C0h]
  __int64 v461; // [rsp+3F0h] [rbp-5B8h]
  __int64 v462; // [rsp+3F8h] [rbp-5B0h]
  __int128 v463; // [rsp+400h] [rbp-5A8h]
  __int128 v464; // [rsp+410h] [rbp-598h]
  __int128 v465; // [rsp+420h] [rbp-588h]
  __int128 v466; // [rsp+430h] [rbp-578h]
  __int128 v467; // [rsp+440h] [rbp-568h]
  __int128 v468; // [rsp+450h] [rbp-558h]
  __int128 v469; // [rsp+460h] [rbp-548h] BYREF
  __int64 v470; // [rsp+470h] [rbp-538h]
  __int128 v471; // [rsp+478h] [rbp-530h] BYREF
  __int64 v472; // [rsp+488h] [rbp-520h]
  __int64 v473; // [rsp+498h] [rbp-510h]
  int v474; // [rsp+4A0h] [rbp-508h]
  __int128 v475; // [rsp+4A4h] [rbp-504h]
  __int128 v476; // [rsp+4B4h] [rbp-4F4h]
  int v477; // [rsp+4C4h] [rbp-4E4h]
  unsigned __int64 v478; // [rsp+4F8h] [rbp-4B0h]
  __int128 v479; // [rsp+500h] [rbp-4A8h]
  __int64 v480; // [rsp+510h] [rbp-498h]
  __int128 v481; // [rsp+518h] [rbp-490h]
  __int128 v482; // [rsp+528h] [rbp-480h]
  __int128 v483; // [rsp+538h] [rbp-470h]
  __int128 v484; // [rsp+548h] [rbp-460h]
  __int128 v485; // [rsp+558h] [rbp-450h]
  __int128 v486; // [rsp+568h] [rbp-440h]
  __int128 v487; // [rsp+580h] [rbp-428h] BYREF
  __int128 v488; // [rsp+590h] [rbp-418h]
  __int128 v489; // [rsp+5A0h] [rbp-408h]
  __int128 v490; // [rsp+5B0h] [rbp-3F8h]
  __int128 v491; // [rsp+5C0h] [rbp-3E8h]
  __int128 v492; // [rsp+5D0h] [rbp-3D8h]
  __int128 v493; // [rsp+5E0h] [rbp-3C8h]
  __int128 v494; // [rsp+5F0h] [rbp-3B8h]
  __int128 v495; // [rsp+600h] [rbp-3A8h]
  __int128 v496; // [rsp+610h] [rbp-398h]
  __int128 v497; // [rsp+620h] [rbp-388h] BYREF
  __int128 v498; // [rsp+630h] [rbp-378h]
  __int128 v499; // [rsp+640h] [rbp-368h]
  __int128 v500; // [rsp+650h] [rbp-358h]
  __int128 v501; // [rsp+660h] [rbp-348h]
  __int128 v502; // [rsp+670h] [rbp-338h]
  __int128 v503; // [rsp+680h] [rbp-328h]
  __int128 v504; // [rsp+690h] [rbp-318h]
  __int128 v505; // [rsp+6A0h] [rbp-308h]
  __int128 v506; // [rsp+6B0h] [rbp-2F8h]
  _OWORD v507[10]; // [rsp+6C0h] [rbp-2E8h] BYREF
  _BYTE v508[24]; // [rsp+760h] [rbp-248h] BYREF
  unsigned int v509; // [rsp+778h] [rbp-230h]
  _OWORD v510[10]; // [rsp+800h] [rbp-1A8h] BYREF
  __int64 v511[2]; // [rsp+8A0h] [rbp-108h] BYREF
  __int128 v512; // [rsp+8B0h] [rbp-F8h]
  __int64 v513; // [rsp+8C0h] [rbp-E8h]

  v376 = a4;
  v411 = a1;
  v435 = a1;
  v8 = a1;
  v364 = a1;
  v420 = a1;
  v402 = a1;
  v436 = a1;
  v439 = a2;
  v383 = a4;
  v384 = a8;
  memset_0(&v389, 0, 0xA0uLL);
  v10 = 0LL;
  v370 = 0LL;
  v368 = 0LL;
  v373 = 0;
  v367 = 0;
  *(_OWORD *)v511 = 0LL;
  v512 = 0LL;
  v513 = 0LL;
  v406 = 0;
  v440 = 0LL;
  v441 = 0LL;
  v410 = 0LL;
  v427 = 0LL;
  v428 = 0LL;
  v362 = a6 & 1;
  v379 = 0;
  v11 = 0;
  v360[1] = 0;
  v363 = 0;
  v365 = 0;
  v387 = 0LL;
  *a8 = 0LL;
  v12 = (__int64 *)((char *)v8 + 432);
  v361 = (struct tagQ **)((char *)v8 + 432);
  if ( a7 == 0x2000 )
  {
    if ( *(_QWORD *)(*v12 + 88) )
    {
      EtwTraceInputQueueLockedPeekRecursion();
      return 0LL;
    }
  }
  else
  {
    v361 = (struct tagQ **)((char *)v8 + 432);
  }
  v405 = (char *)v8 + 432;
  v400 = 0;
  v377 = 0;
  v381 = 0;
  v13 = *v12;
  if ( !*(_QWORD *)(*v12 + 72) )
  {
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v9,
        (__int64)gFullLog,
        4u,
        0x12u,
        0x1Fu,
        (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
        v13,
        v8,
        v8);
    *(_QWORD *)(*v12 + 72) = v8;
    **((_DWORD **)v8 + 56) |= 1u;
    v13 = *v12;
  }
  if ( (a7 & 0x1C07) != 0 )
  {
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v13 + 396) &= ~0x400u;
    else
      *(_DWORD *)(v13 + 396) |= 0x400u;
  }
  if ( *(struct tagTHREADINFO **)(*v12 + 72) != v8 )
  {
    EtwTraceInputQueueLocked(*v12, v13, v9);
    return 2LL;
  }
  v385 = 0LL;
  v404 = 0LL;
  v418 = 0LL;
  v403 = 0LL;
  v417 = 0LL;
  v16 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v16 = *ThreadWin32Thread;
  v424 = *(_QWORD *)(v16 + 16);
  *(_QWORD *)(v16 + 16) = &v424;
  v425 = 0LL;
  v426 = (void (*)(void))DereferenceW32Thread;
  v18 = 0LL;
  v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v19 )
    v18 = *v19;
  v421 = *(_QWORD *)(v18 + 16);
  *(_QWORD *)(v18 + 16) = &v421;
  v422 = 0LL;
  v423 = (void (*)(void))DereferenceW32Thread;
  v20 = 0LL;
  v21 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v21 )
    v20 = *v21;
  v412 = *(_QWORD *)(v20 + 16);
  *(_QWORD *)(v20 + 16) = &v412;
  v413 = 0LL;
  v414 = (void (*)(void))DereferenceW32Thread;
  v22 = 0LL;
  v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v23 )
    v22 = *v23;
  v432 = *(_QWORD *)(v22 + 16);
  *(_QWORD *)(v22 + 16) = &v432;
  v433 = 0LL;
  v434 = (void (*)(void))DereferenceW32Thread;
  v24 = 0LL;
  v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v25 )
    v24 = *v25;
  v429 = *(_QWORD *)(v24 + 16);
  *(_QWORD *)(v24 + 16) = &v429;
  v430 = 0LL;
  v431 = (void (*)(void))DereferenceW32Thread;
  v407 = (__int64 *)((char *)v8 + 416);
  v408 = *((_QWORD *)v8 + 52);
  *((_QWORD *)v8 + 52) = &v408;
  v409 = 0LL;
  v369 = 0;
  v27 = *(_DWORD *)(gptiCurrent + 1276LL);
  if ( (v27 & 0x20) == 0 )
  {
    v369 = 1;
    *(_DWORD *)(gptiCurrent + 1276LL) = v27 | 0x20;
  }
LABEL_33:
  LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)v26 || v28 )
    WPP_RECORDER_AND_TRACE_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v26,
      v28,
      (__int64)gFullLog,
      5u,
      0x12u,
      0x20u,
      (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
      *v12,
      *(_QWORD *)(*v12 + 88));
  *(_QWORD *)(*v12 + 88) = 0LL;
  v29 = v363;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_52:
          v438 = (unsigned __int64 **)((char *)v8 + 480);
          v30 = (_DWORD *)*((_QWORD *)v8 + 60);
          v31 = (*v30 >> 9) & 1;
          v415 = (*v30 >> 9) & 1;
          v32 = *(_QWORD *)(*v12 + 88);
          if ( v32 )
          {
            if ( !v29 )
            {
              v29 = ((v11 - 1) & 0xFFFFFFFD) == 0;
              v363 = ((v11 - 1) & 0xFFFFFFFD) == 0;
              v365 = ((v11 - 1) & 0xFFFFFFFD) == 0;
            }
          }
          else
          {
            v360[1] = 0;
            v363 = 0;
            v365 = 0;
          }
          v33 = 0;
          v378 = 0;
          v380 = 0;
          v371 = 0LL;
          v382 = 0;
          if ( !gbInDestroyHandleTableObjects )
          {
            v34 = SGDGetUserSessionState(v31);
            if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v34 + 8)) != 1 )
            {
              if ( !IS_USERCRIT_OWNED_AT_ALL(v35) )
                goto LABEL_63;
              if ( tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainHookLock)
                || (IsLockedShared = tagDomLock::IsLockedShared(gDomainHookLock)) )
              {
                IsLockedShared = 1;
              }
              if ( !IsLockedShared )
LABEL_63:
                __int2c();
            }
          }
          v388 = (__int64 **)((char *)v8 + 464);
          Valid = *(_QWORD *)(*((_QWORD *)v8 + 58) + 56LL);
          if ( !Valid )
            goto LABEL_1037;
          if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
            Valid = PhkNextValid(Valid);
          if ( Valid && *((_QWORD *)v8 + 57) == grpdeskRitInput )
          {
            if ( v32 )
            {
              v38 = 0LL;
              v366 = 0LL;
            }
            else
            {
              v39 = xxxCallJournalPlaybackHook((struct tagQMSG *)&v389);
              if ( v39 == -1 )
              {
                v38 = 0LL;
                v366 = 0LL;
              }
              else if ( v39 )
              {
                _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 8LL), 0xFFFFE3F8);
                _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 4LL), 0xFFFFE3F8);
                SetJournalTimer(v39, DWORD2(v390));
                v38 = 0LL;
                v366 = 0LL;
              }
              else
              {
                WakeSomeone(*v12, 0LL, DWORD2(v390), 0LL);
                CInputGlobals::MarkLastInputAsJournalling(gpInputGlobals);
                v38 = 1LL;
                v366 = (struct tagQMSG *)1;
              }
            }
          }
          else
          {
LABEL_1037:
            if ( (*(_DWORD *)(*v12 + 396) & 0x20) != 0 )
              PostPendingMouseMove(*v12, v26, v29);
            v40 = (struct tagMLIST *)(*v12 + 24);
            if ( *(_DWORD *)(*v12 + 40) )
            {
              if ( v32 && (v41 = *(unsigned __int64 **)(*v12 + 88), (unsigned __int64)v41 > 1) )
                v38 = *v41;
              else
                v38 = *(_QWORD *)v40;
              v366 = (struct tagQMSG *)v38;
              if ( (*((_DWORD *)v8 + 318) & 0x2000) != 0 || (*((_DWORD *)v8 + 319) & 0x40) != 0 )
              {
                if ( !v38 )
                  goto LABEL_98;
                do
                {
                  v42 = *(_DWORD *)(v38 + 100);
                  if ( (v42 & 0x20) == 0 && (v42 & 0x8000000) == 0 )
                    break;
                  if ( (v42 & 0x10) == 0 )
                    break;
                  v38 = *(_QWORD *)v38;
                  v366 = (struct tagQMSG *)v38;
                }
                while ( v38 );
              }
              if ( v38 )
              {
                v43 = *(struct tagTHREADINFO **)(v38 + 104);
                if ( v43 && v43 != v8 && (*((_DWORD *)v43 + 122) & 0x10000) != 0 )
                {
                  v38 = (unsigned __int64)DeferMessagesOnQueue(v40, (struct tagQMSG *)v38);
                  v366 = (struct tagQMSG *)v38;
                }
                if ( v38 )
                {
                  v389 = *(_OWORD *)v38;
                  v390 = *(_OWORD *)(v38 + 16);
                  v391 = *(_OWORD *)(v38 + 32);
                  v392 = *(_OWORD *)(v38 + 48);
                  v393 = *(_OWORD *)(v38 + 64);
                  v394 = *(_OWORD *)(v38 + 80);
                  v395 = *(_OWORD *)(v38 + 96);
                  v396 = *(_OWORD *)(v38 + 112);
                  v397 = *(_OWORD *)(v38 + 128);
                  v398 = *(_OWORD *)(v38 + 144);
                }
              }
            }
            else
            {
              v38 = 0LL;
              v366 = 0LL;
            }
          }
LABEL_98:
          v401 = v38;
          v44 = WPP_GLOBAL_Control;
          LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
          LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                     && LOWORD(WPP_GLOBAL_Control->DeviceType);
          if ( (_BYTE)v26 || v29 )
            WPP_RECORDER_AND_TRACE_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v26,
              v29,
              (__int64)gFullLog,
              5u,
              0x12u,
              0x21u,
              (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
              v38,
              *v12,
              *(_QWORD *)(*v12 + 88));
          *(_QWORD *)(*v12 + 88) = v38;
          if ( v38 <= 1 )
            break;
          v45 = DWORD1(v395);
          if ( (BYTE4(v395) & 0x20) != 0 )
          {
            v46 = v384;
            *v384 = (struct tagQMSG *)v38;
            *(_DWORD *)(v38 + 100) |= 0x100u;
            v362 = 0;
            v45 = DWORD1(v395);
            if ( (DWORD1(v395) & 0x8000000) != 0 )
            {
              *((_DWORD *)*v46 + 25) |= 0x8000000u;
              v45 = DWORD1(v395);
            }
          }
          if ( (v45 & 0x2000) != 0 )
          {
            v11 = v360[1];
            if ( *((struct tagTHREADINFO **)&v395 + 1) == v8 )
              v11 = 1;
            v360[1] = v11;
            LOBYTE(v29) = 1;
            v363 = v29;
            v365 = 1;
          }
          else
          {
            v29 = v363;
            if ( (v45 & 0x10000) != 0 )
            {
              v11 = v360[1];
              if ( *((struct tagTHREADINFO **)&v395 + 1) == v8 )
              {
                v11 = 3;
                v360[1] = 3;
              }
            }
            else if ( (_DWORD)v395 == 4 && v363 )
            {
              DeferSysPeekMsg(v8, 3LL);
              v11 = v360[1];
              v29 = v363;
            }
            else if ( (v45 & 0x4000) != 0 )
            {
              v11 = v360[1];
              if ( *((struct tagTHREADINFO **)&v395 + 1) == v8 )
              {
                v11 = 2;
                v360[1] = 2;
              }
            }
            else
            {
              if ( !(unsigned int)ShouldDeferMessage(v360[1], &v389, v363) )
                break;
              DeferSysPeekMsg(v8, 3LL);
              v11 = 3;
              v360[1] = 3;
              v29 = v363;
            }
          }
        }
        if ( !*(_QWORD *)(*v12 + 88) )
        {
          if ( a7 == 0x2000 )
          {
            _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 8LL), 0xFFFFDFFF);
LABEL_132:
            v47 = v385;
LABEL_977:
            *((_QWORD *)*v361 + 10) = 0LL;
            v337 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( v337 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_qqq(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v337,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)gFullLog,
                4u,
                0x12u,
                0x25u,
                (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
                *v361,
                v8,
                *((_QWORD *)*v361 + 9));
            v338 = v361;
            *((_QWORD *)*v361 + 9) = 0LL;
            **((_DWORD **)v8 + 56) &= ~1u;
            v339 = v403;
            if ( v404 )
            {
              SetWakeBit(v404, 0x4001u);
              ClearWakeBit(v8, 16385, 0);
            }
            else if ( !v47 && !v418 && !v403 && !v417 )
            {
              v340 = *((_QWORD *)v8 + 56);
              _InterlockedExchange((volatile __int32 *)(v340 + 12), 0);
              if ( !*((_DWORD *)*v338 + 10) )
              {
                v341 = SGDGetUserSessionState(v340);
                if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v341 + 8)) )
                {
                  v383 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
                }
                v342 = 0LL;
                v343 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v343 )
                  v342 = *v343;
                if ( !*(_QWORD *)(*(_QWORD *)(v342 + 464) + 56LL) )
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 8LL),
                    (*((_DWORD *)*v361 + 99) >> 4) & 2 | 0xFFFF83F8);
              }
LABEL_1012:
              v346 = 0LL;
              v347 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v347 )
                v346 = *v347;
              *(_QWORD *)(v346 + 16) = v429;
              if ( v430 )
                v431();
              v348 = 0LL;
              v349 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v349 )
                v348 = *v349;
              *(_QWORD *)(v348 + 16) = v432;
              if ( v433 )
                v434();
              v350 = 0LL;
              v351 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v351 )
                v350 = *v351;
              *(_QWORD *)(v350 + 16) = v412;
              if ( v413 )
                v414();
              v352 = 0LL;
              v353 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v353 )
                v352 = *v353;
              *(_QWORD *)(v352 + 16) = v421;
              if ( v422 )
                v423();
              v354 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v354 )
                v10 = *v354;
              *(_QWORD *)(v10 + 16) = v424;
              v357 = v425;
              if ( v425 )
                v426();
              ThreadUnlock1(v357, v355, v356);
              if ( v369 )
                *(_DWORD *)(gptiCurrent + 1276LL) &= ~0x20u;
              return 0LL;
            }
            if ( v47 )
            {
              SetWakeBit(v47, 0x4006u);
              ClearWakeBit(v8, 16390, 0);
            }
            if ( v339 )
            {
              SetWakeBit(v339, 0x4400u);
              ClearWakeBit(v8, 17408, 0);
            }
            v344 = v417;
            if ( v417 )
            {
              SetWakeBit(v417, 0x5000u);
              ClearWakeBit(v8, 20480, 0);
            }
            v345 = v418;
            if ( v418 )
            {
              if ( (*(_DWORD *)(v418 + 488) & 1) == 0 )
              {
                _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v418 + 448) + 8LL), 0x2040u);
                _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v345 + 448) + 4LL), 0x2040u);
                if ( (*(_DWORD *)(*(_QWORD *)(v345 + 448) + 16LL) & 0x2040) != 0 )
                  KeSetEvent(*(PRKEVENT *)(v345 + 736), 2, 0);
              }
              _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 8LL), 0xFFFFDFFF);
            }
            else if ( *(_QWORD *)(*((_QWORD *)PtiCurrentShared(v344) + 58) + 56LL) )
            {
              _InterlockedOr(
                (volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 12LL),
                *(_DWORD *)(*((_QWORD *)v8 + 56) + 8LL) & 0x5C07);
              ClearWakeBit(v8, 23559, 0);
              _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 4LL), 0xFFFFA3F8);
            }
            goto LABEL_1012;
          }
          goto LABEL_976;
        }
        ThreadUnlock1(v44, v26, v29);
        v48 = v390;
        ThreadDesktopWindow = 0LL;
        PsGetThreadWin32Thread(KeGetCurrentThread());
        v50 = (_DWORD *)gpsi;
        if ( (unsigned __int64)(unsigned __int16)v48 < *(_QWORD *)(gpsi + 8LL) )
        {
          v51 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v48;
          v52 = (__int64 *)HMPkheFromPhe(v51);
          LOWORD(v48) = HIWORD(v48) & 0x7FFF;
          if ( ((HIWORD(v48) & 0x7FFF) == *(_WORD *)(v51 + 26)
             || (_WORD)v48 == 0x7FFF
             || !(_WORD)v48 && PsGetCurrentProcessWow64Process(v50))
            && (*(_BYTE *)(v51 + 25) & 1) == 0 )
          {
            v54 = *(_BYTE *)(v51 + 24) == 1;
            v38 = (unsigned __int64)v366;
            if ( v54 )
              ThreadDesktopWindow = *v52;
          }
          else
          {
            v38 = (unsigned __int64)v366;
          }
          v8 = v364;
        }
        v372 = ThreadDesktopWindow;
        v408 = *v407;
        *v407 = (__int64)&v408;
        v409 = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          HMLockObject(ThreadDesktopWindow);
        v26 = (unsigned int)v395;
        if ( !(_DWORD)v395 )
          break;
        v12 = (__int64 *)v361;
        if ( (_DWORD)v395 == 4 )
        {
          v11 = v360[1];
          v29 = v363;
          if ( *((_QWORD *)*v361 + 11) != *((_QWORD *)*v361 + 3) )
            continue;
        }
        if ( (_DWORD)v395 != 9 || DWORD2(v390) != 96 )
          goto LABEL_159;
        v53 = *((_QWORD *)&v389 + 1);
        v54 = *((_QWORD *)&v389 + 1) == 0LL;
        if ( *((_QWORD *)&v389 + 1) )
        {
          do
          {
            v55 = *(_DWORD *)(v53 + 100);
            if ( (v55 & 0x2000) == 0 && (v55 & 0x4000) == 0 )
            {
              v56 = (v55 & 0x10000) != 0;
              v57 = 0;
              if ( !v56 )
                goto LABEL_155;
            }
            v57 = 1;
LABEL_155:
            if ( !v57 )
              break;
            v53 = *(_QWORD *)(v53 + 8);
          }
          while ( v53 );
          v54 = v53 == 0;
        }
        v11 = v360[1];
        v29 = v363;
        if ( v54 )
        {
LABEL_159:
          v58 = *((_QWORD *)&v395 + 1);
          if ( !*((_QWORD *)&v395 + 1) || *((struct tagTHREADINFO **)&v395 + 1) == v8 )
          {
            EtwTraceRetrieveQueueEventMessage(*((_QWORD *)*v361 + 11), (unsigned int)v395, v29);
            v62 = *(_QWORD *)(*v12 + 88);
            v63 = *v12 + 24;
            v64 = *(_QWORD **)(v62 + 8);
            if ( v64 )
              *v64 = *(_QWORD *)v62;
            v65 = *(PDEVICE_OBJECT *)v62;
            if ( *(_QWORD *)v62 )
              v65->DriverObject = *(struct _DRIVER_OBJECT **)(v62 + 8);
            if ( *(_QWORD *)v63 == v62 )
              *(_QWORD *)v63 = *(_QWORD *)v62;
            if ( *(_QWORD *)(v63 + 8) == v62 )
              *(_QWORD *)(v63 + 8) = *(_QWORD *)(v62 + 8);
            v66 = *(_DWORD *)(v62 + 100);
            if ( (v66 & 0x2000) != 0 || (v66 & 0x4000) != 0 || (v56 = (v66 & 0x10000) != 0, v67 = 0, v56) )
              v67 = 1;
            if ( !v67 )
            {
              v68 = *(_DWORD *)(v63 + 16) - 1;
              *(_DWORD *)(v63 + 16) = v68;
              v65 = WPP_GLOBAL_Control;
              v69 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( v69 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_qiqdd(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v69,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  v68,
                  v358,
                  (__int64)v359,
                  0x15u,
                  (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids);
            }
            if ( v62 == *(_QWORD *)(v63 + 32) )
              *(_QWORD *)(v63 + 32) = 0LL;
            if ( (*(_DWORD *)(v62 + 100) & 8) != 0
              && !*(_DWORD *)(v62 + 96)
              && IsPointerInputMessage(*(_DWORD *)(v62 + 24)) )
            {
              FreePointerMessageParams(v62);
            }
            v70 = SGDGetUserSessionState(v65);
            Win32FreeToPagedLookasideList(*(_QWORD *)(v70 + 16872), v62);
            v71 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            v72 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
            if ( v71 || v72 )
              WPP_RECORDER_AND_TRACE_SF_qq(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v71,
                v72,
                (__int64)gFullLog,
                5u,
                0x12u,
                0x23u,
                (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
            *(_QWORD *)(*v12 + 88) = 0LL;
            xxxProcessEventMessage((__int64)v8, (__int64)&v389);
            v11 = v360[1];
          }
          else
          {
            if ( *(struct tagQ **)(*((_QWORD *)&v395 + 1) + 432LL) == *v361 )
            {
              v418 = *((_QWORD *)&v395 + 1);
              ReferenceW32Thread(*((_QWORD *)&v395 + 1));
              v59 = v413;
              v413 = v58;
              if ( v59 )
                v414();
              v60 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
              v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
              if ( v60 || v61 )
                WPP_RECORDER_AND_TRACE_SF_qq(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v60,
                  v61,
                  (__int64)gFullLog,
                  5u,
                  0x12u,
                  0x22u,
                  (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
                  *v12,
                  *(_QWORD *)(*v12 + 88));
              *(_QWORD *)(*v12 + 88) = 0LL;
              goto LABEL_132;
            }
            CleanEventMessage(*((struct tagQMSG **)*v361 + 11));
            DelQEntry(*v12 + 24, *(_QWORD *)(*v12 + 88), 1);
            v11 = v360[1];
          }
          goto LABEL_33;
        }
      }
      v29 = v363;
      if ( a7 == 0x2000 )
        goto LABEL_50;
      v73 = DWORD2(v390);
      v74 = DWORD2(v390);
      v360[0] = DWORD2(v390);
      if ( DWORD2(v390) > 0x20A )
      {
        switch ( DWORD2(v390) )
        {
          case 0x20E:
            goto LABEL_490;
          case 0x238:
            goto LABEL_559;
          case 0x240:
LABEL_552:
            if ( !ThreadDesktopWindow )
              goto LABEL_557;
            v168 = *(char **)(ThreadDesktopWindow + 40);
            if ( v168[20] < 0 )
              goto LABEL_557;
            if ( v168[19] < 0 )
              goto LABEL_557;
            v169 = v168[31];
            if ( (v169 & 8) != 0 || (v169 & 0x10) == 0 )
              goto LABEL_557;
LABEL_559:
            v370 = *((_QWORD *)&v391 + 1);
            MouseKeyFlags = v391;
            v371 = v391;
            if ( !ThreadDesktopWindow )
              goto LABEL_558;
            if ( CheckCrossThreadInput(
                   (struct tagWND *const)ThreadDesktopWindow,
                   (struct tagQMSG *)v38,
                   &v373,
                   &v362,
                   v384) )
            {
              goto LABEL_976;
            }
            if ( v373 )
              goto LABEL_558;
            v26 = a5;
            if ( !v376 && a5 == -1 )
              goto LABEL_573;
            if ( v376 <= a5 )
            {
              if ( v74 >= v376 && v74 <= a5 )
              {
                v170 = 1;
                goto LABEL_572;
              }
            }
            else if ( v74 < a5 || v74 > v376 )
            {
              v170 = 1;
              goto LABEL_572;
            }
            v170 = 0;
LABEL_572:
            v11 = v360[1];
            v29 = v363;
            if ( !v170 )
              goto LABEL_51;
LABEL_573:
            v171 = CheckPwndFilter(ThreadDesktopWindow, a3, v29);
            v11 = v360[1];
            v29 = v363;
            if ( !v171 )
              goto LABEL_51;
            if ( v362 )
              goto LABEL_229;
            goto LABEL_921;
          case 0x245:
          case 0x246:
          case 0x247:
          case 0x249:
          case 0x24A:
          case 0x251:
          case 0x252:
          case 0x253:
            v79 = v362;
            goto LABEL_873;
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
            if ( !v376 && a5 == -1 )
              goto LABEL_482;
            if ( v376 > a5 )
            {
              if ( DWORD2(v390) < a5 || DWORD2(v390) > v376 )
              {
                v141 = 1;
                goto LABEL_481;
              }
LABEL_480:
              v141 = 0;
              goto LABEL_481;
            }
            if ( DWORD2(v390) < v376 )
              goto LABEL_480;
            v141 = 1;
            if ( DWORD2(v390) > a5 )
              goto LABEL_480;
LABEL_481:
            if ( !v141 )
              goto LABEL_976;
LABEL_482:
            if ( (unsigned int)IsInsideMenuLoop(v8) )
              goto LABEL_557;
            v79 = v362;
            if ( v362 )
              xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
            if ( !ThreadDesktopWindow )
            {
              ThreadDesktopWindow = *((_QWORD *)*v361 + 15);
              v372 = ThreadDesktopWindow;
            }
            v370 = *((_QWORD *)&v391 + 1);
            MouseKeyFlags = v391;
            v371 = v391;
            v142 = xxxRetrieveInteractiveControlInputMessage((unsigned __int16)v391, WORD1(v391)) - 1;
            if ( !v142 )
              goto LABEL_921;
            if ( v142 == 1 )
              goto LABEL_976;
            goto LABEL_754;
          default:
LABEL_577:
            v368.x = SWORD4(v391);
            v368.y = SWORD5(v391);
            v367 = 1;
            if ( (BYTE4(v395) & 0x20) == 0 && (DWORD1(v395) & 0x8000000) == 0 )
              goto LABEL_581;
            if ( !ThreadDesktopWindow )
              goto LABEL_583;
            if ( (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 424LL) + 280LL) >> 8)) & 0x1FF) == 0 )
              goto LABEL_637;
LABEL_581:
            if ( !ThreadDesktopWindow
              || (v172 = IsCompositionInputWindowForHitTest((struct tagWND *)ThreadDesktopWindow),
                  v73 = DWORD2(v390),
                  v173 = 1,
                  !v172) )
            {
LABEL_583:
              v173 = 0;
            }
            v379 = v173;
            if ( !*((_QWORD *)*v361 + 14) )
            {
              if ( !v173 )
              {
                ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
                *(_QWORD *)&v427 = *v407;
                *v407 = (__int64)&v427;
                *((_QWORD *)&v427 + 1) = ThreadDesktopWindow;
                if ( ThreadDesktopWindow )
                  HMLockObject(ThreadDesktopWindow);
              }
              if ( (unsigned int)Feature_DropHtTransparentOffThread__private_IsEnabledDeviceUsage() )
              {
                v174 = IsThreadDesktopComposed(v8);
                v176 = (struct tagWND *)ThreadDesktopWindow;
                if ( v174 )
                {
                  v447[0] = DWORD2(v390);
                  v447[1] = 0;
                  v448 = v391;
                  v449 = &v367;
                  v450 = v175;
                  v451 = 0;
                  v452 = (char *)&v394 + 8;
                  v453 = 0LL;
                  v454 = 0LL;
                  v177 = xxxDCEWindowHitTestIndirect(
                           (struct tagWND *)ThreadDesktopWindow,
                           (struct tagPOINT)v394,
                           0,
                           (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v447);
                  if ( v177 && (_BYTE)v453 )
                  {
                    *((_QWORD *)&v391 + 1) = *((_QWORD *)&v448 + 1);
                    DWORD1(v392) = SWORD4(v448);
                    DWORD2(v392) = SWORD5(v448);
                    v368 = *(struct tagPOINT *)((char *)&v392 + 4);
                  }
                  goto LABEL_601;
                }
              }
              else
              {
                if ( (unsigned int)IsThreadDesktopComposed(v8) )
                {
                  v455[0] = DWORD2(v390);
                  v455[1] = 0;
                  v456 = v391;
                  v457 = &v367;
                  v178 = 1;
                  if ( v379 )
                    v178 = 9;
                  v458 = v178;
                  v459 = 0;
                  v460 = (char *)&v394 + 8;
                  v461 = 0LL;
                  v462 = 0LL;
                  v177 = xxxDCEWindowHitTestIndirect(
                           (struct tagWND *)ThreadDesktopWindow,
                           (struct tagPOINT)v394,
                           0,
                           (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v455);
                  if ( v177 && (_BYTE)v461 )
                  {
                    *((_QWORD *)&v391 + 1) = *((_QWORD *)&v456 + 1);
                    DWORD1(v392) = SWORD4(v456);
                    DWORD2(v392) = SWORD5(v456);
                    v368 = *(struct tagPOINT *)((char *)&v392 + 4);
                  }
                  goto LABEL_601;
                }
                v175 = 8 * v379 + 1;
                v176 = (struct tagWND *)ThreadDesktopWindow;
              }
              v177 = xxxWindowHitTest(v176, v368, &v367, v175);
LABEL_601:
              v179 = (struct tagWND *)HMValidateHandleNoSecure(v177, 1LL);
              InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)&v389, &v368, v179);
              if ( !v379 )
                ThreadUnlock1(v181, v180, v182);
              ThreadDesktopWindow = HMValidateHandleNoSecure(v177, 1LL);
              v372 = ThreadDesktopWindow;
              if ( !ThreadDesktopWindow )
              {
                ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 57) + 8LL) + 24LL);
                v372 = ThreadDesktopWindow;
                if ( !ThreadDesktopWindow )
                {
                  ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
                  v372 = ThreadDesktopWindow;
                }
              }
              v183 = 0;
              if ( *((_QWORD *)v8 + 76) )
                v184 = 0;
              else
                v184 = IsMiPEnabledForThread(v8) != 0;
              v185 = v361;
              if ( v184 )
              {
                v186 = *((_QWORD *)*v361 + 55);
                if ( v186 )
                {
                  v187 = ValidateHwnd(v186);
                  if ( v187 )
                  {
                    v188 = *(_QWORD *)(v187 + 16);
                    v189 = *v361;
                    if ( *(struct tagQ **)(v188 + 432) == *v361 || *(_QWORD *)(v188 + 424) == *((_QWORD *)v8 + 53) )
                    {
                      ThreadDesktopWindow = v187;
                      v372 = v187;
                      v367 = 1;
                      *((_DWORD *)v189 + 39) = 0;
                      v183 = 1;
                    }
                  }
                  v185 = v361;
                }
              }
              if ( !v183 )
                *((_DWORD *)*v185 + 39) = v367 != 1;
              goto LABEL_626;
            }
            ThreadDesktopWindow = *((_QWORD *)*v361 + 14);
            v372 = ThreadDesktopWindow;
            if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 64LL) )
            {
              v445 = v191;
              v416 = v73;
              v446[0] = *((_QWORD *)&v397 + 1);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                (unsigned int)&dword_1C035C080,
                (unsigned int)&unk_1C031C155,
                v190,
                v191,
                (__int64)v446,
                (__int64)&v416,
                (__int64)&v445);
            }
            if ( v379 )
            {
              if ( !(unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)ThreadDesktopWindow) )
              {
                DWORD1(v395) &= ~0x1000u;
                if ( v38 )
                {
                  if ( (unsigned int)IsMiPActive(v8, v38, v192) )
                    *(_DWORD *)(v38 + 100) &= ~0x1000u;
                }
              }
            }
LABEL_626:
            if ( ThreadDesktopWindow == *((_QWORD *)*v361 + 14) )
            {
              v193 = *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 432LL);
              v194 = *(_QWORD *)(v193 + 112);
              v195 = v194 ? *(_QWORD *)(v194 + 16) : *(_QWORD *)(v193 + 96);
              v196 = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 288LL) >> 8;
              if ( (((unsigned __int16)v196 ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v195 + 424) + 280LL) >> 8)) & 0x1FF) != 0 )
                goto LABEL_636;
              if ( *(_QWORD *)(ThreadDesktopWindow + 104) == GetMessageWindow(ThreadDesktopWindow, v196, 0LL) )
              {
                v198 = *(_QWORD *)(ThreadDesktopWindow + 136);
                if ( v198 )
                {
                  v199 = *(const char **)(v198 + 104);
                  if ( v199 )
                    v197 = strcmp_0(v199, "CLIPBRDWNDCLASS") == 0;
                }
              }
              if ( v197 )
              {
LABEL_636:
                v368 = (struct tagPOINT)v394;
                PhysicalToLogicalInPlacePointWithParent(ThreadDesktopWindow, &v368, (char *)&v394 + 8);
                v370 = (LOWORD(v368.y) << 16) | LOWORD(v368.x);
                *(struct tagPOINT *)((char *)&v392 + 4) = v368;
              }
            }
LABEL_637:
            v200 = v409;
            v409 = ThreadDesktopWindow;
            if ( ThreadDesktopWindow )
              HMLockObject(ThreadDesktopWindow);
            if ( v200 )
              HMUnlockObject(v200);
            if ( CheckCrossThreadInput(
                   (struct tagWND *const)ThreadDesktopWindow,
                   (struct tagQMSG *)v38,
                   &v373,
                   &v362,
                   v384) )
            {
              goto LABEL_976;
            }
            v201 = v373;
            if ( v373 )
            {
              v202 = *(_QWORD *)(ThreadDesktopWindow + 16);
              v203 = v361;
              if ( *(struct tagQ **)(v202 + 432) != *v361 )
              {
                zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
                MouseKeyFlags = v371;
                v79 = v362;
LABEL_645:
                v10 = 0LL;
                goto LABEL_754;
              }
              if ( v385 )
              {
LABEL_649:
                v204 = v368;
                v205 = v368;
                v206 = (_QWORD *)(ThreadDesktopWindow + 16);
                v399 = (_BYTE *)(ThreadDesktopWindow + 16);
                v207 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 432LL) + 156LL);
                if ( v207 && (v208 = v207 - 2) != 0 )
                {
                  if ( v208 != 1 )
                  {
LABEL_664:
                    v212 = v364;
                    if ( v201 || *v203 != (struct tagQ *)gpqCursor )
                      goto LABEL_702;
                    v213 = *(_QWORD *)(*((_QWORD *)v364 + 57) + 184LL) != ThreadDesktopWindow;
                    v214 = v367;
                    if ( v367 != 5
                      || (v215 = *(_QWORD *)(ThreadDesktopWindow + 168)) == 0
                      || (*(_BYTE *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 16LL) & 1) == 0 )
                    {
                      if ( v367 == 7 && (*(_BYTE *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 16LL) & 2) != 0 )
                      {
                        v220 = (unsigned __int16)HitTestScrollBar((struct tagWND *)ThreadDesktopWindow, v367 - 6, v204) | 0x10000;
                      }
                      else if ( v367 == 6 && (*(_BYTE *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 16LL) & 4) != 0 )
                      {
                        v220 = (unsigned __int16)HitTestScrollBar((struct tagWND *)ThreadDesktopWindow, 0, v204);
                      }
                      else
                      {
                        v220 = v367;
                      }
                      goto LABEL_692;
                    }
                    v216 = MNItemHitTest(
                             *(struct tagMENU **)(ThreadDesktopWindow + 168),
                             (struct tagWND *)ThreadDesktopWindow,
                             v204);
                    if ( v216 >= 0 )
                    {
                      v217 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v215 + 88) + 96LL * v216) + 96LL);
                      if ( v217 > 5 )
                      {
                        if ( v217 != 6 )
                        {
                          if ( v217 == 7 )
                            goto LABEL_675;
                          if ( v217 != -1LL )
                          {
LABEL_681:
                            v220 = ((unsigned __int16)v216 << 16) | 0x45;
                            goto LABEL_692;
                          }
                          v220 = ((unsigned __int16)v216 << 16) | 0xFFFE;
LABEL_692:
                          if ( v360[0] != 512 || v213 || *(_DWORD *)(*((_QWORD *)v212 + 57) + 192LL) != v220 )
                            xxxTrackMouseMove((struct tagWND *)ThreadDesktopWindow);
                          v54 = !v213;
                          v74 = v360[0];
                          if ( v54 )
                          {
                            v204 = (struct tagPOINT)*((_QWORD *)v212 + 57);
                            if ( (*(_DWORD *)(*(_QWORD *)&v204 + 48LL) & 0x40) != 0
                              && (v360[0] != 512
                               || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(
                                                   *(_QWORD *)&v204 + 196LL,
                                                   v205)) )
                            {
                              ResetMouseHover(*(struct tagDESKTOP **)&v204, v205);
                            }
                          }
                          v38 = (unsigned __int64)v366;
                          v206 = v399;
LABEL_702:
                          v221 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CheckPwndFilter)(
                                   ThreadDesktopWindow,
                                   a3,
                                   v204);
                          v29 = v363;
                          if ( !v221 )
                            goto LABEL_48;
                          v386 = 0;
                          switch ( v74 )
                          {
                            case 0x201u:
                              v222 = IsMessageInputSourceTouch(&v389);
                              v223 = v361;
                              v54 = v222 == 0;
                              v224 = *v361;
                              if ( v54 )
                                *((_DWORD *)v224 + 99) &= ~0x800000u;
                              else
                                *((_DWORD *)v224 + 99) |= 0x800000u;
                              v225 = IsMessageInputSourcePen(&v389);
                              v226 = *v223;
                              if ( v225 )
                                *((_DWORD *)v226 + 99) |= 0x1000000u;
                              else
                                *((_DWORD *)v226 + 99) &= ~0x1000000u;
                              goto LABEL_711;
                            case 0x202u:
                            case 0x205u:
                            case 0x208u:
                            case 0x20Cu:
                              v223 = v361;
                              goto LABEL_727;
                            case 0x204u:
                            case 0x207u:
                            case 0x20Bu:
                              v223 = v361;
LABEL_711:
                              if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 136) + 8LL) + 8LL) & 8) != 0
                                || *((_DWORD *)*v223 + 39) == 1
                                || ((v227 = *((_QWORD *)v212 + 76)) == 0 || (*(_DWORD *)(v227 + 8) & 1) == 0
                                  ? (v228 = 0)
                                  : (v228 = 1),
                                    v228) )
                              {
                                v386 = 1;
                                v229 = *((unsigned int *)*v223 + 42);
                                if ( (unsigned int)v392 <= (unsigned int)v229
                                  && !*(_DWORD *)(SGDGetUserSessionState(v229) + 15912) )
                                {
                                  v230 = *v223;
                                  if ( *(_QWORD *)ThreadDesktopWindow == *((_QWORD *)*v223 + 22)
                                    && v74 == *((_DWORD *)v230 + 40)
                                    && (v74 != 523 || WORD1(v391) == *((_WORD *)v230 + 82)) )
                                  {
                                    v231 = *(_DWORD *)(gpsi + 2040LL) / 2;
                                    v232 = *((_DWORD *)v230 + 46);
                                    v442[0] = v232 - v231;
                                    v233 = *(_DWORD *)(gpsi + 2044LL);
                                    v234 = *((_DWORD *)v230 + 47);
                                    v442[1] = v234 - v233 / 2;
                                    v442[2] = v232 + v231;
                                    v442[3] = v234 + v233 / 2;
                                    if ( (unsigned int)PtInRect(v442, *(_QWORD *)((char *)&v392 + 4)) )
                                    {
                                      v74 += 2;
                                      v360[0] = v74;
                                      v386 = 2;
                                    }
                                  }
                                }
                              }
LABEL_727:
                              v235 = *((_DWORD *)*v223 + 99);
                              if ( (v235 & 8) != 0 )
                                *((_DWORD *)*v223 + 99) = v235 | 4;
                              if ( v74 - 514 <= 0xA )
                              {
                                v236 = 1097;
                                if ( _bittest(&v236, v74 - 514) )
                                {
                                  if ( *((_DWORD *)*v223 + 42) && ((DWORD2(v396) - 4) & 0xFFFFFFFB) == 0 )
                                  {
                                    if ( DWORD2(v396) == 4 )
                                      TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(300LL, 180LL, 5LL);
                                    else
                                      TouchTimeFromCPLValue = GetPenDoubleClickTime();
                                    *((_DWORD *)*v223 + 42) = DWORD2(v398) + TouchTimeFromCPLValue;
                                  }
                                }
                              }
                              break;
                            default:
                              break;
                          }
                          if ( *(_DWORD *)(*(_QWORD *)(*v206 + 432LL) + 156LL) == 1 )
                          {
                            v74 -= 352;
                            v360[0] = v74;
                            MouseKeyFlags = (unsigned int)v367;
                            v371 = (unsigned int)v367;
                          }
                          else
                          {
                            MouseKeyFlags = v371;
                          }
                          v238 = MiPCheckMsgFilter(v38, v74, (unsigned int)v376, a5);
                          v29 = v363;
                          if ( v238 )
                          {
                            if ( v201 )
                              goto LABEL_975;
                            v239 = v364;
                            if ( v74 - 512 > 0xE )
                            {
                              v240 = (_DWORD *)((char *)v420 + 488);
LABEL_746:
                              if ( (*v240 & 0x100000) != 0 )
                              {
                                *v240 &= ~0x100000u;
                                xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1);
                              }
                              v511[0] = *(_QWORD *)((char *)&v392 + 4);
                              v511[1] = *(_QWORD *)ThreadDesktopWindow;
                              LODWORD(v512) = v367;
                              *((_QWORD *)&v512 + 1) = *((_QWORD *)&v393 + 1);
                              LODWORD(v513) = v391;
                              v79 = v362;
                              if ( v362 )
                              {
                                v241 = v360[0];
                                if ( v360[0] != 512 && v360[0] != 160 )
                                {
                                  v377 = 1;
                                  if ( (unsigned int)xxxCallCtfHook(7LL, 0LL, v360[0]) )
                                  {
LABEL_752:
                                    v10 = 0LL;
LABEL_753:
                                    v8 = v364;
                                    goto LABEL_754;
                                  }
                                }
                              }
                              else
                              {
                                v241 = v360[0];
                              }
                              v245 = **v388;
                              v246 = *(_DWORD *)(v245 + 16);
                              v247 = (char *)v239 + 680;
                              v419 = v247;
                              if ( ((*(_DWORD *)v247 | v246) & 0x100) != 0 )
                              {
                                v377 = 1;
                                if ( xxxCallMouseHook(v241, (__int64)v511, v79) )
                                  goto LABEL_752;
                              }
                              if ( (unsigned int)PsGetWin32KFilterSet(v245) == 5 )
                              {
                                v248 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
                                v375 = 0;
                                v375 = *(_QWORD *)(v248 + 248) != 0LL;
                                v79 = v362;
                                v241 = v360[0];
                                if ( v375 )
                                {
                                  v249 = xxxClientCallLocalMouseHooks(v360[0], v511, (unsigned int)v362);
                                  MouseKeyFlags = v371;
                                  if ( v249 )
                                    goto LABEL_752;
                                }
                                else
                                {
                                  MouseKeyFlags = v371;
                                }
                                ThreadDesktopWindow = v372;
                              }
                              v250 = v364;
                              if ( (*((_DWORD *)v364 + 318) & 0x2000) == 0 && ((v367 + 2) & 0xFFFFFFFD) == 0 )
                              {
                                v10 = 0LL;
                                v251 = 0LL;
                                if ( v379 )
                                {
                                  CompositionInputWindowUIOwner = (struct tagWND *)ThreadDesktopWindow;
                                  if ( (unsigned int)IsIndependentInputWindow((const struct tagWND *)ThreadDesktopWindow) )
                                    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)ThreadDesktopWindow);
                                  TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                                  v251 = TopLevelWindow;
                                  if ( TopLevelWindow )
                                  {
                                    v254 = 0;
                                    if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) && v360[0] == 161 )
                                      v254 = *(_QWORD *)(*((_QWORD *)v251 + 2) + 432LL) == gpqForeground;
                                    CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v251);
                                    v251 = CompositeAppFrameWindowOrSelf;
                                    if ( v254 )
                                    {
                                      v256 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 2);
                                      if ( *(_QWORD *)(v256 + 432) != gpqForeground )
                                        *(_DWORD *)(v256 + 488) |= 0x20u;
                                    }
                                    *(_QWORD *)&v427 = *v407;
                                    *v407 = (__int64)&v427;
                                    *((_QWORD *)&v427 + 1) = CompositeAppFrameWindowOrSelf;
                                    if ( CompositeAppFrameWindowOrSelf )
                                      HMLockObject(CompositeAppFrameWindowOrSelf);
                                    xxxSendMessage(v251, 0x20u);
                                    ThreadUnlock1(v258, v257, v259);
                                  }
                                }
                                if ( !v251 )
                                  xxxSendMessage((struct tagWND *)ThreadDesktopWindow, 0x20u);
                                v260 = v366;
                                if ( *((struct tagQMSG **)*v361 + 11) == v366 && v366 )
                                {
                                  if ( !(unsigned int)IsMiPActive(v364, v366, v250)
                                    || (*((_DWORD *)v260 + 25) & 0x400) == 0 )
                                  {
                                    v8 = v261;
                                    goto LABEL_754;
                                  }
                                  if ( (unsigned int)IsGenuineMouseInput((char *)v260 + 120)
                                    && (unsigned int)IsMiPMouseMessage(*((unsigned int *)v260 + 6)) )
                                  {
                                    memset_0(v508, 0, 0xA0uLL);
                                    v100 = v360[0];
                                    GeneratePointerMessageFromMouse(
                                      (struct tagQMSG *)v508,
                                      v360[0],
                                      v260,
                                      (struct tagWND *)ThreadDesktopWindow,
                                      v79);
                                    SetMiPPromotion(*v206, v509);
                                    v8 = v364;
                                    goto LABEL_755;
                                  }
                                }
                                goto LABEL_753;
                              }
                              if ( *((_QWORD *)*v361 + 11) != v38 )
                              {
LABEL_975:
                                v10 = 0LL;
                                goto LABEL_976;
                              }
                              v262 = 0LL;
                              v481 = 0LL;
                              v482 = 0LL;
                              v483 = 0LL;
                              v484 = 0LL;
                              v485 = 0LL;
                              v486 = 0LL;
                              v463 = 0LL;
                              v263 = 0LL;
                              v464 = 0LL;
                              v264 = 0LL;
                              v465 = 0LL;
                              v265 = 0LL;
                              v466 = 0LL;
                              v467 = 0LL;
                              v468 = 0LL;
                              v266 = 0;
                              v267 = &v487;
                              v487 = v389;
                              v488 = v390;
                              v489 = v391;
                              v490 = v392;
                              v491 = v393;
                              v492 = v394;
                              v493 = v395;
                              v494 = v396;
                              v495 = v397;
                              v496 = v398;
                              if ( v38 && (unsigned int)IsMiPActive(v364, v38, v364) )
                              {
                                DWORD2(v488) = v241;
                                *(_QWORD *)&v489 = MouseKeyFlags;
                                if ( (*(_DWORD *)(v38 + 100) & 0x400) != 0 )
                                {
                                  memset_0(&v497, 0, 0xA0uLL);
                                  if ( ShouldGenerateMipMessage(
                                         v364,
                                         (const struct tagQMSG *)v38,
                                         (struct tagWND *)ThreadDesktopWindow,
                                         v79) )
                                  {
                                    v269 = *(_QWORD *)(v268 + 1352);
                                    if ( v269 && (*(_DWORD *)v269 & 1) != 0 )
                                    {
                                      v262 = *(_OWORD *)(v269 + 24);
                                      v463 = v262;
                                      v263 = *(_OWORD *)(v269 + 40);
                                      v464 = v263;
                                      v264 = *(_OWORD *)(v269 + 56);
                                      v465 = v264;
                                      v265 = *(_OWORD *)(v269 + 72);
                                      v466 = v265;
                                      v467 = *(_OWORD *)(v269 + 88);
                                      v468 = *(_OWORD *)(v269 + 104);
                                      v266 = 1;
                                    }
                                    if ( GeneratePointerMessageFromMouse(
                                           (struct tagQMSG *)&v497,
                                           v360[0],
                                           (struct tagQMSG *)v38,
                                           (struct tagWND *)ThreadDesktopWindow,
                                           v79) )
                                    {
                                      v267 = &v389;
                                      v389 = v497;
                                      v390 = v498;
                                      v391 = v499;
                                      v392 = v500;
                                      v393 = v501;
                                      v394 = v502;
                                      v395 = v503;
                                      v396 = v504;
                                      v397 = v505;
                                      v398 = v506;
                                      v378 = 1;
                                      v380 = 1;
                                      v270 = DWORD2(v498);
                                      if ( DWORD2(v498) == 582
                                        && (unsigned int)IsMiPEnabledForWindow(ThreadDesktopWindow) )
                                      {
                                        v267 = *(__int128 **)ThreadDesktopWindow;
                                        *((_QWORD *)*v361 + 55) = *(_QWORD *)ThreadDesktopWindow;
                                      }
                                      else if ( ((v270 - 579) & 0xFFFFFFFB) == 0 )
                                      {
                                        *((_QWORD *)*v361 + 55) = 0LL;
                                      }
                                    }
                                  }
                                  if ( !v79 )
                                  {
LABEL_849:
                                    v8 = v364;
                                    goto LABEL_850;
                                  }
                                  *(_DWORD *)(v38 + 100) &= ~0x400u;
                                }
                                else
                                {
                                  if ( !v79 )
                                    goto LABEL_849;
                                  if ( (unsigned int)IsMiPMouseMessage(*(unsigned int *)(v38 + 24)) )
                                  {
                                    if ( (unsigned int)IsGenuineMouseInput(v38 + 120) )
                                    {
                                      v271 = (unsigned int *)*((_QWORD *)v364 + 169);
                                      if ( v271 )
                                      {
                                        v267 = (__int128 *)*v271;
                                        if ( ((unsigned __int8)v267 & 2) == 0 && ((unsigned __int8)v267 & 4) == 0 )
                                        {
                                          v8 = v364;
                                          xxxSkipSysMsgEx(v364, (struct tagQMSG *)&v389, 1u);
                                          v10 = 0LL;
                                          v12 = (__int64 *)v361;
                                          v11 = v360[1];
                                          goto LABEL_33;
                                        }
                                      }
                                    }
                                    v272 = (_DWORD *)*((_QWORD *)v364 + 169);
                                    if ( v272 )
                                      *v272 &= ~2u;
                                  }
                                }
                              }
                              else
                              {
                                v241 = DWORD2(v488);
                              }
                              if ( !v79 )
                                goto LABEL_849;
                              v273 = SGDGetUserSessionState(v267);
                              v274 = v273;
                              if ( (v241 == 512 || v241 == 160)
                                && *(_QWORD *)ThreadDesktopWindow != *(_QWORD *)(v273 + 15984)
                                && (unsigned int)IsGenuineMouseInput((char *)v366 + 120) )
                              {
                                LOBYTE(v275) = 1;
                                v276 = HMValidateHandleNoSecure(*(_QWORD *)(v274 + 15984), v275);
                                v277 = (struct tagWND *)v276;
                                if ( v276 )
                                {
                                  v278 = *(_QWORD *)(v276 + 16);
                                  v279 = !*(_QWORD *)(v278 + 608) && (unsigned int)IsMiPEnabledForThread(v278) != 0;
                                  if ( v279 && (GetMiPWindowFlags(v277) & 1) == 0 )
                                  {
                                    v280 = (struct tagQ **)*((_QWORD *)v277 + 2);
                                    v281 = v364;
                                    if ( v280 == (struct tagQ **)v364 )
                                    {
                                      v282 = *((_QWORD *)v364 + 169);
                                      v283 = *(_OWORD *)(v282 + 24);
                                      v284 = *(_OWORD *)(v282 + 40);
                                      v285 = *(_OWORD *)(v282 + 56);
                                      v286 = *(_OWORD *)(v282 + 72);
                                      v287 = *(_OWORD *)(v282 + 88);
                                      v288 = *(_OWORD *)(v282 + 104);
                                      if ( v266 )
                                      {
                                        *(_OWORD *)(v282 + 24) = v262;
                                        *(_OWORD *)(v282 + 40) = v263;
                                        *(_OWORD *)(v282 + 56) = v264;
                                        *(_OWORD *)(v282 + 72) = v265;
                                        *(_OWORD *)(v282 + 88) = v467;
                                        *(_OWORD *)(v282 + 104) = v468;
                                      }
                                      v478 = ((*(_DWORD *)(*((_QWORD *)v281 + 169) + 36LL) & 0xFFFFE1F7) << 16) | 1LL;
                                      v479 = 0LL;
                                      v480 = 0LL;
                                      v471 = 0LL;
                                      v472 = 0LL;
                                      ThreadLock(v277, &v471);
                                      FindTimer((_DWORD)v277, 65523, 2, 1, 0LL);
                                      if ( (unsigned int)IsMiPEnabledForWindow(v277) )
                                      {
                                        _InterlockedIncrement(&glSendMessage);
                                        xxxSendTransformableMessageTimeout(v277, 0x24Au, v478, 0LL, 0, 0, 0LL, 1, 0);
                                        ThreadDesktopWindow = v372;
                                        MouseKeyFlags = v371;
                                        v79 = v362;
                                      }
                                      ThreadUnlock1(v290, v289, v291);
                                      if ( v266 )
                                      {
                                        v292 = *((_QWORD *)v364 + 169);
                                        *(_OWORD *)(v292 + 24) = v283;
                                        *(_OWORD *)(v292 + 40) = v284;
                                        *(_OWORD *)(v292 + 56) = v285;
                                        *(_OWORD *)(v292 + 72) = v286;
                                        *(_OWORD *)(v292 + 88) = v287;
                                        *(_OWORD *)(v292 + 104) = v288;
                                      }
                                    }
                                    else
                                    {
                                      PostEventMessageEx(
                                        (struct tagTHREADINFO *)v280,
                                        v280[54],
                                        0x15u,
                                        v277,
                                        0,
                                        0LL,
                                        0LL,
                                        0LL);
                                    }
                                  }
                                }
                                if ( v378 )
                                  *(_QWORD *)(v274 + 15984) = *(_QWORD *)ThreadDesktopWindow;
                                else
                                  *(_QWORD *)(v274 + 15984) = 0LL;
                              }
                              v293 = v378;
                              if ( !v378 )
                              {
                                if ( v386 == 1 )
                                {
                                  v294 = v361;
                                  *((_DWORD *)*v361 + 40) = DWORD2(v390);
                                  v295 = (unsigned __int64)v391 >> 16;
                                  *((_WORD *)*v294 + 82) = WORD1(v391);
                                  v296 = SGDGetUserSessionState(v295);
                                  *((_DWORD *)*v294 + 42) = *(_DWORD *)(v296 + 14360) + v392;
                                  *((_QWORD *)*v294 + 22) = *(_QWORD *)ThreadDesktopWindow;
                                  *((_QWORD *)*v294 + 23) = *(_QWORD *)((char *)&v392 + 4);
                                }
                                else if ( v386 == 2 )
                                {
                                  *((_DWORD *)*v361 + 42) = 0;
                                }
                              }
                              v297 = (const struct tagQMSG *)&v487;
                              if ( !v293 )
                                v297 = (const struct tagQMSG *)&v389;
                              v8 = v364;
                              if ( xxxMouseActivate(v364, (struct tagWND *)ThreadDesktopWindow, v297, v367) != 1 )
                              {
                                v38 = (unsigned __int64)v366;
LABEL_850:
                                if ( v79 )
                                {
                                  xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
                                  if ( v377 )
                                  {
                                    if ( (((unsigned __int8)*v247 | *(_BYTE *)(**v388 + 16)) & 0x40) != 0 )
                                      xxxCallHook(6, v360[0], (__int64)v511, 5);
                                  }
                                }
                                v10 = 0LL;
                                v377 = 0;
                                v370 = (LOWORD(v368.y) << 16) | LOWORD(v368.x);
                                v298 = v360[0];
                                if ( v360[0] >= 0x200 )
                                {
                                  MouseKeyFlags = (unsigned int)GetMouseKeyFlags(*v361);
                                  v371 = MouseKeyFlags;
                                  v298 = v360[0];
                                }
                                if ( (v298 - 171 <= 2 || v298 - 523 <= 2) && !v378 )
                                {
                                  MouseKeyFlags |= v391;
                                  v371 = MouseKeyFlags;
                                }
                                v299 = *((_QWORD *)v8 + 76);
                                if ( v367 == 5
                                  && v79
                                  && v299
                                  && (*(_DWORD *)(v299 + 8) & 0x100) != 0
                                  && *(_QWORD *)v299
                                  && (**(_DWORD **)v299 & 1) != 0 )
                                {
                                  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                                    (MenuStateOwnerLockxxxUnlock *)&v437,
                                    *((struct tagMENUSTATE **)v8 + 76));
                                  if ( (unsigned int)xxxCallHandleMenuMessages(
                                                       v300,
                                                       ThreadDesktopWindow,
                                                       v301,
                                                       MouseKeyFlags,
                                                       v370) )
                                  {
                                    v12 = (__int64 *)v361;
                                    v11 = v360[1];
                                    if ( v437 )
                                      xxxUnlockMenuStateInternal(v437, 0);
                                    goto LABEL_33;
                                  }
                                  if ( v437 )
                                    xxxUnlockMenuStateInternal(v437, 0);
                                }
                                v33 = v378;
                                if ( !v378 )
                                  goto LABEL_921;
                                goto LABEL_872;
                              }
                              goto LABEL_645;
                            }
                            v240 = (_DWORD *)((char *)v364 + 488);
                            if ( (*((_DWORD *)v364 + 122) & 0x8000) == 0 )
                              goto LABEL_746;
                            v8 = v364;
                          }
                          else
                          {
LABEL_48:
                            v8 = v364;
                          }
                          v10 = 0LL;
                          goto LABEL_50;
                        }
                      }
                      else if ( v217 != 5 )
                      {
                        v218 = v217 - 1;
                        if ( !v218 )
                        {
                          v220 = ((unsigned __int16)v216 << 16) | 0x41;
                          goto LABEL_692;
                        }
                        v219 = v218 - 1;
                        if ( !v219 )
                        {
                          v220 = ((unsigned __int16)v216 << 16) | 0x42;
                          goto LABEL_692;
                        }
                        if ( v219 == 1 )
                        {
LABEL_675:
                          v220 = ((unsigned __int16)v216 << 16) | 0x43;
                          goto LABEL_692;
                        }
                        goto LABEL_681;
                      }
                      v214 = 68;
                    }
                    v220 = v214 | ((unsigned __int16)v216 << 16);
                    goto LABEL_692;
                  }
                  v209 = *(_QWORD *)(ThreadDesktopWindow + 40);
                  if ( (*(_BYTE *)(v209 + 26) & 0x40) != 0 )
                    v368.x = *(_DWORD *)(v209 + 96) - v368.x;
                  else
                    v368.x -= *(_DWORD *)(v209 + 88);
                  v210 = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 92LL);
                }
                else
                {
                  v211 = *(_QWORD *)(ThreadDesktopWindow + 40);
                  if ( (*(_BYTE *)(v211 + 26) & 0x40) != 0 )
                    v368.x = *(_DWORD *)(v211 + 112) - v368.x;
                  else
                    v368.x -= *(_DWORD *)(v211 + 104);
                  v210 = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 108LL);
                }
                v368.y -= v210;
                v204 = v368;
                goto LABEL_664;
              }
              v385 = *(_QWORD *)(ThreadDesktopWindow + 16);
              LockExchangeW32Thread(v202, (__int64)&v421);
            }
            else if ( (WORD2(v395) & 0x800) != 0
                   && !(unsigned __int8)CheckAccess(
                                          &v396,
                                          *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 424LL) + 864LL) )
            {
              EtwTraceUIPIMsgError(
                0LL,
                *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 424LL),
                v74,
                v391,
                *((_QWORD *)&v391 + 1));
              zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
              MouseKeyFlags = v371;
              v79 = v362;
              v10 = 0LL;
              goto LABEL_754;
            }
            v203 = v361;
            goto LABEL_649;
        }
      }
      if ( DWORD2(v390) != 522 )
      {
        switch ( DWORD2(v390) )
        {
          case 0x23:
            MouseKeyFlags = 0LL;
            v371 = 0LL;
            v370 = *((_QWORD *)&v391 + 1);
            if ( !ThreadDesktopWindow
              || (v76 = *(_QWORD *)(ThreadDesktopWindow + 16), (struct tagTHREADINFO *)v76 == v8) )
            {
              if ( (unsigned int)MiPCheckMsgFilter(v38, DWORD2(v390), (unsigned int)v376, a5) )
              {
                if ( v362 )
LABEL_229:
                  xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
                goto LABEL_921;
              }
              goto LABEL_976;
            }
            if ( *(struct tagQ **)(v76 + 432) == *v361 )
            {
              if ( !v385 )
              {
                v47 = *(_QWORD *)(ThreadDesktopWindow + 16);
                LockExchangeW32Thread(v76, (__int64)&v421);
                goto LABEL_977;
              }
              goto LABEL_976;
            }
            goto LABEL_558;
          case 0xFE:
            goto LABEL_559;
          case 0xFF:
            v370 = *((_QWORD *)&v391 + 1);
            MouseKeyFlags = v391;
            v371 = v391;
            ThreadDesktopWindow = 0LL;
            v372 = 0LL;
            v130 = 0LL;
            v131 = 0LL;
            if ( *((_QWORD *)&v391 + 1) )
            {
              v132 = HMValidateHandle(*((__int64 *)&v391 + 1), 0x12u);
              v130 = 0LL;
              if ( v132 )
              {
                ThreadDesktopWindow = *(_QWORD *)(v132 + 24);
                v372 = ThreadDesktopWindow;
                v130 = ThreadDesktopWindow;
                v131 = ThreadDesktopWindow;
              }
            }
            if ( !v130 )
            {
              v133 = *v361;
              ThreadDesktopWindow = *((_QWORD *)*v361 + 15);
              v372 = ThreadDesktopWindow;
              v131 = ThreadDesktopWindow;
              if ( !ThreadDesktopWindow )
              {
                ThreadDesktopWindow = *((_QWORD *)v133 + 16);
                v372 = ThreadDesktopWindow;
                v131 = ThreadDesktopWindow;
                if ( !ThreadDesktopWindow )
                  goto LABEL_454;
              }
            }
            ThreadLockExchangeAlways(ThreadDesktopWindow, &v408);
            v134 = v366;
            if ( CheckCrossThreadInput((struct tagWND *const)ThreadDesktopWindow, v366, &v373, &v362, v384) )
              goto LABEL_976;
            v135 = v373;
            if ( !v373 )
            {
              v136 = v364;
              goto LABEL_456;
            }
            if ( *(struct tagQ **)(*(_QWORD *)(v131 + 16) + 432LL) == *v361 )
            {
              v136 = v364;
              if ( (unsigned int)IsInsideMenuLoop(v364) )
              {
                v137 = *(_QWORD *)(**((_QWORD **)v136 + 76) + 8LL);
LABEL_450:
                if ( v137 )
                {
                  ThreadDesktopWindow = v137;
                  v372 = v137;
                  v135 = *(_QWORD *)(v137 + 16) != (_QWORD)v402;
                  v373 = v135;
                  ThreadLockExchangeAlways(v137, &v408);
                }
              }
              else
              {
                v138 = *((_QWORD *)v136 + 84);
                if ( v138 )
                {
                  v137 = *(_QWORD *)(v138 + 16);
                  goto LABEL_450;
                }
              }
              if ( !v403 )
              {
                v403 = *(_QWORD *)(ThreadDesktopWindow + 16);
                LockExchangeW32Thread(v403, (__int64)&v432);
              }
LABEL_456:
              v26 = a5;
              if ( !v376 && a5 == -1 )
                goto LABEL_467;
              if ( v376 <= a5 )
              {
                if ( v74 >= v376 && v74 <= a5 )
                {
                  v139 = 1;
                  goto LABEL_466;
                }
              }
              else if ( v74 < a5 || v74 > v376 )
              {
                v139 = 1;
                goto LABEL_466;
              }
              v139 = 0;
LABEL_466:
              v11 = v360[1];
              v29 = v363;
              if ( !v139 )
              {
LABEL_46:
                v8 = v364;
                goto LABEL_51;
              }
LABEL_467:
              v140 = CheckPwndFilter(ThreadDesktopWindow, a3, v29);
              v11 = v360[1];
              v29 = v363;
              if ( v140 )
              {
                if ( !v135 )
                {
                  if ( v362 )
                    xxxSkipSysMsgEx(v136, (struct tagQMSG *)&v389, 1u);
                  goto LABEL_922;
                }
                goto LABEL_976;
              }
              goto LABEL_46;
            }
LABEL_454:
            v79 = v362;
            goto LABEL_753;
          case 0x100:
          case 0x104:
            v400 = 1;
            if ( (*((_DWORD *)v8 + 122) & 0x400) != 0 && (int)CheckProcessForeground(v8) < 0 )
              goto LABEL_976;
            v77 = v391;
            v78 = (unsigned __int8)v391;
            v371 = (unsigned __int8)v391;
            v79 = v362;
            if ( v362 && (WORD2(v395) & 0x8000) != 0 )
              goto LABEL_264;
            v12 = (__int64 *)v361;
            if ( (unsigned __int8)v391 != 18LL )
              *((_DWORD *)*v361 + 99) &= 0xFFFFFFF3;
            v80 = *(_BYTE *)(*v12 + 240) & 0x10;
            if ( v78 != 44 )
              goto LABEL_251;
            if ( (*(_BYTE *)(*v12 + 240) & 0x10) != 0 )
            {
              v50 = (_DWORD *)((char *)v8 + 884);
              if ( (*((_DWORD *)v8 + 221) & 0x10) == 0 )
                goto LABEL_243;
            }
            else
            {
              v50 = (_DWORD *)((char *)v420 + 884);
            }
            if ( (*(_BYTE *)(*v12 + 240) & 0x10) == 0 && (*v50 & 0x20) == 0 )
            {
LABEL_243:
              xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
              if ( v80 || (DWORD2(v391) & 0xFF0000) == 0x10000LL )
              {
                v81 = *(struct tagWND **)(*v12 + 128);
                v82 = v81 == 0LL;
                if ( !v81 )
                  goto LABEL_249;
                v81 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(*(const struct tagWND **)(*v12 + 128));
              }
              else
              {
                v81 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)v8 + 57) + 8LL) + 24LL);
              }
              v82 = v81 == 0LL;
LABEL_249:
              v11 = v360[1];
              if ( !v82 )
              {
                v83 = HIDWORD(v396) != 1;
                *(_QWORD *)&v427 = *v407;
                *v407 = (__int64)&v427;
                *((_QWORD *)&v427 + 1) = v81;
                HMLockObject(v81);
                xxxSnapWindow(v81, v83);
                ThreadUnlock1(v85, v84, v86);
              }
              goto LABEL_33;
            }
LABEL_251:
            if ( *(_DWORD *)(SGDGetUserSessionState(v50) + 15952)
              && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
            {
              v87 = *(_BYTE *)(*v12 + 240);
              v88 = v78 | 0x400;
              if ( (v87 & 0x10) == 0 )
                v88 = v78;
              v89 = v88 | 0x200;
              if ( (v87 & 4) == 0 )
                v89 = v88;
              v90 = v89;
              LODWORD(v90) = v89 | 0x100;
              if ( (v87 & 1) == 0 )
                v90 = v89;
              v91 = (_QWORD *)HotKeyToWindow(v90);
              if ( v91 )
              {
                if ( *((_QWORD *)v8 + 57) == *(_QWORD *)(v91[2] + 456LL) )
                {
                  PostTransformableMessage(*(_QWORD *)(*v12 + 128), 274, 61776, *v91, 0);
                  xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
                  v11 = v360[1];
                  goto LABEL_33;
                }
              }
            }
            v77 = v391;
LABEL_264:
            if ( v78 == 231 )
            {
              *((_WORD *)v8 + 441) = WORD1(v77);
              v77 = 231LL;
            }
LABEL_267:
            v92 = (unsigned __int8)v77;
            v371 = (unsigned __int8)v77;
            if ( (unsigned __int8)v77 == 231LL )
              v77 = 231LL;
            *(_QWORD *)&v391 = v77;
            if ( v79 && (WORD2(v395) & 0x8000) != 0 || !*(_DWORD *)(SGDGetUserSessionState(231LL) + 13936) )
            {
              v12 = (__int64 *)v361;
            }
            else
            {
              AppImeCompatFlags = GetAppImeCompatFlags(0LL);
              v12 = (__int64 *)v361;
              if ( (AppImeCompatFlags & 0x800000) == 0 && BYTE10(v391) == 41 )
              {
                if ( v79 )
                {
                  v94 = *v361;
                  if ( (*((_BYTE *)*v361 + 240) & 0x15) == 0
                    && (*((_BYTE *)v94 + 258) & 0x40) == 0
                    && (*((_BYTE *)v94 + 259) & 1) == 0 )
                  {
                    v95 = (_QWORD *)*((_QWORD *)v94 + 15);
                    v372 = (__int64)v95;
                    v96 = v95;
                    v97 = v95;
                    if ( !v95 )
                    {
                      v95 = (_QWORD *)*((_QWORD *)v94 + 16);
                      v372 = (__int64)v95;
                      v96 = v95;
                      v97 = v95;
                    }
                    if ( !v96 || (struct tagTHREADINFO *)v97[2] == v364 )
                    {
                      v8 = v364;
                      xxxSkipSysMsgEx(v364, (struct tagQMSG *)&v389, 1u);
                      v11 = v360[1];
                      if ( !v400 && v96 )
                      {
                        v473 = *v95;
                        v474 = 80;
                        v475 = 0LL;
                        v476 = 0LL;
                        v477 = 0;
                        xxxCallCtfHook(3LL, 0LL, 1LL);
                      }
                      goto LABEL_33;
                    }
                  }
                }
              }
            }
            v98 = v360[0];
            if ( v92 == 121 )
            {
              v98 = v360[0] | 4;
              v360[0] |= 4u;
            }
            if ( (*(_BYTE *)(*v12 + 240) & 4) != 0 && v92 == 27 )
              v360[0] = v98 | 4;
            v8 = v364;
            if ( (*((_DWORD *)v364 + 122) & 8) == 0 )
              *((_QWORD *)&v391 + 1) &= ~0x2000000uLL;
LABEL_294:
            MouseKeyFlags = (unsigned __int8)v391;
            v371 = (unsigned __int8)v391;
            v99 = *v12;
            ThreadDesktopWindow = *(_QWORD *)(*v12 + 120);
            v372 = ThreadDesktopWindow;
            v100 = v360[0];
            if ( !ThreadDesktopWindow )
            {
              ThreadDesktopWindow = *(_QWORD *)(v99 + 128);
              v372 = ThreadDesktopWindow;
              if ( !ThreadDesktopWindow )
                goto LABEL_755;
              if ( v360[0] - 256 <= 3 )
              {
                v100 = v360[0] + 4;
                v360[0] += 4;
              }
            }
            ThreadLockExchangeAlways(ThreadDesktopWindow, &v408);
            v101 = *(struct tagQ ***)(ThreadDesktopWindow + 16);
            v102 = v101 != (struct tagQ **)v402;
            v373 = v102;
            if ( v101 == (struct tagQ **)v411 )
              goto LABEL_308;
            if ( v101[54] != *v361 )
              goto LABEL_754;
            if ( (unsigned int)IsInsideMenuLoop(v8) )
            {
              v104 = *(_QWORD *)(**((_QWORD **)v8 + 76) + 8LL);
            }
            else
            {
              v105 = *((_QWORD *)v8 + 84);
              if ( !v105 )
                goto LABEL_306;
              v104 = *(_QWORD *)(v105 + 16);
            }
            if ( v104 )
            {
              ThreadDesktopWindow = v104;
              v372 = v104;
              v102 = *(_QWORD *)(v104 + 16) != v103;
              v373 = v102;
              ThreadLockExchangeAlways(v104, &v408);
            }
LABEL_306:
            if ( !v404 )
            {
              v404 = *(_QWORD *)(ThreadDesktopWindow + 16);
              LockExchangeW32Thread(v404, (__int64)&v424);
            }
LABEL_308:
            v26 = a5;
            if ( !v376 && a5 == -1 )
              goto LABEL_318;
            if ( v376 > a5 )
            {
              if ( v100 < a5 || v100 > v376 )
              {
                v106 = 1;
                goto LABEL_317;
              }
LABEL_316:
              v106 = 0;
              goto LABEL_317;
            }
            if ( v100 < v376 )
              goto LABEL_316;
            v106 = 1;
            if ( v100 > a5 )
              goto LABEL_316;
LABEL_317:
            v29 = v363;
            if ( !v106 )
              goto LABEL_50;
LABEL_318:
            v107 = CheckPwndFilter(ThreadDesktopWindow, a3, v29);
            v29 = v363;
            if ( !v107 )
              goto LABEL_50;
            if ( v102 )
              goto LABEL_976;
            if ( !v79 )
              goto LABEL_335;
            if ( (WORD2(v395) & 0x8000) != 0 )
              goto LABEL_322;
            if ( !(unsigned int)IsInsideMenuLoop(v8) )
            {
              if ( MouseKeyFlags == 93 && v100 == 257 )
                PostTransformableMessage(ThreadDesktopWindow, 123, *(_QWORD *)ThreadDesktopWindow, -1, 0);
              if ( MouseKeyFlags == 112 && v100 == 256 )
                PostMessage(ThreadDesktopWindow, 77LL, 0LL, 0LL);
            }
LABEL_335:
            if ( MouseKeyFlags == 16 )
            {
              v109 = DWORD2(v391) & 0x1000000;
              if ( !v400 )
              {
                v110 = 1;
                if ( (DWORD2(v391) & 0x1000000) == 0 )
                  v110 = 4;
                if ( (*((_BYTE *)*v361 + 276) & (unsigned __int8)v110) != 0
                  && (unsigned int)IsDesktopApp(*((_QWORD *)v8 + 53), 4LL)
                  && (*((_DWORD *)v8 + 122) & 8) == 0 )
                {
                  *(_QWORD *)&v391 = (v109 != 0) + 160LL;
                  xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
                  v12 = (__int64 *)v361;
                  v11 = v360[1];
                  goto LABEL_33;
                }
              }
            }
            v406 = *((unsigned __int8 *)*v361 + (MouseKeyFlags >> 2) + 236) & (1 << (2 * (MouseKeyFlags & 3)));
            if ( !v406 )
            {
LABEL_322:
              v108 = v366;
            }
            else
            {
              v108 = v366;
              if ( !v79 )
                goto LABEL_348;
              if ( (unsigned __int64)v366 > 1 )
                *((_QWORD *)v366 + 5) |= 0x40000000uLL;
            }
            if ( v79 )
            {
              if ( (WORD2(v395) & 0x8000) != 0
                || (unsigned __int64)v108 <= 1
                || (*((_DWORD *)v8 + 318) & 0x10000000) == 0 )
              {
                xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
              }
              else
              {
                v387 = xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 0);
              }
            }
LABEL_348:
            v370 = *((_QWORD *)&v391 + 1);
            MouseKeyFlags = v391;
            v371 = v391;
            if ( v406 )
              v370 = *((_QWORD *)&v391 + 1) | 0x40000000LL;
            if ( v100 == 257 || v100 == 261 )
              v370 |= 0x80000000uLL;
            v111 = *v361;
            if ( (*((_BYTE *)*v361 + 240) & 0x10) != 0 )
              v370 |= 0x20000000uLL;
            v112 = *((_QWORD *)v8 + 76);
            if ( !v112 || (v54 = (*(_DWORD *)(v112 + 8) & 1) == 0, v113 = 1, v54) )
              v113 = 0;
            if ( v113 )
              v370 |= 0x10000000uLL;
            if ( (*((_DWORD *)v111 + 99) & 0x4000) != 0 )
              v370 |= 0x8000000uLL;
            if ( !v415 && !*(_QWORD *)(SGDGetUserSessionState(v111) + 12728) || (WORD2(v395) & 0x8000) != 0 )
              goto LABEL_380;
            if ( !v79 )
              goto LABEL_428;
            v114 = *((_QWORD *)v8 + 76);
            if ( !v114 || (v54 = (*(_DWORD *)(v114 + 8) & 1) == 0, v115 = 1, v54) )
              v115 = 0;
            if ( v115 || (*((_DWORD *)v8 + 122) & 0x2000000) != 0 )
            {
LABEL_380:
              if ( !v79 )
                goto LABEL_428;
              if ( (WORD2(v395) & 0x8000) != 0 )
              {
                v118 = v382;
                if ( (DWORD1(v395) & 0x4000000) != 0 )
                  v118 = 2;
                v382 = v118;
              }
            }
            else
            {
              v116 = MouseKeyFlags;
              if ( MouseKeyFlags == 231 )
                v116 = ((unsigned __int64)*((unsigned __int16 *)v8 + 441) << 16) | 0xE7;
              *((_QWORD *)v8 + 161) = *((_QWORD *)&v396 + 1);
              if ( v387 )
                PushW32ThreadLock(v387, &v440, FreeQEntry);
              v382 = xxxImmProcessKey(*v361, (struct tagWND *)ThreadDesktopWindow, v100, v116, v370);
              if ( (v382 & 0x11) != 0 )
              {
                if ( v387 )
                {
                  PopAndFreeAlwaysW32ThreadLock((__int64)&v440);
                  v387 = 0LL;
                }
                goto LABEL_754;
              }
              if ( v387 )
              {
                v117 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)(v117 + 16) = v440;
                ThreadDesktopWindow = v372;
                MouseKeyFlags = v371;
                v79 = v362;
              }
            }
            if ( v79 )
            {
              v381 = 1;
              v119 = 0;
              if ( (WORD2(v395) & 0x8000) == 0 )
              {
                v120 = *((_QWORD *)*v361 + 51);
                *((_QWORD *)*v361 + 51) = *((_QWORD *)&v393 + 1);
                v121 = v382 & 2;
                *((_QWORD *)v8 + 161) = *((_QWORD *)&v396 + 1);
                v443[0] = 0LL;
                v444 = 0LL;
                v443[1] = v370;
                if ( (unsigned int)Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage()
                  && (*(_DWORD *)(*((_QWORD *)v8 + 53) + 288LL) & 0x10) != 0 )
                {
                  if ( *((_DWORD *)v8 + 322) != 1 || (v122 = 1, (*((_DWORD *)v8 + 323) & 5) == 0) )
                    v122 = 0;
                  if ( v122
                    && *((PVOID *)v8 + 57) != grpdeskLogon
                    && (!(unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() || CheckImEnabled()) )
                  {
                    LOWORD(v444) = 1;
                  }
                }
                if ( v387 )
                  PushW32ThreadLock(v387, &v440, FreeQEntry);
                v119 = xxxCallCtfHook(2LL, v121, MouseKeyFlags);
                if ( (BYTE2(v444) & 1) != 0 )
                {
                  if ( (*(_DWORD *)(*((_QWORD *)v8 + 53) + 812LL) & 0x30) == 0x10 )
                    WORD1(v444) |= 0x10u;
                  ProcessTranslatedChar((struct _CHARHOOKSTRUCT *)v443);
                }
                v123 = v361;
                *((_QWORD *)*v361 + 51) = v120;
                v124 = v387;
                if ( v387 )
                {
                  if ( (unsigned int)(v119 - 2) <= 1
                    && (*((_DWORD *)v8 + 318) & 0x20000000) == 0
                    && AllocQEntryEx((__int64)*v123 + 24, v387, 2) )
                  {
                    v125 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
                    v126 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                        && LOWORD(WPP_GLOBAL_Control->DeviceType);
                    if ( v125 || v126 )
                    {
                      v12 = (__int64 *)v361;
                      WPP_RECORDER_AND_TRACE_SF_qqq(
                        (__int64)WPP_GLOBAL_Control->AttachedDevice,
                        v125,
                        v126,
                        (__int64)gFullLog,
                        5u,
                        0x12u,
                        0x24u,
                        (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
                    }
                    else
                    {
                      v12 = (__int64 *)v361;
                    }
                    v127 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                    *(_QWORD *)(v127 + 16) = v440;
                    *(_QWORD *)(*v12 + 88) = v124;
                    if ( v119 == 2 )
                    {
                      v11 = 1;
                      v360[1] = 1;
                    }
                    else
                    {
                      v11 = v360[1];
                      if ( v119 == 3 )
                        v11 = 2;
                      v360[1] = v11;
                    }
                    DeferSysPeekMsg(v8, v11);
                    v387 = 0LL;
                    v29 = v363;
                    goto LABEL_52;
                  }
                  PopAndFreeAlwaysW32ThreadLock((__int64)&v440);
                  v387 = 0LL;
                }
              }
              if ( v119 )
                goto LABEL_754;
            }
LABEL_428:
            v128 = v388;
            if ( ((*((_BYTE *)v8 + 680) | *(_BYTE *)(**v388 + 16)) & 8) == 0 )
              goto LABEL_433;
            v381 = 1;
            v129 = 3;
            if ( v79 )
              v129 = 0;
            if ( !(unsigned int)xxxCallHook(v129, MouseKeyFlags, v370, 2) )
            {
              v128 = v388;
LABEL_433:
              if ( v381 && v79 && ((*((_BYTE *)v8 + 680) | *(_BYTE *)(**v128 + 16)) & 0x40) != 0 )
                xxxCallHook(7, MouseKeyFlags, v370, 5);
              goto LABEL_921;
            }
            break;
          case 0x101:
          case 0x105:
            v77 = v391;
            v79 = v362;
            goto LABEL_267;
          case 0x102:
            v79 = v362;
            v12 = (__int64 *)v361;
            goto LABEL_294;
          case 0x119:
          case 0x11B:
            goto LABEL_552;
          default:
            goto LABEL_577;
        }
        goto LABEL_754;
      }
LABEL_490:
      if ( (*((_DWORD *)v8 + 122) & 0x400) != 0 && (int)CheckProcessForeground(v8) < 0 )
        goto LABEL_976;
      if ( (unsigned int)IsInsideMenuLoop(v8) )
        goto LABEL_557;
      if ( (DWORD1(v395) & 0x100000) != 0 )
      {
        v143 = v361;
        ThreadDesktopWindow = *((_QWORD *)*v361 + 15);
        v372 = ThreadDesktopWindow;
      }
      else
      {
        v144 = ThreadDesktopWindow
            && (unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)ThreadDesktopWindow);
        if ( v144 )
        {
          if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)ThreadDesktopWindow) )
            goto LABEL_557;
        }
        else
        {
          ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
        }
        v469 = 0LL;
        v470 = 0LL;
        ThreadLock(ThreadDesktopWindow, &v469);
        v145 = Feature_DropHtTransparentOffThread__private_IsEnabledDeviceUsage() != 0;
        v146 = 8 * v144;
        v147 = v145 ? v146 + 17 : v146 + 1;
        v148 = xxxDCEWindowHitTest(
                 (struct tagWND *)ThreadDesktopWindow,
                 0x200u,
                 v391,
                 *((__int64 *)&v391 + 1),
                 (struct tagPOINT)v394,
                 &v367,
                 v147);
        LOBYTE(v149) = 1;
        ThreadDesktopWindow = HMValidateHandleNoSecure(v148, v149);
        v372 = ThreadDesktopWindow;
        LOBYTE(v150) = 1;
        v151 = (struct tagWND *)HMValidateHandleNoSecure(v148, v150);
        InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)&v389, (const struct tagPOINT *)&v394, v151);
        ThreadUnlock1(v153, v152, v154);
        v143 = v361;
      }
      if ( !ThreadDesktopWindow )
      {
LABEL_557:
        MouseKeyFlags = v371;
LABEL_558:
        v79 = v362;
        goto LABEL_754;
      }
      ThreadLockExchangeAlways(ThreadDesktopWindow, &v408);
      v155 = *(_QWORD *)(ThreadDesktopWindow + 16);
      v156 = v155 != (_QWORD)v402;
      v373 = v156;
      if ( (struct tagTHREADINFO *)v155 != v411 )
      {
        if ( *(struct tagQ **)(v155 + 432) != *v143 )
          goto LABEL_557;
        if ( !v404 )
        {
          v404 = v155;
          LockExchangeW32Thread(v155, (__int64)&v424);
        }
      }
      v157 = MiPCheckMsgFilter(v38, v74, (unsigned int)v376, a5);
      v29 = v363;
      if ( !v157 )
        goto LABEL_50;
      v158 = CheckPwndFilter(ThreadDesktopWindow, a3, v363);
      v29 = v363;
      if ( !v158 )
        goto LABEL_50;
      if ( v156 )
        goto LABEL_976;
      if ( !v38 || !(unsigned int)IsMiPActive(v8, v38, v363) )
      {
        v79 = v362;
        goto LABEL_535;
      }
      v159 = *(_DWORD *)(v38 + 100);
      if ( (v159 & 0x400) == 0 )
        break;
      memset_0(v507, 0, sizeof(v507));
      if ( !*(_QWORD *)(ThreadDesktopWindow + 272) )
        *(_DWORD *)(v38 + 100) = v159 & 0xFFFFEFFF;
      v79 = v362;
      if ( !ShouldGenerateMipMessage(v8, (const struct tagQMSG *)v38, (struct tagWND *)ThreadDesktopWindow, v362)
        || !GeneratePointerMessageFromMouse(
              (struct tagQMSG *)v507,
              v360[0],
              (struct tagQMSG *)v38,
              (struct tagWND *)ThreadDesktopWindow,
              v79) )
      {
        if ( !v79 )
          goto LABEL_537;
        *(_DWORD *)(v38 + 100) &= ~0x400u;
        goto LABEL_535;
      }
      v389 = v507[0];
      v390 = v507[1];
      v391 = v507[2];
      v392 = v507[3];
      v393 = v507[4];
      v394 = v507[5];
      v395 = v507[6];
      v396 = v507[7];
      v397 = v507[8];
      v398 = v507[9];
      v33 = 1;
      v378 = 1;
      v380 = 1;
      if ( v79 )
        *(_DWORD *)(v38 + 100) &= ~0x400u;
LABEL_872:
      v73 = DWORD2(v390);
LABEL_873:
      if ( ((DWORD2(v396) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v396) != 50 )
      {
        v360[0] = v73;
        v370 = *((_QWORD *)&v391 + 1);
        v371 = v391;
LABEL_896:
        if ( v79 )
        {
          if ( *((_QWORD *)v8 + 76) )
            v308 = 0;
          else
            v308 = IsMiPEnabledForThread(v8) != 0;
          if ( v308 && v33 )
          {
            v309 = 0LL;
            if ( ThreadDesktopWindow )
              v309 = *(_QWORD *)ThreadDesktopWindow;
            *(_QWORD *)(*((_QWORD *)v8 + 169) + 48LL) = v309;
            if ( (*(_DWORD *)(*((_QWORD *)v8 + 169) + 36LL) & 0x400000) != 0
              && !(unsigned int)IsCompositionInputWindow((const struct tagWND *)ThreadDesktopWindow) )
            {
              *(_DWORD *)(*((_QWORD *)v8 + 169) + 36LL) &= ~0x400000u;
            }
            MiPWindowFlags = GetMiPWindowFlags((struct tagWND *)ThreadDesktopWindow);
            SetMiPWindowFlags((struct tagWND *)ThreadDesktopWindow, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
            if ( ((DWORD2(v390) - 578) & 0xFFFFFFFB) != 0 )
            {
              if ( ((DWORD2(v390) - 579) & 0xFFFFFFFB) == 0 )
                **((_DWORD **)v8 + 169) &= ~8u;
            }
            else
            {
              v311 = 0;
              if ( DWORD2(v390) == 578 )
                v311 = 8;
              **((_DWORD **)v8 + 169) = v311 | **((_DWORD **)v8 + 169) & 0xFFFFFFF7;
            }
          }
          else
          {
            xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
          }
        }
        if ( (unsigned int)IsPointerMessageTouchpad(v8, *((unsigned __int64 *)&v391 + 1), v33) )
        {
          if ( !v79 && !(unsigned int)IsPTPAllowedOnThread(v8, DWORD2(v390), v391) )
            xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
          v312 = v370;
          if ( v73 == 595 )
            v312 = -1LL;
          v370 = v312;
        }
        goto LABEL_921;
      }
      EtwTraceBeginPointerMessageRetrieve(v38, (unsigned __int16)v391, v73);
      v510[0] = *(_OWORD *)v38;
      v510[1] = *(_OWORD *)(v38 + 16);
      v510[2] = *(_OWORD *)(v38 + 32);
      v510[3] = *(_OWORD *)(v38 + 48);
      v510[4] = *(_OWORD *)(v38 + 64);
      v510[5] = *(_OWORD *)(v38 + 80);
      v510[6] = *(_OWORD *)(v38 + 96);
      v510[7] = *(_OWORD *)(v38 + 112);
      v510[8] = *(_OWORD *)(v38 + 128);
      v510[9] = *(_OWORD *)(v38 + 144);
      v302 = (unsigned int)xxxRetrievePointerInputMessage(
                             (int)v8,
                             a3,
                             v376,
                             a5,
                             1,
                             0,
                             &v362,
                             (struct tagQMSG *)v38,
                             (__int64)&v372,
                             (__int64)v360,
                             (__int64)&v371,
                             (__int64)&v370,
                             &v373,
                             v384);
      InputTraceLogging::Pointer::RetrieveMessage(v510, 0LL, v302);
      EtwTraceEndPointerMessageRetrieve(v510, (unsigned __int16)v391, DWORD2(v390));
      ThreadDesktopWindow = v372;
      if ( v372 )
        ThreadLockExchange(v372, &v408);
      v304 = v302 - 1;
      if ( !v304 )
      {
        v73 = v360[0];
        v79 = v362;
        goto LABEL_896;
      }
      v305 = v304 - 1;
      if ( !v305 )
      {
        if ( v373 )
        {
          v417 = *(_QWORD *)(ThreadDesktopWindow + 16);
          LockExchangeW32Thread(v417, (__int64)&v429);
          goto LABEL_132;
        }
LABEL_976:
        v8 = v364;
        goto LABEL_132;
      }
      v306 = v305 - 1;
      if ( !v306 )
      {
        xxxDefPointerProc(v303, DWORD2(v390), v391, *((_QWORD *)&v391 + 1));
        *v384 = 0LL;
        MouseKeyFlags = v371;
        v79 = v362;
        goto LABEL_754;
      }
      *v384 = 0LL;
      if ( v306 != 1 )
      {
        MouseKeyFlags = v371;
        v79 = v362;
        goto LABEL_754;
      }
      v29 = v363;
LABEL_50:
      v11 = v360[1];
LABEL_51:
      v12 = (__int64 *)v361;
    }
    v79 = v362;
    if ( !v362 )
      goto LABEL_537;
    if ( (unsigned int)IsMiPMouseMessage(*(unsigned int *)(v38 + 24)) )
    {
      if ( (unsigned int)IsGenuineMouseInput(v38 + 120) )
      {
        v160 = (_DWORD *)*((_QWORD *)v8 + 169);
        if ( v160 )
        {
          if ( (*v160 & 2) == 0 && (*v160 & 4) == 0 )
          {
            xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
            v12 = (__int64 *)v361;
            v11 = v360[1];
            goto LABEL_33;
          }
        }
      }
      v161 = (_DWORD *)*((_QWORD *)v8 + 169);
      if ( v161 )
        *v161 &= ~2u;
    }
LABEL_535:
    if ( v79 )
      xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
LABEL_537:
    v162 = GetMouseKeyFlags(*v143);
    MouseKeyFlags = v391 | v162;
    v371 = MouseKeyFlags;
    v368.x = SWORD4(v391);
    v368.y = SWORD5(v391);
    PhysicalToLogicalDPIPointWithHitTest(&v368, &v368, 0LL, (const struct tagWND *)ThreadDesktopWindow);
    v370 = (LOWORD(v368.y) << 16) | LOWORD(v368.x);
    *(struct tagPOINT *)((char *)&v392 + 4) = v368;
    v511[0] = (__int64)v368;
    v511[1] = *(_QWORD *)ThreadDesktopWindow;
    LODWORD(v512) = 0;
    *((_QWORD *)&v512 + 1) = *((_QWORD *)&v393 + 1);
    LODWORD(v513) = v391;
    if ( !v79 )
      break;
    v377 = 1;
    v163 = v360[0];
    if ( !(unsigned int)xxxCallCtfHook(7LL, 0LL, v360[0]) )
      goto LABEL_541;
LABEL_754:
    v100 = v360[0];
LABEL_755:
    xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v389, 1u);
    v242 = v388;
    if ( v377 )
    {
      v243 = (_DWORD *)((char *)v8 + 680);
      v244 = **v388;
      v26 = (unsigned int)(*((_DWORD *)v8 + 170) | *(_DWORD *)(v244 + 16));
      if ( ((*((_BYTE *)v8 + 680) | *(_BYTE *)(v244 + 16)) & 0x40) != 0 )
        xxxCallHook(6, v100, (__int64)v511, 5);
      v377 = 0;
    }
    else
    {
      v243 = (_DWORD *)((char *)v420 + 680);
    }
    if ( v381 )
    {
      v307 = **v242;
      v26 = (unsigned int)(*v243 | *(_DWORD *)(v307 + 16));
      if ( ((*(_BYTE *)v243 | *(_BYTE *)(v307 + 16)) & 0x40) != 0 )
        xxxCallHook(7, MouseKeyFlags, v370, 5);
      v381 = 0;
    }
    v12 = (__int64 *)v361;
    v11 = v360[1];
    v29 = v363;
    if ( v79 )
      goto LABEL_33;
  }
  v163 = v360[0];
LABEL_541:
  v164 = v388;
  v165 = **v388;
  v166 = *(_DWORD *)(v165 + 16);
  v399 = (char *)v8 + 680;
  if ( ((*((_DWORD *)v8 + 170) | v166) & 0x100) != 0 )
  {
    v377 = 1;
    if ( xxxCallMouseHook(v163, (__int64)v511, v79) )
      goto LABEL_754;
  }
  if ( (unsigned int)PsGetWin32KFilterSet(v165) != 5 )
    goto LABEL_548;
  v167 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
  v374 = 0;
  v374 = *(_QWORD *)(v167 + 248) != 0LL;
  v79 = v362;
  v163 = v360[0];
  if ( v374 && xxxClientCallLocalMouseHooks(v360[0], v511, (unsigned int)v362) )
  {
    MouseKeyFlags = v371;
    goto LABEL_754;
  }
  ThreadDesktopWindow = v372;
LABEL_548:
  if ( v377 && v79 && ((*v399 | *(_BYTE *)(**v164 + 16)) & 0x40) != 0 )
    xxxCallHook(6, v163, (__int64)v511, 5);
LABEL_921:
  v134 = v366;
LABEL_922:
  v313 = v364;
  if ( *(_QWORD *)((char *)v364 + 764) != *(_QWORD *)((char *)&v392 + 4) )
    *((_DWORD *)v364 + 122) |= 0x100000u;
  if ( (unsigned __int64)v134 > 1 && ((BYTE4(v395) & 0x20) != 0 || (DWORD1(v395) & 0x8000000) != 0) )
  {
    if ( *((_DWORD *)v134 + 6) == 512 )
    {
      v314 = 0LL;
      if ( ThreadDesktopWindow )
        v314 = *(_QWORD *)ThreadDesktopWindow;
      *((_QWORD *)v134 + 2) = v314;
      *((_DWORD *)v134 + 25) |= 0x200u;
    }
    *((_QWORD *)v134 + 8) = v370;
  }
  *(_QWORD *)((char *)v313 + 764) = *(_QWORD *)((char *)&v392 + 4);
  *((_DWORD *)v313 + 193) = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 288LL);
  *((_QWORD *)v313 + 97) = v394;
  *((_DWORD *)v313 + 142) = v392;
  v315 = v361;
  *((_QWORD *)*v361 + 51) = *((_QWORD *)&v393 + 1);
  *((_QWORD *)*v315 + 10) = 1LL;
  *((_QWORD *)v313 + 72) = 1LL;
  *((_QWORD *)v313 + 161) = *((_QWORD *)&v396 + 1);
  *((_DWORD *)v313 + 340) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v316 = *((_DWORD *)v402 + 318) | 0x20000;
  if ( *((_DWORD *)v313 + 323) != 1 )
    v316 = *((_DWORD *)v402 + 318) & 0xFFFDFFFF;
  *((_DWORD *)v402 + 318) = v316;
  v419 = (char *)v313 + 448;
  **((_DWORD **)v313 + 56) &= ~8u;
  **v438 &= 0x7FFFFFFFuLL;
  v317 = v378;
  v318 = v362;
  if ( v362 )
  {
    v319 = **v438;
    if ( (BYTE4(v395) & 1) != 0 )
      v320 = v319 | 0x1000;
    else
      v320 = v319 & 0xFFFFFFFFFFFFEFFFuLL;
    **v438 = v320;
  }
  v321 = v360[0];
  TransferWakeBit(v313, v360[0]);
  if ( !*((_DWORD *)*v361 + 10) && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared((__int64)v361) + 58) + 56LL) )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)v419 + 8LL), (*((_DWORD *)*v361 + 99) >> 4) & 2 | 0xFFFF83F8);
    v321 = v360[0];
    v318 = v362;
  }
  if ( v318 )
  {
    if ( v317 )
    {
      v322 = (_DWORD *)*((_QWORD *)v313 + 169);
      if ( v322 )
      {
        if ( (*v322 & 1) != 0 && (*v322 & 4) != 0 )
          SetMiPWakeBit(v313);
      }
    }
  }
  v323 = v439;
  *(_QWORD *)v439 = *(_QWORD *)v372;
  *((_DWORD *)v323 + 2) = v321;
  v324 = v371;
  if ( (v382 & 2) != 0 )
    v324 = 229LL;
  *((_QWORD *)v323 + 2) = v324;
  *((_QWORD *)v323 + 3) = v370;
  *((_DWORD *)v323 + 8) = v392;
  *(_QWORD *)((char *)v323 + 36) = *(_QWORD *)((char *)&v392 + 4);
  InputTraceLogging::Delivery::ScanSysQueue((const struct tagQMSG *)&v389, v323, v313, v318 != 0);
  if ( v318 )
  {
    EtwTraceInputProcessDelay(v313);
    *((_DWORD *)*v361 + 104) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v318 = v362;
  }
  EtwTraceRetrieveInputMessage(v439, v318);
  v325 = 0LL;
  v326 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v326 )
    v325 = *v326;
  *(_QWORD *)(v325 + 16) = v429;
  if ( v430 )
    v431();
  v327 = 0LL;
  v328 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v328 )
    v327 = *v328;
  *(_QWORD *)(v327 + 16) = v432;
  if ( v433 )
    v434();
  v329 = 0LL;
  v330 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v330 )
    v329 = *v330;
  *(_QWORD *)(v329 + 16) = v412;
  if ( v413 )
    v414();
  v331 = 0LL;
  v332 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v332 )
    v331 = *v332;
  *(_QWORD *)(v331 + 16) = v421;
  if ( v422 )
    v423();
  v333 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v333 )
    v10 = *v333;
  *(_QWORD *)(v10 + 16) = v424;
  v336 = v425;
  if ( v425 )
    v426();
  ThreadUnlock1(v336, v334, v335);
  if ( v369 )
    *(_DWORD *)(gptiCurrent + 1276LL) &= ~0x20u;
  return 1LL;
}
