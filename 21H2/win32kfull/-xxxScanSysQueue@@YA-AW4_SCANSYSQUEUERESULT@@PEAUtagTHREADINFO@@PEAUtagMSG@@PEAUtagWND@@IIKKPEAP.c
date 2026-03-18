/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 * Callees:
 *     DeferMessagesOnQueue @ 0x1C00012E4 (DeferMessagesOnQueue.c)
 *     IsHiddenByInputService @ 0x1C0001430 (IsHiddenByInputService.c)
 *     xxxCallMouseHook @ 0x1C0002CD4 (xxxCallMouseHook.c)
 *     FreeQEntry @ 0x1C0002D54 (FreeQEntry.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023BF4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C00541E4 (IS_USERCRIT_OWNED_SHARED.c)
 *     CalcWakeMask @ 0x1C0057150 (CalcWakeMask.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C005BB70 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     CheckPwndFilter @ 0x1C005C1A8 (CheckPwndFilter.c)
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C0064850 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00648B4 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006C570 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C006D2FC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006D640 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006D988 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsThreadDesktopComposed @ 0x1C006DA68 (IsThreadDesktopComposed.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C0072BA8 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     xxxCallCtfHook @ 0x1C0075F08 (xxxCallCtfHook.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077038 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     xxxTrackMouseMove @ 0x1C007E59C (xxxTrackMouseMove.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00A5F14 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     LockExchangeW32Thread @ 0x1C00A6768 (LockExchangeW32Thread.c)
 *     _PostTransformableMessage @ 0x1C00A755C (_PostTransformableMessage.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00AB408 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00ABB1C (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     UpdateRawMouseMode @ 0x1C00ABF48 (UpdateRawMouseMode.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00AC0C0 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsMiPActive @ 0x1C00AD310 (IsMiPActive.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     PhkNextValid @ 0x1C00EA754 (PhkNextValid.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00F1A94 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00F1E88 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     GetThreadDesktopWindow @ 0x1C00F26A0 (GetThreadDesktopWindow.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1C00F5228 (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     GetAppImeCompatFlags @ 0x1C00F5524 (GetAppImeCompatFlags.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6110 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00F61A4 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C00FA4E0 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     ThreadLockExchange @ 0x1C00FDE30 (ThreadLockExchange.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0101270 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C010150C (ThreadLockExchangeAlways.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     IsInsideMenuLoop @ 0x1C010931C (IsInsideMenuLoop.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0122790 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C014C240 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C014C4E8 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     strcmp_0 @ 0x1C0160232 (strcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C016ABDA (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C016B0F4 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C016B98A (PhysicalToLogicalInPlacePointWithParent.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DB344 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DB7A8 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01DBC6C (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01DC3DC (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01DC4F4 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x1C01DC524 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C01DCDE0 (IsMiPEnabledForWindow.c)
 *     SetMiPPromotion @ 0x1C01DCFDC (SetMiPPromotion.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E0F20 (xxxCallJournalPlaybackHook.c)
 *     SetJournalTimer @ 0x1C01E5EC8 (SetJournalTimer.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01EB168 (xxxRetrievePointerInputMessage.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01EBB68 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C021B934 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C022B818 (xxxClientCallLocalMouseHooks.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x1C022EFC4 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C02303C0 (xxxCallHandleMenuMessages.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C023A7E0 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C023A8B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxDefPointerProc @ 0x1C023F5B4 (xxxDefPointerProc.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 *     HotKeyToWindow @ 0x1C023FD88 (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02405EC (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScanSysQueue(
        unsigned __int64 a1,
        struct tagMSG *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        int a7,
        struct tagQMSG **a8)
{
  __int64 v10; // rdi
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rbx
  __int64 *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // r14
  __int64 Valid; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // r13
  __int64 v32; // rax
  PDEVICE_OBJECT v33; // rcx
  int v34; // eax
  int v35; // ebx
  __int64 ThreadDesktopWindow; // r15
  _QWORD *v37; // r9
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 *v40; // r12
  __int64 i; // rcx
  bool v42; // zf
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 v47; // rbx
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 *v50; // rax
  __int64 v51; // rbx
  __int64 *v52; // rax
  __int64 v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rbx
  __int64 *v56; // rax
  __int64 *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rcx
  int v62; // edx
  int v63; // r8d
  int v64; // ebx
  __int64 v65; // r14
  __int64 *v66; // rax
  unsigned int v67; // ebx
  unsigned int v68; // r14d
  int v69; // r9d
  __int64 v70; // rax
  int v71; // r9d
  HWND v72; // rbx
  struct tagWND *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rax
  int v78; // r12d
  struct tagPOINT v79; // r8
  struct tagPOINT v80; // rbx
  int v81; // eax
  __int64 v82; // rcx
  int v83; // ecx
  BOOL v84; // r13d
  unsigned __int16 v85; // r14
  int v86; // edx
  __int64 v87; // r8
  int v88; // r13d
  unsigned __int64 v89; // r14
  struct tagQMSG *v90; // rbx
  int v91; // eax
  int v92; // r12d
  struct tagQMSG *v93; // rcx
  int v94; // r14d
  struct tagQMSG *v95; // r11
  int v96; // edx
  int v97; // r13d
  const struct tagQMSG *v98; // r8
  int v99; // r13d
  unsigned int v100; // r11d
  __int64 v101; // r10
  struct tagQMSG *v102; // rcx
  unsigned __int64 v103; // r8
  unsigned int v104; // edx
  unsigned int v105; // r14d
  unsigned __int64 *v106; // rcx
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  unsigned int v109; // r15d
  __int64 v110; // rbx
  struct tagMSG *v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  unsigned __int64 *v116; // rax
  __int64 v117; // rcx
  __int64 v118; // r10
  int v119; // ebx
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 v122; // rbx
  unsigned int v123; // r13d
  __int64 *v124; // rbx
  __int64 v125; // rcx
  BOOL v126; // r14d
  int v127; // eax
  unsigned __int64 v128; // r14
  struct tagQMSG *v129; // rax
  unsigned int *v130; // r13
  __int64 v131; // rcx
  __int64 v132; // rdx
  unsigned __int64 v133; // r9
  int v134; // r14d
  __int64 v135; // rcx
  __int64 v136; // rbx
  __int64 v137; // rdx
  int v138; // eax
  int v139; // edx
  int v140; // r8d
  unsigned int v141; // r13d
  int v142; // eax
  int v143; // ecx
  __int64 v144; // rcx
  _DWORD *v145; // rax
  int v146; // eax
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rax
  const struct tagWND *v153; // rbx
  __int64 v154; // rax
  char v155; // al
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rcx
  int v159; // eax
  int v160; // ecx
  __int64 v161; // rcx
  __int64 v162; // rbx
  __int64 v163; // rax
  int v164; // r14d
  unsigned int v165; // r9d
  __int64 v166; // r10
  int v167; // r9d
  int v168; // r8d
  int v169; // kr04_4
  int v170; // ecx
  __int64 v171; // rbx
  char v172; // dl
  __int64 v173; // rcx
  __int64 v174; // rax
  unsigned __int64 *v175; // rbx
  BOOL v176; // ebx
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  unsigned int v180; // eax
  int v181; // eax
  int v182; // eax
  __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rbx
  __int64 v186; // rcx
  __int64 v187; // rcx
  int InteractiveControlInputMessage; // eax
  int v189; // ebx
  int v190; // ebx
  struct tagWND *v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // rbx
  int v196; // ebx
  _DWORD *v197; // rax
  _DWORD *v198; // rax
  unsigned int v199; // eax
  int v200; // r13d
  __int64 v201; // rcx
  char *v202; // rax
  char v203; // cl
  __int64 v204; // rax
  __int64 v205; // rdx
  __int64 v206; // r8
  int v207; // r8d
  __int64 v208; // r9
  __int64 v210; // rax
  const char *v211; // rcx
  __int64 v212; // rcx
  __int64 v213; // r12
  int v214; // eax
  unsigned __int64 v215; // rcx
  unsigned __int64 v216; // rcx
  unsigned __int64 v217; // rcx
  int TouchTimeFromCPLValue; // ecx
  __int64 v219; // rcx
  __int64 v220; // rax
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  const struct tagWND *TopLevelWindow; // rax
  bool v223; // r14
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v225; // rdx
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  struct tagQMSG *v229; // r8
  __int64 v230; // rcx
  int v231; // r9d
  _DWORD *v232; // rax
  unsigned __int64 v233; // rcx
  __int64 v234; // rcx
  __int64 v235; // rdx
  __int64 v236; // rcx
  __int64 v237; // r8
  __int64 v238; // rax
  int v239; // r10d
  int v240; // r11d
  struct tagQMSG **v241; // r12
  __int64 v242; // rbx
  __int64 v243; // rcx
  int v244; // ebx
  int v245; // ebx
  int v246; // ebx
  int v247; // eax
  unsigned __int16 v248; // r13
  __int64 v249; // rcx
  unsigned __int64 MiPWindowFlags; // rax
  int v251; // edx
  struct tagWND *v252; // r14
  __int64 v253; // rax
  bool v254; // zf
  unsigned int v255; // ecx
  unsigned int v256; // edx
  __int64 v257; // rcx
  _QWORD *v258; // rax
  __int64 v259; // r10
  __int64 v260; // rcx
  _QWORD *v261; // r14
  _QWORD *v262; // r15
  __int64 v263; // rcx
  int v264; // eax
  int v265; // eax
  __int64 v266; // rax
  __int64 v267; // rax
  __int64 v268; // rax
  __int64 v269; // rax
  __int64 v270; // r14
  _DWORD *v271; // rax
  unsigned int v272[2]; // [rsp+70h] [rbp-898h] BYREF
  bool v273; // [rsp+78h] [rbp-890h]
  char v274; // [rsp+79h] [rbp-88Fh]
  int v275; // [rsp+7Ch] [rbp-88Ch] BYREF
  struct tagQMSG *v276; // [rsp+80h] [rbp-888h]
  struct tagPOINT v277; // [rsp+88h] [rbp-880h] BYREF
  int v278; // [rsp+90h] [rbp-878h] BYREF
  __int128 v279; // [rsp+98h] [rbp-870h] BYREF
  unsigned int v280; // [rsp+A8h] [rbp-860h]
  __int64 v281; // [rsp+B0h] [rbp-858h] BYREF
  int v282; // [rsp+B8h] [rbp-850h]
  bool v283; // [rsp+BCh] [rbp-84Ch]
  bool v284; // [rsp+BDh] [rbp-84Bh]
  unsigned __int64 MouseKeyFlags; // [rsp+C0h] [rbp-848h]
  int v286; // [rsp+C8h] [rbp-840h]
  int v287; // [rsp+CCh] [rbp-83Ch]
  int v288; // [rsp+D0h] [rbp-838h]
  int v289; // [rsp+D4h] [rbp-834h]
  unsigned int v290; // [rsp+D8h] [rbp-830h]
  __int64 v291; // [rsp+E0h] [rbp-828h]
  unsigned __int64 v292; // [rsp+E8h] [rbp-820h]
  int v293; // [rsp+F0h] [rbp-818h]
  int v294; // [rsp+F4h] [rbp-814h]
  struct tagQMSG **v295; // [rsp+F8h] [rbp-810h]
  _OWORD v296[10]; // [rsp+100h] [rbp-808h] BYREF
  unsigned int *v297; // [rsp+1A0h] [rbp-768h]
  __int64 v298; // [rsp+1A8h] [rbp-760h]
  int v299; // [rsp+1B0h] [rbp-758h]
  unsigned __int64 v300; // [rsp+1B8h] [rbp-750h]
  struct tagTHREADINFO *v301; // [rsp+1C0h] [rbp-748h]
  __int64 v302; // [rsp+1C8h] [rbp-740h]
  int v303; // [rsp+1D0h] [rbp-738h]
  __int128 v304; // [rsp+1D8h] [rbp-730h]
  __int64 v305; // [rsp+1E8h] [rbp-720h] BYREF
  __int64 v306; // [rsp+1F0h] [rbp-718h]
  __int64 v307; // [rsp+1F8h] [rbp-710h]
  unsigned int v308[4]; // [rsp+200h] [rbp-708h] BYREF
  int v309; // [rsp+210h] [rbp-6F8h]
  __int64 v310; // [rsp+218h] [rbp-6F0h]
  __int64 v311; // [rsp+220h] [rbp-6E8h]
  struct tagMSG *v312; // [rsp+228h] [rbp-6E0h]
  __int64 v313; // [rsp+230h] [rbp-6D8h] BYREF
  __int64 v314; // [rsp+238h] [rbp-6D0h]
  void (*v315)(void); // [rsp+240h] [rbp-6C8h]
  __int128 v316; // [rsp+248h] [rbp-6C0h] BYREF
  __int64 v317; // [rsp+258h] [rbp-6B0h]
  __int64 v318; // [rsp+260h] [rbp-6A8h] BYREF
  __int64 v319; // [rsp+268h] [rbp-6A0h]
  void (*v320)(void); // [rsp+270h] [rbp-698h]
  __int64 v321; // [rsp+278h] [rbp-690h] BYREF
  __int64 v322; // [rsp+280h] [rbp-688h]
  void (*v323)(void); // [rsp+288h] [rbp-680h]
  unsigned __int64 v324; // [rsp+290h] [rbp-678h]
  unsigned __int64 v325; // [rsp+298h] [rbp-670h]
  __int64 v326; // [rsp+2A0h] [rbp-668h] BYREF
  __int64 v327; // [rsp+2A8h] [rbp-660h]
  void (*v328)(void); // [rsp+2B0h] [rbp-658h]
  __int64 v329; // [rsp+2B8h] [rbp-650h] BYREF
  __int64 v330; // [rsp+2C0h] [rbp-648h]
  void (*v331)(void); // [rsp+2C8h] [rbp-640h]
  struct tagMENUSTATE *v332; // [rsp+2D0h] [rbp-638h] BYREF
  _DWORD v333[4]; // [rsp+2D8h] [rbp-630h] BYREF
  __int64 v334[3]; // [rsp+2E8h] [rbp-620h] BYREF
  __int64 v335; // [rsp+300h] [rbp-608h] BYREF
  _DWORD v336[2]; // [rsp+310h] [rbp-5F8h] BYREF
  __int128 v337; // [rsp+318h] [rbp-5F0h]
  int *v338; // [rsp+328h] [rbp-5E0h]
  int v339; // [rsp+330h] [rbp-5D8h]
  int v340; // [rsp+334h] [rbp-5D4h]
  char *v341; // [rsp+338h] [rbp-5D0h]
  __int64 v342; // [rsp+340h] [rbp-5C8h]
  __int64 v343; // [rsp+348h] [rbp-5C0h]
  __int128 v344; // [rsp+350h] [rbp-5B8h]
  __int128 v345; // [rsp+360h] [rbp-5A8h]
  __int128 v346; // [rsp+370h] [rbp-598h]
  __int128 v347; // [rsp+380h] [rbp-588h]
  __int128 v348; // [rsp+390h] [rbp-578h]
  unsigned __int64 v349; // [rsp+3A0h] [rbp-568h]
  __int64 v350; // [rsp+3A8h] [rbp-560h]
  unsigned __int64 v351; // [rsp+3B0h] [rbp-558h]
  __int128 v352; // [rsp+3B8h] [rbp-550h]
  __int64 v353; // [rsp+3C8h] [rbp-540h]
  _OWORD v354[6]; // [rsp+3D0h] [rbp-538h] BYREF
  __int128 v355; // [rsp+430h] [rbp-4D8h]
  __int128 v356; // [rsp+440h] [rbp-4C8h]
  __int128 v357; // [rsp+450h] [rbp-4B8h]
  __int128 v358; // [rsp+480h] [rbp-488h] BYREF
  __int64 v359; // [rsp+490h] [rbp-478h]
  __int128 v360; // [rsp+498h] [rbp-470h] BYREF
  __int64 v361; // [rsp+4A8h] [rbp-460h]
  __int128 v362; // [rsp+4B0h] [rbp-458h]
  __int64 v363; // [rsp+4C0h] [rbp-448h] BYREF
  int v364; // [rsp+4C8h] [rbp-440h]
  __int128 v365; // [rsp+4CCh] [rbp-43Ch]
  __int128 v366; // [rsp+4DCh] [rbp-42Ch]
  int v367; // [rsp+4ECh] [rbp-41Ch]
  __int128 v368; // [rsp+4F0h] [rbp-418h]
  __int128 v369; // [rsp+500h] [rbp-408h]
  _OWORD v370[6]; // [rsp+518h] [rbp-3F0h] BYREF
  _OWORD v371[10]; // [rsp+580h] [rbp-388h] BYREF
  _OWORD v372[10]; // [rsp+620h] [rbp-2E8h] BYREF
  _OWORD v373[10]; // [rsp+6C0h] [rbp-248h] BYREF
  _DWORD v374[40]; // [rsp+760h] [rbp-1A8h] BYREF
  _OWORD v375[10]; // [rsp+800h] [rbp-108h] BYREF
  __int64 v376[2]; // [rsp+8A0h] [rbp-68h] BYREF
  __int128 v377; // [rsp+8B0h] [rbp-58h]
  __int64 v378; // [rsp+8C0h] [rbp-48h]

  v286 = a4;
  v300 = a1;
  v324 = a1;
  v325 = a1;
  v301 = (struct tagTHREADINFO *)a1;
  v292 = a1;
  v312 = a2;
  v299 = a4;
  v295 = a8;
  memset(v296, 0, sizeof(v296));
  memset(v371, 0, sizeof(v371));
  v10 = 0LL;
  v272[0] = 0;
  v279 = 0uLL;
  v277 = 0LL;
  v275 = 0;
  v278 = 0;
  *(_OWORD *)v376 = 0LL;
  v377 = 0LL;
  v378 = 0LL;
  v303 = 0;
  v307 = 0LL;
  v316 = 0LL;
  v317 = 0LL;
  v272[1] = a6 & 1;
  v288 = 0;
  memset(v354, 0, sizeof(v354));
  v280 = 0;
  v273 = 0;
  v297 = 0LL;
  *a8 = 0LL;
  if ( a7 == 0x2000 && *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) )
  {
    EtwTraceInputQueueLockedPeekRecursion();
    return 0LL;
  }
  v294 = 0;
  v287 = 0;
  v289 = 0;
  v13 = *(_QWORD *)(a1 + 432);
  if ( !*(_QWORD *)(v13 + 64) )
  {
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        18,
        26,
        (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
        v13,
        a1,
        a1);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 64LL) = a1;
    **(_DWORD **)(a1 + 448) |= 1u;
  }
  if ( (a7 & 0x1C07) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 432);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v14 + 388) &= ~0x400u;
    else
      *(_DWORD *)(v14 + 388) |= 0x400u;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 432) + 64LL) != a1 )
  {
    EtwTraceInputQueueLocked();
    return 2LL;
  }
  v291 = 0LL;
  v302 = 0LL;
  v311 = 0LL;
  v298 = 0LL;
  v310 = 0LL;
  v15 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v15 = *ThreadWin32Thread;
  v321 = *(_QWORD *)(v15 + 16);
  *(_QWORD *)(v15 + 16) = &v321;
  v322 = 0LL;
  v323 = (void (*)(void))DereferenceW32Thread;
  v17 = 0LL;
  v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v18 )
    v17 = *v18;
  v318 = *(_QWORD *)(v17 + 16);
  *(_QWORD *)(v17 + 16) = &v318;
  v319 = 0LL;
  v320 = (void (*)(void))DereferenceW32Thread;
  v19 = 0LL;
  v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v20 )
    v19 = *v20;
  v313 = *(_QWORD *)(v19 + 16);
  *(_QWORD *)(v19 + 16) = &v313;
  v314 = 0LL;
  v315 = (void (*)(void))DereferenceW32Thread;
  v21 = 0LL;
  v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 )
    v21 = *v22;
  v329 = *(_QWORD *)(v21 + 16);
  *(_QWORD *)(v21 + 16) = &v329;
  v330 = 0LL;
  v331 = (void (*)(void))DereferenceW32Thread;
  v23 = 0LL;
  v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v24 )
    v23 = *v24;
  v326 = *(_QWORD *)(v23 + 16);
  *(_QWORD *)(v23 + 16) = &v326;
  v327 = 0LL;
  v328 = (void (*)(void))DereferenceW32Thread;
  v281 = 0LL;
  v305 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = &v305;
  v306 = 0LL;
  v274 = 0;
  v27 = *(_DWORD *)(gptiCurrent + 1260LL);
  if ( (v27 & 0x20) == 0 )
  {
    v274 = 1;
    *(_DWORD *)(gptiCurrent + 1260LL) = v27 | 0x20;
  }
LABEL_26:
  LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
             && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)v25 || (_BYTE)v26 )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v25,
      v26,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      18,
      27,
      (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
      *(_QWORD *)(a1 + 432),
      *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL));
  *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) = 0LL;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              do
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
LABEL_35:
                    v309 = (**(_DWORD **)(a1 + 480) >> 9) & 1;
                    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL);
                    if ( v28 )
                    {
                      if ( !v273 )
                        v273 = ((v280 - 1) & 0xFFFFFFFD) == 0;
                    }
                    else
                    {
                      v280 = 0;
                      v273 = 0;
                    }
                    v282 = 0;
                    *(_QWORD *)&v279 = 0LL;
                    v290 = 0;
                    if ( !gbInDestroyHandleTableObjects
                      && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
                      && (!IS_USERCRIT_OWNED_SHARED()
                       || !tagDomLock::IsLockedExclusive(gDomainHookLock)
                       && !tagDomLock::IsLockedShared(gDomainHookLock)) )
                    {
                      __int2c();
                    }
                    Valid = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 56LL);
                    if ( !Valid )
                      goto LABEL_40;
                    if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
                      Valid = PhkNextValid(Valid);
                    if ( Valid && *(_QWORD *)(a1 + 456) == grpdeskRitInput )
                    {
                      if ( v28 )
                      {
                        v31 = 0LL;
                        v276 = 0LL;
                      }
                      else
                      {
                        v180 = xxxCallJournalPlaybackHook((struct tagQMSG *)v296);
                        if ( v180 == -1 )
                        {
                          v31 = 0LL;
                          v276 = 0LL;
                        }
                        else if ( v180 )
                        {
                          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), 0xFFFFE3F8);
                          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 4LL), 0xFFFFE3F8);
                          SetJournalTimer(v180, DWORD2(v296[1]));
                          v31 = 0LL;
                          v276 = 0LL;
                        }
                        else
                        {
                          WakeSomeone(*(struct tagQ **)(a1 + 432), 0LL, DWORD2(v296[1]), 0LL);
                          CInputGlobals::MarkLastInputAsJournalling(gpInputGlobals);
                          v31 = 1LL;
                          v276 = (struct tagQMSG *)1;
                        }
                      }
                    }
                    else
                    {
LABEL_40:
                      v30 = *(_QWORD *)(a1 + 432);
                      if ( (*(_DWORD *)(v30 + 388) & 0x20) != 0 )
                      {
                        PostPendingMouseMove();
                        v30 = *(_QWORD *)(v325 + 432);
                      }
                      if ( *(_DWORD *)(v30 + 40) )
                      {
                        if ( v28 && (v116 = *(unsigned __int64 **)(v30 + 80), (unsigned __int64)v116 > 1) )
                          v31 = *v116;
                        else
                          v31 = *(_QWORD *)(v30 + 24);
                        v276 = (struct tagQMSG *)v31;
                        if ( (*(_DWORD *)(a1 + 1256) & 0x2000) != 0 )
                        {
                          if ( !v31 )
                            goto LABEL_53;
                          do
                          {
                            v181 = *(_DWORD *)(v31 + 100);
                            if ( (v181 & 0x20) == 0 )
                              break;
                            if ( (v181 & 0x10) == 0 )
                              break;
                            v31 = *(_QWORD *)v31;
                            v276 = (struct tagQMSG *)v31;
                          }
                          while ( v31 );
                        }
                        if ( v31 )
                        {
                          v32 = *(_QWORD *)(v31 + 104);
                          if ( v32 && v32 != a1 && (*(_DWORD *)(v32 + 488) & 0x10000) != 0 )
                          {
                            v31 = (unsigned __int64)DeferMessagesOnQueue(
                                                      (struct tagMLIST *)(v30 + 24),
                                                      (struct tagQMSG *)v31);
                            v276 = (struct tagQMSG *)v31;
                          }
                          if ( v31 )
                          {
                            v296[0] = *(_OWORD *)v31;
                            v296[1] = *(_OWORD *)(v31 + 16);
                            v296[2] = *(_OWORD *)(v31 + 32);
                            v296[3] = *(_OWORD *)(v31 + 48);
                            v296[4] = *(_OWORD *)(v31 + 64);
                            v296[5] = *(_OWORD *)(v31 + 80);
                            v296[6] = *(_OWORD *)(v31 + 96);
                            v296[7] = *(_OWORD *)(v31 + 112);
                            v296[8] = *(_OWORD *)(v31 + 128);
                            v296[9] = *(_OWORD *)(v31 + 144);
                          }
                        }
                      }
                      else
                      {
                        v31 = 0LL;
                        v276 = 0LL;
                      }
                    }
LABEL_53:
                    *(_QWORD *)&v304 = v31;
                    v33 = WPP_GLOBAL_Control;
                    LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
                    LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                               && LOWORD(WPP_GLOBAL_Control->DeviceType);
                    if ( (_BYTE)v25 || (_BYTE)v26 )
                      WPP_RECORDER_AND_TRACE_SF_qqq(
                        WPP_GLOBAL_Control->AttachedDevice,
                        v25,
                        v26,
                        WPP_MAIN_CB.Queue.ListEntry.Flink,
                        5,
                        18,
                        28,
                        (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
                        v31,
                        *(_QWORD *)(a1 + 432),
                        *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL));
                    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) = v31;
                    if ( v31 <= 1 )
                      break;
                    v34 = DWORD1(v296[6]);
                    if ( (BYTE4(v296[6]) & 0x20) != 0 )
                    {
                      *v295 = (struct tagQMSG *)v31;
                      *(_DWORD *)(v31 + 100) |= 0x100u;
                      v272[1] = 0;
                      v34 = DWORD1(v296[6]);
                    }
                    if ( (v34 & 0x2000) != 0 )
                    {
                      v182 = v280;
                      if ( *((_QWORD *)&v296[6] + 1) == a1 )
                        v182 = 1;
                      v280 = v182;
                      v273 = 1;
                    }
                    else if ( (v34 & 0x10000) != 0 )
                    {
                      if ( *((_QWORD *)&v296[6] + 1) == a1 )
                        v280 = 3;
                    }
                    else if ( LODWORD(v296[6]) == 4 && v273 )
                    {
                      DeferSysPeekMsg(a1, 3LL);
                    }
                    else if ( (v34 & 0x4000) != 0 )
                    {
                      if ( *((_QWORD *)&v296[6] + 1) == a1 )
                        v280 = 2;
                    }
                    else
                    {
                      if ( !(unsigned int)ShouldDeferMessage(v280, v296) )
                        break;
                      DeferSysPeekMsg(a1, 3LL);
                      v280 = 3;
                    }
                  }
                  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) )
                  {
                    if ( a7 == 0x2000 )
                      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), 0xFFFFDFFF);
                    goto LABEL_98;
                  }
                  ThreadUnlock1(v33, v25, v26);
                  v35 = v296[1];
                  ThreadDesktopWindow = 0LL;
                  PsGetThreadWin32Thread(KeGetCurrentThread());
                  if ( (unsigned __int64)(unsigned __int16)v35 < *(_QWORD *)(gpsi + 8LL) )
                  {
                    v38 = *((_QWORD *)&gSharedInfo + 1)
                        + (unsigned int)(unsigned __int16)v35 * *((_DWORD *)&gSharedInfo + 4);
                    v40 = (__int64 *)HMPkheFromPhe(v38);
                    LOWORD(v35) = HIWORD(v35) & 0x7FFF;
                    if ( ((HIWORD(v35) & 0x7FFF) == *(_WORD *)(v38 + 26)
                       || (_WORD)v35 == 0x7FFF
                       || !(_WORD)v35 && PsGetCurrentProcessWow64Process(v39))
                      && (*(_BYTE *)(v38 + 25) & 1) == 0
                      && *(_BYTE *)(v38 + 24) == 1 )
                    {
                      ThreadDesktopWindow = *v40;
                    }
                  }
                  v281 = ThreadDesktopWindow;
                  v305 = *(_QWORD *)(a1 + 416);
                  *(_QWORD *)(a1 + 416) = &v305;
                  v306 = ThreadDesktopWindow;
                  if ( ThreadDesktopWindow )
                    HMLockObject(ThreadDesktopWindow);
                  v25 = LODWORD(v296[6]);
                  if ( !LODWORD(v296[6]) )
                    break;
                  if ( LODWORD(v296[6]) != 4
                    || *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) == *(_QWORD *)(*(_QWORD *)(a1 + 432) + 24LL) )
                  {
                    if ( LODWORD(v296[6]) != 9 || DWORD2(v296[1]) != 96 )
                      goto LABEL_84;
                    for ( i = *((_QWORD *)&v296[0] + 1); ; i = *(_QWORD *)(v117 + 8) )
                    {
                      v42 = i == 0;
                      if ( !i )
                        break;
                      if ( !IsHiddenByInputService(i) )
                      {
                        v42 = v117 == 0;
                        break;
                      }
                    }
                    if ( v42 )
                    {
LABEL_84:
                      v43 = *((_QWORD *)&v296[6] + 1);
                      if ( !*((_QWORD *)&v296[6] + 1) || *((_QWORD *)&v296[6] + 1) == a1 )
                      {
                        EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL));
                        DelQEntry(*(_QWORD *)(a1 + 432) + 24LL, *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL), 1LL);
                        LOBYTE(v62) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
                        LOBYTE(v63) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                                   && LOWORD(WPP_GLOBAL_Control->DeviceType);
                        if ( (_BYTE)v62 || (_BYTE)v63 )
                          WPP_RECORDER_AND_TRACE_SF_qq(
                            WPP_GLOBAL_Control->AttachedDevice,
                            v62,
                            v63,
                            WPP_MAIN_CB.Queue.ListEntry.Flink,
                            5,
                            18,
                            30,
                            (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
                            *(_QWORD *)(a1 + 432),
                            *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL));
                        *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) = 0LL;
                        xxxProcessEventMessage(a1, v296);
                      }
                      else
                      {
                        v44 = *(_QWORD *)(a1 + 432);
                        if ( *(_QWORD *)(*((_QWORD *)&v296[6] + 1) + 432LL) == v44 )
                        {
                          v311 = *((_QWORD *)&v296[6] + 1);
                          ObfReferenceObject(**((PVOID **)&v296[6] + 1));
                          _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
                          v45 = v314;
                          v314 = v43;
                          if ( v45 )
                            v315();
                          LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
                          LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                                     && LOWORD(WPP_GLOBAL_Control->DeviceType);
                          if ( (_BYTE)v25 || (_BYTE)v26 )
                            WPP_RECORDER_AND_TRACE_SF_qq(
                              WPP_GLOBAL_Control->AttachedDevice,
                              v25,
                              v26,
                              WPP_MAIN_CB.Queue.ListEntry.Flink,
                              5,
                              18,
                              29,
                              (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
                              *(_QWORD *)(a1 + 432),
                              *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL));
                          *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) = 0LL;
                          goto LABEL_98;
                        }
                        CleanEventMessage(*(struct tagQMSG **)(v44 + 80));
                        DelQEntry(*(_QWORD *)(a1 + 432) + 24LL, *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL), 1LL);
                      }
                      goto LABEL_26;
                    }
                  }
                }
              }
              while ( a7 == 0x2000 );
              v67 = DWORD2(v296[1]);
              v68 = DWORD2(v296[1]);
              v272[0] = DWORD2(v296[1]);
              if ( DWORD2(v296[1]) < 0x11C || DWORD2(v296[1]) >= 0x20A )
                break;
LABEL_172:
              v277.x = SWORD4(v296[2]);
              v277.y = SWORD5(v296[2]);
              v278 = 1;
              if ( (BYTE4(v296[6]) & 0x20) != 0 )
              {
                if ( !ThreadDesktopWindow )
                  goto LABEL_174;
                v25 = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 288LL) >> 8;
                if ( (((unsigned __int16)v25 ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16)
                                                                                        + 424LL)
                                                                            + 280LL) >> 8)) & 0x1FF) == 0 )
                  goto LABEL_192;
              }
              if ( ThreadDesktopWindow )
              {
                v146 = IsCompositionInputWindowForHitTest((struct tagWND *)ThreadDesktopWindow);
                v67 = DWORD2(v296[1]);
                if ( v146 )
                {
                  v69 = 1;
                  goto LABEL_175;
                }
              }
LABEL_174:
              v69 = 0;
LABEL_175:
              v288 = v69;
              v70 = *(_QWORD *)(a1 + 432);
              if ( *(_QWORD *)(v70 + 104) )
              {
                ThreadDesktopWindow = *(_QWORD *)(v70 + 104);
                v281 = ThreadDesktopWindow;
                if ( (unsigned int)dword_1C032BE20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 64LL) )
                {
                  v334[0] = v208;
                  v308[0] = v67;
                  v335 = *((_QWORD *)&v296[8] + 1);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    (unsigned int)&dword_1C032BE20,
                    (unsigned int)&unk_1C02EE98F,
                    v207,
                    v208,
                    (__int64)&v335,
                    (__int64)v308,
                    (__int64)v334);
                }
                if ( v288 )
                {
                  if ( !(unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)ThreadDesktopWindow) )
                  {
                    DWORD1(v296[6]) &= ~0x1000u;
                    if ( v31 )
                    {
                      if ( (unsigned int)IsMiPActive(a1, v31) )
                        *(_DWORD *)(v31 + 100) &= ~0x1000u;
                    }
                  }
                }
              }
              else
              {
                if ( !v69 )
                {
                  ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
                  *(_QWORD *)&v316 = *(_QWORD *)(a1 + 416);
                  *(_QWORD *)(a1 + 416) = &v316;
                  *((_QWORD *)&v316 + 1) = ThreadDesktopWindow;
                  if ( ThreadDesktopWindow )
                  {
                    HMLockObject(ThreadDesktopWindow);
                    v67 = DWORD2(v296[1]);
                  }
                }
                if ( (unsigned int)IsThreadDesktopComposed(a1, v25, v26) )
                {
                  v336[0] = v67;
                  v336[1] = 0;
                  v337 = v296[2];
                  v338 = &v278;
                  if ( v71 )
                    v339 = 9;
                  else
                    v339 = 1;
                  v340 = 0;
                  v341 = (char *)&v296[5] + 8;
                  v342 = 0LL;
                  v343 = 0LL;
                  v72 = xxxDCEWindowHitTestIndirect(
                          ThreadDesktopWindow,
                          *(struct tagPOINT *)&v296[5],
                          0,
                          (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v336);
                  if ( v72 && (_BYTE)v342 )
                  {
                    *((_QWORD *)&v296[2] + 1) = *((_QWORD *)&v337 + 1);
                    DWORD1(v296[3]) = SWORD4(v337);
                    DWORD2(v296[3]) = SWORD5(v337);
                    v277 = *(struct tagPOINT *)((char *)&v296[3] + 4);
                  }
                }
                else
                {
                  if ( v71 )
                    v165 = 9;
                  else
                    v165 = 1;
                  LODWORD(v72) = (unsigned int)xxxWindowHitTest((struct tagWND *)ThreadDesktopWindow, v277, &v278, v165);
                }
                v73 = (struct tagWND *)HMValidateHandleNoSecure((int)v72, 1);
                InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)v296, &v277, v73);
                if ( !v288 )
                  ThreadUnlock1(v75, v74, v76);
                ThreadDesktopWindow = HMValidateHandleNoSecure((int)v72, 1);
                v281 = ThreadDesktopWindow;
                if ( !ThreadDesktopWindow )
                {
                  ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL) + 24LL);
                  v281 = ThreadDesktopWindow;
                  if ( !ThreadDesktopWindow )
                  {
                    ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
                    v281 = ThreadDesktopWindow;
                  }
                }
                if ( (unsigned int)IsMiPActive(a1, 0LL)
                  && (v144 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 432LL)) != 0
                  && (v204 = ValidateHwnd(v144),
                      v204
                   && ((v205 = *(_QWORD *)(v204 + 16), v206 = *(_QWORD *)(a1 + 432), *(_QWORD *)(v205 + 432) == v206)
                    || *(_QWORD *)(v205 + 424) == *(_QWORD *)(a1 + 424))) )
                {
                  ThreadDesktopWindow = v204;
                  v281 = v204;
                  v278 = 1;
                  *(_DWORD *)(v206 + 148) = 0;
                }
                else
                {
                  v77 = *(_QWORD *)(v292 + 432);
                  *(_DWORD *)(v77 + 148) = v278 != 1;
                }
              }
              if ( ThreadDesktopWindow == *(_QWORD *)(*(_QWORD *)(a1 + 432) + 104LL) )
              {
                v147 = *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 432LL);
                v148 = *(_QWORD *)(v147 + 104);
                v149 = v148 ? *(_QWORD *)(v148 + 16) : *(_QWORD *)(v147 + 88);
                if ( (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v149 + 424) + 280LL) >> 8)) & 0x1FF) != 0 )
                  goto LABEL_709;
                v150 = 0LL;
                v151 = *(_QWORD *)(ThreadDesktopWindow + 24);
                if ( v151 )
                  v150 = *(_QWORD *)(v151 + 104);
                if ( *(_QWORD *)(ThreadDesktopWindow + 104) == v150 )
                {
                  v210 = *(_QWORD *)(ThreadDesktopWindow + 136);
                  if ( v210 )
                  {
                    v211 = *(const char **)(v210 + 104);
                    if ( v211 )
                    {
                      if ( !strcmp_0(v211, "CLIPBRDWNDCLASS") )
                      {
LABEL_709:
                        v277 = *(struct tagPOINT *)&v296[5];
                        PhysicalToLogicalInPlacePointWithParent(ThreadDesktopWindow, &v277, (char *)&v296[5] + 8);
                        *((_QWORD *)&v279 + 1) = (LOWORD(v277.y) << 16) | LOWORD(v277.x);
                        *(struct tagPOINT *)((char *)&v296[3] + 4) = v277;
                      }
                    }
                  }
                }
              }
LABEL_192:
              ThreadLockExchange(ThreadDesktopWindow, &v305);
              if ( CheckCrossThreadInput(
                     (struct tagWND *const)ThreadDesktopWindow,
                     (struct tagQMSG *)v31,
                     &v275,
                     (int *)&v272[1],
                     v295) )
              {
                goto LABEL_98;
              }
              v78 = v275;
              if ( v275 )
              {
                v173 = *(_QWORD *)(ThreadDesktopWindow + 16);
                if ( *(_QWORD *)(v173 + 432) != *(_QWORD *)(a1 + 432) )
                  goto LABEL_512;
                if ( !v291 )
                {
                  v291 = *(_QWORD *)(ThreadDesktopWindow + 16);
                  LockExchangeW32Thread(v173, &v318);
                }
              }
              else if ( (WORD2(v296[6]) & 0x800) != 0
                     && !(unsigned __int8)CheckAccess(
                                            &v296[7],
                                            *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 424LL) + 880LL) )
              {
                EtwTraceUIPIMsgError(
                  0LL,
                  *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 424LL),
                  v68,
                  *(_QWORD *)&v296[2],
                  *((_QWORD *)&v296[2] + 1));
LABEL_512:
                zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
LABEL_513:
                v89 = v279;
LABEL_514:
                v92 = v272[1];
LABEL_432:
                LODWORD(v90) = v272[0];
                goto LABEL_433;
              }
              v79 = v277;
              v80 = v277;
              v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 432LL) + 148LL);
              if ( v81 && (v142 = v81 - 2) != 0 )
              {
                if ( v142 != 1 )
                  goto LABEL_200;
                v212 = *(_QWORD *)(ThreadDesktopWindow + 40);
                if ( (*(_BYTE *)(v212 + 26) & 0x40) != 0 )
                  v277.x = *(_DWORD *)(v212 + 96) - v277.x;
                else
                  v277.x -= *(_DWORD *)(v212 + 88);
                v83 = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 92LL);
              }
              else
              {
                v82 = *(_QWORD *)(ThreadDesktopWindow + 40);
                if ( (*(_BYTE *)(v82 + 26) & 0x40) != 0 )
                  v277.x = *(_DWORD *)(v82 + 112) - v277.x;
                else
                  v277.x -= *(_DWORD *)(v82 + 104);
                v83 = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 108LL);
              }
              v277.y -= v83;
              v79 = v277;
LABEL_200:
              if ( v78 || *(_QWORD *)(a1 + 432) != gpqCursor )
                goto LABEL_211;
              v84 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 184LL) != ThreadDesktopWindow;
              v85 = v278;
              if ( v278 != 5 )
                goto LABEL_203;
              v213 = *(_QWORD *)(ThreadDesktopWindow + 168);
              if ( !v213 || (*(_BYTE *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 16LL) & 1) == 0 )
              {
                v78 = v275;
LABEL_203:
                if ( v278 == 7 && (*(_BYTE *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 16LL) & 2) != 0 )
                {
                  v86 = (unsigned __int16)HitTestScrollBar((struct tagWND *)ThreadDesktopWindow, 1, v79) | 0x10000;
                }
                else if ( v278 == 6 && (*(_BYTE *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 16LL) & 4) != 0 )
                {
                  v86 = (unsigned __int16)HitTestScrollBar((struct tagWND *)ThreadDesktopWindow, 0, v79);
                }
                else
                {
                  v86 = v278;
                }
                goto LABEL_206;
              }
              v214 = MNItemHitTest(
                       *(struct tagMENU **)(ThreadDesktopWindow + 168),
                       (struct tagWND *)ThreadDesktopWindow,
                       v79);
              if ( v214 >= 0 )
              {
                v215 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v213 + 88) + 96LL * v214) + 96LL);
                if ( v215 <= 6 )
                {
                  if ( v215 >= 5 )
                  {
                    v85 = 68;
                    goto LABEL_724;
                  }
                  v216 = v215 - 1;
                  if ( !v216 )
                  {
                    v85 = 65;
                    goto LABEL_724;
                  }
                  v217 = v216 - 1;
                  if ( !v217 )
                  {
                    v85 = 66;
                    goto LABEL_724;
                  }
                  if ( v217 != 1 )
                    goto LABEL_731;
LABEL_723:
                  v85 = 67;
                  goto LABEL_724;
                }
                if ( v215 == 7 )
                  goto LABEL_723;
                if ( v215 != -1LL )
                {
LABEL_731:
                  v85 = 69;
                  goto LABEL_724;
                }
                v85 = -2;
              }
LABEL_724:
              v86 = v85 | ((unsigned __int16)v214 << 16);
              v78 = v275;
LABEL_206:
              v68 = v272[0];
              if ( v272[0] != 512 || v84 || *(_DWORD *)(*(_QWORD *)(a1 + 456) + 192LL) != v86 )
                xxxTrackMouseMove((struct tagWND *)ThreadDesktopWindow);
              if ( !v84 )
              {
                v87 = *(_QWORD *)(a1 + 456);
                if ( (*(_DWORD *)(v87 + 48) & 0x40) != 0
                  && (v68 != 512 || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v87 + 196, v80)) )
                {
                  ResetMouseHover((struct tagDESKTOP *)v87, v80);
                }
              }
LABEL_211:
              if ( (unsigned int)CheckPwndFilter(ThreadDesktopWindow, a3) )
              {
                v88 = 0;
                v293 = 0;
                if ( v68 >= 0x201 )
                {
                  switch ( v68 )
                  {
                    case 0x201u:
                      v42 = (unsigned __int8)IsMessageInputSourceTouch(v296) == 0;
                      v154 = *(_QWORD *)(a1 + 432);
                      if ( v42 )
                        *(_DWORD *)(v154 + 388) &= ~0x800000u;
                      else
                        *(_DWORD *)(v154 + 388) |= 0x800000u;
                      v155 = IsMessageInputSourcePen(v296);
                      v156 = *(_QWORD *)(v292 + 432);
                      if ( v155 )
                        *(_DWORD *)(v156 + 388) |= 0x1000000u;
                      else
                        *(_DWORD *)(v156 + 388) &= ~0x1000000u;
                      goto LABEL_444;
                    case 0x202u:
                    case 0x205u:
                    case 0x208u:
                    case 0x20Cu:
                      goto LABEL_447;
                    case 0x204u:
                    case 0x207u:
                    case 0x20Bu:
LABEL_444:
                      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 136) + 8LL) + 8LL) & 8) != 0
                        || *(_DWORD *)(*(_QWORD *)(a1 + 432) + 148LL) == 1
                        || (v157 = *(_QWORD *)(a1 + 608)) != 0 && (*(_DWORD *)(v157 + 8) & 1) != 0 )
                      {
                        v88 = 1;
                        v293 = 1;
                        v166 = *(_QWORD *)(a1 + 432);
                        if ( LODWORD(v296[3]) <= *(_DWORD *)(v166 + 160)
                          && !gbClientDoubleClickSupport
                          && *(_QWORD *)ThreadDesktopWindow == *(_QWORD *)(v166 + 168)
                          && v68 == *(_DWORD *)(v166 + 152)
                          && (v68 != 523 || WORD1(v296[2]) == *(_WORD *)(v166 + 156)) )
                        {
                          v167 = *(_DWORD *)(gpsi + 2040LL) / 2;
                          v168 = *(_DWORD *)(v166 + 176);
                          v333[0] = v168 - v167;
                          v169 = *(_DWORD *)(gpsi + 2044LL);
                          v170 = *(_DWORD *)(v166 + 180);
                          v333[1] = v170 - v169 / 2;
                          v333[2] = v167 + v168;
                          v333[3] = v169 / 2 + v170;
                          if ( (unsigned int)PtInRect(v333, *(_QWORD *)((char *)&v296[3] + 4)) )
                          {
                            v68 += 2;
                            v272[0] = v68;
                            v88 = 2;
                            v293 = 2;
                          }
                        }
                      }
LABEL_447:
                      v158 = *(_QWORD *)(a1 + 432);
                      v159 = *(_DWORD *)(v158 + 388);
                      if ( (v159 & 8) != 0 )
                        *(_DWORD *)(v158 + 388) = v159 | 4;
                      if ( v68 - 514 <= 0xA )
                      {
                        v160 = 1097;
                        if ( _bittest(&v160, v68 - 514) )
                        {
                          if ( *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) && ((DWORD2(v296[7]) - 4) & 0xFFFFFFFB) == 0 )
                          {
                            if ( DWORD2(v296[7]) == 4 )
                            {
                              TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(300LL, 180LL, 5LL);
                            }
                            else if ( gPenMonitor || (unsigned int)LoadPointerDevicePenSettings() )
                            {
                              TouchTimeFromCPLValue = *((_DWORD *)off_1C0326038 + 11);
                              if ( TouchTimeFromCPLValue == -1 )
                                TouchTimeFromCPLValue = *((_DWORD *)off_1C0326038 + 10);
                            }
                            else
                            {
                              TouchTimeFromCPLValue = gdtDblClk;
                            }
                            *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) = DWORD2(v296[9]) + TouchTimeFromCPLValue;
                          }
                        }
                      }
                      break;
                    default:
                      break;
                  }
                }
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 432LL) + 148LL) == 1 )
                {
                  v272[0] = v68 - 352;
                  v89 = (unsigned int)v278;
                  *(_QWORD *)&v279 = (unsigned int)v278;
                }
                else
                {
                  v89 = v279;
                }
                MouseKeyFlags = v89;
                v90 = (struct tagQMSG *)v272[0];
                if ( (unsigned int)MiPCheckMsgFilter(v276, v272[0], (unsigned int)v286, a5) )
                {
                  if ( v78 )
                    goto LABEL_98;
                  if ( (unsigned int)((_DWORD)v90 - 512) > 0xE || (*(_DWORD *)(a1 + 488) & 0x8000) == 0 )
                  {
                    v91 = *(_DWORD *)(a1 + 488);
                    if ( (v91 & 0x100000) != 0 )
                    {
                      *(_DWORD *)(a1 + 488) = v91 & 0xFFEFFFFF;
                      xxxWindowEvent(0x800Bu, 1);
                    }
                    v376[0] = *(_QWORD *)((char *)&v296[3] + 4);
                    v376[1] = *(_QWORD *)ThreadDesktopWindow;
                    LODWORD(v377) = v278;
                    *((_QWORD *)&v377 + 1) = *((_QWORD *)&v296[4] + 1);
                    LODWORD(v378) = v296[2];
                    v92 = v272[1];
                    if ( v272[1] )
                    {
                      if ( (_DWORD)v90 != 512 && (_DWORD)v90 != 160 )
                      {
                        v287 = 1;
                        if ( (unsigned int)xxxCallCtfHook(7LL, 0LL, v90, v376) )
                          goto LABEL_433;
                      }
                    }
                    if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_DWORD *)(a1 + 680)) & 0x100) != 0 )
                    {
                      v287 = 1;
                      if ( xxxCallMouseHook((unsigned int)v90, (__int64)v376, v92) )
                        goto LABEL_433;
                    }
                    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
                    {
                      v219 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
                      v284 = 0;
                      v284 = *(_QWORD *)(v219 + 248) != 0LL;
                      v93 = v276;
                      v92 = v272[1];
                      LODWORD(v90) = v272[0];
                      if ( !v284 )
                      {
                        ThreadDesktopWindow = v281;
                        v89 = v279;
                        MouseKeyFlags = v279;
                        goto LABEL_226;
                      }
                      v220 = xxxClientCallLocalMouseHooks(v272[0], v376, v272[1]);
                      v89 = v279;
                      if ( v220 )
                        goto LABEL_433;
                      ThreadDesktopWindow = v281;
                      MouseKeyFlags = v279;
                    }
                    v93 = v276;
LABEL_226:
                    if ( (*(_DWORD *)(a1 + 1256) & 0x2000) == 0 && (v278 == -2 || !v278) )
                    {
                      v153 = 0LL;
                      if ( v288 )
                      {
                        CompositionInputWindowUIOwner = (struct tagWND *)ThreadDesktopWindow;
                        if ( (unsigned int)IsIndependentInputWindow((const struct tagWND *)ThreadDesktopWindow) )
                          CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)ThreadDesktopWindow);
                        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(CompositionInputWindowUIOwner);
                        v153 = TopLevelWindow;
                        if ( TopLevelWindow )
                        {
                          v223 = 0;
                          if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) && v272[0] == 161 )
                            v223 = *(_QWORD *)(*((_QWORD *)v153 + 2) + 432LL) == gpqForeground;
                          CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v153);
                          v153 = CompositeAppFrameWindowOrSelf;
                          if ( v223 )
                          {
                            v225 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 2);
                            if ( *(_QWORD *)(v225 + 432) != gpqForeground )
                              *(_DWORD *)(v225 + 488) |= 0x20u;
                          }
                          *(_QWORD *)&v316 = *(_QWORD *)(a1 + 416);
                          *(_QWORD *)(a1 + 416) = &v316;
                          *((_QWORD *)&v316 + 1) = CompositeAppFrameWindowOrSelf;
                          if ( CompositeAppFrameWindowOrSelf )
                            HMLockObject(CompositeAppFrameWindowOrSelf);
                          xxxSendMessage((ULONG_PTR)v153);
                          ThreadUnlock1(v227, v226, v228);
                          v89 = MouseKeyFlags;
                        }
                      }
                      if ( !v153 )
                        xxxSendMessage(ThreadDesktopWindow);
                      v90 = v276;
                      if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 432) + 80LL) == v276
                        && v276
                        && (unsigned int)IsMiPActive(a1, v276)
                        && (*((_DWORD *)v90 + 25) & 0x400) != 0
                        && (unsigned int)IsGenuineMouseInput((char *)v90 + 120)
                        && (unsigned int)IsMiPMouseMessage(*((unsigned int *)v90 + 6)) )
                      {
                        memset(v374, 0, sizeof(v374));
                        v229 = v90;
                        LODWORD(v90) = v272[0];
                        GeneratePointerMessageFromMouse(
                          (struct tagQMSG *)v374,
                          v272[0],
                          v229,
                          (struct tagWND *)ThreadDesktopWindow,
                          v92);
                        SetMiPPromotion(*(_QWORD *)(ThreadDesktopWindow + 16), v374[6]);
                        goto LABEL_433;
                      }
                      goto LABEL_432;
                    }
                    if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 432) + 80LL) != v93 )
                      goto LABEL_98;
                    memset(v370, 0, sizeof(v370));
                    v304 = v370[0];
                    v354[0] = v370[0];
                    v344 = v370[1];
                    v354[1] = v370[1];
                    v345 = v370[2];
                    v354[2] = v370[2];
                    v346 = v370[3];
                    v354[3] = v370[3];
                    v347 = v370[4];
                    v354[4] = v370[4];
                    v348 = v370[5];
                    v354[5] = v370[5];
                    v94 = 0;
                    v371[0] = v296[0];
                    v371[1] = v296[1];
                    v371[2] = v296[2];
                    v371[3] = v296[3];
                    v371[4] = v296[4];
                    v371[5] = v296[5];
                    v371[6] = v296[6];
                    v371[7] = v296[7];
                    v371[8] = v296[8];
                    v371[9] = v296[9];
                    v95 = v276;
                    if ( v276 && (unsigned int)IsMiPActive(a1, v276) )
                    {
                      DWORD2(v371[1]) = (_DWORD)v90;
                      *(_QWORD *)&v371[2] = MouseKeyFlags;
                      if ( (*((_DWORD *)v95 + 25) & 0x400) != 0 )
                      {
                        memset(v372, 0, sizeof(v372));
                        if ( ShouldGenerateMipMessage(
                               (struct tagTHREADINFO *)a1,
                               v276,
                               (struct tagWND *)ThreadDesktopWindow,
                               v92) )
                        {
                          v230 = *(_QWORD *)(a1 + 1312);
                          if ( v230 && (*(_DWORD *)v230 & 1) != 0 )
                          {
                            v304 = *(_OWORD *)(v230 + 24);
                            v354[0] = v304;
                            v344 = *(_OWORD *)(v230 + 40);
                            v354[1] = v344;
                            v345 = *(_OWORD *)(v230 + 56);
                            v354[2] = v345;
                            v346 = *(_OWORD *)(v230 + 72);
                            v354[3] = v346;
                            v347 = *(_OWORD *)(v230 + 88);
                            v354[4] = v347;
                            v348 = *(_OWORD *)(v230 + 104);
                            v354[5] = v348;
                            v94 = 1;
                          }
                          if ( GeneratePointerMessageFromMouse(
                                 (struct tagQMSG *)v372,
                                 v272[0],
                                 v95,
                                 (struct tagWND *)ThreadDesktopWindow,
                                 v92) )
                          {
                            v296[0] = v372[0];
                            v296[1] = v372[1];
                            v296[2] = v372[2];
                            v296[3] = v372[3];
                            v296[4] = v372[4];
                            v296[5] = v372[5];
                            v296[6] = v372[6];
                            v296[7] = v372[7];
                            v296[8] = v372[8];
                            v296[9] = v372[9];
                            v282 = 1;
                            v231 = DWORD2(v372[1]);
                            if ( DWORD2(v372[1]) == 582 && (unsigned int)IsMiPEnabledForWindow(ThreadDesktopWindow) )
                            {
                              *(_QWORD *)(*(_QWORD *)(a1 + 432) + 432LL) = *(_QWORD *)ThreadDesktopWindow;
                            }
                            else if ( ((v231 - 579) & 0xFFFFFFFB) == 0 )
                            {
                              *(_QWORD *)(*(_QWORD *)(a1 + 432) + 432LL) = 0LL;
                            }
                          }
                          v95 = v276;
                        }
                        if ( !v92 )
                          goto LABEL_285;
                        *((_DWORD *)v95 + 25) &= ~0x400u;
                      }
                      else
                      {
                        if ( !v92 )
                          goto LABEL_285;
                        if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)v95 + 6)) )
                        {
                          if ( (unsigned int)IsGenuineMouseInput((char *)v276 + 120) )
                          {
                            v232 = *(_DWORD **)(a1 + 1312);
                            if ( v232 )
                            {
                              if ( (*v232 & 2) == 0 && (*v232 & 4) == 0 )
                                goto LABEL_787;
                            }
                          }
                          v145 = *(_DWORD **)(a1 + 1312);
                          if ( v145 )
                            *v145 &= ~2u;
                        }
                        v95 = v276;
                      }
                    }
                    else
                    {
                      LODWORD(v90) = DWORD2(v371[1]);
                    }
                    if ( v92 )
                    {
                      if ( ((_DWORD)v90 == 512 || (_DWORD)v90 == 160)
                        && *(_QWORD *)ThreadDesktopWindow != gMiPTracking
                        && (unsigned int)IsGenuineMouseInput((char *)v95 + 120) )
                      {
                        v174 = HMValidateHandleNoSecure(gMiPTracking, 1);
                        v175 = (unsigned __int64 *)v174;
                        if ( v174
                          && (unsigned int)IsMiPActive(*(_QWORD *)(v174 + 16), 0LL)
                          && (GetMiPWindowFlags((struct tagWND *)v175) & 1) == 0 )
                        {
                          v233 = v175[2];
                          if ( v233 == a1 )
                          {
                            v234 = *(_QWORD *)(a1 + 1312);
                            v362 = *(_OWORD *)(v234 + 24);
                            v368 = *(_OWORD *)(v234 + 40);
                            v369 = *(_OWORD *)(v234 + 56);
                            v355 = *(_OWORD *)(v234 + 72);
                            v356 = *(_OWORD *)(v234 + 88);
                            v357 = *(_OWORD *)(v234 + 104);
                            if ( v94 )
                            {
                              *(_OWORD *)(v234 + 24) = v304;
                              *(_OWORD *)(v234 + 40) = v344;
                              *(_OWORD *)(v234 + 56) = v345;
                              *(_OWORD *)(v234 + 72) = v346;
                              *(_OWORD *)(v234 + 88) = v347;
                              *(_OWORD *)(v234 + 104) = v348;
                              v234 = *(_QWORD *)(v325 + 1312);
                            }
                            v349 = *v175;
                            v350 = 586LL;
                            v351 = ((*(_DWORD *)(v234 + 36) & 0xFFFFE1F7) << 16) | 1LL;
                            v352 = 0LL;
                            v353 = 0LL;
                            v360 = 0LL;
                            v361 = 0LL;
                            ThreadLock(v175, &v360);
                            FindTimer((_DWORD)v175, 65523, 2, 1, 0LL);
                            if ( (unsigned int)IsMiPEnabledForWindow(v175) )
                            {
                              _InterlockedIncrement(&glSendMessage);
                              xxxSendTransformableMessageTimeout(v175, 0x24Au, v351, 0LL, 0, 0, 0LL, 1, 0);
                              ThreadDesktopWindow = v281;
                              MouseKeyFlags = v279;
                              v92 = v272[1];
                            }
                            ThreadUnlock1(v236, v235, v237);
                            if ( v94 )
                            {
                              v238 = *(_QWORD *)(a1 + 1312);
                              *(_OWORD *)(v238 + 24) = v362;
                              *(_OWORD *)(v238 + 40) = v368;
                              *(_OWORD *)(v238 + 56) = v369;
                              *(_OWORD *)(v238 + 72) = v355;
                              *(_OWORD *)(v238 + 88) = v356;
                              *(_OWORD *)(v238 + 104) = v357;
                            }
                          }
                          else
                          {
                            PostEventMessageEx(
                              (struct tagTHREADINFO *)v233,
                              *(struct tagQ **)(v233 + 432),
                              0x15u,
                              (struct tagWND *)v175,
                              0,
                              0LL,
                              0LL,
                              0LL);
                          }
                        }
                        v96 = v282;
                        if ( v282 )
                          gMiPTracking = *(_QWORD *)ThreadDesktopWindow;
                        else
                          gMiPTracking = 0LL;
                      }
                      else
                      {
                        v96 = v282;
                      }
                      if ( !v96 )
                      {
                        v97 = v88 - 1;
                        if ( v97 )
                        {
                          if ( v97 == 1 )
                            *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) = 0;
                        }
                        else
                        {
                          *(_DWORD *)(*(_QWORD *)(a1 + 432) + 152LL) = DWORD2(v296[1]);
                          *(_WORD *)(*(_QWORD *)(a1 + 432) + 156LL) = WORD1(v296[2]);
                          *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) = gdtDblClk + LODWORD(v296[3]);
                          *(_QWORD *)(*(_QWORD *)(a1 + 432) + 168LL) = *(_QWORD *)ThreadDesktopWindow;
                          *(_QWORD *)(*(_QWORD *)(a1 + 432) + 176LL) = *(_QWORD *)((char *)&v296[3] + 4);
                        }
                      }
                      v98 = (const struct tagQMSG *)v296;
                      v99 = v282;
                      if ( v282 )
                        v98 = (const struct tagQMSG *)v371;
                      if ( xxxMouseActivate((struct tagTHREADINFO *)a1, (struct tagWND *)ThreadDesktopWindow, v98, v278) == 1 )
                      {
LABEL_891:
                        v89 = MouseKeyFlags;
                        goto LABEL_432;
                      }
                      goto LABEL_245;
                    }
LABEL_285:
                    v99 = v282;
LABEL_245:
                    if ( v92 )
                    {
                      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 1);
                      if ( v287 )
                      {
                        if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_BYTE *)(a1 + 680)) & 0x40) != 0 )
                          xxxCallHook(6, v272[0], (__int64)v376, 5);
                      }
                    }
                    v287 = 0;
                    *((_QWORD *)&v279 + 1) = (LOWORD(v277.y) << 16) | LOWORD(v277.x);
                    v100 = v272[0];
                    if ( v272[0] >= 0x200 )
                    {
                      MouseKeyFlags = (unsigned int)GetMouseKeyFlags(*(_QWORD *)(a1 + 432));
                      *(_QWORD *)&v279 = MouseKeyFlags;
                      v100 = v272[0];
                    }
                    if ( (v100 - 171 <= 2 || v100 - 523 <= 2) && !v99 )
                    {
                      MouseKeyFlags |= *(_QWORD *)&v296[2];
                      *(_QWORD *)&v279 = MouseKeyFlags;
                    }
                    v101 = *(_QWORD *)(a1 + 608);
                    if ( v278 == 5
                      && v92
                      && v101
                      && (*(_DWORD *)(v101 + 8) & 0x100) != 0
                      && *(_QWORD *)v101
                      && (**(_DWORD **)v101 & 1) != 0 )
                    {
                      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                        (MenuStateOwnerLockxxxUnlock *)&v332,
                        *(struct tagMENUSTATE **)(a1 + 608));
                      if ( (unsigned int)xxxCallHandleMenuMessages(
                                           v239,
                                           ThreadDesktopWindow,
                                           v240,
                                           MouseKeyFlags,
                                           *((__int64 *)&v279 + 1)) )
                      {
                        if ( v332 )
                          xxxUnlockMenuStateInternal(v332, 0);
                        goto LABEL_26;
                      }
                      if ( v332 )
                        xxxUnlockMenuStateInternal(v332, 0);
                    }
                    if ( !v99 )
                      goto LABEL_253;
                    v31 = (unsigned __int64)v276;
LABEL_812:
                    v67 = DWORD2(v296[1]);
LABEL_813:
                    if ( ((DWORD2(v296[7]) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v296[7]) != 50 )
                    {
                      v272[0] = v67;
                      v279 = v296[2];
LABEL_828:
                      if ( v92 )
                      {
                        v247 = IsMiPActive(a1, 0LL);
                        v248 = v282;
                        if ( v247 && v282 )
                        {
                          v249 = 0LL;
                          if ( ThreadDesktopWindow )
                            v249 = *(_QWORD *)ThreadDesktopWindow;
                          *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 48LL) = v249;
                          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1312) + 36LL) & 0x400000) != 0
                            && !(unsigned int)IsCompositionInputWindow((const struct tagWND *)ThreadDesktopWindow) )
                          {
                            *(_DWORD *)(*(_QWORD *)(a1 + 1312) + 36LL) &= ~0x400000u;
                          }
                          MiPWindowFlags = GetMiPWindowFlags((struct tagWND *)ThreadDesktopWindow);
                          SetMiPWindowFlags(
                            (struct tagWND *)ThreadDesktopWindow,
                            MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
                          if ( ((DWORD2(v296[1]) - 578) & 0xFFFFFFFB) != 0 )
                          {
                            if ( ((DWORD2(v296[1]) - 579) & 0xFFFFFFFB) == 0 )
                              **(_DWORD **)(a1 + 1312) &= ~8u;
                          }
                          else
                          {
                            v251 = 0;
                            if ( DWORD2(v296[1]) == 578 )
                              v251 = 8;
                            **(_DWORD **)(a1 + 1312) = v251 | **(_DWORD **)(a1 + 1312) & 0xFFFFFFF7;
                          }
                        }
                        else
                        {
                          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 1);
                        }
                      }
                      else
                      {
                        v248 = v282;
                      }
                      if ( CTouchProcessor::IsPointerMessageTouchpad(
                             gpTouchProcessor,
                             (struct tagTHREADINFO *)a1,
                             *((unsigned __int64 *)&v296[2] + 1),
                             v248) )
                      {
                        if ( !v92
                          && !(unsigned int)IsPTPAllowedOnThread(
                                              (struct tagTHREADINFO *)a1,
                                              DWORD2(v296[1]),
                                              *(unsigned __int64 *)&v296[2]) )
                        {
                          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 1);
                        }
                        if ( v67 == 595 )
                          *((_QWORD *)&v279 + 1) = -1LL;
                      }
                      goto LABEL_253;
                    }
                    EtwTraceBeginPointerMessageRetrieve(v31, LOWORD(v296[2]), v67);
                    v375[0] = *(_OWORD *)v31;
                    v375[1] = *(_OWORD *)(v31 + 16);
                    v375[2] = *(_OWORD *)(v31 + 32);
                    v375[3] = *(_OWORD *)(v31 + 48);
                    v375[4] = *(_OWORD *)(v31 + 64);
                    v375[5] = *(_OWORD *)(v31 + 80);
                    v375[6] = *(_OWORD *)(v31 + 96);
                    v375[7] = *(_OWORD *)(v31 + 112);
                    v375[8] = *(_OWORD *)(v31 + 128);
                    v375[9] = *(_OWORD *)(v31 + 144);
                    v241 = v295;
                    v242 = (unsigned int)xxxRetrievePointerInputMessage(
                                           a1,
                                           a3,
                                           v286,
                                           a5,
                                           1,
                                           0,
                                           (int *)&v272[1],
                                           (struct tagQMSG *)v31,
                                           (__int64)&v281,
                                           (__int64)v272,
                                           (__int64)&v279,
                                           (__int64)&v279 + 8,
                                           &v275,
                                           v295);
                    InputTraceLogging::Pointer::RetrieveMessage(v375, 0LL, v242);
                    EtwTraceEndPointerMessageRetrieve(v375, LOWORD(v296[2]), DWORD2(v296[1]));
                    ThreadDesktopWindow = v281;
                    if ( v281 )
                      ThreadLockExchange(v281, &v305);
                    v244 = v242 - 1;
                    if ( !v244 )
                    {
                      v67 = v272[0];
                      v92 = v272[1];
                      goto LABEL_828;
                    }
                    v245 = v244 - 1;
                    if ( !v245 )
                    {
                      if ( v275 )
                      {
                        v310 = *(_QWORD *)(ThreadDesktopWindow + 16);
                        LockExchangeW32Thread(v310, &v326);
                      }
                      goto LABEL_98;
                    }
                    v246 = v245 - 1;
                    if ( !v246 )
                    {
                      xxxDefPointerProc(v243, DWORD2(v296[1]), *(_QWORD *)&v296[2], *((_QWORD *)&v296[2] + 1));
                      *v241 = 0LL;
                      goto LABEL_513;
                    }
                    *v241 = 0LL;
                    if ( v246 != 1 )
                    {
                      v89 = v279;
                      v92 = v272[1];
                      LODWORD(v90) = v272[0];
                      goto LABEL_433;
                    }
                  }
                }
              }
            }
            if ( DWORD2(v296[1]) == 257 )
            {
LABEL_297:
              v92 = v272[1];
              goto LABEL_298;
            }
            if ( DWORD2(v296[1]) != 256 )
              break;
LABEL_288:
            v294 = 1;
            if ( (*(_DWORD *)(a1 + 488) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
              goto LABEL_98;
            v26 = LOBYTE(v296[2]);
            *(_QWORD *)&v279 = LOBYTE(v296[2]);
            v92 = v272[1];
            if ( !v272[1] || (WORD2(v296[6]) & 0x8000) == 0 )
            {
              if ( LOBYTE(v296[2]) != 18LL )
                *(_DWORD *)(*(_QWORD *)(a1 + 432) + 388LL) &= 0xFFFFFFF3;
              v118 = *(_QWORD *)(a1 + 432);
              v37 = (_QWORD *)*(unsigned __int8 *)(v118 + 232);
              v119 = *(_BYTE *)(v118 + 232) & 0x10;
              if ( v26 == 44 )
              {
                if ( (*(_BYTE *)(v118 + 232) & 0x10) != 0 )
                {
                  if ( (*(_DWORD *)(a1 + 876) & 0x10) == 0 )
                    goto LABEL_854;
                }
                else if ( (*(_DWORD *)(a1 + 876) & 0x20) == 0 )
                {
LABEL_854:
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 1);
                  if ( !v119 && (DWORD2(v296[2]) & 0xFF0000) != 0x10000LL )
                  {
                    v252 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL) + 24LL);
                    goto LABEL_859;
                  }
                  v253 = *(_QWORD *)(a1 + 432);
                  v252 = *(struct tagWND **)(v253 + 120);
                  v254 = v252 == 0LL;
                  if ( v252 )
                  {
                    v252 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(*(const struct tagWND **)(v253 + 120));
LABEL_859:
                    v254 = v252 == 0LL;
                  }
                  if ( !v254 )
                  {
                    v176 = HIDWORD(v296[7]) != 1;
                    *(_QWORD *)&v316 = *(_QWORD *)(a1 + 416);
                    *(_QWORD *)(a1 + 416) = &v316;
                    *((_QWORD *)&v316 + 1) = v252;
                    HMLockObject(v252);
                    xxxSnapWindow(v252, v176);
                    ThreadUnlock1(v178, v177, v179);
                  }
                  goto LABEL_26;
                }
              }
              if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
              {
                v255 = v26 | 0x400;
                if ( ((unsigned __int8)v37 & 0x10) == 0 )
                  v255 = v26;
                v256 = v255 | 0x200;
                if ( ((unsigned __int8)v37 & 4) == 0 )
                  v256 = v255;
                v257 = v256;
                LODWORD(v257) = v256 | 0x100;
                if ( ((unsigned __int8)v37 & 1) == 0 )
                  v257 = v256;
                v258 = (_QWORD *)HotKeyToWindow(v257);
                v37 = v258;
                if ( v258 )
                {
                  v25 = *(_QWORD *)(v258[2] + 456LL);
                  if ( *(_QWORD *)(a1 + 456) == v25 )
                  {
                    PostTransformableMessage(*(_QWORD *)(v259 + 120), 274, 61776, *v258, 0);
LABEL_787:
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 1);
                    goto LABEL_26;
                  }
                }
              }
            }
            if ( v26 == 231 )
            {
              *(_WORD *)(a1 + 874) = WORD1(v296[2]);
              *(_QWORD *)&v296[2] = 231LL;
            }
LABEL_298:
            v120 = LOBYTE(v296[2]);
            *(_QWORD *)&v279 = LOBYTE(v296[2]);
            if ( LOBYTE(v296[2]) == 231LL )
              *(_QWORD *)&v296[2] = 231LL;
            if ( !v92 || (WORD2(v296[6]) & 0x8000) == 0 )
            {
              if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) )
              {
                if ( (GetAppImeCompatFlags(0LL, v25, v26, v37) & 0x800000) == 0 && BYTE10(v296[2]) == 41 )
                {
                  if ( v92 )
                  {
                    v260 = *(_QWORD *)(a1 + 432);
                    if ( (*(_BYTE *)(v260 + 232) & 0x15) == 0
                      && (*(_BYTE *)(v260 + 250) & 0x40) == 0
                      && (*(_BYTE *)(v260 + 251) & 1) == 0 )
                    {
                      v261 = *(_QWORD **)(v260 + 112);
                      v281 = (__int64)v261;
                      v262 = v261;
                      if ( !v261 )
                      {
                        v261 = *(_QWORD **)(v260 + 120);
                        v281 = (__int64)v261;
                        v262 = v261;
                      }
                      if ( !v262 || v261[2] == a1 )
                      {
                        xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 1);
                        if ( !v294 && v262 )
                        {
                          v363 = *v261;
                          v364 = 80;
                          v365 = 0LL;
                          v366 = 0LL;
                          v367 = 0;
                          xxxCallCtfHook(3LL, 0LL, 1LL, &v363);
                        }
                        goto LABEL_26;
                      }
                      v68 = v272[0];
                    }
                  }
                }
              }
            }
            if ( v120 == 121 )
            {
              v68 |= 4u;
              v272[0] = v68;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 432) + 232LL) & 4) != 0 && v120 == 27 )
              v272[0] = v68 | 4;
            if ( (*(_DWORD *)(a1 + 488) & 8) == 0 )
              *((_QWORD *)&v296[2] + 1) &= ~0x2000000uLL;
LABEL_308:
            v89 = LOBYTE(v296[2]);
            MouseKeyFlags = LOBYTE(v296[2]);
            *(_QWORD *)&v279 = LOBYTE(v296[2]);
            v121 = *(_QWORD *)(a1 + 432);
            ThreadDesktopWindow = *(_QWORD *)(v121 + 112);
            v281 = ThreadDesktopWindow;
            v122 = ThreadDesktopWindow;
            if ( ThreadDesktopWindow )
            {
              v123 = v272[0];
            }
            else
            {
              ThreadDesktopWindow = *(_QWORD *)(v121 + 120);
              v122 = ThreadDesktopWindow;
              v281 = ThreadDesktopWindow;
              if ( !ThreadDesktopWindow )
                goto LABEL_432;
              v123 = v272[0];
              if ( v272[0] - 256 <= 3 )
              {
                v123 = v272[0] + 4;
                v272[0] += 4;
              }
            }
            ThreadLockExchangeAlways(ThreadDesktopWindow, &v305);
            v124 = (__int64 *)(v122 + 16);
            v125 = *v124;
            v25 = v292;
            v126 = *v124 != v292;
            v275 = v126;
            if ( v125 == v300 )
              goto LABEL_311;
            if ( *(_QWORD *)(v125 + 432) != *(_QWORD *)(a1 + 432) )
              goto LABEL_891;
            if ( (unsigned int)IsInsideMenuLoop(a1) )
            {
              v263 = *(_QWORD *)(**(_QWORD **)(a1 + 608) + 8LL);
              goto LABEL_889;
            }
            v152 = *(_QWORD *)(a1 + 672);
            if ( v152 )
            {
              v263 = *(_QWORD *)(v152 + 16);
LABEL_889:
              if ( v263 )
              {
                ThreadDesktopWindow = v263;
                v281 = v263;
                v124 = (__int64 *)(v263 + 16);
                v126 = *(_QWORD *)(v263 + 16) != v25;
                v275 = v126;
                ThreadLockExchangeAlways(v263, &v305);
              }
            }
            if ( !v302 )
            {
              v302 = *v124;
              LockExchangeW32Thread(v302, &v321);
            }
LABEL_311:
            if ( !v286 && a5 == -1 )
              goto LABEL_313;
            if ( v286 > a5 )
            {
              if ( v123 < a5 || v123 > v286 )
                goto LABEL_313;
            }
            else if ( v123 >= v286 && v123 <= a5 )
            {
LABEL_313:
              if ( (unsigned int)CheckPwndFilter(ThreadDesktopWindow, a3) )
              {
                if ( v126 )
                  goto LABEL_98;
                if ( v92 )
                {
                  if ( (WORD2(v296[6]) & 0x8000) != 0 )
                    goto LABEL_322;
                  v127 = IsInsideMenuLoop(a1);
                  v128 = MouseKeyFlags;
                  if ( !v127 )
                  {
                    if ( MouseKeyFlags == 93 && v123 == 257 )
                      PostTransformableMessage(ThreadDesktopWindow, 123, *(_QWORD *)ThreadDesktopWindow, -1, 0);
                    if ( v128 == 112 && v123 == 256 )
                      PostMessage(ThreadDesktopWindow, 77LL, 0LL);
                  }
                }
                else
                {
                  v128 = MouseKeyFlags;
                }
                if ( v128 == 16 )
                {
                  v171 = DWORD2(v296[2]) & 0x1000000;
                  if ( !v294 )
                  {
                    v172 = 1;
                    if ( (DWORD2(v296[2]) & 0x1000000) == 0 )
                      v172 = 4;
                    if ( ((unsigned __int8)v172 & *(_BYTE *)(*(_QWORD *)(a1 + 432) + 268LL)) != 0 )
                    {
                      v264 = IsDesktopApp(*(_QWORD *)(a1 + 424));
                      if ( v264 && (*(_DWORD *)(a1 + 488) & 8) == 0 )
                      {
                        *(_QWORD *)&v296[2] = (v171 != 0) + 160LL;
                        goto LABEL_787;
                      }
                    }
                  }
                }
                v303 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v128 >> 2) + *(_QWORD *)(a1 + 432) + 228) & (1 << (2 * (v128 & 3)));
                if ( !v303 )
                {
LABEL_322:
                  v129 = v276;
                  goto LABEL_323;
                }
                v129 = v276;
                if ( !v92 )
                  goto LABEL_332;
                if ( (unsigned __int64)v276 > 1 )
                  *((_QWORD *)v276 + 5) |= 0x40000000uLL;
LABEL_323:
                if ( !v92 )
                  goto LABEL_332;
                if ( (WORD2(v296[6]) & 0x8000) != 0
                  || (unsigned __int64)v129 <= 1
                  || (*(_DWORD *)(a1 + 1256) & 0x10000000) == 0 )
                {
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 1);
LABEL_332:
                  v130 = v297;
                  goto LABEL_333;
                }
                v130 = (unsigned int *)xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 0);
                v297 = v130;
LABEL_333:
                v89 = *(_QWORD *)&v296[2];
                MouseKeyFlags = *(_QWORD *)&v296[2];
                v279 = v296[2];
                if ( v303 )
                  *((_QWORD *)&v279 + 1) = *((_QWORD *)&v296[2] + 1) | 0x40000000LL;
                LODWORD(v90) = v272[0];
                if ( v272[0] == 257 || v272[0] == 261 )
                  *((_QWORD *)&v279 + 1) |= 0x80000000uLL;
                v131 = *(_QWORD *)(a1 + 432);
                if ( (*(_BYTE *)(v131 + 232) & 0x10) != 0 )
                  *((_QWORD *)&v279 + 1) |= 0x20000000uLL;
                v132 = *(_QWORD *)(a1 + 608);
                if ( v132 && (*(_DWORD *)(v132 + 8) & 1) != 0 )
                  *((_QWORD *)&v279 + 1) |= 0x10000000uLL;
                if ( (*(_DWORD *)(v131 + 388) & 0x4000) != 0 )
                  *((_QWORD *)&v279 + 1) |= 0x8000000uLL;
                if ( !v309 && !gpImeHotKeyListHeader || (WORD2(v296[6]) & 0x8000) != 0 )
                  goto LABEL_907;
                if ( !v92 )
                  goto LABEL_350;
                if ( v132 && (*(_DWORD *)(v132 + 8) & 1) != 0 || (*(_DWORD *)(a1 + 488) & 0x2000000) != 0 )
                {
LABEL_907:
                  if ( v92 && (WORD2(v296[6]) & 0x8000) != 0 )
                  {
                    v265 = v290;
                    if ( (DWORD1(v296[6]) & 0x4000000) != 0 )
                      v265 = 2;
                    v290 = v265;
                  }
                }
                else
                {
                  v133 = *(_QWORD *)&v296[2];
                  if ( *(_QWORD *)&v296[2] == 231LL )
                    v133 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 874) << 16) | 0xE7;
                  *(_QWORD *)(a1 + 1272) = *((_QWORD *)&v296[7] + 1);
                  v290 = xxxImmProcessKey(
                           (struct tagQ *)v131,
                           (struct tagWND *)ThreadDesktopWindow,
                           (unsigned int)v90,
                           v133,
                           *((__int64 *)&v279 + 1));
                  if ( (v290 & 0x11) != 0 )
                  {
                    if ( v130 )
                    {
                      FreeQEntry(v130);
                      v297 = 0LL;
                    }
                    goto LABEL_433;
                  }
                }
LABEL_350:
                if ( !v92 )
                  goto LABEL_376;
                v289 = 1;
                v134 = 0;
                if ( (WORD2(v296[6]) & 0x8000) != 0 )
                  goto LABEL_375;
                v135 = *(_QWORD *)(a1 + 432);
                v136 = *(_QWORD *)(v135 + 400);
                *(_QWORD *)(v135 + 400) = *((_QWORD *)&v296[4] + 1);
                v137 = 0LL;
                if ( (v290 & 2) != 0 )
                  v137 = 2LL;
                *(_QWORD *)(a1 + 1272) = *((_QWORD *)&v296[7] + 1);
                v138 = xxxCallCtfHook(2LL, v137, MouseKeyFlags, *((_QWORD *)&v279 + 1));
                v134 = v138;
                *(_QWORD *)(*(_QWORD *)(a1 + 432) + 400LL) = v136;
                if ( !v130 )
                  goto LABEL_374;
                if ( (unsigned int)(v138 - 2) > 1
                  || (*(_DWORD *)(a1 + 1256) & 0x20000000) != 0
                  || !AllocQEntryEx((struct tagMLIST *)(*(_QWORD *)(a1 + 432) + 24LL), (struct tagQMSG *)v130, 1) )
                {
                  FreeQEntry(v130);
                  v297 = 0LL;
LABEL_374:
                  LODWORD(v90) = v272[0];
LABEL_375:
                  v42 = v134 == 0;
                  v89 = MouseKeyFlags;
                  if ( !v42 )
                    goto LABEL_433;
LABEL_376:
                  if ( ((*(_BYTE *)(a1 + 680) | *(_BYTE *)(**(_QWORD **)(a1 + 464) + 16LL)) & 8) == 0 )
                    goto LABEL_424;
                  v289 = 1;
                  v143 = 3;
                  if ( v92 )
                    v143 = 0;
                  if ( !(unsigned int)xxxCallHook(v143, v89, *((__int64 *)&v279 + 1), 2) )
                  {
LABEL_424:
                    if ( v289
                      && v92
                      && ((*(_BYTE *)(a1 + 680) | *(_BYTE *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x40) != 0 )
                    {
                      xxxCallHook(7, v89, *((__int64 *)&v279 + 1), 5);
                    }
                    goto LABEL_253;
                  }
                  goto LABEL_433;
                }
                LOBYTE(v139) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
                LOBYTE(v140) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                            && LOWORD(WPP_GLOBAL_Control->DeviceType);
                if ( (_BYTE)v139 || (_BYTE)v140 )
                  WPP_RECORDER_AND_TRACE_SF_qqq(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v139,
                    v140,
                    WPP_MAIN_CB.Queue.ListEntry.Flink,
                    5,
                    18,
                    31,
                    (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
                    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 24LL),
                    *(_QWORD *)(a1 + 432),
                    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL));
                *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 24LL);
                if ( v134 == 2 )
                {
                  v141 = 1;
                  v280 = 1;
                }
                else if ( v134 == 3 )
                {
                  v141 = 2;
                  v280 = 2;
                }
                else
                {
                  v141 = v280;
                }
                DeferSysPeekMsg(a1, v141);
                v297 = 0LL;
              }
            }
          }
          if ( DWORD2(v296[1]) <= 0x20A )
            break;
          v25 = 0x1C0000000uLL;
          switch ( DWORD2(v296[1]) )
          {
            case 0x20E:
              goto LABEL_614;
            case 0x238:
              goto LABEL_675;
            case 0x240:
LABEL_670:
              if ( !ThreadDesktopWindow )
                goto LABEL_513;
              v202 = *(char **)(ThreadDesktopWindow + 40);
              if ( v202[20] < 0 )
                goto LABEL_513;
              if ( v202[19] < 0 )
                goto LABEL_513;
              v203 = v202[31];
              if ( (v203 & 8) != 0 || (v203 & 0x10) == 0 )
                goto LABEL_513;
LABEL_675:
              v89 = *(_QWORD *)&v296[2];
              v279 = v296[2];
              if ( !ThreadDesktopWindow )
                goto LABEL_514;
              if ( CheckCrossThreadInput(
                     (struct tagWND *const)ThreadDesktopWindow,
                     (struct tagQMSG *)v31,
                     &v275,
                     (int *)&v272[1],
                     v295) )
              {
                goto LABEL_98;
              }
              if ( v275 )
                goto LABEL_514;
              v25 = a5;
              if ( !v286 && a5 == -1 )
                goto LABEL_686;
              if ( v286 <= a5 )
              {
                if ( v272[0] < v286 || v272[0] > a5 )
                  goto LABEL_35;
              }
              else if ( v272[0] >= a5 && v272[0] <= v286 )
              {
                goto LABEL_35;
              }
LABEL_686:
              if ( (unsigned int)CheckPwndFilter(ThreadDesktopWindow, a3) )
              {
                if ( !v272[1] )
                  goto LABEL_253;
                goto LABEL_688;
              }
              break;
            case 0x245:
            case 0x246:
            case 0x247:
            case 0x249:
            case 0x24A:
            case 0x251:
            case 0x252:
            case 0x253:
              v92 = v272[1];
              goto LABEL_813;
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
              if ( !v286 && a5 == -1 )
                goto LABEL_606;
              if ( v286 <= a5 )
              {
                if ( DWORD2(v296[1]) < v286 || DWORD2(v296[1]) > a5 )
                  goto LABEL_98;
              }
              else if ( DWORD2(v296[1]) >= a5 && DWORD2(v296[1]) <= v286 )
              {
                goto LABEL_98;
              }
LABEL_606:
              if ( (unsigned int)IsInsideMenuLoop(a1) )
                goto LABEL_513;
              v92 = v272[1];
              if ( v272[1] )
                xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 1);
              if ( !ThreadDesktopWindow )
              {
                ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 112LL);
                v281 = ThreadDesktopWindow;
              }
              v89 = *(_QWORD *)&v296[2];
              v279 = v296[2];
              InteractiveControlInputMessage = xxxRetrieveInteractiveControlInputMessage(
                                                 LOWORD(v296[2]),
                                                 WORD1(v296[2]));
              if ( InteractiveControlInputMessage == 1 )
                goto LABEL_253;
              if ( InteractiveControlInputMessage == 2 )
                goto LABEL_98;
              LODWORD(v90) = v272[0];
              goto LABEL_433;
            default:
              goto LABEL_172;
          }
        }
        if ( DWORD2(v296[1]) == 522 )
          break;
        v25 = 0x1C0000000uLL;
        switch ( DWORD2(v296[1]) )
        {
          case 0x23:
            v89 = 0LL;
            *(_QWORD *)&v279 = 0LL;
            *((_QWORD *)&v279 + 1) = *((_QWORD *)&v296[2] + 1);
            if ( !ThreadDesktopWindow || (v183 = *(_QWORD *)(ThreadDesktopWindow + 16), v183 == a1) )
            {
              if ( (unsigned int)MiPCheckMsgFilter(v31, DWORD2(v296[1]), (unsigned int)v286, a5) )
              {
                if ( !v272[1] )
                  goto LABEL_253;
                goto LABEL_688;
              }
              goto LABEL_98;
            }
            if ( *(_QWORD *)(v183 + 432) == *(_QWORD *)(a1 + 432) )
            {
              if ( !v291 )
              {
                v46 = *(_QWORD *)(ThreadDesktopWindow + 16);
                LockExchangeW32Thread(v183, &v318);
                goto LABEL_99;
              }
              goto LABEL_98;
            }
            goto LABEL_514;
          case 0xFE:
            goto LABEL_675;
          case 0xFF:
            v89 = *(_QWORD *)&v296[2];
            MouseKeyFlags = *(_QWORD *)&v296[2];
            v279 = v296[2];
            ThreadDesktopWindow = 0LL;
            v281 = 0LL;
            v161 = 0LL;
            v162 = 0LL;
            if ( *((_QWORD *)&v296[2] + 1) )
            {
              v163 = HMValidateHandle(*((__int64 *)&v296[2] + 1), 0x12u);
              v161 = 0LL;
              if ( v163 )
              {
                ThreadDesktopWindow = *(_QWORD *)(v163 + 24);
                v281 = ThreadDesktopWindow;
                v161 = ThreadDesktopWindow;
                v162 = ThreadDesktopWindow;
              }
            }
            if ( !v161 )
            {
              v184 = *(_QWORD *)(a1 + 432);
              ThreadDesktopWindow = *(_QWORD *)(v184 + 112);
              v281 = ThreadDesktopWindow;
              v162 = ThreadDesktopWindow;
              if ( !ThreadDesktopWindow )
              {
                ThreadDesktopWindow = *(_QWORD *)(v184 + 120);
                v281 = ThreadDesktopWindow;
                v162 = ThreadDesktopWindow;
                if ( !ThreadDesktopWindow )
                  goto LABEL_514;
              }
            }
            ThreadLockExchangeAlways(ThreadDesktopWindow, &v305);
            if ( CheckCrossThreadInput(
                   (struct tagWND *const)ThreadDesktopWindow,
                   (struct tagQMSG *)v31,
                   &v275,
                   (int *)&v272[1],
                   v295) )
            {
              goto LABEL_98;
            }
            v164 = v275;
            if ( !v275 )
              goto LABEL_476;
            v185 = v162 + 16;
            if ( *(_QWORD *)(*(_QWORD *)v185 + 432LL) != *(_QWORD *)(a1 + 432) )
            {
              v89 = MouseKeyFlags;
              goto LABEL_514;
            }
            if ( (unsigned int)IsInsideMenuLoop(a1) )
            {
              v186 = *(_QWORD *)(**(_QWORD **)(a1 + 608) + 8LL);
            }
            else
            {
              v187 = *(_QWORD *)(a1 + 672);
              if ( !v187 )
                goto LABEL_586;
              v186 = *(_QWORD *)(v187 + 16);
            }
            if ( v186 )
            {
              ThreadDesktopWindow = v186;
              v281 = v186;
              v185 = v186 + 16;
              v164 = *(_QWORD *)(v186 + 16) != v292;
              v275 = v164;
              ThreadLockExchangeAlways(v186, &v305);
            }
LABEL_586:
            if ( !v298 )
            {
              v298 = *(_QWORD *)v185;
              LockExchangeW32Thread(v298, &v329);
            }
LABEL_476:
            v25 = a5;
            if ( !v286 && a5 == -1 )
              goto LABEL_478;
            if ( v286 <= a5 )
            {
              if ( v272[0] < v286 || v272[0] > a5 )
                goto LABEL_35;
            }
            else if ( v272[0] >= a5 && v272[0] <= v286 )
            {
              goto LABEL_35;
            }
LABEL_478:
            if ( (unsigned int)CheckPwndFilter(ThreadDesktopWindow, a3) )
            {
              if ( !v164 )
              {
                if ( !v272[1] )
                  goto LABEL_253;
LABEL_688:
                xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 1);
                goto LABEL_253;
              }
LABEL_98:
              v46 = v291;
LABEL_99:
              *(_QWORD *)(*(_QWORD *)(a1 + 432) + 72LL) = 0LL;
              LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v25,
                  v26,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  18,
                  32,
                  (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
                  *(_QWORD *)(a1 + 432),
                  a1,
                  *(_QWORD *)(*(_QWORD *)(a1 + 432) + 64LL));
              }
              *(_QWORD *)(*(_QWORD *)(a1 + 432) + 64LL) = 0LL;
              **(_DWORD **)(a1 + 448) &= ~1u;
              v47 = v298;
              if ( v302 )
              {
                SetWakeBit(v302, 16385LL);
                _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), 0xFFFFBFFE);
              }
              else if ( !v46 && !v311 && !v298 && !v310 )
              {
                _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 448) + 12LL), 0);
                v64 = 31751;
                if ( !*(_DWORD *)(*(_QWORD *)(a1 + 432) + 40LL) )
                {
                  v65 = 0LL;
                  v66 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                  if ( v66 )
                    v65 = *v66;
                  if ( !*(_QWORD *)(*(_QWORD *)(v65 + 464) + 56LL) )
                  {
                    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 432) + 388LL) & 0x20) != 0 )
                      v64 = 31749;
                    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), ~v64);
                  }
                }
LABEL_119:
                v49 = 0LL;
                v50 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v50 )
                  v49 = *v50;
                *(_QWORD *)(v49 + 16) = v326;
                if ( v327 )
                  v328();
                v51 = 0LL;
                v52 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v52 )
                  v51 = *v52;
                *(_QWORD *)(v51 + 16) = v329;
                if ( v330 )
                  v331();
                v53 = 0LL;
                v54 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v54 )
                  v53 = *v54;
                *(_QWORD *)(v53 + 16) = v313;
                if ( v314 )
                  v315();
                v55 = 0LL;
                v56 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v56 )
                  v55 = *v56;
                *(_QWORD *)(v55 + 16) = v318;
                if ( v319 )
                  v320();
                v57 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v57 )
                  v10 = *v57;
                *(_QWORD *)(v10 + 16) = v321;
                v60 = v322;
                if ( v322 )
                  v323();
                ThreadUnlock1(v60, v58, v59);
                if ( v274 )
                  *(_DWORD *)(gptiCurrent + 1260LL) &= ~0x20u;
                return 0LL;
              }
              if ( v46 )
              {
                SetWakeBit(v46, 16390LL);
                _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), 0xFFFFBFF9);
              }
              if ( v47 )
              {
                SetWakeBit(v47, 17408LL);
                ClearWakeBit((struct tagTHREADINFO *)a1, 0x4400u, 0);
              }
              if ( v310 )
              {
                SetWakeBit(v310, 20480LL);
                ClearWakeBit((struct tagTHREADINFO *)a1, 0x5000u, 0);
              }
              v48 = v311;
              if ( v311 )
              {
                if ( (*(_DWORD *)(v311 + 488) & 1) == 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v311 + 448) + 8LL), 0x2040u);
                  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v48 + 448) + 4LL), 0x2040u);
                  if ( (*(_DWORD *)(*(_QWORD *)(v48 + 448) + 16LL) & 0x2040) != 0 )
                    KeSetEvent(*(PRKEVENT *)(v48 + 736), 2, 0);
                }
                _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), 0xFFFFDFFF);
              }
              else if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL) )
              {
                _InterlockedOr(
                  (volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 12LL),
                  *(_DWORD *)(*(_QWORD *)(a1 + 448) + 8LL) & 0x5C07);
                ClearWakeBit((struct tagTHREADINFO *)a1, 0x5C07u, 0);
                _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 4LL), 0xFFFFA3F8);
              }
              goto LABEL_119;
            }
            break;
          case 0x102:
            v92 = v272[1];
            goto LABEL_308;
          case 0x104:
            goto LABEL_288;
          case 0x105:
            goto LABEL_297;
          case 0x119:
          case 0x11B:
            goto LABEL_670;
          default:
            goto LABEL_172;
        }
      }
LABEL_614:
      if ( (*(_DWORD *)(a1 + 488) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
        goto LABEL_98;
      if ( (unsigned int)IsInsideMenuLoop(a1) )
        goto LABEL_513;
      if ( (DWORD1(v296[6]) & 0x100000) != 0 )
      {
        ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 112LL);
        v281 = ThreadDesktopWindow;
      }
      else
      {
        if ( ThreadDesktopWindow
          && (unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)ThreadDesktopWindow) )
        {
          v189 = 1;
          if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)ThreadDesktopWindow) )
            goto LABEL_513;
        }
        else
        {
          ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
          v189 = 0;
        }
        v358 = 0LL;
        v359 = 0LL;
        ThreadLock(ThreadDesktopWindow, &v358);
        v190 = (unsigned int)xxxDCEWindowHitTest(
                               (struct tagWND *)ThreadDesktopWindow,
                               0x200u,
                               *(unsigned __int64 *)&v296[2],
                               *((__int64 *)&v296[2] + 1),
                               *(struct tagPOINT *)&v296[5],
                               &v278,
                               8 * v189 + 1);
        ThreadDesktopWindow = HMValidateHandleNoSecure(v190, 1);
        v281 = ThreadDesktopWindow;
        v191 = (struct tagWND *)HMValidateHandleNoSecure(v190, 1);
        InputTraceLogging::Mouse::SecondaryHitTest(
          (const struct tagQMSG *)v296,
          (const struct tagPOINT *)&v296[5],
          v191);
        ThreadUnlock1(v193, v192, v194);
      }
      if ( !ThreadDesktopWindow )
        goto LABEL_513;
      ThreadLockExchangeAlways(ThreadDesktopWindow, &v305);
      v195 = *(_QWORD *)(ThreadDesktopWindow + 16);
      v275 = v195 != v292;
      if ( v195 != v300 )
      {
        if ( *(_QWORD *)(v195 + 432) != *(_QWORD *)(a1 + 432) )
          goto LABEL_513;
        if ( !v302 )
        {
          v302 = v195;
          LockExchangeW32Thread(v195, &v321);
        }
      }
    }
    while ( !(unsigned int)MiPCheckMsgFilter(v31, v68, (unsigned int)v286, a5)
         || !(unsigned int)CheckPwndFilter(ThreadDesktopWindow, a3) );
    if ( v195 != v300 )
      goto LABEL_98;
    if ( !v31 || !(unsigned int)IsMiPActive(a1, v31) )
    {
      v92 = v272[1];
LABEL_653:
      if ( v92 )
        xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 1);
      goto LABEL_655;
    }
    v196 = *(_DWORD *)(v31 + 100);
    if ( (v196 & 0x400) == 0 )
    {
      v92 = v272[1];
      if ( !v272[1] )
        goto LABEL_655;
      if ( (unsigned int)IsMiPMouseMessage(*(unsigned int *)(v31 + 24)) )
      {
        if ( (unsigned int)IsGenuineMouseInput(v31 + 120) )
        {
          v197 = *(_DWORD **)(a1 + 1312);
          if ( v197 )
          {
            if ( (*v197 & 2) == 0 && (*v197 & 4) == 0 )
              goto LABEL_787;
          }
        }
        v198 = *(_DWORD **)(a1 + 1312);
        if ( v198 )
          *v198 &= ~2u;
      }
      goto LABEL_653;
    }
    memset(v373, 0, sizeof(v373));
    if ( !*(_QWORD *)(ThreadDesktopWindow + 272) )
      *(_DWORD *)(v31 + 100) = v196 & 0xFFFFEFFF;
    v92 = v272[1];
    if ( ShouldGenerateMipMessage(
           (struct tagTHREADINFO *)a1,
           (const struct tagQMSG *)v31,
           (struct tagWND *)ThreadDesktopWindow,
           v272[1])
      && GeneratePointerMessageFromMouse(
           (struct tagQMSG *)v373,
           v68,
           (struct tagQMSG *)v31,
           (struct tagWND *)ThreadDesktopWindow,
           v92) )
    {
      v296[0] = v373[0];
      v296[1] = v373[1];
      v296[2] = v373[2];
      v296[3] = v373[3];
      v296[4] = v373[4];
      v296[5] = v373[5];
      v296[6] = v373[6];
      v296[7] = v373[7];
      v296[8] = v373[8];
      v296[9] = v373[9];
      v282 = 1;
      if ( v92 )
        *(_DWORD *)(v31 + 100) &= ~0x400u;
      goto LABEL_812;
    }
    if ( v92 )
    {
      *(_DWORD *)(v31 + 100) &= ~0x400u;
      goto LABEL_653;
    }
LABEL_655:
    v199 = GetMouseKeyFlags(*(_QWORD *)(a1 + 432));
    v89 = *(_QWORD *)&v296[2] | v199;
    *(_QWORD *)&v279 = v89;
    v277.x = SWORD4(v296[2]);
    v277.y = SWORD5(v296[2]);
    PhysicalToLogicalDPIPointWithHitTest(&v277, &v277, 0LL, (const struct tagWND *)ThreadDesktopWindow);
    *((_QWORD *)&v279 + 1) = (LOWORD(v277.y) << 16) | LOWORD(v277.x);
    *(struct tagPOINT *)((char *)&v296[3] + 4) = v277;
    v376[0] = (__int64)v277;
    v376[1] = *(_QWORD *)ThreadDesktopWindow;
    LODWORD(v377) = 0;
    *((_QWORD *)&v377 + 1) = *((_QWORD *)&v296[4] + 1);
    LODWORD(v378) = v296[2];
    if ( !v92 )
      break;
    v200 = 1;
    v287 = 1;
    LODWORD(v90) = v272[0];
    if ( !(unsigned int)xxxCallCtfHook(7LL, 0LL, v272[0], v376) )
      goto LABEL_659;
LABEL_433:
    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v296, 1);
    if ( v287 )
    {
      v266 = *(_QWORD *)(a1 + 464);
      v25 = (unsigned int)(*(_DWORD *)(a1 + 680) | *(_DWORD *)(*(_QWORD *)v266 + 16LL));
      if ( ((*(_BYTE *)(a1 + 680) | *(_BYTE *)(*(_QWORD *)v266 + 16LL)) & 0x40) != 0 )
        xxxCallHook(6, (unsigned int)v90, (__int64)v376, 5);
      v287 = 0;
    }
    if ( v289 )
    {
      v267 = *(_QWORD *)(a1 + 464);
      v25 = (unsigned int)(*(_DWORD *)(a1 + 680) | *(_DWORD *)(*(_QWORD *)v267 + 16LL));
      if ( ((*(_BYTE *)(a1 + 680) | *(_BYTE *)(*(_QWORD *)v267 + 16LL)) & 0x40) != 0 )
        xxxCallHook(7, v89, *((__int64 *)&v279 + 1), 5);
      v289 = 0;
    }
    if ( v92 )
      goto LABEL_26;
  }
  LODWORD(v90) = v272[0];
  v200 = v287;
LABEL_659:
  if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_DWORD *)(a1 + 680)) & 0x100) != 0 )
  {
    v200 = 1;
    v287 = 1;
    if ( xxxCallMouseHook((unsigned int)v90, (__int64)v376, v92) )
      goto LABEL_433;
  }
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
    goto LABEL_666;
  v201 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
  v283 = 0;
  v283 = *(_QWORD *)(v201 + 248) != 0LL;
  v92 = v272[1];
  LODWORD(v90) = v272[0];
  if ( v283 && xxxClientCallLocalMouseHooks(v272[0], v376, v272[1]) )
  {
    v89 = v279;
    goto LABEL_433;
  }
  ThreadDesktopWindow = v281;
LABEL_666:
  if ( v200
    && v92
    && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_BYTE *)(a1 + 680)) & 0x40) != 0 )
  {
    xxxCallHook(6, (unsigned int)v90, (__int64)v376, 5);
  }
LABEL_253:
  if ( *(_QWORD *)(a1 + 764) != *(_QWORD *)((char *)&v296[3] + 4) )
    *(_DWORD *)(a1 + 488) |= 0x100000u;
  v102 = v276;
  if ( (unsigned __int64)v276 > 1 && (BYTE4(v296[6]) & 0x20) != 0 )
  {
    if ( *((_DWORD *)v276 + 6) == 512 )
    {
      v268 = 0LL;
      if ( ThreadDesktopWindow )
        v268 = *(_QWORD *)ThreadDesktopWindow;
      *((_QWORD *)v276 + 2) = v268;
      *((_DWORD *)v102 + 25) |= 0x200u;
    }
    *((_QWORD *)v102 + 8) = *((_QWORD *)&v279 + 1);
  }
  *(_QWORD *)(a1 + 764) = *(_QWORD *)((char *)&v296[3] + 4);
  *(_DWORD *)(a1 + 772) = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 288LL);
  *(_QWORD *)(a1 + 776) = *(_QWORD *)&v296[5];
  *(_DWORD *)(a1 + 568) = v296[3];
  *(_QWORD *)(*(_QWORD *)(a1 + 432) + 400LL) = *((_QWORD *)&v296[4] + 1);
  *(_QWORD *)(*(_QWORD *)(a1 + 432) + 72LL) = 1LL;
  *(_QWORD *)(a1 + 576) = 1LL;
  *(_QWORD *)(a1 + 1272) = *((_QWORD *)&v296[7] + 1);
  *(_DWORD *)(a1 + 1320) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v103 = v292;
  v104 = *(_DWORD *)(v292 + 1256) | 0x20000;
  if ( *(_DWORD *)(a1 + 1276) != 1 )
    v104 = *(_DWORD *)(v292 + 1256) & 0xFFFDFFFF;
  *(_DWORD *)(v292 + 1256) = v104;
  **(_DWORD **)(a1 + 448) &= ~8u;
  **(_QWORD **)(a1 + 480) &= 0x7FFFFFFFuLL;
  v105 = v272[1];
  if ( v272[1] )
  {
    v106 = *(unsigned __int64 **)(v103 + 480);
    v107 = *v106;
    if ( (BYTE4(v296[6]) & 1) != 0 )
      v108 = v107 | 0x1000;
    else
      v108 = v107 & 0xFFFFFFFFFFFFEFFFuLL;
    *v106 = v108;
  }
  v109 = v272[0];
  v110 = CalcWakeMask(v272[0], v272[0], 0) & 0x1C07;
  if ( ((unsigned int)v110 & *(_DWORD *)(*(_QWORD *)(a1 + 448) + 8LL)) == 0 )
  {
    v269 = *(_QWORD *)(v292 + 432);
    if ( (v110 & 1) != 0 )
    {
      v270 = *(_QWORD *)(v269 + 96);
      *(_QWORD *)(v269 + 96) = a1;
    }
    else
    {
      v270 = *(_QWORD *)(v269 + 88);
      *(_QWORD *)(v269 + 88) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 432));
    }
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v270 + 448) + 8LL), ~(_DWORD)v110);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), v110);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 4LL), v110);
    v109 = v272[0];
    v105 = v272[1];
  }
  ClearWakeBit((struct tagTHREADINFO *)a1, 0x7C07u, 1);
  if ( v105 )
  {
    if ( v282 )
    {
      v271 = *(_DWORD **)(a1 + 1312);
      if ( v271 )
      {
        if ( (*v271 & 1) != 0 && (*v271 & 4) != 0 )
          SetMiPWakeBit((struct tagTHREADINFO *)a1);
      }
    }
  }
  if ( v281 )
    v10 = *(_QWORD *)v281;
  v111 = v312;
  *(_QWORD *)v312 = v10;
  *((_DWORD *)v111 + 2) = v109;
  if ( (v290 & 2) != 0 )
    v112 = 229LL;
  else
    v112 = v279;
  *((_QWORD *)v111 + 2) = v112;
  *((_QWORD *)v111 + 3) = *((_QWORD *)&v279 + 1);
  *((_DWORD *)v111 + 8) = v296[3];
  *(_QWORD *)((char *)v111 + 36) = *(_QWORD *)((char *)&v296[3] + 4);
  InputTraceLogging::Delivery::ScanSysQueue(
    (const struct tagQMSG *)v296,
    v111,
    (const struct tagTHREADINFO *)a1,
    v105 != 0);
  if ( v105 )
  {
    EtwTraceInputProcessDelay(a1);
    *(_DWORD *)(*(_QWORD *)(a1 + 432) + 408LL) = (MEMORY[0xFFFFF78000000320]
                                                * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v105 = v272[1];
  }
  EtwTraceRetrieveInputMessage(v312, v105);
  PopAndFreeW32ThreadLock(&v326);
  PopAndFreeW32ThreadLock(&v329);
  PopAndFreeW32ThreadLock(&v313);
  PopAndFreeW32ThreadLock(&v318);
  PopAndFreeW32ThreadLock(&v321);
  ThreadUnlock1(v114, v113, v115);
  if ( v274 )
    *(_DWORD *)(gptiCurrent + 1260LL) &= ~0x20u;
  return 1LL;
}
