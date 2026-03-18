/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     DeferMessagesOnQueue @ 0x1C000BBE8 (DeferMessagesOnQueue.c)
 *     xxxCallMouseHook @ 0x1C000E574 (xxxCallMouseHook.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0010D74 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     LockExchangeW32Thread @ 0x1C0016D9C (LockExchangeW32Thread.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0017090 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0028858 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0041920 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C00419D0 (ThreadLockExchangeAlways.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0041F3C (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00423D8 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _PostTransformableMessage @ 0x1C004F59C (_PostTransformableMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     TransferWakeBit @ 0x1C005B0A8 (TransferWakeBit.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0070838 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C007085C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     PhkNextValid @ 0x1C00719E4 (PhkNextValid.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C008C58C (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C008C5F0 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     ThreadLockExchange @ 0x1C008C7A8 (ThreadLockExchange.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C009CDF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxCallCtfHook @ 0x1C00A0F14 (xxxCallCtfHook.c)
 *     IsMiPActive @ 0x1C00A1F08 (IsMiPActive.c)
 *     IsMiPEnabledForThread @ 0x1C00A1F58 (IsMiPEnabledForThread.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00A232C (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1C00A398C (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     GetAppImeCompatFlags @ 0x1C00A3C7C (GetAppImeCompatFlags.c)
 *     CheckPwndFilter @ 0x1C00AA000 (CheckPwndFilter.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00AFCF8 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     IsInsideMenuLoop @ 0x1C00B4D20 (IsInsideMenuLoop.c)
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CFF84 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00E4DF4 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     GetThreadDesktopWindow @ 0x1C00EC080 (GetThreadDesktopWindow.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00F178C (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C0116B00 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0116EA4 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     IsPointerInputMessage @ 0x1C0118038 (IsPointerInputMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C01180A8 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     DelQEntry @ 0x1C01184CC (DelQEntry.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C011E31C (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121240 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0121E78 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0121FB0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C012B280 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C012B370 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C013A0E0 (Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C013A230 (Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     strcmp_0 @ 0x1C0141242 (strcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01500D0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01500FC (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01503FA (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C01507D6 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01508A8 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01509BE (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01509EA (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x1C0150A62 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C0150E7A (IsMiPEnabledForWindow.c)
 *     SetMiPPromotion @ 0x1C0150F40 (SetMiPPromotion.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C015183C (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C0151E50 (PhysicalToLogicalInPlacePointWithParent.c)
 *     FreePointerMessageParams @ 0x1C0153266 (FreePointerMessageParams.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C01532FE (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     GetMessageWindow @ 0x1C0155E76 (GetMessageWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C0157404 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01B4AB0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BB72C (xxxCallJournalPlaybackHook.c)
 *     SetJournalTimer @ 0x1C01C0868 (SetJournalTimer.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01C5070 (xxxRetrievePointerInputMessage.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01C5ACC (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     GetPenDoubleClickTime @ 0x1C01F3A04 (GetPenDoubleClickTime.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01FF08C (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C0211678 (xxxClientCallLocalMouseHooks.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x1C02156F0 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216AB4 (xxxCallHandleMenuMessages.c)
 *     xxxDefPointerProc @ 0x1C0222CB4 (xxxDefPointerProc.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C02238A0 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     xxxSnapWindow @ 0x1C02281E8 (xxxSnapWindow.c)
 *     HotKeyToWindow @ 0x1C022872C (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0228F94 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C024B764 (_W32ExceptionHandler.c)
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
  unsigned __int64 v26; // rdx
  __int64 v27; // r9
  int v28; // eax
  char v29; // r8
  __int64 v30; // r8
  _DWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  int v34; // r13d
  PERESOURCE *v35; // rax
  __int64 v36; // rcx
  bool IsLockedShared; // al
  __int64 Valid; // rcx
  unsigned __int64 v39; // rdi
  unsigned int v40; // eax
  struct tagMLIST *v41; // rcx
  unsigned __int64 *v42; // rax
  int v43; // eax
  struct tagTHREADINFO *v44; // rax
  PDEVICE_OBJECT v45; // rcx
  int v46; // eax
  struct tagQMSG **v47; // rcx
  __int64 v48; // rbx
  _UNKNOWN **v49; // r8
  int v50; // ebx
  __int64 ThreadDesktopWindow; // r15
  _DWORD *v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 *v55; // rsi
  __int64 v56; // rcx
  bool v57; // zf
  int v58; // eax
  bool v59; // cf
  int v60; // eax
  __int64 v61; // rbx
  __int64 v62; // rcx
  char v63; // dl
  char v64; // r8
  __int64 v65; // rbx
  __int64 v66; // rdi
  _QWORD *v67; // rcx
  PDEVICE_OBJECT v68; // rcx
  int v69; // eax
  int v70; // eax
  int v71; // r9d
  char v72; // dl
  __int64 v73; // rax
  char v74; // dl
  char v75; // r8
  unsigned int v76; // ebx
  unsigned int v77; // r14d
  unsigned __int64 MouseKeyFlags; // r13
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdi
  int v82; // r14d
  int v83; // ebx
  struct tagWND *v84; // rdi
  bool v85; // zf
  BOOL v86; // ebx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  char v90; // r8
  unsigned int v91; // ecx
  unsigned int v92; // edx
  __int64 v93; // rcx
  __int64 *v94; // rax
  __int64 v95; // rsi
  __int64 AppImeCompatFlags; // rax
  struct tagQ *v97; // rcx
  _QWORD *v98; // rbx
  _QWORD *v99; // rdi
  _QWORD *v100; // rax
  unsigned int v101; // edx
  __int64 v102; // rax
  unsigned int v103; // edi
  struct tagQ **v104; // rcx
  BOOL v105; // ebx
  __int64 v106; // r8
  __int64 v107; // rcx
  __int64 v108; // rcx
  int v109; // eax
  int v110; // eax
  struct tagQ **v111; // rbx
  struct tagQMSG *v112; // rax
  __int64 v113; // rbx
  char v114; // al
  struct tagQ *v115; // rcx
  __int64 v116; // rax
  int v117; // eax
  __int64 v118; // rax
  int v119; // eax
  unsigned __int16 v120; // bx
  __int64 v121; // rax
  int v122; // eax
  int v123; // ebx
  __int64 v124; // rdi
  int v125; // ebx
  int v126; // eax
  struct tagQ **v127; // rcx
  struct tagQMSG *v128; // rdi
  char v129; // dl
  char v130; // r8
  __int64 v131; // rax
  __int64 **v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rdi
  __int64 v136; // rcx
  struct tagQ *v137; // rax
  struct tagQMSG *v138; // rsi
  int v139; // ebx
  struct tagTHREADINFO *v140; // rdi
  __int64 v141; // rcx
  __int64 v142; // rcx
  int v143; // eax
  int v144; // eax
  int v145; // eax
  int v146; // eax
  struct tagQ **v147; // r13
  bool v148; // bl
  int v149; // ebx
  struct tagWND *v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // rcx
  BOOL v155; // ebx
  int v156; // eax
  int v157; // eax
  int v158; // ebx
  _DWORD *v159; // rax
  _DWORD *v160; // rax
  unsigned int v161; // eax
  unsigned int v162; // ebx
  __int64 **v163; // rdi
  __int64 v164; // rcx
  int v165; // edx
  __int64 v166; // rcx
  char *v167; // rax
  char v168; // cl
  int v169; // eax
  int v170; // eax
  int v171; // eax
  int v172; // edx
  struct tagQ **v173; // r13
  int v174; // eax
  __int64 v175; // rcx
  HWND v176; // rax
  int v177; // ebx
  struct tagWND *v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  int v182; // ebx
  BOOL v183; // ecx
  __int64 v184; // rcx
  __int64 v185; // rax
  __int64 v186; // rdx
  struct tagQ *v187; // r8
  int v188; // r8d
  __int64 v189; // r9
  __int64 v190; // rcx
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rdx
  BOOL v194; // r8d
  __int64 v195; // rax
  const char *v196; // rcx
  __int64 v197; // rbx
  int v198; // r12d
  __int64 v199; // rcx
  struct tagPOINT v200; // r8
  unsigned __int64 v201; // rbx
  _QWORD *v202; // rsi
  int v203; // eax
  int v204; // eax
  __int64 v205; // rcx
  int v206; // ecx
  __int64 v207; // rcx
  struct tagTHREADINFO *v208; // r13
  BOOL v209; // r14d
  unsigned __int16 v210; // di
  __int64 v211; // rsi
  int v212; // eax
  unsigned __int64 v213; // rdx
  unsigned __int64 v214; // rdx
  unsigned __int64 v215; // rdx
  unsigned int v216; // edx
  __int64 v217; // r8
  int v218; // eax
  char v219; // al
  struct tagQ **v220; // rbx
  struct tagQ *v221; // rax
  char v222; // al
  struct tagQ *v223; // rcx
  __int64 v224; // rax
  int v225; // eax
  __int64 v226; // rcx
  struct tagQ *v227; // r11
  int v228; // r10d
  int v229; // r9d
  int v230; // kr04_4
  int v231; // edx
  int v232; // eax
  int v233; // ecx
  int TouchTimeFromCPLValue; // eax
  int v235; // eax
  struct tagTHREADINFO *v236; // r12
  _DWORD *v237; // rcx
  unsigned int v238; // ebx
  __int64 **v239; // r15
  _DWORD *v240; // rbx
  __int64 v241; // rcx
  __int64 v242; // rcx
  int v243; // eax
  char *v244; // r12
  __int64 v245; // rcx
  __int64 v246; // rax
  const struct tagWND *v247; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  const struct tagWND *TopLevelWindow; // rax
  bool v250; // di
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v252; // rdx
  __int64 v253; // rdx
  __int64 v254; // rcx
  __int64 v255; // r8
  struct tagQMSG *v256; // rbx
  struct tagTHREADINFO *v257; // rcx
  __int128 v258; // xmm12
  __int128 v259; // xmm13
  __int128 v260; // xmm14
  __int128 v261; // xmm15
  int v262; // esi
  __int128 *v263; // rcx
  __int64 v264; // r11
  __int64 v265; // rcx
  int v266; // eax
  unsigned int *v267; // rax
  _DWORD *v268; // rax
  __int64 v269; // rax
  __int64 v270; // rdi
  __int64 v271; // rax
  unsigned __int64 *v272; // rbx
  __int64 v273; // rcx
  BOOL v274; // ecx
  struct tagQ **v275; // rcx
  struct tagTHREADINFO *v276; // rdx
  __int64 v277; // rax
  __int128 v278; // xmm6
  __int128 v279; // xmm7
  __int128 v280; // xmm8
  __int128 v281; // xmm9
  __int128 v282; // xmm10
  __int128 v283; // xmm11
  __int64 v284; // rdx
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // rax
  int v288; // edi
  struct tagQ **v289; // rbx
  unsigned __int64 v290; // rcx
  __int64 v291; // rax
  const struct tagQMSG *v292; // r8
  unsigned int v293; // r11d
  __int64 v294; // r10
  int v295; // r10d
  int v296; // r11d
  __int64 v297; // rbx
  __int64 v298; // rcx
  int v299; // ebx
  int v300; // ebx
  int v301; // ebx
  __int64 v302; // rcx
  BOOL v303; // ecx
  unsigned __int64 v304; // rcx
  unsigned __int64 MiPWindowFlags; // rax
  int v306; // edx
  __int64 v307; // rax
  struct tagTHREADINFO *v308; // r13
  unsigned __int64 v309; // rax
  struct tagQ **v310; // r8
  unsigned int v311; // edx
  int v312; // r15d
  unsigned int v313; // ebx
  unsigned __int64 v314; // rax
  unsigned __int64 v315; // rax
  unsigned int v316; // r14d
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  _DWORD *v320; // rax
  struct tagMSG *v321; // rdx
  __int64 v322; // rax
  __int64 v323; // rbx
  __int64 *v324; // rax
  __int64 v325; // rbx
  __int64 *v326; // rax
  __int64 v327; // rbx
  __int64 *v328; // rax
  __int64 v329; // rbx
  __int64 *v330; // rax
  __int64 *v331; // rax
  __int64 v332; // rdx
  __int64 v333; // r8
  __int64 v334; // rcx
  struct tagQ **v335; // r9
  char v336; // dl
  struct tagQ **v337; // rdx
  __int64 v338; // r14
  __int64 v339; // rcx
  PERESOURCE *v340; // rax
  __int64 v341; // rbx
  __int64 *v342; // rax
  __int64 v343; // rcx
  __int64 v344; // rbx
  __int64 v345; // rbx
  __int64 *v346; // rax
  __int64 v347; // rbx
  __int64 *v348; // rax
  __int64 v349; // rbx
  __int64 *v350; // rax
  __int64 v351; // rbx
  __int64 *v352; // rax
  __int64 *v353; // rax
  __int64 v354; // rdx
  __int64 v355; // r8
  __int64 v356; // rcx
  __int64 v357; // [rsp+20h] [rbp-938h]
  int *v358; // [rsp+28h] [rbp-930h]
  unsigned int v359; // [rsp+70h] [rbp-8E8h] BYREF
  unsigned int v360; // [rsp+74h] [rbp-8E4h]
  int v361; // [rsp+78h] [rbp-8E0h] BYREF
  struct tagQ **v362; // [rsp+80h] [rbp-8D8h]
  BOOL v363; // [rsp+88h] [rbp-8D0h]
  struct tagTHREADINFO *v364; // [rsp+90h] [rbp-8C8h]
  bool v365; // [rsp+98h] [rbp-8C0h]
  struct tagQMSG *v366; // [rsp+A0h] [rbp-8B8h]
  int v367; // [rsp+A8h] [rbp-8B0h] BYREF
  char v368; // [rsp+ACh] [rbp-8ACh]
  struct tagPOINT v369; // [rsp+B0h] [rbp-8A8h] BYREF
  __int64 v370; // [rsp+B8h] [rbp-8A0h] BYREF
  __int64 v371; // [rsp+C0h] [rbp-898h] BYREF
  __int64 v372; // [rsp+C8h] [rbp-890h] BYREF
  int v373; // [rsp+D0h] [rbp-888h] BYREF
  bool v374; // [rsp+D4h] [rbp-884h]
  bool v375; // [rsp+D5h] [rbp-883h]
  int v376; // [rsp+D8h] [rbp-880h]
  int v377; // [rsp+DCh] [rbp-87Ch]
  int v378; // [rsp+E0h] [rbp-878h]
  int v379; // [rsp+E4h] [rbp-874h]
  int v380; // [rsp+E8h] [rbp-870h]
  int v381; // [rsp+ECh] [rbp-86Ch]
  int v382; // [rsp+F0h] [rbp-868h]
  int v383; // [rsp+F8h] [rbp-860h]
  struct tagQMSG **v384; // [rsp+100h] [rbp-858h]
  __int64 v385; // [rsp+108h] [rbp-850h]
  int v386; // [rsp+110h] [rbp-848h]
  struct tagQMSG *v387; // [rsp+118h] [rbp-840h]
  __int64 **v388; // [rsp+120h] [rbp-838h]
  int v389; // [rsp+128h] [rbp-830h]
  _BYTE *v390; // [rsp+130h] [rbp-828h]
  unsigned __int64 v391; // [rsp+138h] [rbp-820h]
  __int128 v392; // [rsp+140h] [rbp-818h] BYREF
  __int128 v393; // [rsp+150h] [rbp-808h]
  __int128 v394; // [rsp+160h] [rbp-7F8h]
  __int128 v395; // [rsp+170h] [rbp-7E8h]
  __int128 v396; // [rsp+180h] [rbp-7D8h]
  __int128 v397; // [rsp+190h] [rbp-7C8h] BYREF
  __int128 v398; // [rsp+1A0h] [rbp-7B8h]
  __int128 v399; // [rsp+1B0h] [rbp-7A8h] BYREF
  __int128 v400; // [rsp+1C0h] [rbp-798h]
  __int128 v401; // [rsp+1D0h] [rbp-788h]
  struct tagTHREADINFO *v402; // [rsp+1E0h] [rbp-778h]
  __int64 v403; // [rsp+1E8h] [rbp-770h]
  char *v404; // [rsp+1F0h] [rbp-768h]
  __int64 v405; // [rsp+1F8h] [rbp-760h]
  int v406; // [rsp+200h] [rbp-758h]
  __int64 *v407; // [rsp+208h] [rbp-750h]
  __int64 v408; // [rsp+210h] [rbp-748h] BYREF
  __int64 v409; // [rsp+218h] [rbp-740h]
  __int64 v410; // [rsp+220h] [rbp-738h]
  struct tagTHREADINFO *v411; // [rsp+228h] [rbp-730h]
  __int64 v412; // [rsp+230h] [rbp-728h] BYREF
  __int64 v413; // [rsp+238h] [rbp-720h]
  void (*v414)(void); // [rsp+240h] [rbp-718h]
  int v415; // [rsp+248h] [rbp-710h]
  unsigned int v416; // [rsp+24Ch] [rbp-70Ch] BYREF
  __int64 v417; // [rsp+250h] [rbp-708h]
  __int64 v418; // [rsp+258h] [rbp-700h]
  struct tagTHREADINFO *v419; // [rsp+260h] [rbp-6F8h]
  __int64 v420; // [rsp+268h] [rbp-6F0h] BYREF
  __int64 v421; // [rsp+270h] [rbp-6E8h]
  void (*v422)(void); // [rsp+278h] [rbp-6E0h]
  __int64 v423; // [rsp+280h] [rbp-6D8h] BYREF
  __int64 v424; // [rsp+288h] [rbp-6D0h]
  void (*v425)(void); // [rsp+290h] [rbp-6C8h]
  char *v426; // [rsp+298h] [rbp-6C0h]
  __int128 v427; // [rsp+2A0h] [rbp-6B8h] BYREF
  __int64 v428; // [rsp+2B0h] [rbp-6A8h]
  __int64 v429; // [rsp+2B8h] [rbp-6A0h] BYREF
  __int64 v430; // [rsp+2C0h] [rbp-698h]
  void (*v431)(void); // [rsp+2C8h] [rbp-690h]
  __int64 v432; // [rsp+2D0h] [rbp-688h] BYREF
  __int64 v433; // [rsp+2D8h] [rbp-680h]
  void (*v434)(void); // [rsp+2E0h] [rbp-678h]
  struct tagTHREADINFO *v435; // [rsp+2E8h] [rbp-670h]
  struct tagTHREADINFO *v436; // [rsp+2F0h] [rbp-668h]
  struct tagMENUSTATE *v437; // [rsp+2F8h] [rbp-660h] BYREF
  unsigned __int64 **v438; // [rsp+300h] [rbp-658h]
  struct tagMSG *v439; // [rsp+308h] [rbp-650h]
  __int128 v440; // [rsp+310h] [rbp-648h] BYREF
  __int64 v441; // [rsp+320h] [rbp-638h]
  _DWORD v442[4]; // [rsp+328h] [rbp-630h] BYREF
  __int128 v443; // [rsp+338h] [rbp-620h] BYREF
  __int128 v444; // [rsp+348h] [rbp-610h]
  __int64 v445; // [rsp+358h] [rbp-600h] BYREF
  __int64 v446; // [rsp+360h] [rbp-5F8h] BYREF
  _DWORD v447[2]; // [rsp+370h] [rbp-5E8h] BYREF
  __int128 v448; // [rsp+378h] [rbp-5E0h]
  int *v449; // [rsp+388h] [rbp-5D0h]
  int v450; // [rsp+390h] [rbp-5C8h]
  int v451; // [rsp+394h] [rbp-5C4h]
  char *v452; // [rsp+398h] [rbp-5C0h]
  __int64 v453; // [rsp+3A0h] [rbp-5B8h]
  __int64 v454; // [rsp+3A8h] [rbp-5B0h]
  __int128 v455; // [rsp+3B0h] [rbp-5A8h]
  __int128 v456; // [rsp+3C0h] [rbp-598h]
  __int128 v457; // [rsp+3D0h] [rbp-588h]
  __int128 v458; // [rsp+3E0h] [rbp-578h]
  __int128 v459; // [rsp+3F0h] [rbp-568h]
  __int128 v460; // [rsp+400h] [rbp-558h]
  __int128 v461; // [rsp+438h] [rbp-520h] BYREF
  __int64 v462; // [rsp+448h] [rbp-510h]
  __int128 v463; // [rsp+450h] [rbp-508h] BYREF
  __int64 v464; // [rsp+460h] [rbp-4F8h]
  __int64 v465; // [rsp+468h] [rbp-4F0h] BYREF
  int v466; // [rsp+470h] [rbp-4E8h]
  __int128 v467; // [rsp+474h] [rbp-4E4h]
  __int128 v468; // [rsp+484h] [rbp-4D4h]
  int v469; // [rsp+494h] [rbp-4C4h]
  __int64 v470; // [rsp+4A8h] [rbp-4B0h]
  __int128 v471; // [rsp+4B0h] [rbp-4A8h]
  __int64 v472; // [rsp+4C0h] [rbp-498h]
  __int128 v473; // [rsp+4C8h] [rbp-490h]
  __int128 v474; // [rsp+4D8h] [rbp-480h]
  __int128 v475; // [rsp+4E8h] [rbp-470h]
  __int128 v476; // [rsp+4F8h] [rbp-460h]
  __int128 v477; // [rsp+508h] [rbp-450h]
  __int128 v478; // [rsp+518h] [rbp-440h]
  __int128 v479; // [rsp+530h] [rbp-428h] BYREF
  __int128 v480; // [rsp+540h] [rbp-418h]
  __int128 v481; // [rsp+550h] [rbp-408h]
  __int128 v482; // [rsp+560h] [rbp-3F8h]
  __int128 v483; // [rsp+570h] [rbp-3E8h]
  __int128 v484; // [rsp+580h] [rbp-3D8h]
  __int128 v485; // [rsp+590h] [rbp-3C8h]
  __int128 v486; // [rsp+5A0h] [rbp-3B8h]
  __int128 v487; // [rsp+5B0h] [rbp-3A8h]
  __int128 v488; // [rsp+5C0h] [rbp-398h]
  __int128 v489; // [rsp+5D0h] [rbp-388h] BYREF
  __int128 v490; // [rsp+5E0h] [rbp-378h]
  __int128 v491; // [rsp+5F0h] [rbp-368h]
  __int128 v492; // [rsp+600h] [rbp-358h]
  __int128 v493; // [rsp+610h] [rbp-348h]
  __int128 v494; // [rsp+620h] [rbp-338h]
  __int128 v495; // [rsp+630h] [rbp-328h]
  __int128 v496; // [rsp+640h] [rbp-318h]
  __int128 v497; // [rsp+650h] [rbp-308h]
  __int128 v498; // [rsp+660h] [rbp-2F8h]
  _OWORD v499[10]; // [rsp+670h] [rbp-2E8h] BYREF
  _BYTE v500[24]; // [rsp+710h] [rbp-248h] BYREF
  unsigned int v501; // [rsp+728h] [rbp-230h]
  _OWORD v502[10]; // [rsp+7B0h] [rbp-1A8h] BYREF
  __int64 v503[2]; // [rsp+850h] [rbp-108h] BYREF
  __int128 v504; // [rsp+860h] [rbp-F8h]
  __int64 v505; // [rsp+870h] [rbp-E8h]

  v376 = a4;
  v411 = a1;
  v436 = a1;
  v8 = a1;
  v364 = a1;
  v419 = a1;
  v402 = a1;
  v435 = a1;
  v439 = a2;
  v383 = a4;
  v384 = a8;
  memset_0(&v392, 0, 0xA0uLL);
  v10 = 0LL;
  v370 = 0LL;
  v369 = 0LL;
  v373 = 0;
  v367 = 0;
  *(_OWORD *)v503 = 0LL;
  v504 = 0LL;
  v505 = 0LL;
  v406 = 0;
  v440 = 0LL;
  v441 = 0LL;
  v410 = 0LL;
  v427 = 0LL;
  v428 = 0LL;
  v361 = a6 & 1;
  v379 = 0;
  v11 = 0;
  v360 = 0;
  v363 = 0;
  v365 = 0;
  v387 = 0LL;
  *a8 = 0LL;
  v12 = (__int64 *)((char *)v8 + 432);
  v362 = (struct tagQ **)((char *)v8 + 432);
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
    v362 = (struct tagQ **)((char *)v8 + 432);
  }
  v404 = (char *)v8 + 432;
  v389 = 0;
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
        (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
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
  v405 = 0LL;
  v418 = 0LL;
  v403 = 0LL;
  v417 = 0LL;
  v16 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v16 = *ThreadWin32Thread;
  v423 = *(_QWORD *)(v16 + 16);
  *(_QWORD *)(v16 + 16) = &v423;
  v424 = 0LL;
  v425 = (void (*)(void))DereferenceW32Thread;
  v18 = 0LL;
  v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v19 )
    v18 = *v19;
  v420 = *(_QWORD *)(v18 + 16);
  *(_QWORD *)(v18 + 16) = &v420;
  v421 = 0LL;
  v422 = (void (*)(void))DereferenceW32Thread;
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
  v368 = 0;
  v28 = *(_DWORD *)(gptiCurrent + 1276LL);
  if ( (v28 & 0x20) == 0 )
  {
    v368 = 1;
    *(_DWORD *)(gptiCurrent + 1276LL) = v28 | 0x20;
  }
LABEL_33:
  LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)v26 || v29 )
    WPP_RECORDER_AND_TRACE_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v26,
      v29,
      (__int64)gFullLog,
      5u,
      0x12u,
      0x20u,
      (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
      *v12,
      *(_QWORD *)(*v12 + 88));
  *(_QWORD *)(*v12 + 88) = 0LL;
  v30 = v363;
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
          v31 = (_DWORD *)*((_QWORD *)v8 + 60);
          v32 = (*v31 >> 9) & 1;
          v415 = (*v31 >> 9) & 1;
          v33 = *(_QWORD *)(*v12 + 88);
          if ( v33 )
          {
            if ( !(_BYTE)v30 )
            {
              v30 = ((v11 - 1) & 0xFFFFFFFD) == 0;
              v363 = ((v11 - 1) & 0xFFFFFFFD) == 0;
              v365 = ((v11 - 1) & 0xFFFFFFFD) == 0;
            }
          }
          else
          {
            v360 = 0;
            v363 = 0;
            v365 = 0;
          }
          v34 = 0;
          v378 = 0;
          v380 = 0;
          v371 = 0LL;
          v382 = 0;
          if ( !gbInDestroyHandleTableObjects )
          {
            v35 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v32, v26, v30, v27);
            if ( ExIsResourceAcquiredExclusiveLite(*v35) != 1 )
            {
              if ( !IS_USERCRIT_OWNED_AT_ALL(v36, v26, v30, v27) )
                goto LABEL_63;
              if ( tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainHookLock)
                || (IsLockedShared = tagDomLock::IsLockedShared((PERESOURCE *)gDomainHookLock)) )
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
            goto LABEL_1030;
          if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
            Valid = PhkNextValid(Valid);
          if ( Valid && *((_QWORD *)v8 + 57) == grpdeskRitInput )
          {
            if ( v33 )
            {
              v39 = 0LL;
              v366 = 0LL;
            }
            else
            {
              v40 = xxxCallJournalPlaybackHook((struct tagQMSG *)&v392);
              if ( v40 == -1 )
              {
                v39 = 0LL;
                v366 = 0LL;
              }
              else if ( v40 )
              {
                _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 8LL), 0xFFFFE3F8);
                _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 4LL), 0xFFFFE3F8);
                SetJournalTimer(v40, DWORD2(v393));
                v39 = 0LL;
                v366 = 0LL;
              }
              else
              {
                WakeSomeone(*v12, 0LL, DWORD2(v393), 0LL);
                CInputGlobals::MarkLastInputAsJournalling(gpInputGlobals);
                v39 = 1LL;
                v366 = (struct tagQMSG *)1;
              }
            }
          }
          else
          {
LABEL_1030:
            if ( (*(_DWORD *)(*v12 + 396) & 0x20) != 0 )
              PostPendingMouseMove(*v12);
            v41 = (struct tagMLIST *)(*v12 + 24);
            if ( *(_DWORD *)(*v12 + 40) )
            {
              if ( v33 && (v42 = *(unsigned __int64 **)(*v12 + 88), (unsigned __int64)v42 > 1) )
                v39 = *v42;
              else
                v39 = *(_QWORD *)v41;
              v366 = (struct tagQMSG *)v39;
              if ( (*((_DWORD *)v8 + 318) & 0x2000) != 0 || (*((_DWORD *)v8 + 319) & 0x40) != 0 )
              {
                if ( !v39 )
                  goto LABEL_98;
                do
                {
                  v43 = *(_DWORD *)(v39 + 100);
                  if ( (v43 & 0x20) == 0 && (v43 & 0x8000000) == 0 )
                    break;
                  if ( (v43 & 0x10) == 0 )
                    break;
                  v39 = *(_QWORD *)v39;
                  v366 = (struct tagQMSG *)v39;
                }
                while ( v39 );
              }
              if ( v39 )
              {
                v44 = *(struct tagTHREADINFO **)(v39 + 104);
                if ( v44 && v44 != v8 && (*((_DWORD *)v44 + 122) & 0x10000) != 0 )
                {
                  v39 = (unsigned __int64)DeferMessagesOnQueue(v41, (struct tagQMSG *)v39);
                  v366 = (struct tagQMSG *)v39;
                }
                if ( v39 )
                {
                  v392 = *(_OWORD *)v39;
                  v393 = *(_OWORD *)(v39 + 16);
                  v394 = *(_OWORD *)(v39 + 32);
                  v395 = *(_OWORD *)(v39 + 48);
                  v396 = *(_OWORD *)(v39 + 64);
                  v397 = *(_OWORD *)(v39 + 80);
                  v398 = *(_OWORD *)(v39 + 96);
                  v399 = *(_OWORD *)(v39 + 112);
                  v400 = *(_OWORD *)(v39 + 128);
                  v401 = *(_OWORD *)(v39 + 144);
                }
              }
            }
            else
            {
              v39 = 0LL;
              v366 = 0LL;
            }
          }
LABEL_98:
          v391 = v39;
          v45 = WPP_GLOBAL_Control;
          LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
          LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                     && LOWORD(WPP_GLOBAL_Control->DeviceType);
          if ( (_BYTE)v26 || (_BYTE)v30 )
            WPP_RECORDER_AND_TRACE_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v26,
              v30,
              (__int64)gFullLog,
              5u,
              0x12u,
              0x21u,
              (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
              v39,
              *v12,
              *(_QWORD *)(*v12 + 88));
          *(_QWORD *)(*v12 + 88) = v39;
          if ( v39 <= 1 )
            break;
          v46 = DWORD1(v398);
          if ( (BYTE4(v398) & 0x20) != 0 )
          {
            v47 = v384;
            *v384 = (struct tagQMSG *)v39;
            *(_DWORD *)(v39 + 100) |= 0x100u;
            v361 = 0;
            v46 = DWORD1(v398);
            if ( (DWORD1(v398) & 0x8000000) != 0 )
            {
              *((_DWORD *)*v47 + 25) |= 0x8000000u;
              v46 = DWORD1(v398);
            }
          }
          if ( (v46 & 0x2000) != 0 )
          {
            v11 = v360;
            if ( *((struct tagTHREADINFO **)&v398 + 1) == v8 )
              v11 = 1;
            v360 = v11;
            LOBYTE(v30) = 1;
            v363 = v30;
            v365 = 1;
          }
          else
          {
            v30 = v363;
            if ( (v46 & 0x10000) != 0 )
            {
              v11 = v360;
              if ( *((struct tagTHREADINFO **)&v398 + 1) == v8 )
              {
                v11 = 3;
                v360 = 3;
              }
            }
            else if ( (_DWORD)v398 == 4 && v363 )
            {
              DeferSysPeekMsg(v8, 3LL);
              v11 = v360;
              v30 = v363;
            }
            else if ( (v46 & 0x4000) != 0 )
            {
              v11 = v360;
              if ( *((struct tagTHREADINFO **)&v398 + 1) == v8 )
              {
                v11 = 2;
                v360 = 2;
              }
            }
            else
            {
              if ( !(unsigned int)ShouldDeferMessage(v360, &v392, v363) )
                break;
              DeferSysPeekMsg(v8, 3LL);
              v11 = 3;
              v360 = 3;
              v30 = v363;
            }
          }
        }
        if ( !*(_QWORD *)(*v12 + 88) )
        {
          if ( a7 == 0x2000 )
          {
            _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 8LL), 0xFFFFDFFF);
LABEL_132:
            v48 = v385;
LABEL_133:
            v49 = &WPP_RECORDER_INITIALIZED;
            v335 = v362;
            *((_QWORD *)*v362 + 10) = 0LL;
            v336 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(v49) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v336 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_qqq(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v336,
                (char)v49,
                (__int64)gFullLog,
                4u,
                0x12u,
                0x25u,
                (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
                *v335,
                v8,
                *((_QWORD *)*v335 + 9));
            v337 = v362;
            *((_QWORD *)*v362 + 9) = 0LL;
            **((_DWORD **)v8 + 56) &= ~1u;
            v338 = v403;
            if ( v405 )
            {
              SetWakeBit(v405, 0x4001u);
              ClearWakeBit(v8, 16385, 0);
            }
            else if ( !v48 && !v418 && !v403 && !v417 )
            {
              v339 = *((_QWORD *)v8 + 56);
              _InterlockedExchange((volatile __int32 *)(v339 + 12), 0);
              if ( !*((_DWORD *)*v337 + 10) )
              {
                v340 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v339, v337, v49, v335);
                if ( !ExIsResourceAcquiredSharedLite(*v340) )
                {
                  v383 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
                }
                v341 = 0LL;
                v342 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v342 )
                  v341 = *v342;
                if ( !*(_QWORD *)(*(_QWORD *)(v341 + 464) + 56LL) )
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 8LL),
                    (*((_DWORD *)*v362 + 99) >> 4) & 2 | 0xFFFF83F8);
              }
LABEL_1005:
              v345 = 0LL;
              v346 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v346 )
                v345 = *v346;
              *(_QWORD *)(v345 + 16) = v429;
              if ( v430 )
                v431();
              v347 = 0LL;
              v348 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v348 )
                v347 = *v348;
              *(_QWORD *)(v347 + 16) = v432;
              if ( v433 )
                v434();
              v349 = 0LL;
              v350 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v350 )
                v349 = *v350;
              *(_QWORD *)(v349 + 16) = v412;
              if ( v413 )
                v414();
              v351 = 0LL;
              v352 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v352 )
                v351 = *v352;
              *(_QWORD *)(v351 + 16) = v420;
              if ( v421 )
                v422();
              v353 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v353 )
                v10 = *v353;
              *(_QWORD *)(v10 + 16) = v423;
              v356 = v424;
              if ( v424 )
                v425();
              ThreadUnlock1(v356, v354, v355);
              if ( v368 )
                *(_DWORD *)(gptiCurrent + 1276LL) &= ~0x20u;
              return 0LL;
            }
            if ( v48 )
            {
              SetWakeBit(v48, 0x4006u);
              ClearWakeBit(v8, 16390, 0);
            }
            if ( v338 )
            {
              SetWakeBit(v338, 0x4400u);
              ClearWakeBit(v8, 17408, 0);
            }
            v343 = v417;
            if ( v417 )
            {
              SetWakeBit(v417, 0x5000u);
              ClearWakeBit(v8, 20480, 0);
            }
            v344 = v418;
            if ( v418 )
            {
              if ( (*(_DWORD *)(v418 + 488) & 1) == 0 )
              {
                _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v418 + 448) + 8LL), 0x2040u);
                _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v344 + 448) + 4LL), 0x2040u);
                if ( (*(_DWORD *)(*(_QWORD *)(v344 + 448) + 16LL) & 0x2040) != 0 )
                  KeSetEvent(*(PRKEVENT *)(v344 + 736), 2, 0);
              }
              _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 8LL), 0xFFFFDFFF);
            }
            else if ( *(_QWORD *)(*((_QWORD *)PtiCurrentShared(v343, (__int64)v337, (__int64)v49, (__int64)v335) + 58)
                                + 56LL) )
            {
              _InterlockedOr(
                (volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 12LL),
                *(_DWORD *)(*((_QWORD *)v8 + 56) + 8LL) & 0x5C07);
              ClearWakeBit(v8, 23559, 0);
              _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 4LL), 0xFFFFA3F8);
            }
            goto LABEL_1005;
          }
          goto LABEL_969;
        }
        ThreadUnlock1(v45, v26, v30);
        v50 = v393;
        ThreadDesktopWindow = 0LL;
        PsGetThreadWin32Thread(KeGetCurrentThread());
        v52 = (_DWORD *)gpsi;
        if ( (unsigned __int64)(unsigned __int16)v50 < *(_QWORD *)(gpsi + 8LL) )
        {
          v53 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v50;
          v55 = (__int64 *)HMPkheFromPhe(v53);
          LOWORD(v50) = HIWORD(v50) & 0x7FFF;
          if ( ((HIWORD(v50) & 0x7FFF) == *(_WORD *)(v53 + 26)
             || (_WORD)v50 == 0x7FFF
             || !(_WORD)v50 && PsGetCurrentProcessWow64Process(v52, v54, v30))
            && (*(_BYTE *)(v53 + 25) & 1) == 0 )
          {
            v57 = *(_BYTE *)(v53 + 24) == 1;
            v39 = (unsigned __int64)v366;
            if ( v57 )
              ThreadDesktopWindow = *v55;
          }
          else
          {
            v39 = (unsigned __int64)v366;
          }
          v8 = v364;
        }
        v372 = ThreadDesktopWindow;
        v27 = (__int64)v407;
        v408 = *v407;
        *v407 = (__int64)&v408;
        v409 = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          HMLockObject(ThreadDesktopWindow);
        v26 = (unsigned int)v398;
        if ( !(_DWORD)v398 )
          break;
        v12 = (__int64 *)v362;
        if ( (_DWORD)v398 == 4 )
        {
          v11 = v360;
          v30 = v363;
          if ( *((_QWORD *)*v362 + 11) != *((_QWORD *)*v362 + 3) )
            continue;
        }
        if ( (_DWORD)v398 != 9 || DWORD2(v393) != 96 )
          goto LABEL_160;
        v56 = *((_QWORD *)&v392 + 1);
        v57 = *((_QWORD *)&v392 + 1) == 0LL;
        if ( *((_QWORD *)&v392 + 1) )
        {
          do
          {
            v58 = *(_DWORD *)(v56 + 100);
            if ( (v58 & 0x2000) == 0 && (v58 & 0x4000) == 0 )
            {
              v59 = (v58 & 0x10000) != 0;
              v60 = 0;
              if ( !v59 )
                goto LABEL_156;
            }
            v60 = 1;
LABEL_156:
            if ( !v60 )
              break;
            v56 = *(_QWORD *)(v56 + 8);
          }
          while ( v56 );
          v57 = v56 == 0;
        }
        v11 = v360;
        v30 = v363;
        if ( v57 )
        {
LABEL_160:
          v61 = *((_QWORD *)&v398 + 1);
          if ( !*((_QWORD *)&v398 + 1) || *((struct tagTHREADINFO **)&v398 + 1) == v8 )
          {
            EtwTraceRetrieveQueueEventMessage(*((_QWORD *)*v362 + 11), (unsigned int)v398, v30);
            v65 = *(_QWORD *)(*v12 + 88);
            v66 = *v12 + 24;
            v67 = *(_QWORD **)(v65 + 8);
            if ( v67 )
              *v67 = *(_QWORD *)v65;
            v68 = *(PDEVICE_OBJECT *)v65;
            if ( *(_QWORD *)v65 )
              v68->DriverObject = *(struct _DRIVER_OBJECT **)(v65 + 8);
            if ( *(_QWORD *)v66 == v65 )
              *(_QWORD *)v66 = *(_QWORD *)v65;
            if ( *(_QWORD *)(v66 + 8) == v65 )
              *(_QWORD *)(v66 + 8) = *(_QWORD *)(v65 + 8);
            v69 = *(_DWORD *)(v65 + 100);
            if ( (v69 & 0x2000) != 0 || (v69 & 0x4000) != 0 || (v59 = (v69 & 0x10000) != 0, v70 = 0, v59) )
              v70 = 1;
            if ( !v70 )
            {
              v71 = *(_DWORD *)(v66 + 16) - 1;
              *(_DWORD *)(v66 + 16) = v71;
              v68 = WPP_GLOBAL_Control;
              v72 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( v72 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_qiqdd(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v72,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  v71,
                  v357,
                  (__int64)v358,
                  0x15u,
                  (__int64)&WPP_da10ed9f41f835a692699b91a3623186_Traceguids);
            }
            if ( v65 == *(_QWORD *)(v66 + 32) )
              *(_QWORD *)(v66 + 32) = 0LL;
            if ( (*(_DWORD *)(v65 + 100) & 8) != 0
              && !*(_DWORD *)(v65 + 96)
              && IsPointerInputMessage(*(_DWORD *)(v65 + 24)) )
            {
              FreePointerMessageParams(v65);
            }
            v73 = SGDGetUserSessionState(v68);
            Win32FreeToPagedLookasideList(*(_QWORD *)(v73 + 16872), v65);
            v74 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            v75 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
            if ( v74 || v75 )
              WPP_RECORDER_AND_TRACE_SF_qq(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v74,
                v75,
                (__int64)gFullLog,
                5u,
                0x12u,
                0x23u,
                (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids);
            *(_QWORD *)(*v12 + 88) = 0LL;
            xxxProcessEventMessage((__int64)v8, (__int64)&v392);
            v11 = v360;
          }
          else
          {
            if ( *(struct tagQ **)(*((_QWORD *)&v398 + 1) + 432LL) == *v362 )
            {
              v418 = *((_QWORD *)&v398 + 1);
              ReferenceW32Thread(*((_QWORD *)&v398 + 1));
              v62 = v413;
              v413 = v61;
              if ( v62 )
                v414();
              v63 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
              v64 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
              if ( v63 || v64 )
                WPP_RECORDER_AND_TRACE_SF_qq(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  v63,
                  v64,
                  (__int64)gFullLog,
                  5u,
                  0x12u,
                  0x22u,
                  (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
                  *v12,
                  *(_QWORD *)(*v12 + 88));
              *(_QWORD *)(*v12 + 88) = 0LL;
              goto LABEL_132;
            }
            CleanEventMessage(*((void ***)*v362 + 11));
            DelQEntry(*v12 + 24, *(_QWORD *)(*v12 + 88), 1);
            v11 = v360;
          }
          goto LABEL_33;
        }
      }
      v30 = v363;
      if ( a7 == 0x2000 )
        goto LABEL_50;
      v76 = DWORD2(v393);
      v77 = DWORD2(v393);
      v359 = DWORD2(v393);
      if ( DWORD2(v393) > 0x20A )
      {
        v26 = 0x1C0000000uLL;
        switch ( DWORD2(v393) )
        {
          case 0x20E:
            goto LABEL_492;
          case 0x238:
            goto LABEL_558;
          case 0x240:
LABEL_551:
            if ( !ThreadDesktopWindow )
              goto LABEL_556;
            v167 = *(char **)(ThreadDesktopWindow + 40);
            if ( v167[20] < 0 )
              goto LABEL_556;
            if ( v167[19] < 0 )
              goto LABEL_556;
            v168 = v167[31];
            if ( (v168 & 8) != 0 || (v168 & 0x10) == 0 )
              goto LABEL_556;
LABEL_558:
            v370 = *((_QWORD *)&v394 + 1);
            MouseKeyFlags = v394;
            v371 = v394;
            if ( !ThreadDesktopWindow )
              goto LABEL_557;
            if ( (unsigned int)CheckCrossThreadInput(
                                 (struct tagWND *const)ThreadDesktopWindow,
                                 (struct tagQMSG *)v39,
                                 &v373,
                                 &v361,
                                 v384) )
              goto LABEL_969;
            if ( v373 )
              goto LABEL_557;
            v26 = a5;
            if ( !v376 && a5 == -1 )
              goto LABEL_572;
            if ( v376 <= a5 )
            {
              if ( v77 >= v376 && v77 <= a5 )
              {
                v169 = 1;
                goto LABEL_571;
              }
            }
            else if ( v77 < a5 || v77 > v376 )
            {
              v169 = 1;
              goto LABEL_571;
            }
            v169 = 0;
LABEL_571:
            v11 = v360;
            v30 = v363;
            if ( !v169 )
              goto LABEL_51;
LABEL_572:
            v170 = CheckPwndFilter(ThreadDesktopWindow, a3);
            v11 = v360;
            v30 = v363;
            if ( !v170 )
              goto LABEL_51;
            if ( v361 )
              goto LABEL_230;
            goto LABEL_914;
          case 0x245:
          case 0x246:
          case 0x247:
          case 0x249:
          case 0x24A:
          case 0x251:
          case 0x252:
          case 0x253:
            v82 = v361;
            goto LABEL_866;
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
              goto LABEL_484;
            if ( v376 > a5 )
            {
              if ( DWORD2(v393) < a5 || DWORD2(v393) > v376 )
              {
                v145 = 1;
                goto LABEL_483;
              }
LABEL_482:
              v145 = 0;
              goto LABEL_483;
            }
            if ( DWORD2(v393) < v376 )
              goto LABEL_482;
            v145 = 1;
            if ( DWORD2(v393) > a5 )
              goto LABEL_482;
LABEL_483:
            if ( !v145 )
              goto LABEL_969;
LABEL_484:
            if ( (unsigned int)IsInsideMenuLoop((__int64)v8) )
              goto LABEL_556;
            v82 = v361;
            if ( v361 )
              xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
            if ( !ThreadDesktopWindow )
            {
              ThreadDesktopWindow = *((_QWORD *)*v362 + 15);
              v372 = ThreadDesktopWindow;
            }
            v370 = *((_QWORD *)&v394 + 1);
            MouseKeyFlags = v394;
            v371 = v394;
            v146 = xxxRetrieveInteractiveControlInputMessage((unsigned __int16)v394, WORD1(v394)) - 1;
            if ( !v146 )
              goto LABEL_914;
            if ( v146 == 1 )
              goto LABEL_969;
            goto LABEL_747;
          default:
LABEL_576:
            v369.x = SWORD4(v394);
            v369.y = SWORD5(v394);
            v367 = 1;
            if ( (BYTE4(v398) & 0x20) == 0 && (DWORD1(v398) & 0x8000000) == 0 )
              goto LABEL_580;
            if ( !ThreadDesktopWindow )
              goto LABEL_582;
            if ( (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 424LL) + 280LL) >> 8)) & 0x1FF) != 0 )
            {
LABEL_580:
              if ( !ThreadDesktopWindow
                || (v171 = IsCompositionInputWindowForHitTest((struct tagWND *)ThreadDesktopWindow),
                    v76 = DWORD2(v393),
                    v172 = 1,
                    !v171) )
              {
LABEL_582:
                v172 = 0;
              }
              v379 = v172;
              v173 = v362;
              if ( *((_QWORD *)*v362 + 14) )
              {
                ThreadDesktopWindow = *((_QWORD *)*v362 + 14);
                v372 = ThreadDesktopWindow;
                if ( (unsigned int)dword_1C0359080 > 4 && tlgKeywordOn((__int64)&dword_1C0359080, 64LL) )
                {
                  v445 = v189;
                  v416 = v76;
                  v446 = *((_QWORD *)&v400 + 1);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    (unsigned int)&dword_1C0359080,
                    (unsigned int)&unk_1C031A8D5,
                    v188,
                    v189,
                    (__int64)&v446,
                    (__int64)&v416,
                    (__int64)&v445);
                }
                if ( v379 )
                {
                  if ( !(unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)ThreadDesktopWindow) )
                  {
                    DWORD1(v398) &= ~0x1000u;
                    if ( v39 )
                    {
                      if ( (unsigned int)IsMiPActive((__int64)v8, v39) )
                        *(_DWORD *)(v39 + 100) &= ~0x1000u;
                    }
                  }
                }
              }
              else
              {
                if ( !v172 )
                {
                  ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
                  *(_QWORD *)&v427 = *v407;
                  *v407 = (__int64)&v427;
                  *((_QWORD *)&v427 + 1) = ThreadDesktopWindow;
                  if ( ThreadDesktopWindow )
                  {
                    HMLockObject(ThreadDesktopWindow);
                    v76 = DWORD2(v393);
                    v172 = v379;
                  }
                }
                v174 = 0;
                v175 = *((_QWORD *)v8 + 57);
                if ( v175 )
                  v174 = *(_DWORD *)(**(_QWORD **)(v175 + 8) + 64LL) & 1;
                if ( v174 )
                {
                  v447[0] = v76;
                  v447[1] = 0;
                  v448 = v394;
                  v449 = &v367;
                  v450 = 8 * v172 + 17;
                  v451 = 0;
                  v452 = (char *)&v397 + 8;
                  v453 = 0LL;
                  v454 = 0LL;
                  v176 = xxxDCEWindowHitTestIndirect(
                           (struct tagWND *)ThreadDesktopWindow,
                           (struct tagPOINT)v397,
                           0,
                           (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v447);
                  v177 = (int)v176;
                  if ( v176 && (_BYTE)v453 )
                  {
                    *((_QWORD *)&v394 + 1) = *((_QWORD *)&v448 + 1);
                    DWORD1(v395) = SWORD4(v448);
                    DWORD2(v395) = SWORD5(v448);
                    v369 = *(struct tagPOINT *)((char *)&v395 + 4);
                  }
                }
                else
                {
                  v177 = (unsigned int)xxxWindowHitTest(
                                         (struct tagWND *)ThreadDesktopWindow,
                                         v369,
                                         &v367,
                                         8 * v172 + 17);
                }
                v178 = (struct tagWND *)HMValidateHandleNoSecure(v177, 1);
                InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)&v392, &v369, v178);
                if ( !v379 )
                  ThreadUnlock1(v180, v179, v181);
                ThreadDesktopWindow = HMValidateHandleNoSecure(v177, 1);
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
                v182 = 0;
                if ( *((_QWORD *)v8 + 76) )
                  v183 = 0;
                else
                  v183 = IsMiPEnabledForThread((__int64)v8);
                if ( v183 )
                {
                  v184 = *((_QWORD *)*v173 + 55);
                  if ( v184 )
                  {
                    v185 = ValidateHwnd(v184);
                    if ( v185 )
                    {
                      v186 = *(_QWORD *)(v185 + 16);
                      v187 = *v173;
                      if ( *(struct tagQ **)(v186 + 432) == *v173 || *(_QWORD *)(v186 + 424) == *((_QWORD *)v8 + 53) )
                      {
                        ThreadDesktopWindow = v185;
                        v372 = v185;
                        v367 = 1;
                        *((_DWORD *)v187 + 39) = 0;
                        v182 = 1;
                      }
                    }
                  }
                }
                if ( !v182 )
                  *((_DWORD *)*v173 + 39) = v367 != 1;
              }
              if ( ThreadDesktopWindow == *((_QWORD *)*v173 + 14) )
              {
                v190 = *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 432LL);
                v191 = *(_QWORD *)(v190 + 112);
                v192 = v191 ? *(_QWORD *)(v191 + 16) : *(_QWORD *)(v190 + 96);
                v193 = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 288LL) >> 8;
                if ( (((unsigned __int16)v193 ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v192 + 424) + 280LL) >> 8)) & 0x1FF) != 0 )
                  goto LABEL_628;
                if ( *(_QWORD *)(ThreadDesktopWindow + 104) == GetMessageWindow(ThreadDesktopWindow, v193, 0LL) )
                {
                  v195 = *(_QWORD *)(ThreadDesktopWindow + 136);
                  if ( v195 )
                  {
                    v196 = *(const char **)(v195 + 104);
                    if ( v196 )
                      v194 = strcmp_0(v196, "CLIPBRDWNDCLASS") == 0;
                  }
                }
                if ( v194 )
                {
LABEL_628:
                  v369 = (struct tagPOINT)v397;
                  PhysicalToLogicalInPlacePointWithParent(ThreadDesktopWindow, &v369, (char *)&v397 + 8);
                  v370 = (LOWORD(v369.y) << 16) | LOWORD(v369.x);
                  *(struct tagPOINT *)((char *)&v395 + 4) = v369;
                }
              }
            }
            else
            {
              v173 = v362;
            }
            v197 = v409;
            v409 = ThreadDesktopWindow;
            if ( ThreadDesktopWindow )
              HMLockObject(ThreadDesktopWindow);
            if ( v197 )
              HMUnlockObject(v197);
            if ( (unsigned int)CheckCrossThreadInput(
                                 (struct tagWND *const)ThreadDesktopWindow,
                                 (struct tagQMSG *)v39,
                                 &v373,
                                 &v361,
                                 v384) )
              goto LABEL_969;
            v198 = v373;
            if ( v373 )
            {
              v199 = *(_QWORD *)(ThreadDesktopWindow + 16);
              if ( *(struct tagQ **)(v199 + 432) != *v173 )
              {
                zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
                MouseKeyFlags = v371;
                v82 = v361;
LABEL_638:
                v10 = 0LL;
                goto LABEL_747;
              }
              if ( !v385 )
              {
                v385 = *(_QWORD *)(ThreadDesktopWindow + 16);
                LockExchangeW32Thread(v199, (__int64)&v420);
              }
            }
            else if ( (WORD2(v398) & 0x800) != 0
                   && !(unsigned __int8)CheckAccess(
                                          &v399,
                                          *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 424LL) + 888LL) )
            {
              EtwTraceUIPIMsgError(
                0LL,
                *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 424LL),
                v77,
                v394,
                *((_QWORD *)&v394 + 1));
              zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
              MouseKeyFlags = v371;
              v82 = v361;
              v10 = 0LL;
              goto LABEL_747;
            }
            v200 = v369;
            v201 = (unsigned __int64)v369;
            v202 = (_QWORD *)(ThreadDesktopWindow + 16);
            v390 = (_BYTE *)(ThreadDesktopWindow + 16);
            v203 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 16) + 432LL) + 156LL);
            if ( v203 && (v204 = v203 - 2) != 0 )
            {
              if ( v204 != 1 )
                goto LABEL_656;
              v205 = *(_QWORD *)(ThreadDesktopWindow + 40);
              if ( (*(_BYTE *)(v205 + 26) & 0x40) != 0 )
                v369.x = *(_DWORD *)(v205 + 96) - v369.x;
              else
                v369.x -= *(_DWORD *)(v205 + 88);
              v206 = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 92LL);
            }
            else
            {
              v207 = *(_QWORD *)(ThreadDesktopWindow + 40);
              if ( (*(_BYTE *)(v207 + 26) & 0x40) != 0 )
                v369.x = *(_DWORD *)(v207 + 112) - v369.x;
              else
                v369.x -= *(_DWORD *)(v207 + 104);
              v206 = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 108LL);
            }
            v369.y -= v206;
            v200 = v369;
LABEL_656:
            if ( v198 )
            {
              v208 = v364;
              goto LABEL_695;
            }
            v57 = *v173 == (struct tagQ *)gpqCursor;
            v208 = v364;
            if ( !v57 )
            {
LABEL_695:
              v218 = CheckPwndFilter(ThreadDesktopWindow, a3);
              v30 = v363;
              if ( !v218 )
                goto LABEL_48;
              v386 = 0;
              switch ( v77 )
              {
                case 0x201u:
                  v219 = IsMessageInputSourceTouch(&v392);
                  v220 = v362;
                  v57 = v219 == 0;
                  v221 = *v362;
                  if ( v57 )
                    *((_DWORD *)v221 + 99) &= ~0x800000u;
                  else
                    *((_DWORD *)v221 + 99) |= 0x800000u;
                  v222 = IsMessageInputSourcePen(&v392);
                  v223 = *v220;
                  if ( v222 )
                    *((_DWORD *)v223 + 99) |= 0x1000000u;
                  else
                    *((_DWORD *)v223 + 99) &= ~0x1000000u;
                  goto LABEL_704;
                case 0x202u:
                case 0x205u:
                case 0x208u:
                case 0x20Cu:
                  v220 = v362;
                  goto LABEL_720;
                case 0x204u:
                case 0x207u:
                case 0x20Bu:
                  v220 = v362;
LABEL_704:
                  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 136) + 8LL) + 8LL) & 8) != 0
                    || *((_DWORD *)*v220 + 39) == 1
                    || ((v224 = *((_QWORD *)v208 + 76)) == 0 || (*(_DWORD *)(v224 + 8) & 1) == 0
                      ? (v225 = 0)
                      : (v225 = 1),
                        v225) )
                  {
                    v386 = 1;
                    v226 = *((unsigned int *)*v220 + 42);
                    if ( (unsigned int)v395 <= (unsigned int)v226 && !*(_DWORD *)(SGDGetUserSessionState(v226) + 15912) )
                    {
                      v227 = *v220;
                      if ( *(_QWORD *)ThreadDesktopWindow == *((_QWORD *)*v220 + 22)
                        && v77 == *((_DWORD *)v227 + 40)
                        && (v77 != 523 || WORD1(v394) == *((_WORD *)v227 + 82)) )
                      {
                        v228 = *(_DWORD *)(gpsi + 2040LL) / 2;
                        v229 = *((_DWORD *)v227 + 46);
                        v442[0] = v229 - v228;
                        v230 = *(_DWORD *)(gpsi + 2044LL);
                        v231 = *((_DWORD *)v227 + 47);
                        v442[1] = v231 - v230 / 2;
                        v442[2] = v229 + v228;
                        v442[3] = v231 + v230 / 2;
                        if ( PtInRect(v442, *(unsigned __int64 *)((char *)&v395 + 4)) )
                        {
                          v77 += 2;
                          v359 = v77;
                          v386 = 2;
                        }
                      }
                    }
                  }
LABEL_720:
                  v232 = *((_DWORD *)*v220 + 99);
                  if ( (v232 & 8) != 0 )
                    *((_DWORD *)*v220 + 99) = v232 | 4;
                  if ( v77 - 514 <= 0xA )
                  {
                    v233 = 1097;
                    if ( _bittest(&v233, v77 - 514) )
                    {
                      if ( *((_DWORD *)*v220 + 42) && ((DWORD2(v399) - 4) & 0xFFFFFFFB) == 0 )
                      {
                        if ( DWORD2(v399) == 4 )
                          TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(300LL, 180LL, 5LL);
                        else
                          TouchTimeFromCPLValue = GetPenDoubleClickTime();
                        *((_DWORD *)*v220 + 42) = DWORD2(v401) + TouchTimeFromCPLValue;
                      }
                    }
                  }
                  break;
                default:
                  break;
              }
              if ( *(_DWORD *)(*(_QWORD *)(*v202 + 432LL) + 156LL) == 1 )
              {
                v77 -= 352;
                v359 = v77;
                MouseKeyFlags = (unsigned int)v367;
                v371 = (unsigned int)v367;
              }
              else
              {
                MouseKeyFlags = v371;
              }
              v235 = MiPCheckMsgFilter(v39, v77, (unsigned int)v376, a5);
              v30 = v363;
              if ( v235 )
              {
                if ( v198 )
                  goto LABEL_968;
                v236 = v364;
                if ( v77 - 512 > 0xE )
                {
                  v237 = (_DWORD *)((char *)v419 + 488);
LABEL_739:
                  if ( (*v237 & 0x100000) != 0 )
                  {
                    *v237 &= ~0x100000u;
                    xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1);
                  }
                  v503[0] = *(_QWORD *)((char *)&v395 + 4);
                  v503[1] = *(_QWORD *)ThreadDesktopWindow;
                  LODWORD(v504) = v367;
                  *((_QWORD *)&v504 + 1) = *((_QWORD *)&v396 + 1);
                  LODWORD(v505) = v394;
                  v82 = v361;
                  if ( v361 )
                  {
                    v238 = v359;
                    if ( v359 != 512 && v359 != 160 )
                    {
                      v377 = 1;
                      if ( (unsigned int)xxxCallCtfHook(7, 0, v359, (__int128 *)v503) )
                      {
LABEL_745:
                        v10 = 0LL;
LABEL_746:
                        v8 = v364;
                        goto LABEL_747;
                      }
                    }
                  }
                  else
                  {
                    v238 = v359;
                  }
                  v242 = **v388;
                  v243 = *(_DWORD *)(v242 + 16);
                  v244 = (char *)v236 + 680;
                  v426 = v244;
                  if ( ((*(_DWORD *)v244 | v243) & 0x100) != 0 )
                  {
                    v377 = 1;
                    if ( xxxCallMouseHook(v238, (__int64)v503, v82) )
                      goto LABEL_745;
                  }
                  if ( (unsigned int)PsGetWin32KFilterSet(v242) == 5 )
                  {
                    v245 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
                    v375 = 0;
                    v375 = *(_QWORD *)(v245 + 248) != 0LL;
                    v82 = v361;
                    v238 = v359;
                    if ( v375 )
                    {
                      v246 = xxxClientCallLocalMouseHooks(v359, v503, (unsigned int)v361);
                      MouseKeyFlags = v371;
                      if ( v246 )
                        goto LABEL_745;
                    }
                    else
                    {
                      MouseKeyFlags = v371;
                    }
                    ThreadDesktopWindow = v372;
                  }
                  v30 = (__int64)v364;
                  if ( (*((_DWORD *)v364 + 318) & 0x2000) == 0 && ((v367 + 2) & 0xFFFFFFFD) == 0 )
                  {
                    v10 = 0LL;
                    v247 = 0LL;
                    if ( v379 )
                    {
                      CompositionInputWindowUIOwner = (struct tagWND *)ThreadDesktopWindow;
                      if ( (unsigned int)IsIndependentInputWindow((const struct tagWND *)ThreadDesktopWindow) )
                        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)ThreadDesktopWindow);
                      TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                      v247 = TopLevelWindow;
                      if ( TopLevelWindow )
                      {
                        v250 = 0;
                        if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) && v359 == 161 )
                          v250 = *(_QWORD *)(*((_QWORD *)v247 + 2) + 432LL) == gpqForeground;
                        CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v247);
                        v247 = CompositeAppFrameWindowOrSelf;
                        if ( v250 )
                        {
                          v252 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 2);
                          if ( *(_QWORD *)(v252 + 432) != gpqForeground )
                            *(_DWORD *)(v252 + 488) |= 0x20u;
                        }
                        *(_QWORD *)&v427 = *v407;
                        *v407 = (__int64)&v427;
                        *((_QWORD *)&v427 + 1) = CompositeAppFrameWindowOrSelf;
                        if ( CompositeAppFrameWindowOrSelf )
                          HMLockObject(CompositeAppFrameWindowOrSelf);
                        xxxSendMessage((ULONG_PTR)v247);
                        ThreadUnlock1(v254, v253, v255);
                      }
                    }
                    if ( !v247 )
                      xxxSendMessage(ThreadDesktopWindow);
                    v256 = v366;
                    if ( *((struct tagQMSG **)*v362 + 11) == v366 && v366 )
                    {
                      if ( !(unsigned int)IsMiPActive((__int64)v364, (__int64)v366)
                        || (*((_DWORD *)v256 + 25) & 0x400) == 0 )
                      {
                        v8 = v257;
                        goto LABEL_747;
                      }
                      if ( (unsigned int)IsGenuineMouseInput((char *)v256 + 120)
                        && (unsigned int)IsMiPMouseMessage(*((unsigned int *)v256 + 6)) )
                      {
                        memset_0(v500, 0, 0xA0uLL);
                        v103 = v359;
                        GeneratePointerMessageFromMouse(
                          (struct tagQMSG *)v500,
                          v359,
                          v256,
                          (struct tagWND *)ThreadDesktopWindow,
                          v82);
                        SetMiPPromotion(*v202, v501);
                        v8 = v364;
                        goto LABEL_748;
                      }
                    }
                    goto LABEL_746;
                  }
                  if ( *((_QWORD *)*v362 + 11) != v39 )
                  {
LABEL_968:
                    v10 = 0LL;
                    goto LABEL_969;
                  }
                  v258 = 0LL;
                  v473 = 0LL;
                  v474 = 0LL;
                  v475 = 0LL;
                  v476 = 0LL;
                  v477 = 0LL;
                  v478 = 0LL;
                  v455 = 0LL;
                  v259 = 0LL;
                  v456 = 0LL;
                  v260 = 0LL;
                  v457 = 0LL;
                  v261 = 0LL;
                  v458 = 0LL;
                  v459 = 0LL;
                  v460 = 0LL;
                  v262 = 0;
                  v263 = &v479;
                  v479 = v392;
                  v480 = v393;
                  v481 = v394;
                  v482 = v395;
                  v483 = v396;
                  v484 = v397;
                  v485 = v398;
                  v486 = v399;
                  v487 = v400;
                  v488 = v401;
                  if ( v39 && (unsigned int)IsMiPActive((__int64)v364, v39) )
                  {
                    DWORD2(v480) = v238;
                    *(_QWORD *)&v481 = MouseKeyFlags;
                    if ( (*(_DWORD *)(v39 + 100) & 0x400) != 0 )
                    {
                      memset_0(&v489, 0, 0xA0uLL);
                      if ( ShouldGenerateMipMessage(
                             v364,
                             (const struct tagQMSG *)v39,
                             (struct tagWND *)ThreadDesktopWindow,
                             v82) )
                      {
                        v265 = *(_QWORD *)(v264 + 1352);
                        if ( v265 && (*(_DWORD *)v265 & 1) != 0 )
                        {
                          v258 = *(_OWORD *)(v265 + 24);
                          v455 = v258;
                          v259 = *(_OWORD *)(v265 + 40);
                          v456 = v259;
                          v260 = *(_OWORD *)(v265 + 56);
                          v457 = v260;
                          v261 = *(_OWORD *)(v265 + 72);
                          v458 = v261;
                          v459 = *(_OWORD *)(v265 + 88);
                          v460 = *(_OWORD *)(v265 + 104);
                          v262 = 1;
                        }
                        if ( (unsigned int)GeneratePointerMessageFromMouse(
                                             (struct tagQMSG *)&v489,
                                             v359,
                                             (struct tagQMSG *)v39,
                                             (struct tagWND *)ThreadDesktopWindow,
                                             v82) )
                        {
                          v263 = &v392;
                          v392 = v489;
                          v393 = v490;
                          v394 = v491;
                          v395 = v492;
                          v396 = v493;
                          v397 = v494;
                          v398 = v495;
                          v399 = v496;
                          v400 = v497;
                          v401 = v498;
                          v378 = 1;
                          v380 = 1;
                          v27 = DWORD2(v490);
                          if ( DWORD2(v490) == 582 && (unsigned int)IsMiPEnabledForWindow(ThreadDesktopWindow) )
                          {
                            v263 = *(__int128 **)ThreadDesktopWindow;
                            *((_QWORD *)*v362 + 55) = *(_QWORD *)ThreadDesktopWindow;
                          }
                          else if ( (((_DWORD)v27 - 579) & 0xFFFFFFFB) == 0 )
                          {
                            *((_QWORD *)*v362 + 55) = 0LL;
                          }
                        }
                      }
                      if ( !v82 )
                      {
LABEL_842:
                        v8 = v364;
                        goto LABEL_843;
                      }
                      *(_DWORD *)(v39 + 100) &= ~0x400u;
                    }
                    else
                    {
                      if ( !v82 )
                        goto LABEL_842;
                      if ( (unsigned int)IsMiPMouseMessage(*(unsigned int *)(v39 + 24)) )
                      {
                        v266 = IsGenuineMouseInput(v39 + 120);
                        v30 = (__int64)v364;
                        if ( v266 )
                        {
                          v267 = (unsigned int *)*((_QWORD *)v364 + 169);
                          if ( v267 )
                          {
                            v263 = (__int128 *)*v267;
                            if ( ((unsigned __int8)v263 & 2) == 0 && ((unsigned __int8)v263 & 4) == 0 )
                            {
                              v8 = v364;
                              xxxSkipSysMsgEx(v364, (struct tagQMSG *)&v392, 1u);
                              v10 = 0LL;
                              v12 = (__int64 *)v362;
                              v11 = v360;
                              goto LABEL_33;
                            }
                          }
                        }
                        v268 = (_DWORD *)*((_QWORD *)v364 + 169);
                        if ( v268 )
                          *v268 &= ~2u;
                      }
                    }
                  }
                  else
                  {
                    v238 = DWORD2(v480);
                  }
                  if ( !v82 )
                    goto LABEL_842;
                  v269 = SGDGetUserSessionState(v263);
                  v270 = v269;
                  if ( (v238 == 512 || v238 == 160)
                    && *(_QWORD *)ThreadDesktopWindow != *(_QWORD *)(v269 + 15984)
                    && (unsigned int)IsGenuineMouseInput((char *)v366 + 120) )
                  {
                    v271 = HMValidateHandleNoSecure(*(_QWORD *)(v270 + 15984), 1);
                    v272 = (unsigned __int64 *)v271;
                    if ( v271 )
                    {
                      v273 = *(_QWORD *)(v271 + 16);
                      v274 = !*(_QWORD *)(v273 + 608) && IsMiPEnabledForThread(v273);
                      if ( v274 && (GetMiPWindowFlags((struct tagWND *)v272) & 1) == 0 )
                      {
                        v275 = (struct tagQ **)v272[2];
                        v276 = v364;
                        if ( v275 == (struct tagQ **)v364 )
                        {
                          v277 = *((_QWORD *)v364 + 169);
                          v278 = *(_OWORD *)(v277 + 24);
                          v279 = *(_OWORD *)(v277 + 40);
                          v280 = *(_OWORD *)(v277 + 56);
                          v281 = *(_OWORD *)(v277 + 72);
                          v282 = *(_OWORD *)(v277 + 88);
                          v283 = *(_OWORD *)(v277 + 104);
                          if ( v262 )
                          {
                            *(_OWORD *)(v277 + 24) = v258;
                            *(_OWORD *)(v277 + 40) = v259;
                            *(_OWORD *)(v277 + 56) = v260;
                            *(_OWORD *)(v277 + 72) = v261;
                            *(_OWORD *)(v277 + 88) = v459;
                            *(_OWORD *)(v277 + 104) = v460;
                          }
                          v470 = ((*(_DWORD *)(*((_QWORD *)v276 + 169) + 36LL) & 0xFFFFE1F7) << 16) | 1LL;
                          v471 = 0LL;
                          v472 = 0LL;
                          v463 = 0LL;
                          v464 = 0LL;
                          ThreadLock(v272, &v463);
                          FindTimer((__int64)v272, 65523LL, 2u, 1, 0LL);
                          if ( (unsigned int)IsMiPEnabledForWindow(v272) )
                          {
                            _InterlockedIncrement(&glSendMessage);
                            xxxSendTransformableMessageTimeout(v272, 0x24Au, v470, 0LL, 0, 0, 0LL, 1, 0);
                            ThreadDesktopWindow = v372;
                            MouseKeyFlags = v371;
                            v82 = v361;
                          }
                          ThreadUnlock1(v285, v284, v286);
                          if ( v262 )
                          {
                            v287 = *((_QWORD *)v364 + 169);
                            *(_OWORD *)(v287 + 24) = v278;
                            *(_OWORD *)(v287 + 40) = v279;
                            *(_OWORD *)(v287 + 56) = v280;
                            *(_OWORD *)(v287 + 72) = v281;
                            *(_OWORD *)(v287 + 88) = v282;
                            *(_OWORD *)(v287 + 104) = v283;
                          }
                        }
                        else
                        {
                          PostEventMessageEx(
                            (struct tagTHREADINFO *)v275,
                            v275[54],
                            0x15u,
                            (struct tagWND *)v272,
                            0,
                            0LL,
                            0LL,
                            0LL);
                        }
                      }
                    }
                    if ( v378 )
                      *(_QWORD *)(v270 + 15984) = *(_QWORD *)ThreadDesktopWindow;
                    else
                      *(_QWORD *)(v270 + 15984) = 0LL;
                  }
                  v288 = v378;
                  if ( !v378 )
                  {
                    if ( v386 == 1 )
                    {
                      v289 = v362;
                      *((_DWORD *)*v362 + 40) = DWORD2(v393);
                      v290 = (unsigned __int64)v394 >> 16;
                      *((_WORD *)*v289 + 82) = WORD1(v394);
                      v291 = SGDGetUserSessionState(v290);
                      *((_DWORD *)*v289 + 42) = *(_DWORD *)(v291 + 14360) + v395;
                      *((_QWORD *)*v289 + 22) = *(_QWORD *)ThreadDesktopWindow;
                      *((_QWORD *)*v289 + 23) = *(_QWORD *)((char *)&v395 + 4);
                    }
                    else if ( v386 == 2 )
                    {
                      *((_DWORD *)*v362 + 42) = 0;
                    }
                  }
                  v292 = (const struct tagQMSG *)&v479;
                  if ( !v288 )
                    v292 = (const struct tagQMSG *)&v392;
                  v8 = v364;
                  if ( (unsigned int)xxxMouseActivate(v364, (struct tagWND *)ThreadDesktopWindow, v292, v367) != 1 )
                  {
                    v39 = (unsigned __int64)v366;
LABEL_843:
                    if ( v82 )
                    {
                      xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
                      if ( v377 )
                      {
                        if ( (((unsigned __int8)*v244 | *(_BYTE *)(**v388 + 16)) & 0x40) != 0 )
                          xxxCallHook(6LL, v359, (__int64)v503, 5LL);
                      }
                    }
                    v10 = 0LL;
                    v377 = 0;
                    v370 = (LOWORD(v369.y) << 16) | LOWORD(v369.x);
                    v293 = v359;
                    if ( v359 >= 0x200 )
                    {
                      MouseKeyFlags = (unsigned int)GetMouseKeyFlags(*v362);
                      v371 = MouseKeyFlags;
                      v293 = v359;
                    }
                    if ( (v293 - 171 <= 2 || v293 - 523 <= 2) && !v378 )
                    {
                      MouseKeyFlags |= v394;
                      v371 = MouseKeyFlags;
                    }
                    v294 = *((_QWORD *)v8 + 76);
                    if ( v367 == 5
                      && v82
                      && v294
                      && (*(_DWORD *)(v294 + 8) & 0x100) != 0
                      && *(_QWORD *)v294
                      && (**(_DWORD **)v294 & 1) != 0 )
                    {
                      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                        (MenuStateOwnerLockxxxUnlock *)&v437,
                        *((struct tagMENUSTATE **)v8 + 76));
                      if ( (unsigned int)xxxCallHandleMenuMessages(v295, ThreadDesktopWindow, v296, MouseKeyFlags, v370) )
                      {
                        v12 = (__int64 *)v362;
                        v11 = v360;
                        if ( v437 )
                          xxxUnlockMenuStateInternal(v437, 0);
                        goto LABEL_33;
                      }
                      if ( v437 )
                        xxxUnlockMenuStateInternal(v437, 0);
                    }
                    v34 = v378;
                    if ( !v378 )
                      goto LABEL_914;
                    goto LABEL_865;
                  }
                  goto LABEL_638;
                }
                v237 = (_DWORD *)((char *)v364 + 488);
                if ( (*((_DWORD *)v364 + 122) & 0x8000) == 0 )
                  goto LABEL_739;
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
            v209 = *(_QWORD *)(*((_QWORD *)v364 + 57) + 192LL) != ThreadDesktopWindow;
            v210 = v367;
            if ( v367 != 5
              || (v211 = *(_QWORD *)(ThreadDesktopWindow + 168)) == 0
              || (*(_BYTE *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 16LL) & 1) == 0 )
            {
              if ( v367 == 7 && (*(_BYTE *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 16LL) & 2) != 0 )
              {
                v216 = (unsigned __int16)HitTestScrollBar((struct tagWND *)ThreadDesktopWindow, v367 - 6, v200) | 0x10000;
              }
              else if ( v367 == 6 && (*(_BYTE *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 16LL) & 4) != 0 )
              {
                v216 = (unsigned __int16)HitTestScrollBar((struct tagWND *)ThreadDesktopWindow, 0, v200);
              }
              else
              {
                v216 = v367;
              }
              goto LABEL_684;
            }
            v212 = MNItemHitTest(
                     *(struct tagMENU **)(ThreadDesktopWindow + 168),
                     (struct tagWND *)ThreadDesktopWindow,
                     v200);
            if ( v212 >= 0 )
            {
              v213 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v211 + 88) + 96LL * v212) + 96LL);
              if ( v213 > 5 )
              {
                if ( v213 != 6 )
                {
                  if ( v213 == 7 )
                    goto LABEL_667;
                  if ( v213 != -1LL )
                  {
LABEL_673:
                    v216 = ((unsigned __int16)v212 << 16) | 0x45;
                    goto LABEL_684;
                  }
                  v216 = ((unsigned __int16)v212 << 16) | 0xFFFE;
LABEL_684:
                  if ( v359 != 512 || v209 || *(_DWORD *)(*((_QWORD *)v208 + 57) + 200LL) != v216 )
                    xxxTrackMouseMove((struct tagWND *)ThreadDesktopWindow, v216, v359);
                  v57 = !v209;
                  v77 = v359;
                  if ( v57 )
                  {
                    v217 = *((_QWORD *)v208 + 57);
                    if ( (*(_DWORD *)(v217 + 48) & 0x40) != 0
                      && (v359 != 512 || !PtInRect((_DWORD *)(v217 + 204), v201)) )
                    {
                      ResetMouseHover((struct tagDESKTOP *)v217, (struct tagPOINT)v201);
                    }
                  }
                  v202 = v390;
                  v39 = (unsigned __int64)v366;
                  goto LABEL_695;
                }
              }
              else if ( v213 != 5 )
              {
                v214 = v213 - 1;
                if ( !v214 )
                {
                  v216 = ((unsigned __int16)v212 << 16) | 0x41;
                  goto LABEL_684;
                }
                v215 = v214 - 1;
                if ( !v215 )
                {
                  v216 = ((unsigned __int16)v212 << 16) | 0x42;
                  goto LABEL_684;
                }
                if ( v215 == 1 )
                {
LABEL_667:
                  v216 = ((unsigned __int16)v212 << 16) | 0x43;
                  goto LABEL_684;
                }
                goto LABEL_673;
              }
              v210 = 68;
            }
            v216 = v210 | ((unsigned __int16)v212 << 16);
            goto LABEL_684;
        }
      }
      if ( DWORD2(v393) != 522 )
      {
        switch ( DWORD2(v393) )
        {
          case 0x23:
            MouseKeyFlags = 0LL;
            v371 = 0LL;
            v370 = *((_QWORD *)&v394 + 1);
            if ( !ThreadDesktopWindow
              || (v79 = *(_QWORD *)(ThreadDesktopWindow + 16), (struct tagTHREADINFO *)v79 == v8) )
            {
              if ( (unsigned int)MiPCheckMsgFilter(v39, DWORD2(v393), (unsigned int)v376, a5) )
              {
                if ( v361 )
LABEL_230:
                  xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
                goto LABEL_914;
              }
              goto LABEL_969;
            }
            if ( *(struct tagQ **)(v79 + 432) == *v362 )
            {
              if ( !v385 )
              {
                v48 = *(_QWORD *)(ThreadDesktopWindow + 16);
                LockExchangeW32Thread(v79, (__int64)&v420);
                goto LABEL_133;
              }
              goto LABEL_969;
            }
            goto LABEL_557;
          case 0xFE:
            goto LABEL_558;
          case 0xFF:
            v370 = *((_QWORD *)&v394 + 1);
            MouseKeyFlags = v394;
            v371 = v394;
            ThreadDesktopWindow = 0LL;
            v372 = 0LL;
            v134 = 0LL;
            v135 = 0LL;
            if ( *((_QWORD *)&v394 + 1) )
            {
              v136 = HMValidateHandle(*((__int64 *)&v394 + 1), 0x12u);
              v134 = 0LL;
              if ( v136 )
              {
                ThreadDesktopWindow = *(_QWORD *)(v136 + 24);
                v372 = ThreadDesktopWindow;
                v134 = ThreadDesktopWindow;
                v135 = ThreadDesktopWindow;
              }
            }
            if ( !v134 )
            {
              v137 = *v362;
              ThreadDesktopWindow = *((_QWORD *)*v362 + 15);
              v372 = ThreadDesktopWindow;
              v135 = ThreadDesktopWindow;
              if ( !ThreadDesktopWindow )
              {
                ThreadDesktopWindow = *((_QWORD *)v137 + 16);
                v372 = ThreadDesktopWindow;
                v135 = ThreadDesktopWindow;
                if ( !ThreadDesktopWindow )
                  goto LABEL_456;
              }
            }
            ThreadLockExchangeAlways(ThreadDesktopWindow, (__int64)&v408);
            v138 = v366;
            if ( (unsigned int)CheckCrossThreadInput(
                                 (struct tagWND *const)ThreadDesktopWindow,
                                 v366,
                                 &v373,
                                 &v361,
                                 v384) )
              goto LABEL_969;
            v139 = v373;
            if ( !v373 )
            {
              v140 = v364;
              goto LABEL_458;
            }
            if ( *(struct tagQ **)(*(_QWORD *)(v135 + 16) + 432LL) == *v362 )
            {
              v140 = v364;
              if ( (unsigned int)IsInsideMenuLoop((__int64)v364) )
              {
                v141 = *(_QWORD *)(**((_QWORD **)v140 + 76) + 8LL);
LABEL_452:
                if ( v141 )
                {
                  ThreadDesktopWindow = v141;
                  v372 = v141;
                  v139 = *(_QWORD *)(v141 + 16) != (_QWORD)v402;
                  v373 = v139;
                  ThreadLockExchangeAlways(v141, (__int64)&v408);
                }
              }
              else
              {
                v142 = *((_QWORD *)v140 + 84);
                if ( v142 )
                {
                  v141 = *(_QWORD *)(v142 + 16);
                  goto LABEL_452;
                }
              }
              if ( !v403 )
              {
                v403 = *(_QWORD *)(ThreadDesktopWindow + 16);
                LockExchangeW32Thread(v403, (__int64)&v432);
              }
LABEL_458:
              v26 = a5;
              if ( !v376 && a5 == -1 )
                goto LABEL_469;
              if ( v376 <= a5 )
              {
                if ( v77 >= v376 && v77 <= a5 )
                {
                  v143 = 1;
                  goto LABEL_468;
                }
              }
              else if ( v77 < a5 || v77 > v376 )
              {
                v143 = 1;
                goto LABEL_468;
              }
              v143 = 0;
LABEL_468:
              v11 = v360;
              v30 = v363;
              if ( !v143 )
              {
LABEL_46:
                v8 = v364;
                goto LABEL_51;
              }
LABEL_469:
              v144 = CheckPwndFilter(ThreadDesktopWindow, a3);
              v11 = v360;
              v30 = v363;
              if ( v144 )
              {
                if ( !v139 )
                {
                  if ( v361 )
                    xxxSkipSysMsgEx(v140, (struct tagQMSG *)&v392, 1u);
                  goto LABEL_915;
                }
                goto LABEL_969;
              }
              goto LABEL_46;
            }
LABEL_456:
            v82 = v361;
            goto LABEL_746;
          case 0x100:
          case 0x104:
            v389 = 1;
            if ( (*((_DWORD *)v8 + 122) & 0x400) != 0 && (int)CheckProcessForeground(v8) < 0 )
              goto LABEL_969;
            v80 = v394;
            v81 = (unsigned __int8)v394;
            v371 = (unsigned __int8)v394;
            v82 = v361;
            if ( v361 && (WORD2(v398) & 0x8000) != 0 )
              goto LABEL_265;
            v12 = (__int64 *)v362;
            if ( (unsigned __int8)v394 != 18LL )
              *((_DWORD *)*v362 + 99) &= 0xFFFFFFF3;
            v83 = *(_BYTE *)(*v12 + 240) & 0x10;
            if ( v81 != 44 )
              goto LABEL_252;
            if ( (*(_BYTE *)(*v12 + 240) & 0x10) != 0 )
            {
              v52 = (_DWORD *)((char *)v8 + 884);
              if ( (*((_DWORD *)v8 + 221) & 0x10) == 0 )
                goto LABEL_244;
            }
            else
            {
              v52 = (_DWORD *)((char *)v419 + 884);
            }
            if ( (*(_BYTE *)(*v12 + 240) & 0x10) == 0 && (*v52 & 0x20) == 0 )
            {
LABEL_244:
              xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
              if ( v83 || (DWORD2(v394) & 0xFF0000) == 0x10000LL )
              {
                v84 = *(struct tagWND **)(*v12 + 128);
                v85 = v84 == 0LL;
                if ( !v84 )
                  goto LABEL_250;
                v84 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(*(const struct tagWND **)(*v12 + 128));
              }
              else
              {
                v84 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)v8 + 57) + 8LL) + 24LL);
              }
              v85 = v84 == 0LL;
LABEL_250:
              v11 = v360;
              if ( !v85 )
              {
                v86 = HIDWORD(v399) != 1;
                *(_QWORD *)&v427 = *v407;
                *v407 = (__int64)&v427;
                *((_QWORD *)&v427 + 1) = v84;
                HMLockObject(v84);
                xxxSnapWindow(v84, v86);
                ThreadUnlock1(v88, v87, v89);
              }
              goto LABEL_33;
            }
LABEL_252:
            if ( *(_DWORD *)(SGDGetUserSessionState(v52) + 15952)
              && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
            {
              v90 = *(_BYTE *)(*v12 + 240);
              v91 = v81 | 0x400;
              if ( (v90 & 0x10) == 0 )
                v91 = v81;
              v92 = v91 | 0x200;
              if ( (v90 & 4) == 0 )
                v92 = v91;
              v93 = v92;
              LODWORD(v93) = v92 | 0x100;
              if ( (v90 & 1) == 0 )
                v93 = v92;
              v94 = (__int64 *)HotKeyToWindow(v93);
              if ( v94 )
              {
                if ( *((_QWORD *)v8 + 57) == *(_QWORD *)(v94[2] + 456) )
                {
                  PostTransformableMessage(*(struct tagWND **)(*v12 + 128), 0x112u, 0xF150uLL, *v94, 0);
                  xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
                  v11 = v360;
                  goto LABEL_33;
                }
              }
            }
            v80 = v394;
LABEL_265:
            if ( v81 == 231 )
            {
              *((_WORD *)v8 + 441) = WORD1(v80);
              v80 = 231LL;
            }
LABEL_268:
            v95 = (unsigned __int8)v80;
            v371 = (unsigned __int8)v80;
            if ( (unsigned __int8)v80 == 231LL )
              v80 = 231LL;
            *(_QWORD *)&v394 = v80;
            if ( v82 && (WORD2(v398) & 0x8000) != 0 || !*(_DWORD *)(SGDGetUserSessionState(231LL) + 13936) )
            {
              v12 = (__int64 *)v362;
            }
            else
            {
              AppImeCompatFlags = GetAppImeCompatFlags(0LL);
              v12 = (__int64 *)v362;
              if ( (AppImeCompatFlags & 0x800000) == 0 && BYTE10(v394) == 41 )
              {
                if ( v82 )
                {
                  v97 = *v362;
                  if ( (*((_BYTE *)*v362 + 240) & 0x15) == 0
                    && (*((_BYTE *)v97 + 258) & 0x40) == 0
                    && (*((_BYTE *)v97 + 259) & 1) == 0 )
                  {
                    v98 = (_QWORD *)*((_QWORD *)v97 + 15);
                    v372 = (__int64)v98;
                    v99 = v98;
                    v100 = v98;
                    if ( !v98 )
                    {
                      v98 = (_QWORD *)*((_QWORD *)v97 + 16);
                      v372 = (__int64)v98;
                      v99 = v98;
                      v100 = v98;
                    }
                    if ( !v99 || (struct tagTHREADINFO *)v100[2] == v364 )
                    {
                      v8 = v364;
                      xxxSkipSysMsgEx(v364, (struct tagQMSG *)&v392, 1u);
                      v11 = v360;
                      if ( !v389 && v99 )
                      {
                        v465 = *v98;
                        v466 = 80;
                        v467 = 0LL;
                        v468 = 0LL;
                        v469 = 0;
                        xxxCallCtfHook(3, 0, 1LL, (__int128 *)&v465);
                      }
                      goto LABEL_33;
                    }
                  }
                }
              }
            }
            v101 = v359;
            if ( v95 == 121 )
            {
              v101 = v359 | 4;
              v359 |= 4u;
            }
            if ( (*(_BYTE *)(*v12 + 240) & 4) != 0 && v95 == 27 )
              v359 = v101 | 4;
            v8 = v364;
            if ( (*((_DWORD *)v364 + 122) & 8) == 0 )
              *((_QWORD *)&v394 + 1) &= ~0x2000000uLL;
LABEL_295:
            MouseKeyFlags = (unsigned __int8)v394;
            v371 = (unsigned __int8)v394;
            v102 = *v12;
            ThreadDesktopWindow = *(_QWORD *)(*v12 + 120);
            v372 = ThreadDesktopWindow;
            v103 = v359;
            if ( !ThreadDesktopWindow )
            {
              ThreadDesktopWindow = *(_QWORD *)(v102 + 128);
              v372 = ThreadDesktopWindow;
              if ( !ThreadDesktopWindow )
                goto LABEL_748;
              if ( v359 - 256 <= 3 )
              {
                v103 = v359 + 4;
                v359 += 4;
              }
            }
            ThreadLockExchangeAlways(ThreadDesktopWindow, (__int64)&v408);
            v104 = *(struct tagQ ***)(ThreadDesktopWindow + 16);
            v105 = v104 != (struct tagQ **)v402;
            v373 = v105;
            if ( v104 == (struct tagQ **)v411 )
              goto LABEL_309;
            if ( v104[54] != *v362 )
              goto LABEL_747;
            if ( (unsigned int)IsInsideMenuLoop((__int64)v8) )
            {
              v107 = *(_QWORD *)(**((_QWORD **)v8 + 76) + 8LL);
            }
            else
            {
              v108 = *((_QWORD *)v8 + 84);
              if ( !v108 )
                goto LABEL_307;
              v107 = *(_QWORD *)(v108 + 16);
            }
            if ( v107 )
            {
              ThreadDesktopWindow = v107;
              v372 = v107;
              v105 = *(_QWORD *)(v107 + 16) != v106;
              v373 = v105;
              ThreadLockExchangeAlways(v107, (__int64)&v408);
            }
LABEL_307:
            if ( !v405 )
            {
              v405 = *(_QWORD *)(ThreadDesktopWindow + 16);
              LockExchangeW32Thread(v405, (__int64)&v423);
            }
LABEL_309:
            v26 = a5;
            if ( !v376 && a5 == -1 )
              goto LABEL_319;
            if ( v376 > a5 )
            {
              if ( v103 < a5 || v103 > v376 )
              {
                v109 = 1;
                goto LABEL_318;
              }
LABEL_317:
              v109 = 0;
              goto LABEL_318;
            }
            if ( v103 < v376 )
              goto LABEL_317;
            v109 = 1;
            if ( v103 > a5 )
              goto LABEL_317;
LABEL_318:
            v30 = v363;
            if ( !v109 )
              goto LABEL_50;
LABEL_319:
            v110 = CheckPwndFilter(ThreadDesktopWindow, a3);
            v30 = v363;
            if ( !v110 )
              goto LABEL_50;
            if ( v105 )
              goto LABEL_969;
            if ( !v82 )
              goto LABEL_337;
            if ( (WORD2(v398) & 0x8000) != 0 )
            {
              v111 = v362;
LABEL_324:
              v112 = v366;
              goto LABEL_325;
            }
            if ( !(unsigned int)IsInsideMenuLoop((__int64)v8) )
            {
              if ( MouseKeyFlags == 93 && v103 == 257 )
                PostTransformableMessage(
                  (struct tagWND *)ThreadDesktopWindow,
                  0x7Bu,
                  *(_QWORD *)ThreadDesktopWindow,
                  -1LL,
                  0);
              if ( MouseKeyFlags == 112 && v103 == 256 )
                PostMessage((struct tagWND *)ThreadDesktopWindow, 0x4Du, 0LL, 0LL);
            }
LABEL_337:
            if ( MouseKeyFlags == 16 )
            {
              v113 = DWORD2(v394) & 0x1000000;
              if ( !v389 )
              {
                v114 = 1;
                if ( (DWORD2(v394) & 0x1000000) == 0 )
                  v114 = 4;
                if ( (*((_BYTE *)*v362 + 276) & (unsigned __int8)v114) != 0
                  && (unsigned int)IsDesktopApp(*((_QWORD *)v8 + 53), 4LL)
                  && (*((_DWORD *)v8 + 122) & 8) == 0 )
                {
                  *(_QWORD *)&v394 = (v113 != 0) + 160LL;
                  xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
                  v12 = (__int64 *)v362;
                  v11 = v360;
                  goto LABEL_33;
                }
              }
            }
            v111 = v362;
            v406 = *((unsigned __int8 *)*v362 + (MouseKeyFlags >> 2) + 236) & (1 << (2 * (MouseKeyFlags & 3)));
            if ( !v406 )
              goto LABEL_324;
            v112 = v366;
            if ( !v82 )
              goto LABEL_350;
            if ( (unsigned __int64)v366 > 1 )
              *((_QWORD *)v366 + 5) |= 0x40000000uLL;
LABEL_325:
            if ( v82 )
            {
              if ( (WORD2(v398) & 0x8000) != 0
                || (unsigned __int64)v112 <= 1
                || (*((_DWORD *)v8 + 318) & 0x10000000) == 0 )
              {
                xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
              }
              else
              {
                v387 = xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 0);
              }
            }
LABEL_350:
            v370 = *((_QWORD *)&v394 + 1);
            MouseKeyFlags = v394;
            v371 = v394;
            if ( v406 )
              v370 = *((_QWORD *)&v394 + 1) | 0x40000000LL;
            if ( v103 == 257 || v103 == 261 )
              v370 |= 0x80000000uLL;
            v115 = *v111;
            if ( (*((_BYTE *)*v111 + 240) & 0x10) != 0 )
              v370 |= 0x20000000uLL;
            v116 = *((_QWORD *)v8 + 76);
            if ( !v116 || (v57 = (*(_DWORD *)(v116 + 8) & 1) == 0, v117 = 1, v57) )
              v117 = 0;
            if ( v117 )
              v370 |= 0x10000000uLL;
            if ( (*((_DWORD *)v115 + 99) & 0x4000) != 0 )
              v370 |= 0x8000000uLL;
            if ( !v415 && !*(_QWORD *)(SGDGetUserSessionState(v115) + 12728) || (WORD2(v398) & 0x8000) != 0 )
              goto LABEL_382;
            if ( !v82 )
              goto LABEL_430;
            v118 = *((_QWORD *)v8 + 76);
            if ( !v118 || (v57 = (*(_DWORD *)(v118 + 8) & 1) == 0, v119 = 1, v57) )
              v119 = 0;
            if ( v119 || (*((_DWORD *)v8 + 122) & 0x2000000) != 0 )
            {
LABEL_382:
              if ( !v82 )
                goto LABEL_430;
              if ( (WORD2(v398) & 0x8000) != 0 )
              {
                v122 = v382;
                if ( (DWORD1(v398) & 0x4000000) != 0 )
                  v122 = 2;
                v382 = v122;
              }
            }
            else
            {
              v120 = MouseKeyFlags;
              if ( MouseKeyFlags == 231 )
                v120 = 231;
              *((_QWORD *)v8 + 161) = *((_QWORD *)&v399 + 1);
              if ( v387 )
                PushW32ThreadLock((__int64)v387, &v440, (__int64)FreeQEntry);
              v382 = xxxImmProcessKey(*v362, (struct tagWND *)ThreadDesktopWindow, v103, v120, v370);
              if ( (v382 & 0x11) != 0 )
              {
                if ( v387 )
                {
                  PopAndFreeAlwaysW32ThreadLock((__int64)&v440);
                  v387 = 0LL;
                }
                goto LABEL_747;
              }
              if ( v387 )
              {
                v121 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)(v121 + 16) = v440;
                ThreadDesktopWindow = v372;
                MouseKeyFlags = v371;
                v82 = v361;
              }
            }
            if ( v82 )
            {
              v381 = 1;
              v123 = 0;
              if ( (WORD2(v398) & 0x8000) == 0 )
              {
                v124 = *((_QWORD *)*v362 + 51);
                *((_QWORD *)*v362 + 51) = *((_QWORD *)&v396 + 1);
                v125 = v382 & 2;
                *((_QWORD *)v8 + 161) = *((_QWORD *)&v399 + 1);
                *(_QWORD *)&v443 = 0LL;
                v444 = 0LL;
                *((_QWORD *)&v443 + 1) = v370;
                if ( (unsigned int)Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage()
                  && (*(_DWORD *)(*((_QWORD *)v8 + 53) + 288LL) & 0x10) != 0 )
                {
                  if ( *((_DWORD *)v8 + 322) != 1 || (v126 = 1, (*((_DWORD *)v8 + 323) & 5) == 0) )
                    v126 = 0;
                  if ( v126
                    && *((PVOID *)v8 + 57) != grpdeskLogon
                    && (!(unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() || CheckImEnabled()) )
                  {
                    LOWORD(v444) = 1;
                  }
                }
                if ( v387 )
                  PushW32ThreadLock((__int64)v387, &v440, (__int64)FreeQEntry);
                v123 = xxxCallCtfHook(2, v125, MouseKeyFlags, &v443);
                if ( (BYTE2(v444) & 1) != 0 )
                {
                  if ( (*(_DWORD *)(*((_QWORD *)v8 + 53) + 816LL) & 0x30) == 0x10 )
                    WORD1(v444) |= 0x10u;
                  ProcessTranslatedChar((struct _CHARHOOKSTRUCT *)&v443);
                }
                v127 = v362;
                *((_QWORD *)*v362 + 51) = v124;
                v128 = v387;
                if ( v387 )
                {
                  if ( (unsigned int)(v123 - 2) <= 1
                    && (*((_DWORD *)v8 + 318) & 0x20000000) == 0
                    && AllocQEntryEx((__int64)*v127 + 24, v387, 2) )
                  {
                    v129 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
                    v130 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                        && LOWORD(WPP_GLOBAL_Control->DeviceType);
                    if ( v129 || v130 )
                    {
                      v12 = (__int64 *)v362;
                      WPP_RECORDER_AND_TRACE_SF_qqq(
                        (__int64)WPP_GLOBAL_Control->AttachedDevice,
                        v129,
                        v130,
                        (__int64)gFullLog,
                        5u,
                        0x12u,
                        0x24u,
                        (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids);
                    }
                    else
                    {
                      v12 = (__int64 *)v362;
                    }
                    v131 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                    *(_QWORD *)(v131 + 16) = v440;
                    *(_QWORD *)(*v12 + 88) = v128;
                    if ( v123 == 2 )
                    {
                      v11 = 1;
                      v360 = 1;
                    }
                    else
                    {
                      v11 = v360;
                      if ( v123 == 3 )
                        v11 = 2;
                      v360 = v11;
                    }
                    DeferSysPeekMsg(v8, v11);
                    v387 = 0LL;
                    v30 = v363;
                    goto LABEL_52;
                  }
                  PopAndFreeAlwaysW32ThreadLock((__int64)&v440);
                  v387 = 0LL;
                }
              }
              if ( v123 )
                goto LABEL_747;
            }
LABEL_430:
            v132 = v388;
            if ( ((*((_BYTE *)v8 + 680) | *(_BYTE *)(**v388 + 16)) & 8) == 0 )
              goto LABEL_435;
            v381 = 1;
            v133 = 3LL;
            if ( v82 )
              v133 = 0LL;
            if ( !(unsigned int)xxxCallHook(v133, MouseKeyFlags, v370, 2LL) )
            {
              v132 = v388;
LABEL_435:
              if ( v381 && v82 && ((*((_BYTE *)v8 + 680) | *(_BYTE *)(**v132 + 16)) & 0x40) != 0 )
                xxxCallHook(7LL, MouseKeyFlags, v370, 5LL);
              goto LABEL_914;
            }
            break;
          case 0x101:
          case 0x105:
            v80 = v394;
            v82 = v361;
            goto LABEL_268;
          case 0x102:
            v82 = v361;
            v12 = (__int64 *)v362;
            goto LABEL_295;
          case 0x119:
          case 0x11B:
            goto LABEL_551;
          default:
            goto LABEL_576;
        }
        goto LABEL_747;
      }
LABEL_492:
      if ( (*((_DWORD *)v8 + 122) & 0x400) != 0 && (int)CheckProcessForeground(v8) < 0 )
        goto LABEL_969;
      if ( (unsigned int)IsInsideMenuLoop((__int64)v8) )
        goto LABEL_556;
      if ( (DWORD1(v398) & 0x100000) != 0 )
      {
        v147 = v362;
        ThreadDesktopWindow = *((_QWORD *)*v362 + 15);
        v372 = ThreadDesktopWindow;
      }
      else
      {
        v148 = ThreadDesktopWindow
            && (unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)ThreadDesktopWindow);
        if ( v148 )
        {
          if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)ThreadDesktopWindow) )
            goto LABEL_556;
        }
        else
        {
          ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
        }
        v461 = 0LL;
        v462 = 0LL;
        ThreadLock(ThreadDesktopWindow, &v461);
        v149 = (unsigned int)xxxDCEWindowHitTest(
                               (struct tagWND *)ThreadDesktopWindow,
                               512,
                               v394,
                               *((__int64 *)&v394 + 1),
                               (struct tagPOINT)v397,
                               &v367,
                               8 * (unsigned int)v148 + 17);
        ThreadDesktopWindow = HMValidateHandleNoSecure(v149, 1);
        v372 = ThreadDesktopWindow;
        v150 = (struct tagWND *)HMValidateHandleNoSecure(v149, 1);
        InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)&v392, (const struct tagPOINT *)&v397, v150);
        ThreadUnlock1(v152, v151, v153);
        v147 = v362;
      }
      if ( !ThreadDesktopWindow )
      {
LABEL_556:
        MouseKeyFlags = v371;
LABEL_557:
        v82 = v361;
        goto LABEL_747;
      }
      ThreadLockExchangeAlways(ThreadDesktopWindow, (__int64)&v408);
      v154 = *(_QWORD *)(ThreadDesktopWindow + 16);
      v155 = v154 != (_QWORD)v402;
      v373 = v155;
      if ( (struct tagTHREADINFO *)v154 != v411 )
      {
        if ( *(struct tagQ **)(v154 + 432) != *v147 )
          goto LABEL_556;
        if ( !v405 )
        {
          v405 = v154;
          LockExchangeW32Thread(v154, (__int64)&v423);
        }
      }
      v156 = MiPCheckMsgFilter(v39, v77, (unsigned int)v376, a5);
      v30 = v363;
      if ( !v156 )
        goto LABEL_50;
      v157 = CheckPwndFilter(ThreadDesktopWindow, a3);
      v30 = v363;
      if ( !v157 )
        goto LABEL_50;
      if ( v155 )
        goto LABEL_969;
      if ( !v39 || !(unsigned int)IsMiPActive((__int64)v8, v39) )
      {
        v82 = v361;
        goto LABEL_534;
      }
      v158 = *(_DWORD *)(v39 + 100);
      if ( (v158 & 0x400) == 0 )
        break;
      memset_0(v499, 0, sizeof(v499));
      if ( !*(_QWORD *)(ThreadDesktopWindow + 272) )
        *(_DWORD *)(v39 + 100) = v158 & 0xFFFFEFFF;
      v82 = v361;
      if ( !ShouldGenerateMipMessage(v8, (const struct tagQMSG *)v39, (struct tagWND *)ThreadDesktopWindow, v361)
        || !(unsigned int)GeneratePointerMessageFromMouse(
                            (struct tagQMSG *)v499,
                            v359,
                            (struct tagQMSG *)v39,
                            (struct tagWND *)ThreadDesktopWindow,
                            v82) )
      {
        if ( !v82 )
          goto LABEL_536;
        *(_DWORD *)(v39 + 100) &= ~0x400u;
        goto LABEL_534;
      }
      v392 = v499[0];
      v393 = v499[1];
      v394 = v499[2];
      v395 = v499[3];
      v396 = v499[4];
      v397 = v499[5];
      v398 = v499[6];
      v399 = v499[7];
      v400 = v499[8];
      v401 = v499[9];
      v34 = 1;
      v378 = 1;
      v380 = 1;
      if ( v82 )
        *(_DWORD *)(v39 + 100) &= ~0x400u;
LABEL_865:
      v76 = DWORD2(v393);
LABEL_866:
      if ( ((DWORD2(v399) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v399) != 50 )
      {
        v359 = v76;
        v370 = *((_QWORD *)&v394 + 1);
        v371 = v394;
LABEL_889:
        if ( v82 )
        {
          if ( *((_QWORD *)v8 + 76) )
            v303 = 0;
          else
            v303 = IsMiPEnabledForThread((__int64)v8);
          if ( v303 && v34 )
          {
            v304 = 0LL;
            if ( ThreadDesktopWindow )
              v304 = *(_QWORD *)ThreadDesktopWindow;
            *(_QWORD *)(*((_QWORD *)v8 + 169) + 48LL) = v304;
            if ( (*(_DWORD *)(*((_QWORD *)v8 + 169) + 36LL) & 0x400000) != 0
              && !(unsigned int)IsCompositionInputWindow((const struct tagWND *)ThreadDesktopWindow, v26, v30, v27) )
            {
              *(_DWORD *)(*((_QWORD *)v8 + 169) + 36LL) &= ~0x400000u;
            }
            MiPWindowFlags = GetMiPWindowFlags((struct tagWND *)ThreadDesktopWindow);
            SetMiPWindowFlags((struct tagWND *)ThreadDesktopWindow, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
            if ( ((DWORD2(v393) - 578) & 0xFFFFFFFB) != 0 )
            {
              if ( ((DWORD2(v393) - 579) & 0xFFFFFFFB) == 0 )
                **((_DWORD **)v8 + 169) &= ~8u;
            }
            else
            {
              v306 = 0;
              if ( DWORD2(v393) == 578 )
                v306 = 8;
              **((_DWORD **)v8 + 169) = v306 | **((_DWORD **)v8 + 169) & 0xFFFFFFF7;
            }
          }
          else
          {
            xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
          }
        }
        if ( (unsigned int)IsPointerMessageTouchpad(v8, *((unsigned __int64 *)&v394 + 1), v34) )
        {
          if ( !v82 && !(unsigned int)IsPTPAllowedOnThread(v8, DWORD2(v393), v394) )
            xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
          v307 = v370;
          if ( v76 == 595 )
            v307 = -1LL;
          v370 = v307;
        }
        goto LABEL_914;
      }
      EtwTraceBeginPointerMessageRetrieve(v39, (unsigned __int16)v394, v76);
      v502[0] = *(_OWORD *)v39;
      v502[1] = *(_OWORD *)(v39 + 16);
      v502[2] = *(_OWORD *)(v39 + 32);
      v502[3] = *(_OWORD *)(v39 + 48);
      v502[4] = *(_OWORD *)(v39 + 64);
      v502[5] = *(_OWORD *)(v39 + 80);
      v502[6] = *(_OWORD *)(v39 + 96);
      v502[7] = *(_OWORD *)(v39 + 112);
      v502[8] = *(_OWORD *)(v39 + 128);
      v502[9] = *(_OWORD *)(v39 + 144);
      v297 = (unsigned int)xxxRetrievePointerInputMessage(
                             (int)v8,
                             a3,
                             v376,
                             a5,
                             1,
                             0,
                             &v361,
                             (struct tagQMSG *)v39,
                             (__int64)&v372,
                             (__int64)&v359,
                             (__int64)&v371,
                             (__int64)&v370,
                             &v373,
                             v384);
      InputTraceLogging::Pointer::RetrieveMessage(v502, 0LL, v297);
      EtwTraceEndPointerMessageRetrieve(v502, (unsigned __int16)v394, DWORD2(v393));
      ThreadDesktopWindow = v372;
      if ( v372 )
        ThreadLockExchange(v372, (__int64)&v408);
      v299 = v297 - 1;
      if ( !v299 )
      {
        v76 = v359;
        v82 = v361;
        goto LABEL_889;
      }
      v300 = v299 - 1;
      if ( !v300 )
      {
        if ( v373 )
        {
          v417 = *(_QWORD *)(ThreadDesktopWindow + 16);
          LockExchangeW32Thread(v417, (__int64)&v429);
          goto LABEL_132;
        }
LABEL_969:
        v8 = v364;
        goto LABEL_132;
      }
      v301 = v300 - 1;
      if ( !v301 )
      {
        xxxDefPointerProc(v298, DWORD2(v393), v394, *((_QWORD *)&v394 + 1));
        *v384 = 0LL;
        MouseKeyFlags = v371;
        v82 = v361;
        goto LABEL_747;
      }
      *v384 = 0LL;
      if ( v301 != 1 )
      {
        MouseKeyFlags = v371;
        v82 = v361;
        goto LABEL_747;
      }
      v30 = v363;
LABEL_50:
      v11 = v360;
LABEL_51:
      v12 = (__int64 *)v362;
    }
    v82 = v361;
    if ( !v361 )
      goto LABEL_536;
    if ( (unsigned int)IsMiPMouseMessage(*(unsigned int *)(v39 + 24)) )
    {
      if ( (unsigned int)IsGenuineMouseInput(v39 + 120) )
      {
        v159 = (_DWORD *)*((_QWORD *)v8 + 169);
        if ( v159 )
        {
          if ( (*v159 & 2) == 0 && (*v159 & 4) == 0 )
          {
            xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
            v12 = (__int64 *)v362;
            v11 = v360;
            goto LABEL_33;
          }
        }
      }
      v160 = (_DWORD *)*((_QWORD *)v8 + 169);
      if ( v160 )
        *v160 &= ~2u;
    }
LABEL_534:
    if ( v82 )
      xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
LABEL_536:
    v161 = GetMouseKeyFlags(*v147);
    MouseKeyFlags = v394 | v161;
    v371 = MouseKeyFlags;
    v369.x = SWORD4(v394);
    v369.y = SWORD5(v394);
    PhysicalToLogicalDPIPointWithHitTest(&v369, &v369, 0LL, (const struct tagWND *)ThreadDesktopWindow);
    v370 = (LOWORD(v369.y) << 16) | LOWORD(v369.x);
    *(struct tagPOINT *)((char *)&v395 + 4) = v369;
    v503[0] = (__int64)v369;
    v503[1] = *(_QWORD *)ThreadDesktopWindow;
    LODWORD(v504) = 0;
    *((_QWORD *)&v504 + 1) = *((_QWORD *)&v396 + 1);
    LODWORD(v505) = v394;
    if ( !v82 )
      break;
    v377 = 1;
    v162 = v359;
    if ( !(unsigned int)xxxCallCtfHook(7, 0, v359, (__int128 *)v503) )
      goto LABEL_540;
LABEL_747:
    v103 = v359;
LABEL_748:
    xxxSkipSysMsgEx(v8, (struct tagQMSG *)&v392, 1u);
    v239 = v388;
    if ( v377 )
    {
      v240 = (_DWORD *)((char *)v8 + 680);
      v241 = **v388;
      v26 = (unsigned int)(*((_DWORD *)v8 + 170) | *(_DWORD *)(v241 + 16));
      if ( ((*((_BYTE *)v8 + 680) | *(_BYTE *)(v241 + 16)) & 0x40) != 0 )
        xxxCallHook(6LL, v103, (__int64)v503, 5LL);
      v377 = 0;
    }
    else
    {
      v240 = (_DWORD *)((char *)v419 + 680);
    }
    if ( v381 )
    {
      v302 = **v239;
      v26 = (unsigned int)(*v240 | *(_DWORD *)(v302 + 16));
      if ( ((*(_BYTE *)v240 | *(_BYTE *)(v302 + 16)) & 0x40) != 0 )
        xxxCallHook(7LL, MouseKeyFlags, v370, 5LL);
      v381 = 0;
    }
    v12 = (__int64 *)v362;
    v11 = v360;
    v30 = v363;
    if ( v82 )
      goto LABEL_33;
  }
  v162 = v359;
LABEL_540:
  v163 = v388;
  v164 = **v388;
  v165 = *(_DWORD *)(v164 + 16);
  v390 = (char *)v8 + 680;
  if ( ((*((_DWORD *)v8 + 170) | v165) & 0x100) != 0 )
  {
    v377 = 1;
    if ( xxxCallMouseHook(v162, (__int64)v503, v82) )
      goto LABEL_747;
  }
  if ( (unsigned int)PsGetWin32KFilterSet(v164) != 5 )
    goto LABEL_547;
  v166 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
  v374 = 0;
  v374 = *(_QWORD *)(v166 + 248) != 0LL;
  v82 = v361;
  v162 = v359;
  if ( v374 && xxxClientCallLocalMouseHooks(v359, v503, (unsigned int)v361) )
  {
    MouseKeyFlags = v371;
    goto LABEL_747;
  }
  ThreadDesktopWindow = v372;
LABEL_547:
  if ( v377 && v82 && ((*v390 | *(_BYTE *)(**v163 + 16)) & 0x40) != 0 )
    xxxCallHook(6LL, v162, (__int64)v503, 5LL);
LABEL_914:
  v138 = v366;
LABEL_915:
  v308 = v364;
  if ( *(_QWORD *)((char *)v364 + 764) != *(_QWORD *)((char *)&v395 + 4) )
    *((_DWORD *)v364 + 122) |= 0x100000u;
  if ( (unsigned __int64)v138 > 1 && ((BYTE4(v398) & 0x20) != 0 || (DWORD1(v398) & 0x8000000) != 0) )
  {
    if ( *((_DWORD *)v138 + 6) == 512 )
    {
      v309 = 0LL;
      if ( ThreadDesktopWindow )
        v309 = *(_QWORD *)ThreadDesktopWindow;
      *((_QWORD *)v138 + 2) = v309;
      *((_DWORD *)v138 + 25) |= 0x200u;
    }
    *((_QWORD *)v138 + 8) = v370;
  }
  *(_QWORD *)((char *)v308 + 764) = *(_QWORD *)((char *)&v395 + 4);
  *((_DWORD *)v308 + 193) = *(_DWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 288LL);
  *((_QWORD *)v308 + 97) = v397;
  *((_DWORD *)v308 + 142) = v395;
  v310 = v362;
  *((_QWORD *)*v362 + 51) = *((_QWORD *)&v396 + 1);
  *((_QWORD *)*v310 + 10) = 1LL;
  *((_QWORD *)v308 + 72) = 1LL;
  *((_QWORD *)v308 + 161) = *((_QWORD *)&v399 + 1);
  *((_DWORD *)v308 + 340) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v311 = *((_DWORD *)v402 + 318) | 0x20000;
  if ( *((_DWORD *)v308 + 323) != 1 )
    v311 = *((_DWORD *)v402 + 318) & 0xFFFDFFFF;
  *((_DWORD *)v402 + 318) = v311;
  v426 = (char *)v308 + 448;
  **((_DWORD **)v308 + 56) &= ~8u;
  **v438 &= 0x7FFFFFFFuLL;
  v312 = v378;
  v313 = v361;
  if ( v361 )
  {
    v314 = **v438;
    if ( (BYTE4(v398) & 1) != 0 )
      v315 = v314 | 0x1000;
    else
      v315 = v314 & 0xFFFFFFFFFFFFEFFFuLL;
    **v438 = v315;
  }
  v316 = v359;
  TransferWakeBit((__int64)v308, v359);
  if ( !*((_DWORD *)*v362 + 10)
    && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v317, (__int64)v362, v318, v319) + 58) + 56LL) )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)v426 + 8LL), (*((_DWORD *)*v362 + 99) >> 4) & 2 | 0xFFFF83F8);
    v316 = v359;
    v313 = v361;
  }
  if ( v313 )
  {
    if ( v312 )
    {
      v320 = (_DWORD *)*((_QWORD *)v308 + 169);
      if ( v320 )
      {
        if ( (*v320 & 1) != 0 && (*v320 & 4) != 0 )
          SetMiPWakeBit(v308);
      }
    }
  }
  v321 = v439;
  *(_QWORD *)v439 = *(_QWORD *)v372;
  *((_DWORD *)v321 + 2) = v316;
  v322 = v371;
  if ( (v382 & 2) != 0 )
    v322 = 229LL;
  *((_QWORD *)v321 + 2) = v322;
  *((_QWORD *)v321 + 3) = v370;
  *((_DWORD *)v321 + 8) = v395;
  *(_QWORD *)((char *)v321 + 36) = *(_QWORD *)((char *)&v395 + 4);
  InputTraceLogging::Delivery::ScanSysQueue((const struct tagQMSG *)&v392, v321, v308, v313 != 0);
  if ( v313 )
  {
    EtwTraceInputProcessDelay(v308);
    *((_DWORD *)*v362 + 104) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v313 = v361;
  }
  EtwTraceRetrieveInputMessage(v439, v313);
  v323 = 0LL;
  v324 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v324 )
    v323 = *v324;
  *(_QWORD *)(v323 + 16) = v429;
  if ( v430 )
    v431();
  v325 = 0LL;
  v326 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v326 )
    v325 = *v326;
  *(_QWORD *)(v325 + 16) = v432;
  if ( v433 )
    v434();
  v327 = 0LL;
  v328 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v328 )
    v327 = *v328;
  *(_QWORD *)(v327 + 16) = v412;
  if ( v413 )
    v414();
  v329 = 0LL;
  v330 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v330 )
    v329 = *v330;
  *(_QWORD *)(v329 + 16) = v420;
  if ( v421 )
    v422();
  v331 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v331 )
    v10 = *v331;
  *(_QWORD *)(v10 + 16) = v423;
  v334 = v424;
  if ( v424 )
    v425();
  ThreadUnlock1(v334, v332, v333);
  if ( v368 )
    *(_DWORD *)(gptiCurrent + 1276LL) &= ~0x20u;
  return 1LL;
}
