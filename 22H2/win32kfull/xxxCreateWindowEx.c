/*
 * XREFs of xxxCreateWindowEx @ 0x1C0035320
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C006224C (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C006B42C (xxxCreateWindowStation.c)
 *     NtUserCreateWindowEx @ 0x1C0091DF0 (NtUserCreateWindowEx.c)
 *     xxxCsDdeInitialize @ 0x1C00AC42C (xxxCsDdeInitialize.c)
 *     xxxNextWindow @ 0x1C01CA504 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C0218BF0 (xxxMNOpenHierarchy.c)
 *     xxxAddShadow @ 0x1C0221654 (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1C000F69C (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     UserGetLastError @ 0x1C00164F8 (UserGetLastError.c)
 *     DereferenceClass @ 0x1C001F550 (DereferenceClass.c)
 *     xxxClientLoadMenu @ 0x1C001F60C (xxxClientLoadMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C001FB94 (RtlInitUnicodeStringOrId.c)
 *     ReferenceClass @ 0x1C0020000 (ReferenceClass.c)
 *     xxxCreateClassSmIcon @ 0x1C0020AF8 (xxxCreateClassSmIcon.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00255B8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C00255E4 (GetNonChildAncestor.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0026648 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C002878C (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C003120C (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00426F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     zzzAttachThreadInput @ 0x1C005BB64 (zzzAttachThreadInput.c)
 *     _DestroyMenu @ 0x1C0061170 (_DestroyMenu.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C006224C (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNLookUpItem @ 0x1C006482C (MNLookUpItem.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ @ 0x1C0064DD8 (--B-$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00652F4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxGetSystemMenu @ 0x1C0067088 (xxxGetSystemMenu.c)
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0095A30 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     xxxCheckFullScreen @ 0x1C009687C (xxxCheckFullScreen.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C0099F1C (xxxClientAllocWindowClassExtraBytes.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C009AF94 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     RECTFromSIZERECT @ 0x1C009C78C (RECTFromSIZERECT.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetAppCompatFlags @ 0x1C00A4B80 (GetAppCompatFlags.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1C00A7840 (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     IsValidBand @ 0x1C00A8534 (IsValidBand.c)
 *     RtlInitLargeAnsiString @ 0x1C00BD434 (RtlInitLargeAnsiString.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00C3EC4 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     xxxSendSizeMessage @ 0x1C00C3F18 (xxxSendSizeMessage.c)
 *     SetMinimize @ 0x1C00C4434 (SetMinimize.c)
 *     GetMonitorRect @ 0x1C00C46EC (GetMonitorRect.c)
 *     ValidateOwnerDepth @ 0x1C00C8100 (ValidateOwnerDepth.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     RegisterIconTitleClass @ 0x1C00C9744 (RegisterIconTitleClass.c)
 *     RegisterDefaultClass @ 0x1C00CC1BC (RegisterDefaultClass.c)
 *     _InnerGetClassPtr @ 0x1C00CC96C (_InnerGetClassPtr.c)
 *     DwmAsyncOwnerChange @ 0x1C00CCF70 (DwmAsyncOwnerChange.c)
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     IsTopLevelParent @ 0x1C00CEF88 (IsTopLevelParent.c)
 *     ValidateNewParent @ 0x1C00CEFDC (ValidateNewParent.c)
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     CalcWindowFullScreen @ 0x1C00CF81C (CalcWindowFullScreen.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D003C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C00D0160 (_MonitorFromRect.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C00D1B64 (UpdateTopLevelWindowDPITransform.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00D1BD4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00D1C18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00EAEF8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     GetThreadDesktopWindow @ 0x1C00EC080 (GetThreadDesktopWindow.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     SetTiledRect @ 0x1C00ECFB8 (SetTiledRect.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DwmChildRectChange @ 0x1C00EDE40 (DwmChildRectChange.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     LinkWindow @ 0x1C00F2760 (LinkWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     PWInsertAfter @ 0x1C00F3840 (PWInsertAfter.c)
 *     UnlinkWindow @ 0x1C010B5E0 (UnlinkWindow.c)
 *     GetInheritedMonitor @ 0x1C010E880 (GetInheritedMonitor.c)
 *     GetStyleWindow @ 0x1C0119070 (GetStyleWindow.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C011BC6C (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     GetRedirectionBitmap @ 0x1C011DD30 (GetRedirectionBitmap.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     xxxLoadHmodIndex @ 0x1C01223C0 (xxxLoadHmodIndex.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C012A800 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0138C20 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ClrWF @ 0x1C0138C5C (ClrWF.c)
 *     ConstrainWindowSIZERECT @ 0x1C0138CBC (ConstrainWindowSIZERECT.c)
 *     SetWF @ 0x1C0138D3C (SetWF.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139CA0 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A2D8 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C013A374 (--4-$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A654 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A674 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ClassUnlock @ 0x1C013A6AC (ClassUnlock.c)
 *     ??9?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C013BF3C (--9-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxSendTransformableMessage @ 0x1C013C8C8 (xxxSendTransformableMessage.c)
 *     Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage @ 0x1C013CAD8 (Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage @ 0x1C013CB2C (Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsage @ 0x1C013CB80 (Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsage.c)
 *     xxxAdjustSize @ 0x1C013CBD4 (xxxAdjustSize.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C013D10C (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     xxxDeleteMenu @ 0x1C013DB68 (xxxDeleteMenu.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4?$RedirectedFieldbottom@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z @ 0x1C01A5CD8 (--4-$RedirectedFieldbottom@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z.c)
 *     ??4?$RedirectedFieldleft@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z @ 0x1C01A5D0C (--4-$RedirectedFieldleft@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z.c)
 *     ??4?$RedirectedFieldright@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z @ 0x1C01A5D24 (--4-$RedirectedFieldright@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z.c)
 *     ??4?$RedirectedFieldtop@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z @ 0x1C01A5D3C (--4-$RedirectedFieldtop@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z.c)
 *     GetTopMostInsertAfter @ 0x1C01A633C (GetTopMostInsertAfter.c)
 *     HasMessageRootWindow @ 0x1C01F2D08 (HasMessageRootWindow.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1C02019C4 (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C021F904 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C02200E8 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     _W32ExceptionHandler @ 0x1C024B764 (_W32ExceptionHandler.c)
 */

__int64 __fastcall xxxCreateWindowEx(
        int a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        __int32 a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        struct tagWND *a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        int a16,
        __int64 a17)
{
  int v18; // r13d
  struct tagWND *v20; // r14
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  PERESOURCE *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  struct tagPROCESSINFO **v37; // rdx
  unsigned int v38; // ebx
  __int64 v39; // rsi
  char v40; // al
  int v41; // ecx
  struct tagWND *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // ecx
  int v48; // eax
  struct tagPROCESSINFO *v49; // rdi
  AtomicExecutionCheck *v50; // rcx
  BOOL v51; // eax
  __int16 v53; // di
  __int64 CurrentProcessWin32Process; // rax
  int v55; // eax
  struct tagWND *v56; // rax
  unsigned int v57; // r9d
  struct tagWND *v58; // r8
  __int64 v59; // rdx
  __int64 v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  _WORD *v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  _WORD *v68; // rax
  int v69; // r11d
  __int64 v70; // r9
  __int16 v71; // r10
  unsigned __int16 Atom; // di
  __int64 v73; // rax
  struct tagPROCESSINFO *v74; // rsi
  unsigned __int64 *ClassPtr; // r9
  unsigned __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rbx
  unsigned __int64 v79; // rbx
  int v80; // edx
  int v81; // eax
  unsigned int v82; // ecx
  unsigned int v83; // ecx
  __int64 v84; // rax
  ULONG_PTR v85; // rsi
  tagObjLock *v86; // rax
  ULONG_PTR v87; // rdi
  int CurrentThreadDpiHostingBehavior; // eax
  __int64 v89; // rcx
  struct tagWND *v90; // rbx
  struct tagTHREADINFO *v91; // rax
  __int64 v92; // rax
  struct tagWND *v93; // rbx
  __int64 v94; // rcx
  int v95; // ebx
  __int64 v96; // rdx
  int v97; // ecx
  __int64 v98; // rdx
  wchar_t *v99; // rcx
  __int64 v100; // rbx
  __int64 v101; // rbx
  int v102; // edx
  int v103; // eax
  __int64 v104; // rcx
  int v105; // eax
  __int64 v106; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v108; // rdx
  __int64 v109; // r9
  __int64 *v110; // rax
  __int64 v111; // rcx
  ULONG_PTR v112; // r13
  __int64 v113; // r8
  struct tagWND *v114; // rbx
  __int64 v115; // rdx
  __int16 v116; // r14
  _QWORD *v117; // rax
  __int32 v118; // eax
  int v119; // ecx
  int v120; // edx
  int v121; // eax
  __int64 *InheritedMonitor; // r9
  __int64 v123; // rcx
  _DWORD *v124; // rax
  _DWORD *v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rdx
  struct tagWND *v128; // rdi
  struct tagTHREADINFO *v129; // rax
  __int64 v130; // rax
  __int64 Prop; // rbx
  int v132; // eax
  __int64 v133; // r9
  __int64 v134; // r8
  __int64 v135; // rcx
  __int64 v136; // rdx
  int v138; // ecx
  unsigned int v139; // ebx
  struct tagTHREADINFO *v140; // rax
  struct _KPROCESS *v141; // rbx
  int v142; // ebx
  __int64 v143; // rcx
  __int64 v144; // rax
  int v145; // eax
  __int64 v146; // rax
  int v147; // r12d
  int v148; // r13d
  __int64 v149; // rbx
  unsigned __int64 v150; // r14
  void *v151; // rdi
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // rax
  int v157; // r13d
  int v158; // r12d
  int v159; // ebx
  _DWORD *v160; // rax
  int v161; // edx
  int v162; // r12d
  int v163; // eax
  int v164; // r13d
  int v165; // ecx
  __int64 v166; // rcx
  void *v167; // rax
  int IsEnabledDeviceUsage; // eax
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // rcx
  __int64 v172; // rax
  char v173; // di
  __int64 v174; // rax
  __int64 v175; // rax
  struct tagWND *v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  SIZE_T v179; // rcx
  __int64 v180; // rbx
  int v181; // ecx
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // r8
  __int64 v185; // rdx
  __int64 v186; // rdx
  __int64 v187; // rcx
  int v188; // r13d
  int v189; // r12d
  int v190; // ebx
  char v191; // dl
  _DWORD *v192; // rax
  int v193; // r12d
  int v194; // ebx
  int v195; // r13d
  int v196; // eax
  __int64 v197; // rcx
  void *v198; // rax
  __int64 ProcessPeb; // rax
  __int16 v200; // bx
  int AppCompatFlags; // eax
  char v202; // bl
  unsigned __int16 v203; // r14
  __int64 v204; // rax
  int v205; // ebx
  int v206; // edi
  int v207; // r14d
  _DWORD *v208; // rax
  int v209; // r12d
  int v210; // ecx
  int v211; // r13d
  int v212; // eax
  __int64 v213; // rcx
  void *v214; // rax
  __int64 v215; // rax
  int v216; // ebx
  int v217; // edi
  int v218; // r14d
  _DWORD *v219; // rax
  int v220; // r12d
  int v221; // ecx
  int v222; // r13d
  int v223; // eax
  __int64 v224; // rcx
  void *v225; // rax
  __int64 v226; // rax
  int v227; // ebx
  int v228; // r12d
  int v229; // edi
  _DWORD *v230; // rax
  int v231; // r12d
  int v232; // ecx
  int v233; // r13d
  int v234; // eax
  __int64 v235; // rcx
  void *v236; // rax
  __int64 v237; // r12
  int v238; // eax
  __int64 v239; // rbx
  __int64 *v240; // rax
  __int64 v241; // rdx
  __int64 v242; // r8
  int v243; // eax
  __int64 CurrentProcess; // rax
  __int64 v245; // rcx
  struct tagWND *v246; // r14
  __int64 v247; // rcx
  int v248; // r12d
  char v249; // di
  __int64 v250; // rdx
  int v251; // r9d
  int v252; // ebx
  int v253; // r12d
  int v254; // edi
  int v255; // r12d
  int v256; // ecx
  int v257; // r13d
  int v258; // eax
  __int64 v259; // rcx
  void *v260; // rax
  __int64 v261; // rcx
  int v262; // r13d
  int v263; // r12d
  int v264; // ebx
  _DWORD *v265; // rax
  int v266; // r12d
  int v267; // ecx
  int v268; // r13d
  int v269; // eax
  __int64 v270; // rcx
  void *v271; // rax
  __int64 v272; // rax
  int v273; // r13d
  int v274; // r12d
  int v275; // ebx
  _DWORD *v276; // rax
  int v277; // r12d
  int v278; // ecx
  int v279; // r13d
  int v280; // eax
  __int64 v281; // rcx
  void *v282; // rax
  int v283; // r12d
  int v284; // ecx
  BOOL v285; // edi
  __int64 v286; // rcx
  struct tagMONITOR *v287; // rbx
  __int64 v288; // rcx
  _DWORD *v289; // rax
  _DWORD *v290; // rcx
  _DWORD *v291; // rax
  __int16 v292; // ax
  struct tagPROCESSINFO **v293; // rdx
  int v294; // eax
  int v295; // edi
  unsigned __int64 v296; // xmm0_8
  int v297; // edx
  int v298; // ecx
  struct tagPROCESSINFO *v299; // rcx
  int v300; // eax
  struct tagPROCESSINFO *v301; // rcx
  int v302; // eax
  __int64 v303; // rcx
  char v304; // dl
  int v305; // r13d
  int v306; // r12d
  int v307; // ebx
  _DWORD *v308; // rax
  int v309; // r12d
  int v310; // ecx
  int v311; // r13d
  int v312; // eax
  __int64 v313; // rcx
  void *v314; // rax
  __int64 v315; // rcx
  unsigned __int8 *Menu; // rax
  _QWORD *v317; // rbx
  __int64 v318; // rax
  _QWORD *v319; // rcx
  _QWORD *v320; // rdx
  struct tagWND *v321; // rdi
  _DWORD *v322; // r12
  __int64 v323; // rax
  int v324; // eax
  struct tagWND *NonChildAncestor; // rdi
  __int64 *v326; // rbx
  __int64 v327; // rdx
  __int64 v328; // rdx
  int v329; // edi
  unsigned int v330; // eax
  int v331; // edx
  struct tagTHREADINFO *v332; // rax
  __int64 v333; // rax
  __int64 v334; // rbx
  _QWORD *v335; // rbx
  __int64 v336; // rcx
  __int64 KernelEvent; // rax
  __int64 v338; // rax
  int v339; // eax
  __int64 v340; // rbx
  __int64 v341; // r11
  _QWORD *v342; // rax
  struct tagWND *v343; // r10
  __int64 v344; // r8
  __int64 v345; // r9
  __int64 v346; // rax
  int v347; // eax
  struct tagWND *v349; // rax
  __int64 v350; // rax
  int v351; // eax
  __int64 v352; // rdx
  __int64 v353; // r8
  __int64 v354; // r9
  unsigned int v355; // edi
  __int64 v356; // rcx
  _QWORD *v357; // rbx
  char v358; // r14
  _QWORD *v359; // rax
  __int64 v360; // r11
  int v361; // ecx
  ULONG_PTR v362; // rax
  int v363; // ecx
  __int64 v364; // r10
  int v365; // ecx
  struct tagWND *v366; // rbx
  unsigned int v367; // eax
  NTSTATUS v368; // eax
  ULONG v369; // eax
  __int64 v370; // rdx
  __int64 v371; // rcx
  __int64 v372; // r8
  __int64 v373; // r9
  PERESOURCE *v374; // rax
  __int64 v375; // rdx
  __int64 v376; // rcx
  __int64 v377; // r8
  __int64 v378; // rax
  __int64 v379; // rdx
  __int64 v380; // rcx
  __int64 v381; // r8
  __int64 v382; // rax
  struct tagWND *v383; // rdx
  __int64 v384; // rcx
  struct tagWND *v385; // rax
  struct tagWND *v386; // rax
  bool v387; // zf
  int v388; // eax
  int v389; // eax
  __int64 v390; // rax
  __int64 *v391; // rbx
  __int64 v392; // rcx
  _DWORD *v393; // rax
  _DWORD *v394; // rcx
  _DWORD *v395; // rax
  int v396; // eax
  __int64 v397; // rcx
  __int64 StyleWindow; // rbx
  __int64 v399; // rdx
  __int64 CacheDC; // rax
  __int64 v401; // rcx
  __int64 *v402; // r15
  int v403; // ebx
  __int64 v404; // r9
  __int64 v405; // rdx
  __int64 SystemMenu; // rax
  __int64 v407; // rax
  __int64 v408; // rdx
  __int64 v409; // rcx
  __int64 v410; // r8
  _QWORD *v411; // rbx
  struct tagWND *DefaultImeWindow; // rax
  __int64 v413; // rcx
  __int64 v414; // rdx
  __int64 v415; // rcx
  __int64 v416; // r8
  int v417; // r8d
  __int64 v418; // rcx
  __int64 v419; // rdx
  __int64 v420; // rcx
  __int64 v421; // r8
  struct tagWND *v422; // rcx
  __int64 v423; // rax
  unsigned __int64 v424; // rbx
  __int64 v425; // rax
  struct tagWND *v426; // rdx
  __int64 v427; // rcx
  __int64 v428; // r8
  unsigned int v429; // ebx
  int v430; // eax
  __int64 TopMostInsertAfter; // rax
  __int64 v432; // r9
  int v433; // edx
  int v434; // r8d
  int v435; // r12d
  __int64 v436; // rcx
  void *v437; // rax
  __int64 v438; // rcx
  void *v439; // rax
  __int64 v440; // rdx
  __int64 DesktopWindow; // rax
  __int64 v442; // r10
  char v443; // cl
  __int64 v444; // rdx
  __int64 v445; // rcx
  __int64 v446; // rdx
  __int64 v447; // rcx
  __int64 v448; // r8
  __int64 v449; // rdx
  __int64 v450; // r8
  __int64 v451; // rcx
  struct tagPROCESSINFO **v452; // rbx
  __int64 v453; // rdx
  __int64 v454; // rcx
  __int64 v455; // r8
  __int64 v456; // rax
  __int64 v457; // rbx
  char v458[4]; // [rsp+50h] [rbp-508h] BYREF
  int v459; // [rsp+54h] [rbp-504h]
  int v460; // [rsp+58h] [rbp-500h]
  __int64 v461; // [rsp+60h] [rbp-4F8h]
  unsigned int v462; // [rsp+68h] [rbp-4F0h]
  int v463; // [rsp+6Ch] [rbp-4ECh]
  unsigned int v464; // [rsp+70h] [rbp-4E8h]
  int v465; // [rsp+74h] [rbp-4E4h]
  unsigned __int16 v466; // [rsp+78h] [rbp-4E0h]
  struct tagWND *v467; // [rsp+80h] [rbp-4D8h]
  int v468; // [rsp+88h] [rbp-4D0h]
  __int64 v469[2]; // [rsp+90h] [rbp-4C8h] BYREF
  char v470; // [rsp+A0h] [rbp-4B8h]
  __int32 v471; // [rsp+A4h] [rbp-4B4h]
  unsigned __int64 v472; // [rsp+A8h] [rbp-4B0h]
  struct tagPROCESSINFO **v473; // [rsp+B0h] [rbp-4A8h]
  __int128 v474; // [rsp+B8h] [rbp-4A0h] BYREF
  _QWORD v475[2]; // [rsp+C8h] [rbp-490h] BYREF
  _QWORD *v476; // [rsp+D8h] [rbp-480h]
  int v477; // [rsp+E0h] [rbp-478h]
  unsigned int WindowCloakStateComponentUIAware; // [rsp+E4h] [rbp-474h]
  int v479; // [rsp+E8h] [rbp-470h]
  int v480; // [rsp+ECh] [rbp-46Ch]
  BOOL v481; // [rsp+F0h] [rbp-468h]
  int v482; // [rsp+F4h] [rbp-464h]
  int v483; // [rsp+F8h] [rbp-460h]
  int v484; // [rsp+FCh] [rbp-45Ch]
  int v485; // [rsp+100h] [rbp-458h]
  __int64 v486; // [rsp+108h] [rbp-450h]
  __int64 v487; // [rsp+110h] [rbp-448h] BYREF
  __int64 v488; // [rsp+118h] [rbp-440h]
  __int128 v489; // [rsp+120h] [rbp-438h] BYREF
  void *v490[3]; // [rsp+130h] [rbp-428h] BYREF
  int v491; // [rsp+148h] [rbp-410h]
  int v492; // [rsp+14Ch] [rbp-40Ch]
  BOOL v493; // [rsp+150h] [rbp-408h]
  int v494; // [rsp+154h] [rbp-404h]
  int v495; // [rsp+158h] [rbp-400h]
  __int64 v496; // [rsp+160h] [rbp-3F8h]
  __int64 v497; // [rsp+168h] [rbp-3F0h]
  struct tagWND *v498; // [rsp+170h] [rbp-3E8h]
  HANDLE ProcessId; // [rsp+178h] [rbp-3E0h]
  __int64 v500; // [rsp+180h] [rbp-3D8h]
  __int64 ProcessSequenceNumber; // [rsp+188h] [rbp-3D0h]
  __int128 v502; // [rsp+190h] [rbp-3C8h] BYREF
  __int128 v503; // [rsp+1A0h] [rbp-3B8h]
  __int128 v504; // [rsp+1B0h] [rbp-3A8h]
  __int128 v505; // [rsp+1C0h] [rbp-398h]
  __int128 v506; // [rsp+1D0h] [rbp-388h]
  __int128 v507; // [rsp+1E0h] [rbp-378h]
  __int128 v508; // [rsp+1F0h] [rbp-368h] BYREF
  __int64 v509; // [rsp+200h] [rbp-358h] BYREF
  __int64 v510; // [rsp+208h] [rbp-350h]
  __int64 v511; // [rsp+210h] [rbp-348h]
  __int64 v512; // [rsp+218h] [rbp-340h]
  _QWORD *v513; // [rsp+220h] [rbp-338h]
  _QWORD *v514; // [rsp+228h] [rbp-330h]
  __int64 v515; // [rsp+230h] [rbp-328h]
  __int128 v516; // [rsp+238h] [rbp-320h] BYREF
  struct tagCLS *(__fastcall *v517)(struct tagCLS *); // [rsp+248h] [rbp-310h]
  _WORD *v518; // [rsp+250h] [rbp-308h]
  __m128i v519; // [rsp+258h] [rbp-300h]
  __int64 v520; // [rsp+270h] [rbp-2E8h]
  __int64 v521; // [rsp+278h] [rbp-2E0h]
  _WORD *v522; // [rsp+280h] [rbp-2D8h]
  ULONG_PTR v523; // [rsp+288h] [rbp-2D0h]
  __int128 v524; // [rsp+290h] [rbp-2C8h] BYREF
  __int64 v525; // [rsp+2A0h] [rbp-2B8h]
  int v526; // [rsp+2A8h] [rbp-2B0h]
  __int128 v527; // [rsp+2B0h] [rbp-2A8h] BYREF
  __int64 v528; // [rsp+2C0h] [rbp-298h]
  __int128 v529; // [rsp+2C8h] [rbp-290h] BYREF
  __int64 v530; // [rsp+2D8h] [rbp-280h]
  _QWORD v531[2]; // [rsp+2E0h] [rbp-278h] BYREF
  _QWORD v532[2]; // [rsp+2F0h] [rbp-268h] BYREF
  _QWORD v533[2]; // [rsp+300h] [rbp-258h] BYREF
  _QWORD v534[2]; // [rsp+310h] [rbp-248h] BYREF
  _QWORD v535[2]; // [rsp+320h] [rbp-238h] BYREF
  _QWORD v536[2]; // [rsp+330h] [rbp-228h] BYREF
  _QWORD v537[2]; // [rsp+340h] [rbp-218h] BYREF
  struct _UNICODE_STRING v538; // [rsp+350h] [rbp-208h] BYREF
  __int128 v539; // [rsp+360h] [rbp-1F8h] BYREF
  __int128 v540; // [rsp+378h] [rbp-1E0h] BYREF
  __int128 v541; // [rsp+388h] [rbp-1D0h] BYREF
  __int64 v542; // [rsp+398h] [rbp-1C0h]
  __int128 v543; // [rsp+3A0h] [rbp-1B8h] BYREF
  __int64 v544; // [rsp+3B0h] [rbp-1A8h]
  __int128 v545; // [rsp+3B8h] [rbp-1A0h] BYREF
  __int64 v546; // [rsp+3C8h] [rbp-190h]
  char v547[16]; // [rsp+3D0h] [rbp-188h] BYREF
  __int64 v548; // [rsp+3E0h] [rbp-178h] BYREF
  __int128 v549; // [rsp+3F0h] [rbp-168h]
  int v550; // [rsp+400h] [rbp-158h] BYREF
  __int16 v551; // [rsp+404h] [rbp-154h]
  __int128 v552; // [rsp+406h] [rbp-152h]
  __int128 v553; // [rsp+416h] [rbp-142h]
  __int16 v554; // [rsp+426h] [rbp-132h]
  int v555; // [rsp+428h] [rbp-130h]
  unsigned __int64 v556; // [rsp+42Ch] [rbp-12Ch]
  __int64 v557; // [rsp+434h] [rbp-124h]
  int v558; // [rsp+43Ch] [rbp-11Ch]
  int v559; // [rsp+440h] [rbp-118h]
  __int128 v560; // [rsp+444h] [rbp-114h]
  int v561; // [rsp+454h] [rbp-104h]
  __m256i v562; // [rsp+458h] [rbp-100h]
  __m256i v563; // [rsp+478h] [rbp-E0h]
  __int64 v564; // [rsp+498h] [rbp-C0h]
  int v565; // [rsp+4A0h] [rbp-B8h]
  int v566; // [rsp+4A4h] [rbp-B4h]
  __int64 v567; // [rsp+4A8h] [rbp-B0h]
  __int128 v568; // [rsp+4B0h] [rbp-A8h] BYREF
  _OWORD v569[3]; // [rsp+4C0h] [rbp-98h] BYREF
  __m256i v570; // [rsp+4F0h] [rbp-68h] BYREF

  v514 = a4;
  v488 = a3;
  v459 = a1;
  v492 = a1;
  v18 = a14;
  v491 = a1;
  LODWORD(v486) = a1;
  ProcessSequenceNumber = a2;
  ProcessId = a4;
  v20 = a10;
  v467 = a10;
  v509 = (__int64)a10;
  v490[0] = a12;
  v496 = a13;
  v484 = 0;
  v481 = 0;
  v483 = 0;
  v477 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v469);
  v568 = 0LL;
  v474 = 0LL;
  v479 = 5;
  v471 = 5;
  v497 = 0LL;
  v502 = 0LL;
  v503 = 0LL;
  v504 = 0LL;
  v505 = 0LL;
  v506 = 0LL;
  v507 = 0LL;
  v508 = 0LL;
  v461 = gptiCurrent;
  v487 = gptiCurrent;
  v524 = 0LL;
  v525 = 0LL;
  v527 = 0LL;
  v528 = 0LL;
  v529 = 0LL;
  v530 = 0LL;
  v516 = 0LL;
  v517 = 0LL;
  v480 = 0;
  v473 = (struct tagPROCESSINFO **)(gptiCurrent + 424LL);
  v500 = gptiCurrent + 424LL;
  v482 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v21 = 0;
  v489 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v475, a11);
  v464 = 0;
  if ( !*(_QWORD *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v23, v22, v24, v25)
    || (v30 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v27, v26, v28, v29),
        !ExIsResourceAcquiredSharedLite(*v30)) )
  {
    v468 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      goto LABEL_942;
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v32, v31, v33);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v458[0] = 1;
  v37 = v473;
  if ( (*((_DWORD *)*v473 + 3) & 0x10000000) == 0 )
  {
    if ( !(unsigned int)RegisterIconTitleClass() )
      goto LABEL_37;
    v37 = v473;
  }
  v38 = a1 & 0x7FFFFFFF;
  if ( a1 >= 0 )
    v38 = a1;
  v39 = *(_QWORD *)(v461 + 456);
  v512 = v39;
  v511 = v39;
  if ( a10 && *((_QWORD *)a10 + 3) != v39 )
    goto LABEL_37;
  v40 = a16;
  v468 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*v37, v37) )
    {
LABEL_60:
      v46 = 5LL;
      goto LABEL_61;
    }
    v21 = 1;
    v40 = v468;
  }
  v494 = v40 & 2;
  v495 = v494;
  if ( (v40 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*v473) )
    goto LABEL_60;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14, v37, v35, v36) )
      goto LABEL_37;
    if ( a14 == 15 )
      goto LABEL_37;
    v41 = *((_DWORD *)*v473 + 204);
    if ( (v41 & 0x30) == 0x10 && (v41 & 0x200) == 0 && a14 == 1 && !v21 && !(unsigned int)HasMessageRootWindow(a10) )
      goto LABEL_37;
  }
  v465 = HIWORD(a5) & 0xC000;
  LOWORD(v463) = HIWORD(a5) & 0xC000;
  v493 = (_WORD)v465 == 0x4000;
  if ( (_WORD)v465 != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*v473, a10) )
      v20 = 0LL;
    v467 = v20;
    v509 = (__int64)v20;
  }
  if ( !v20 )
    goto LABEL_38;
  v42 = 0LL;
  v43 = *((_QWORD *)v20 + 3);
  if ( v43 )
  {
    v44 = *(_QWORD *)(v43 + 8);
    if ( v44 )
      v42 = *(struct tagWND **)(v44 + 24);
  }
  if ( v20 == v42 )
  {
LABEL_38:
    if ( !a14 )
    {
      v47 = *((_DWORD *)*v473 + 204);
      if ( (v47 & 0x30) != 0x10 || (v48 = 1, (v47 & 0x200) != 0) )
        v48 = 0;
      if ( v48 )
      {
        v21 = 1;
        v18 = 15;
      }
      else if ( (v47 & 2) != 0 && (v38 & 8) != 0 )
      {
        v18 = 2;
      }
      else
      {
        v18 = 1;
      }
    }
    goto LABEL_48;
  }
  v45 = *((_QWORD *)v20 + 5);
  v21 = *(_BYTE *)(v45 + 232) & 0x40;
  if ( !a14 )
  {
    v18 = *(_DWORD *)(v45 + 236);
    goto LABEL_48;
  }
  if ( a14 != *(_DWORD *)(v45 + 236) )
  {
LABEL_37:
    v46 = 87LL;
LABEL_61:
    UserSetLastError(v46);
    goto LABEL_62;
  }
LABEL_48:
  v485 = v21;
  v49 = *v473;
  if ( (unsigned int)IsImmersiveBroker(*v473) )
    goto LABEL_49;
  v50 = (AtomicExecutionCheck *)*((unsigned int *)v49 + 204);
  if ( (*((_BYTE *)v49 + 816) & 0x30) == 0x10 )
  {
    switch ( v18 )
    {
      case 1:
      case 3:
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
      case 10:
      case 11:
      case 13:
      case 15:
      case 17:
      case 18:
        goto LABEL_49;
      default:
        goto LABEL_52;
    }
  }
  if ( v18 == 1 )
  {
LABEL_49:
    v51 = 1;
    goto LABEL_59;
  }
  if ( ((unsigned __int8)v50 & 2) != 0 )
    goto LABEL_58;
  if ( !v20 )
  {
LABEL_52:
    v51 = 0;
    goto LABEL_59;
  }
  if ( *(_DWORD *)(*((_QWORD *)v20 + 5) + 236LL) == 2 )
LABEL_58:
    v51 = v18 == 2;
  else
    v51 = 0;
LABEL_59:
  if ( !v51 )
    goto LABEL_60;
  v462 = v38;
  v460 = v38;
  if ( (v38 & 0x400000) != 0 )
  {
    v53 = v465;
LABEL_77:
    v50 = (AtomicExecutionCheck *)v462;
    goto LABEL_79;
  }
  if ( !v20 )
  {
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) == 0
      && (v50 = (AtomicExecutionCheck *)v38, v462 = v38, v460 = v38, (_WORD)a2 == 0x8002) )
    {
      v53 = v465;
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v50);
      if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
        CurrentProcessWin32Process = 0LL;
      v50 = (AtomicExecutionCheck *)v38;
      v462 = v38;
      v460 = v38;
      v53 = v465;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 840) & 1) != 0 )
      {
        LODWORD(v50) = v38 | 0x400000;
        v462 = v38 | 0x400000;
        v460 = v38 | 0x400000;
      }
    }
    goto LABEL_79;
  }
  v462 = v38;
  v460 = v38;
  v53 = v465;
  if ( (_WORD)v465 != 0x4000 )
    goto LABEL_77;
  v462 = v38;
  v460 = v38;
  if ( (*(_BYTE *)(*((_QWORD *)v20 + 5) + 26LL) & 0x50) != 0x40 )
    goto LABEL_77;
  v50 = (AtomicExecutionCheck *)v38;
  LODWORD(v50) = v38 | 0x400000;
  v462 = v38 | 0x400000;
  v460 = v38 | 0x400000;
LABEL_79:
  if ( ((unsigned int)v50 & 0x2200000) == 0x2200000 )
    goto LABEL_37;
  if ( *(_QWORD *)(v461 + 592) )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(v461 + 896), 2u) )
    {
      v55 = 1;
    }
    else
    {
      UserSetLastError(5LL);
      v55 = 0;
    }
    if ( !v55 )
    {
LABEL_62:
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v458);
      goto LABEL_63;
    }
  }
  if ( v53 != 0x4000 )
    goto LABEL_95;
  if ( !v20 )
  {
    v46 = 1406LL;
    goto LABEL_61;
  }
  v56 = v20;
  v57 = 1;
  do
  {
    v58 = 0LL;
    v50 = (AtomicExecutionCheck *)*((_QWORD *)v56 + 3);
    if ( v50 )
    {
      v59 = *((_QWORD *)v50 + 1);
      if ( v59 )
        v58 = *(struct tagWND **)(v59 + 24);
    }
    if ( v56 == v58 )
      break;
    v56 = (struct tagWND *)*((_QWORD *)v56 + 13);
    ++v57;
  }
  while ( v56 );
  if ( v57 > gNestedWindowLimit )
    goto LABEL_37;
  while ( 1 )
  {
LABEL_95:
    v60 = v488;
    if ( (v488 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      AtomicExecutionCheck::EnforceConsistency(v50);
      v64 = PsGetCurrentThreadWin32Thread(v62, v61, v63);
      ++*(_DWORD *)(v64 + 48);
      v470 = 1;
      v65 = *(_WORD **)(v60 + 8);
      v66 = 2147483646LL;
      v521 = 2147483646LL;
      v522 = v65;
      v67 = 256LL;
      v520 = 256LL;
      v68 = &gawchAtomScratch;
      v518 = &gawchAtomScratch;
      v69 = 0;
      v70 = 0LL;
      v515 = 0LL;
      while ( v67 )
      {
        if ( !v66 )
          goto LABEL_103;
        v71 = *v65;
        if ( !*v65 )
          goto LABEL_103;
        v522 = ++v65;
        *v68++ = v71;
        v518 = v68;
        v520 = --v67;
        v521 = --v66;
        v515 = ++v70;
      }
      v518 = --v68;
      v515 = --v70;
      v69 = -2147483643;
LABEL_103:
      *v68 = 0;
      if ( v69 < 0 )
      {
        Atom = 0;
        v466 = 0;
        v482 = 1;
      }
      else
      {
        Atom = UserFindAtom(&gawchAtomScratch, v66, v65, v70);
        v466 = Atom;
      }
      v73 = PsGetCurrentThreadWin32Thread(v67, v66, v65);
      --*(_DWORD *)(v73 + 48);
      v470 = 0;
    }
    else
    {
      Atom = v488;
      v466 = v488;
    }
    if ( Atom )
    {
      v74 = *v473;
      ClassPtr = (unsigned __int64 *)((char *)*v473 + 344);
      v76 = *ClassPtr;
      if ( *ClassPtr )
      {
        while ( 1 )
        {
          v77 = *(_QWORD *)(v76 + 8);
          if ( *(_WORD *)v77 == Atom
            && (!v490[0] || WORD1(*(_QWORD *)(v77 + 64)) == WORD1(v490[0]))
            && (*(_WORD *)(v77 + 6) & 4) == 0 )
          {
            break;
          }
          ClassPtr = (unsigned __int64 *)v76;
          v76 = *(_QWORD *)v76;
          if ( !v76 )
            goto LABEL_115;
        }
      }
      else
      {
LABEL_115:
        ClassPtr = (unsigned __int64 *)InnerGetClassPtr(Atom, (char *)v74 + 352, 0LL, ClassPtr);
        if ( !ClassPtr )
        {
          v78 = hModClient;
          ClassPtr = (unsigned __int64 *)InnerGetClassPtr(Atom, (char *)v74 + 344, hModClient, 0LL);
          if ( !ClassPtr )
            ClassPtr = (unsigned __int64 *)InnerGetClassPtr(Atom, (char *)v74 + 352, v78, 0LL);
        }
      }
      if ( ClassPtr )
        break;
    }
LABEL_173:
    if ( v482
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) != 0
      || ((a2 & 0xFFFFFFFFFFFF0000uLL) == 0 ? (v99 = (wchar_t *)a2) : (v99 = *(wchar_t **)(a2 + 8)),
          !(unsigned int)RegisterDefaultClass(v99)) )
    {
      v46 = 1407LL;
      goto LABEL_61;
    }
    v482 = 1;
  }
  v79 = *ClassPtr;
  if ( *ClassPtr != *(_QWORD *)v469[0] )
  {
    if ( v469[0] != gSmartObjNullRef && !--*(_DWORD *)(v469[0] + 8) )
    {
      if ( *(_BYTE *)(v469[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v469[0]);
    }
    if ( v79 )
    {
      v469[0] = *(_QWORD *)(v79 + 128);
      ++*(_DWORD *)(v469[0] + 8);
    }
    else
    {
      v469[0] = gSmartObjNullRef;
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 6LL) & 1) != 0 && (unsigned int)PsGetWin32KFilterSet() == 5 )
    goto LABEL_62;
  v80 = 0;
  v81 = 0;
  v82 = v462;
  if ( (v462 & 1) != 0 )
    goto LABEL_136;
  if ( (v462 & 0x20000) != 0 )
    goto LABEL_137;
  v76 = a5;
  if ( (a5 & 0x40000) != 0 )
    goto LABEL_136;
  if ( (a5 & 0xC00000) == 0x400000 )
  {
    v82 = v462;
LABEL_136:
    v81 = 1;
    goto LABEL_137;
  }
  v82 = v462;
  if ( (a5 & 0xC00000) == 0xC00000 )
  {
    LOBYTE(v80) = a15 >= 0x400u;
    v81 = v80;
  }
LABEL_137:
  if ( v81 )
    v83 = v82 | 0x100;
  else
    v83 = v82 & 0xFFFFFEFF;
  v460 = v83;
  v462 = v83;
  if ( (*(_DWORD *)(v461 + 488) & 1) != 0 )
  {
    HIDWORD(v472) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 813LL);
  }
  LOBYTE(v76) = 1;
  v84 = HMAllocObject(v461, v512, v76);
  v85 = v84;
  v498 = (struct tagWND *)v84;
  if ( !v84 )
  {
    if ( (unsigned int)UserGetLastError() == 8 )
      TraceLoggingCreateWindowFailed(
        1u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    goto LABEL_62;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v84 + 56));
  v86 = (tagObjLock *)Win32AllocPoolZInit(32LL, 1752200021LL);
  *(_QWORD *)(v85 + 144) = v86;
  if ( !v86 )
  {
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v85 + 56));
    HMFreeObject(v85);
    goto LABEL_62;
  }
  tagObjLock::LockInitialize(v86);
  v513 = (_QWORD *)(v85 + 16);
  v523 = v85 + 16;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v85 + 16) + 424LL) + 816LL) & 0x1000000) != 0 )
    *(_DWORD *)(v85 + 324) |= 1u;
  v87 = v85 + 40;
  v519.m128i_i64[0] = v85 + 40;
  *(_QWORD *)(*(_QWORD *)(v85 + 40) + 296LL) = 0LL;
  *(_QWORD *)(v85 + 280) = 0LL;
  *(_QWORD *)(*(_QWORD *)(v85 + 40) + 168LL) = 0LL;
  CurrentThreadDpiHostingBehavior = W32GetCurrentThreadDpiHostingBehavior();
  v89 = *(_QWORD *)(v85 + 40);
  *(_DWORD *)(v89 + 292) = CurrentThreadDpiHostingBehavior;
  if ( (_WORD)v465 != 0x4000 || !v467 || v467 == (struct tagWND *)GetThreadDesktopWindow(0LL) )
    goto LABEL_160;
  v90 = 0LL;
  v91 = PtiCurrentShared();
  if ( v91 )
  {
    v92 = *((_QWORD *)v91 + 57);
    if ( v92 )
      v90 = *(struct tagWND **)(v92 + 104);
  }
  if ( v467 == v90
    || (v93 = v467, v89 = *(_QWORD *)(*((_QWORD *)v467 + 2) + 424LL), *v473 != (struct tagPROCESSINFO *)v89)
    || IsChildWindowDpiIsolationEnabled(0LL, v467) )
  {
LABEL_160:
    *(_DWORD *)(*(_QWORD *)v87 + 288LL) = W32GetCurrentThreadDpiAwarenessContext(v89);
    if ( (*(_DWORD *)(*(_QWORD *)v87 + 288LL) & 0x4000000F) == 0
      && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) + 224LL) & 0x40) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)v87 + 288LL) |= 0x40000000u;
    }
  }
  else
  {
    v94 = *(unsigned int *)(*((_QWORD *)v467 + 5) + 288LL);
    *(_DWORD *)(*(_QWORD *)v87 + 288LL) = v94;
    v95 = *(_DWORD *)(*((_QWORD *)v93 + 5) + 288LL);
    if ( (((unsigned __int8)v95 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext(v94)) & 0xF) != 0 )
      TraceChildWindowDpiTelemetry(v85, (__int64)v467, 0);
  }
  v96 = *(_QWORD *)v87;
  v97 = *(_DWORD *)(*(_QWORD *)v87 + 288LL);
  if ( (v97 & 0xF) == 2 && (v97 & 0xF0) == 0x20 )
    *(_DWORD *)(v85 + 320) |= 0x180000u;
  if ( (*(_BYTE *)(v96 + 288) & 0xF) == 3 )
    *(_DWORD *)(v85 + 320) |= 0x80000u;
  v98 = *(_QWORD *)v469[0];
  if ( *(_QWORD *)v469[0] )
    *(_QWORD *)(*(_QWORD *)(v85 + 40) + 128LL) = *(_QWORD *)(v98 + 16);
  else
    *(_QWORD *)(*(_QWORD *)(v85 + 40) + 128LL) = 0LL;
  *(_QWORD *)(v85 + 136) = v98;
  *(_DWORD *)(*(_QWORD *)v87 + 28LL) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(*(_QWORD *)v87 + 24LL) = v462 & 0xFDF7FFFF;
  *(_DWORD *)(*(_QWORD *)v87 + 200LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 80LL);
  *(_DWORD *)(*(_QWORD *)v87 + 248LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 84LL);
  if ( !(unsigned int)ReferenceClass(*(_QWORD *)v469[0], v85) )
    goto LABEL_172;
  v100 = *(_QWORD *)(v85 + 136);
  if ( v100 != *(_QWORD *)v469[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v469);
    if ( v100 )
    {
      v469[0] = *(_QWORD *)(v100 + 128);
      ++*(_DWORD *)(v469[0] + 8);
    }
    else
    {
      v469[0] = gSmartObjNullRef;
    }
  }
  v101 = *(_QWORD *)v469[0];
  v102 = *(_DWORD *)(*(_QWORD *)v469[0] + 72LL);
  if ( v102 >= 131068 )
  {
    v103 = 0;
    goto LABEL_190;
  }
  *(_DWORD *)(v101 + 72) = v102 + 1;
  v104 = *(_QWORD *)(v101 + 56);
  if ( v101 != v104 )
  {
    v105 = *(_DWORD *)(v104 + 72);
    if ( v105 >= 131068 )
    {
      *(_DWORD *)(v101 + 72) = v102;
      v103 = 0;
      goto LABEL_190;
    }
    *(_DWORD *)(v104 + 72) = v105 + 1;
  }
  v106 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v106 = *ThreadWin32Thread;
  *(_QWORD *)&v516 = *(_QWORD *)(v106 + 16);
  *(_QWORD *)(v106 + 16) = &v516;
  *((_QWORD *)&v516 + 1) = v101;
  v517 = ClassUnlockWorker;
  v103 = 1;
  v87 = v85 + 40;
LABEL_190:
  if ( !v103 )
  {
    DereferenceClass(*v473, v85);
LABEL_172:
    tagObjLock::LockUnInitializeThreadCreator(*(tagObjLock **)(v85 + 144));
    Win32FreePool(*(void **)(v85 + 144));
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v85 + 56));
    HMFreeObject(v85);
    goto LABEL_173;
  }
  *(_QWORD *)(*(_QWORD *)v87 + 224LL) = a17;
  v108 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 2LL);
  v109 = v461;
  if ( (_WORD)v108 == *(_WORD *)(gpsi + 868LL) )
  {
    *(_QWORD *)(*(_QWORD *)v87 + 208LL) = 0LL;
  }
  else
  {
    v110 = *(__int64 **)(v461 + 792);
    v111 = 0LL;
    if ( v110 )
      v111 = *v110;
    *(_QWORD *)(*(_QWORD *)v87 + 208LL) = v111;
  }
  *(_DWORD *)(*(_QWORD *)v87 + 236LL) = v18;
  v112 = v85 + 40;
  v113 = *(_QWORD *)(v85 + 40);
  v114 = v467;
  if ( *(_DWORD *)(v113 + 236) != 1 && (unsigned int)IsTopLevelParent(v467, v108, v113, v109) )
  {
    *(_DWORD *)(v113 + 24) |= 8u;
    v113 = *(_QWORD *)v112;
  }
  if ( v485 )
    *(_BYTE *)(v113 + 232) |= 0x40u;
  ++*(_DWORD *)(v109 + 904);
  *(_QWORD *)&v502 = 0LL;
  v503 = 0LL;
  v504 = 0LL;
  v505 = 0LL;
  v506 = 0LL;
  v507 = 0LL;
  v508 = 0LL;
  DWORD2(v506) = v462;
  *((void **)&v502 + 1) = v490[0];
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v459 >= 0 )
    {
      *(_QWORD *)&v506 = *(_QWORD *)(a2 + 8);
      v508 = *(_OWORD *)a2;
    }
    else
    {
      v115 = *(_QWORD *)(*(_QWORD *)v469[0] + 104LL);
      *(_QWORD *)&v506 = v115;
      if ( (v115 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitLargeAnsiString(&v508, v115, v113);
        v109 = v461;
      }
    }
  }
  else
  {
    *(_QWORD *)&v506 = a2;
  }
  if ( v514 )
  {
    *((_QWORD *)&v505 + 1) = v514[1];
    v507 = *(_OWORD *)v514;
  }
  LODWORD(v505) = a5;
  v471 = a6;
  v460 = a7;
  *((_QWORD *)&v504 + 1) = __PAIR64__(a6, a7);
  v472 = __PAIR64__(a9, a8);
  *(_QWORD *)&v504 = __PAIR64__(a8, a9);
  if ( v114 )
    *((_QWORD *)&v503 + 1) = *(_QWORD *)v114;
  else
    *((_QWORD *)&v503 + 1) = 0LL;
  v116 = v465;
  v117 = v476;
  if ( (_WORD)v465 != 0x4000 )
  {
    if ( !v476 )
    {
      if ( !*(_QWORD *)v475[0] )
      {
        *(_QWORD *)&v503 = 0LL;
        goto LABEL_222;
      }
      v117 = *(_QWORD **)v475[0];
    }
    *(_QWORD *)&v503 = *v117;
    goto LABEL_222;
  }
  if ( !v476 )
    v117 = *(_QWORD **)v475[0];
  *(_QWORD *)&v503 = v117;
  *(_DWORD *)(*(_QWORD *)v112 + 24LL) |= *(_DWORD *)(*((_QWORD *)v114 + 5) + 24LL) & 0xC4000000;
LABEL_222:
  *(_QWORD *)&v502 = v496;
  *(_QWORD *)&v524 = *(_QWORD *)(v109 + 416);
  *(_QWORD *)(v109 + 416) = &v524;
  *((_QWORD *)&v524 + 1) = v85;
  HMLockObject(v85);
  *(_QWORD *)&v569[0] = 0LL;
  if ( a6 == 0x80000000 || (v118 = a6, a6 == 0x8000) )
    v118 = 0;
  LODWORD(v569[0]) = v118;
  v119 = v460;
  if ( v460 == 0x80000000 || v460 == 0x8000 )
    v119 = 0;
  DWORD1(v569[0]) = v119;
  v120 = v472;
  if ( (_DWORD)v472 == 0x80000000 || (_DWORD)v472 == 0x8000 )
    v120 = 0;
  DWORD2(v569[0]) = v120 + v118;
  v121 = HIDWORD(v472);
  if ( HIDWORD(v472) == 0x80000000 || HIDWORD(v472) == 0x8000 )
    v121 = 0;
  HIDWORD(v569[0]) = v119 + v121;
  InheritedMonitor = (__int64 *)GetInheritedMonitor((struct tagWND *)v85);
  v481 = InheritedMonitor != 0LL;
  if ( !InheritedMonitor && v114 )
    InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v114 + 5) + 256LL));
  if ( InheritedMonitor || (InheritedMonitor = (__int64 *)MonitorFromRect(v569, 2LL), v123 = 0LL, InheritedMonitor) )
    v123 = *InheritedMonitor;
  *(_QWORD *)(*(_QWORD *)v112 + 256LL) = v123;
  *(_DWORD *)(*(_QWORD *)v112 + 284LL) = *(unsigned __int16 *)(InheritedMonitor[5] + 60);
  v124 = (_DWORD *)InheritedMonitor[16];
  *(_QWORD *)(v85 + 288) = v124;
  ++*v124;
  *(_QWORD *)(v85 + 296) = 0LL;
  if ( v116 != 0x4000 || IsDpiBoundaryBetweenWindows((const struct tagWND *)v85, v114) )
    UpdateTopLevelWindowDPITransform(v85, InheritedMonitor);
  if ( v116 == 0x4000 )
  {
    if ( v114 )
    {
      *(_WORD *)(*(_QWORD *)v112 + 286LL) = *(_WORD *)(*((_QWORD *)v114 + 5) + 286LL);
      v125 = (_DWORD *)*((_QWORD *)v114 + 37);
      if ( v125 )
      {
        *(_QWORD *)(v85 + 296) = v125;
        ++*v125;
      }
    }
  }
  v126 = *(_QWORD *)(v85 + 24);
  if ( v126 )
  {
    v127 = *(_QWORD *)(v126 + 104);
    if ( v127 )
      *(_QWORD *)(*(_QWORD *)(v85 + 40) + 48LL) = *(_QWORD *)(v127 + 48);
    else
      *(_QWORD *)(*(_QWORD *)(v85 + 40) + 48LL) = 0LL;
    v537[0] = v85 + 104;
    v537[1] = v127;
    HMAssignmentLock(v537, 0LL);
  }
  v500 = v85 + 104;
  if ( (unsigned int)IsWindowDesktopComposed(v85) )
  {
    v128 = v114;
    if ( v116 != 0x4000 && (!v114 || v114 != *(struct tagWND **)(*((_QWORD *)v114 + 3) + 104LL)) )
    {
      v128 = 0LL;
      v129 = PtiCurrentShared();
      if ( v129 )
      {
        v130 = *((_QWORD *)v129 + 58);
        if ( v130 )
          v128 = *(struct tagWND **)(v130 + 24);
      }
    }
    memset(&v569[1], 0, 32);
    memset(&v570, 0, sizeof(v570));
    Prop = 0LL;
    v132 = 0;
    v133 = *(_QWORD *)(v85 + 104);
    if ( v133 )
    {
      v134 = 0LL;
      v135 = *(_QWORD *)(v85 + 24);
      if ( v135 )
      {
        v136 = *(_QWORD *)(v135 + 8);
        if ( v136 )
          v134 = *(_QWORD *)(v136 + 24);
      }
      if ( v133 == v134 )
        v132 = 1;
    }
    if ( v132 || (*(_BYTE *)(*(_QWORD *)v112 + 26LL) & 8) != 0 && GetTopLevelWindow(v85) )
      Prop = GetProp(v85, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1LL);
    if ( Prop )
    {
      *(__m256i *)&v569[1] = *(__m256i *)Prop;
      v570 = *(__m256i *)(Prop + 32);
      v138 = v569[1];
    }
    else
    {
      v139 = v569[1] & 0xFFFF0000;
      v549 = 0LL;
      *(_OWORD *)((char *)&v569[1] + 8) = 0LL;
      v570.m256i_i64[0] = 0LL;
      v140 = *(struct tagTHREADINFO **)(v85 + 16);
      if ( !v140 )
        v140 = PtiCurrentShared();
      v138 = v139 & 0xFFF9FFFF | (*((_QWORD *)v140 + 81) >> 3) & 0x40000;
      v570.m256i_i32[2] = g_defaultFrameStyle;
      *(__int64 *)((char *)&v570.m256i_i64[1] + 4) = 0LL;
      *(__int64 *)((char *)&v570.m256i_i64[2] + 4) = 0LL;
    }
    LODWORD(v569[1]) = v138 & 0x7FFFF;
    v141 = *(struct _KPROCESS **)(**(_QWORD **)(v85 + 16) + 544LL);
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v141);
    ProcessId = PsGetProcessId(v141);
    v496 = ***(_QWORD ***)(*(_QWORD *)(v85 + 24) + 8LL);
    v142 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v85 + 136) + 8LL) + 8LL);
    v463 = v142;
    v143 = *(_QWORD *)(v85 + 160);
    if ( v143 )
    {
      v144 = MNLookUpItem(v143, 61536LL, 0LL, 0LL);
      if ( !v144
        && (v144 = MNLookUpItem(*(_QWORD *)(v85 + 160), 32864LL, 0LL, 0LL)) == 0
        && (v144 = MNLookUpItem(*(_QWORD *)(v85 + 160), 49264LL, 0LL, 0LL)) == 0
        || (v143 = *(unsigned int *)(*(_QWORD *)v144 + 4LL), v145 = 0, (v143 & 3) != 0) )
      {
        v145 = 512;
      }
      v463 = v145 | v142;
    }
    v146 = *(_QWORD *)v112;
    v147 = *(_DWORD *)(*(_QWORD *)v112 + 232LL);
    v148 = *(_DWORD *)(*(_QWORD *)v112 + 24LL);
    v485 = *(_DWORD *)(v146 + 28);
    v149 = 0LL;
    if ( v128 )
      v149 = *(_QWORD *)v128;
    v150 = *(_QWORD *)v85;
    v151 = (void *)ReferenceDwmApiPort(v143);
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(v152) + 32) + 13248LL));
    if ( v151 )
    {
      v552 = 0LL;
      v553 = 0LL;
      v554 = 0;
      v550 = 11534472;
      v551 = 0x8000;
      v555 = 1073741841;
      v556 = v150;
      v557 = v149;
      v558 = v485;
      v559 = v148;
      v565 = v147;
      v561 = v463;
      v562 = *(__m256i *)&v569[1];
      v563 = v570;
      v564 = v496;
      v560 = v569[0];
      v566 = (int)ProcessId;
      v567 = ProcessSequenceNumber;
      EtwUpdateEvent(v149, 1073741841LL);
      LpcRequestPort(v151, &v550);
      ObfDereferenceObject(v151);
    }
    v112 = v85 + 40;
  }
  *(void **)(*(_QWORD *)v112 + 32LL) = v490[0];
  v153 = *(_QWORD *)(*(_QWORD *)v469[0] + 8LL);
  v154 = *(_QWORD *)(v153 + 32);
  v155 = *(unsigned __int16 *)(v153 + 4);
  if ( (unsigned __int16)(v155 - 673) <= 9u )
  {
    if ( v459 < 0 )
    {
      if ( *(_QWORD *)(gpsi + 8 * v155 - 4744) == v154 )
        v154 = *(_QWORD *)(gpsi + 8 * v155 - 4936);
    }
    else if ( *(_QWORD *)(gpsi + 8 * v155 - 4936) == v154 )
    {
      v154 = *(_QWORD *)(gpsi + 8 * v155 - 4744);
    }
  }
  *(_QWORD *)(*(_QWORD *)v112 + 120LL) = v154;
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 6LL) & 1) != 0 )
  {
    SetOrClrWF(1LL, v85, 516LL, 1LL);
    if ( (unsigned int)Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage() )
      SetOrClrWF(1LL, v85, 55584LL, 0LL);
  }
  else
  {
    v156 = *(_QWORD *)v112;
    v157 = *(_DWORD *)(*(_QWORD *)v112 + 28LL);
    v158 = *(_DWORD *)(v156 + 24);
    v159 = *(_DWORD *)(v156 + 232);
    *(_BYTE *)(v156 + 18) &= ~4u;
    if ( (unsigned int)IsWindowDesktopComposed(v85) )
    {
      v160 = *(_DWORD **)(v85 + 40);
      v161 = v160[7];
      v162 = v160[6] ^ v158;
      v163 = v159 ^ v160[58];
      v164 = v161 ^ v157;
      if ( v164 || v162 || v163 )
      {
        v165 = 0;
        if ( (v164 & 0xB1CF0000) != 0 || (v162 & 0x4E27A9) != 0 || (v163 & 0x12C0) != 0 )
          v165 = 1;
        if ( v165 )
        {
          DirtyVisRgnTrackers(v85);
          v167 = (void *)ReferenceDwmApiPort(v166);
          DwmAsyncChildStyleChange(v167);
        }
        if ( (v164 & 0xC40000) != 0 || (v162 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v85, 1LL);
      }
    }
    v112 = v85 + 40;
  }
  IsEnabledDeviceUsage = Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage();
  v171 = IsEnabledDeviceUsage != 0;
  if ( IsEnabledDeviceUsage )
  {
    v171 = *(_QWORD *)v112;
    if ( (*(_BYTE *)(*(_QWORD *)v112 + 30LL) & 0x30) != 0 && (*(_BYTE *)(v171 + 233) & 0x20) != 0 )
    {
      v463 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1184LL);
    }
  }
  if ( v458[0] )
  {
    v172 = PsGetCurrentThreadWin32Thread(v171, v169, v170);
    --*(_DWORD *)(v172 + 48);
  }
  v173 = *(_BYTE *)(*(_QWORD *)v112 + 18LL) & 4;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 84LL) )
  {
    v174 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 84LL), 1937208149LL);
    *(_QWORD *)(v85 + 280) = v174;
    if ( !v174 )
    {
      v464 = 5;
      goto LABEL_321;
    }
  }
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v173 )
  {
    *(_DWORD *)(*(_QWORD *)v112 + 200LL) = (*(_DWORD *)(*(_QWORD *)v112 + 200LL) + 7) & 0xFFFFFFF8;
    *(_DWORD *)(*(_QWORD *)v112 + 200LL) += 32;
  }
  v179 = *(unsigned int *)(*(_QWORD *)v112 + 200LL);
  if ( (_DWORD)v179 )
  {
    v180 = xxxClientAllocWindowClassExtraBytes(v179);
    v175 = *(_QWORD *)v112;
    if ( !v180 )
    {
      v464 = 2;
      goto LABEL_322;
    }
    v181 = 0;
    if ( *(char *)(v175 + 19) < 0
      || *(char *)(v175 + 20) < 0
      || *(__int16 *)(v175 + 42) < 0
      || (v182 = *(_QWORD *)(v85 + 16)) != 0 && (*(_DWORD *)(v182 + 488) & 1) != 0 )
    {
      v181 = 1;
    }
    if ( !v181 && (*(_BYTE *)(_HMPheFromObject(v85) + 25) & 1) == 0 && !*(_QWORD *)(*(_QWORD *)v112 + 296LL) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v112 + 232LL) & 0x10) != 0 )
      {
        v463 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1283LL);
      }
      *(_QWORD *)(*(_QWORD *)v112 + 296LL) = v180;
      goto LABEL_342;
    }
    UserSetLastError(87LL);
LABEL_321:
    v175 = *(_QWORD *)v112;
LABEL_322:
    *(_QWORD *)(v175 + 120) = 0LL;
    SetOrClrWF(1LL, v85, 516LL, 1LL);
    goto LABEL_840;
  }
LABEL_342:
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v173 )
  {
    v183 = *(_QWORD *)(*(_QWORD *)v112 + 296LL);
    v184 = *(int *)(*(_QWORD *)v112 + 200LL);
    v511 = *(_QWORD *)(*(_QWORD *)v112 + 120LL);
    *(_QWORD *)(v184 + v183 - 32) = v511;
    if ( v459 >= 0 )
      v185 = *(_QWORD *)(gpsi + 768LL);
    else
      v185 = *(_QWORD *)(gpsi + 576LL);
    *(_QWORD *)(*(_QWORD *)v112 + 120LL) = v185;
  }
  if ( *(_QWORD *)(*(_QWORD *)v469[0] + 80LL)
    && !*(_QWORD *)(*(_QWORD *)v469[0] + 112LL)
    && (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
    xxxCreateClassSmIcon(v469, v186);
  }
  v187 = *(_QWORD *)v112;
  v188 = *(_DWORD *)(*(_QWORD *)v112 + 28LL);
  v189 = *(_DWORD *)(v187 + 24);
  v190 = *(_DWORD *)(v187 + 232);
  v191 = 32;
  if ( (int)v486 >= 0 )
    v191 = 0;
  *(_BYTE *)(((v492 >> 31) & 3) + v187 + 16) |= v191;
  if ( (unsigned int)IsWindowDesktopComposed(v85) )
  {
    v192 = *(_DWORD **)(v85 + 40);
    v193 = v192[6] ^ v189;
    v194 = v192[58] ^ v190;
    v195 = v192[7] ^ v188;
    if ( v195 || v193 || v194 )
    {
      v196 = 0;
      if ( (v195 & 0xB1CF0000) != 0 || (v193 & 0x4E27A9) != 0 || (v194 & 0x12C0) != 0 )
        v196 = 1;
      if ( v196 )
      {
        DirtyVisRgnTrackers(v85);
        v198 = (void *)ReferenceDwmApiPort(v197);
        DwmAsyncChildStyleChange(v198);
      }
      if ( (v195 & 0xC40000) != 0 || (v193 & 0x200A0381) != 0 )
        WindowMargins::CheckForChanges(v85, 1LL);
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 6LL) & 2) != 0
    || v459 < 0
    && (v466 == *(_WORD *)(gpsi + 868LL)
     || v466 == *(_WORD *)(gpsi + 878LL)
     || v466 == *(_WORD *)(gpsi + 882LL)
     || v466 == *(_WORD *)(gpsi + 904LL)
     || v466 == *(_WORD *)(gpsi + 870LL)
     || v466 == *(_WORD *)(gpsi + 874LL)
     || v466 == *(_WORD *)(gpsi + 880LL)
     || v466 == *(_WORD *)(gpsi + 898LL)
     || v466 == *(_WORD *)(gpsi + 872LL)) )
  {
    SetOrClrWF(1LL, v85, 520LL, 1LL);
  }
  if ( (unsigned int)Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsage()
    && ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 6LL) & 2) != 0 || v459 < 0)
    && (_WORD)v465 != 0x4000 )
  {
    ProcessPeb = PsGetProcessPeb(**(_QWORD **)(*(_QWORD *)(v85 + 16) + 424LL));
    if ( ProcessPeb )
    {
      v200 = *(_WORD *)(ProcessPeb + 844);
      if ( v200 == -535 )
      {
        v459 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1359LL);
      }
      if ( v200 == -10600 )
      {
        v459 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1360LL);
      }
    }
  }
  AppCompatFlags = GetAppCompatFlags(v461);
  v202 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1LL, v85, 1032LL, 1LL);
    v462 &= 0x3Fu;
    DWORD2(v506) = BYTE8(v506) & 0x3F;
  }
  v203 = a15;
  if ( a15 < 0x30Au )
  {
    if ( (v202 & 0x40) != 0 )
      SetOrClrWF(1LL, v85, 1600LL, 1LL);
  }
  else
  {
    v204 = *(_QWORD *)(v85 + 40);
    v205 = *(_DWORD *)(v204 + 28);
    v206 = *(_DWORD *)(v204 + 24);
    v207 = *(_DWORD *)(v204 + 232);
    *(_BYTE *)(v204 + 21) |= 1u;
    if ( (unsigned int)IsWindowDesktopComposed(v85) )
    {
      v208 = *(_DWORD **)(v85 + 40);
      v209 = v206 ^ v208[6];
      v210 = v207 ^ v208[58];
      v211 = v205 ^ v208[7];
      if ( v211 || v209 || v210 )
      {
        v212 = 0;
        if ( (v211 & 0xB1CF0000) != 0 || (v209 & 0x4E27A9) != 0 || (v210 & 0x12C0) != 0 )
          v212 = 1;
        if ( v212 )
        {
          DirtyVisRgnTrackers(v85);
          v214 = (void *)ReferenceDwmApiPort(v213);
          DwmAsyncChildStyleChange(v214);
        }
        if ( (v211 & 0xC40000) != 0 || (v209 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v85, 1LL);
      }
    }
    v203 = a15;
    if ( a15 >= 0x400u )
    {
      v215 = *(_QWORD *)(v85 + 40);
      v216 = *(_DWORD *)(v215 + 28);
      v217 = *(_DWORD *)(v215 + 24);
      v218 = *(_DWORD *)(v215 + 232);
      *(_BYTE *)(v215 + 21) |= 2u;
      if ( (unsigned int)IsWindowDesktopComposed(v85) )
      {
        v219 = *(_DWORD **)(v85 + 40);
        v220 = v217 ^ v219[6];
        v221 = v218 ^ v219[58];
        v222 = v216 ^ v219[7];
        if ( v222 || v220 || v221 )
        {
          v223 = 0;
          if ( (v222 & 0xB1CF0000) != 0 || (v220 & 0x4E27A9) != 0 || (v221 & 0x12C0) != 0 )
            v223 = 1;
          if ( v223 )
          {
            DirtyVisRgnTrackers(v85);
            v225 = (void *)ReferenceDwmApiPort(v224);
            DwmAsyncChildStyleChange(v225);
          }
          if ( (v222 & 0xC40000) != 0 || (v220 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges(v85, 1LL);
        }
      }
      v203 = a15;
      if ( a15 >= 0x500u )
      {
        v226 = *(_QWORD *)(v85 + 40);
        v227 = *(_DWORD *)(v226 + 28);
        v228 = *(_DWORD *)(v226 + 24);
        v229 = *(_DWORD *)(v226 + 232);
        *(_BYTE *)(v226 + 21) |= 4u;
        if ( (unsigned int)IsWindowDesktopComposed(v85) )
        {
          v230 = *(_DWORD **)(v85 + 40);
          v231 = v230[6] ^ v228;
          v232 = v229 ^ v230[58];
          v233 = v227 ^ v230[7];
          if ( v233 || v231 || v232 )
          {
            v234 = 0;
            if ( (v233 & 0xB1CF0000) != 0 || (v231 & 0x4E27A9) != 0 || (v232 & 0x12C0) != 0 )
              v234 = 1;
            if ( v234 )
            {
              DirtyVisRgnTrackers(v85);
              v236 = (void *)ReferenceDwmApiPort(v235);
              DwmAsyncChildStyleChange(v236);
            }
            if ( (v233 & 0xC40000) != 0 || (v231 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(v85, 1LL);
            v203 = a15;
          }
        }
      }
    }
  }
  v237 = v461;
  v238 = v203;
  if ( v203 <= *(_WORD *)(v461 + 636) )
    v238 = *(_DWORD *)(v461 + 636);
  *(_DWORD *)(v85 + 256) = v238;
  v239 = 0LL;
  v240 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v240 )
    v239 = *v240;
  v243 = 0;
  if ( *(_DWORD *)(v239 + 632) <= 0x9900u )
    v243 = *(_DWORD *)(v239 + 648);
  if ( (v243 & 0x10000000) != 0 )
    SetOrClrWF(1LL, v85, 2688LL, 1LL);
  if ( gihmodUserApiHook >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess((unsigned int)gihmodUserApiHook, v241, v242);
    if ( !(unsigned int)PsIsProtectedProcess(CurrentProcess)
      && (unsigned int)PsGetWin32KFilterSet() != 5
      && (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) == 0 )
    {
      v245 = (unsigned int)gihmodUserApiHookWOW;
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x80u) == 0 )
        v245 = (unsigned int)gihmodUserApiHook;
      xxxLoadHmodIndex(v245);
    }
  }
  v246 = v467;
  if ( (unsigned int)WantImeWindow(v467, (struct tagWND *)v85) )
  {
    if ( (unsigned int)Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage() )
    {
      v247 = *(_QWORD *)(v237 + 784);
      if ( v247 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v247) + 25) & 1) != 0
          || (unsigned int)IsWindowBeingDestroyed(*(_QWORD *)(v237 + 784)) )
        {
          v459 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1444LL);
        }
      }
    }
    *(_DWORD *)(v85 + 320) |= 0x10000000u;
    ++*(_DWORD *)(v237 + 912);
  }
  if ( ((*(_BYTE *)(v237 + 680) | *(_BYTE *)(**(_QWORD **)(v237 + 464) + 16LL)) & 0x40) != 0 )
  {
    v509 = (__int64)&v502;
    v510 = 0LL;
    if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v85, (__int64)&v509, 5) )
    {
      v464 = 6;
      v112 = v85 + 40;
      goto LABEL_841;
    }
    v248 = HIDWORD(v504);
    v471 = HIDWORD(v504);
    v460 = DWORD2(v504);
    v472 = __PAIR64__(v504, DWORD1(v504));
    v486 = v510;
  }
  else
  {
    v486 = 0LL;
    v248 = v471;
  }
  v112 = v85 + 40;
  v177 = *(unsigned __int8 *)(*(_QWORD *)(v85 + 40) + 31LL);
  LOBYTE(v177) = v177 & 0xC0;
  LOBYTE(v463) = v177;
  if ( (_BYTE)v177 == 64 && !v246 )
    goto LABEL_840;
  if ( ((_BYTE)v177 == 64) != v493 )
  {
    v476 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v475, 0LL);
    LOBYTE(v177) = v463;
  }
  v249 = *(_BYTE *)(*(_QWORD *)v112 + 31LL) & 0xC0;
  if ( v249 )
  {
    if ( v248 == 0x80000000 || v248 == 0x8000 )
    {
      v248 = 0;
      v471 = 0;
      v460 = 0;
    }
    if ( (_DWORD)v472 == 0x80000000 || (_DWORD)v472 == 0x8000 )
      v472 = 0LL;
  }
  v465 = v248;
  *(_QWORD *)&v474 = __PAIR64__(v460, v248);
  v459 = v460;
  *((_QWORD *)&v474 + 1) = v472;
  if ( (_BYTE)v177 == 64 )
  {
    v489 = *(_OWORD *)(*((_QWORD *)v246 + 5) + 104LL);
    if ( IsDpiBoundaryBetweenWindows((const struct tagWND *)v85, v246) )
    {
      *(_QWORD *)(v85 + 224) = 0LL;
      LogicalToPhysicalInPlaceRectWithSubpixel(v246, &v489, v85 + 224);
      PhysicalToLogicalInPlaceRectWithSubpixel(v85, &v489, v85 + 224);
    }
    if ( v246 != (struct tagWND *)GetDesktopWindow(v85, v250) )
    {
      v465 = v248 + v489;
      LODWORD(v474) = v248 + v489;
      v459 = v251 + DWORD1(v489);
      DWORD1(v474) = v251 + DWORD1(v489);
    }
    v486 = 1LL;
  }
  if ( !v249 )
  {
    v252 = *(_DWORD *)(*(_QWORD *)v112 + 28LL);
    v253 = *(_DWORD *)(*(_QWORD *)v112 + 24LL);
    v254 = *(_DWORD *)(*(_QWORD *)v112 + 232LL);
    *(_BYTE *)(*(_QWORD *)v112 + 31LL) = HIBYTE(v252) | 4;
    if ( (unsigned int)IsWindowDesktopComposed(v85) )
    {
      v255 = *(_DWORD *)(*(_QWORD *)v112 + 24LL) ^ v253;
      v256 = v254 ^ *(_DWORD *)(*(_QWORD *)v112 + 232LL);
      v257 = v252 ^ *(_DWORD *)(*(_QWORD *)v112 + 28LL);
      if ( v257 || v255 || v256 )
      {
        v258 = 0;
        if ( (v257 & 0xB1CF0000) != 0 || (v255 & 0x4E27A9) != 0 || (v256 & 0x12C0) != 0 )
          v258 = 1;
        if ( v258 )
        {
          DirtyVisRgnTrackers(v85);
          v260 = (void *)ReferenceDwmApiPort(v259);
          DwmAsyncChildStyleChange(v260);
        }
        if ( (v257 & 0xC40000) != 0 || (v255 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v85, 1LL);
      }
      v112 = v85 + 40;
    }
    v484 = 192;
    v261 = *(_QWORD *)v112;
    if ( (*(_BYTE *)(*(_QWORD *)v112 + 21LL) & 2) != 0 )
    {
      v262 = *(_DWORD *)(v261 + 28);
      v263 = *(_DWORD *)(v261 + 24);
      v264 = *(_DWORD *)(v261 + 232);
      *(_BYTE *)(v261 + 25) = BYTE1(v263) | 1;
      if ( (unsigned int)IsWindowDesktopComposed(v85) )
      {
        v265 = *(_DWORD **)(v85 + 40);
        v266 = v265[6] ^ v263;
        v267 = v264 ^ v265[58];
        v268 = v265[7] ^ v262;
        if ( v268 || v266 || v267 )
        {
          v269 = 0;
          if ( (v268 & 0xB1CF0000) != 0 || (v266 & 0x4E27A9) != 0 || (v267 & 0x12C0) != 0 )
            v269 = 1;
          if ( v269 )
          {
            DirtyVisRgnTrackers(v85);
            v271 = (void *)ReferenceDwmApiPort(v270);
            DwmAsyncChildStyleChange(v271);
          }
          if ( (v268 & 0xC40000) != 0 || (v266 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges(v85, 1LL);
        }
      }
      v112 = v85 + 40;
    }
    v272 = *(_QWORD *)v112;
    v273 = *(_DWORD *)(*(_QWORD *)v112 + 28LL);
    v274 = *(_DWORD *)(v272 + 24);
    v275 = *(_DWORD *)(v272 + 232);
    *(_BYTE *)(v272 + 16) |= 0x10u;
    if ( (unsigned int)IsWindowDesktopComposed(v85) )
    {
      v276 = *(_DWORD **)(v85 + 40);
      v277 = v276[6] ^ v274;
      v278 = v275 ^ v276[58];
      v279 = v276[7] ^ v273;
      if ( v279 || v277 || v278 )
      {
        v280 = 0;
        if ( (v279 & 0xB1CF0000) != 0 || (v277 & 0x4E27A9) != 0 || (v278 & 0x12C0) != 0 )
          v280 = 1;
        if ( v280 )
        {
          DirtyVisRgnTrackers(v85);
          v282 = (void *)ReferenceDwmApiPort(v281);
          DwmAsyncChildStyleChange(v282);
        }
        if ( (v279 & 0xC40000) != 0 || (v277 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v85, 1LL);
      }
    }
    v283 = v471;
    if ( (v471 == 0x80000000 || v471 == 0x8000) && v459 != 0x80000000 )
    {
      v284 = v479;
      if ( v459 != 0x8000 )
        v284 = v459;
      v479 = v284;
    }
    v285 = v481;
    if ( !v481 && (v471 == 0x80000000 || v471 == 0x8000 || (_DWORD)v472 == 0x80000000 || (_DWORD)v472 == 0x8000) )
    {
      v286 = *((_QWORD *)*v473 + 86);
      if ( v286 )
      {
        v287 = (struct tagMONITOR *)ValidateHmonitor(v286);
      }
      else if ( v467 )
      {
        v287 = _MonitorFromWindowInternal(v467, 2u, 0);
      }
      else
      {
        v287 = 0LL;
      }
      if ( !v287 )
      {
        v287 = *(struct tagMONITOR **)(GetDispInfo() + 96);
        goto LABEL_542;
      }
      goto LABEL_554;
    }
    v287 = 0LL;
LABEL_542:
    if ( v287 )
    {
LABEL_554:
      v112 = v85 + 40;
    }
    else
    {
      v112 = v85 + 40;
      v287 = (struct tagMONITOR *)ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(v85 + 40) + 256LL));
      if ( !v287 )
      {
        if ( !v285 || (v287 = (struct tagMONITOR *)GetInheritedMonitor((struct tagWND *)v85)) == 0LL )
          v287 = (struct tagMONITOR *)MonitorFromRect(*(_QWORD *)v112 + 88LL, 2LL);
        v288 = 0LL;
        if ( v287 )
          v288 = *(_QWORD *)v287;
        *(_QWORD *)(*(_QWORD *)v112 + 256LL) = v288;
        *(_WORD *)(*(_QWORD *)v112 + 284LL) = *(_WORD *)(*((_QWORD *)v287 + 5) + 60LL);
        v289 = *(_DWORD **)(v85 + 288);
        if ( v289 )
        {
          --*v289;
          v290 = *(_DWORD **)(v85 + 288);
          if ( !*v290 )
            Win32FreePool(v290);
          *(_QWORD *)(v85 + 288) = 0LL;
        }
        v291 = (_DWORD *)*((_QWORD *)v287 + 16);
        *(_QWORD *)(v85 + 288) = v291;
        ++*v291;
        UpdateTopLevelWindowDPITransform(v85, v287);
      }
    }
    SetTiledRect(v85, &v568, v287);
    if ( v283 == 0x80000000 || v283 == 0x8000 )
    {
      v293 = v473;
      v299 = *v473;
      if ( (*((_DWORD *)*v473 + 200) & 4) != 0 )
      {
        v477 = 1;
        v283 = *((_DWORD *)v299 + 196);
        v465 = v283;
        LODWORD(v474) = v283;
        v460 = *((_DWORD *)v299 + 197);
        v300 = v460;
      }
      else
      {
        v283 = v568;
        v465 = v568;
        LODWORD(v474) = v568;
        v300 = DWORD1(v568);
        v460 = DWORD1(v568);
      }
      DWORD1(v474) = v300;
      v459 = v300;
      v471 = v283;
      v294 = 1;
    }
    else
    {
      v292 = *((_WORD *)v287 + 37);
      v293 = v473;
      if ( v292 )
        *((_WORD *)v287 + 37) = v292 - 1;
      v294 = v483;
    }
    v295 = v472;
    if ( (_DWORD)v472 == 0x80000000 || (_DWORD)v472 == 0x8000 )
    {
      v301 = *v293;
      if ( (*((_DWORD *)*v293 + 200) & 2) != 0 )
      {
        v477 = 1;
        DWORD2(v474) = *((_DWORD *)v301 + 198);
        v302 = *((_DWORD *)v301 + 199);
      }
      else
      {
        DWORD2(v474) = DWORD2(v568) - v283;
        v302 = HIDWORD(v568) - v460;
      }
      HIDWORD(v474) = v302;
    }
    else if ( v294 )
    {
      v519 = *(__m128i *)GetMonitorRect(v547, v287);
      v296 = _mm_srli_si128(v519, 8).m128i_u64[0];
      v297 = v295 + v465 - v296;
      v298 = HIDWORD(v472) + v459 - HIDWORD(v296);
      if ( v297 > 0 )
      {
        v471 = v283 - v297;
        LODWORD(v474) = v283 - v297;
        if ( v283 - v297 < v519.m128i_i32[0] )
        {
          v471 = v519.m128i_i32[0];
          LODWORD(v474) = v519.m128i_i32[0];
        }
      }
      if ( v298 > 0 )
      {
        v460 -= v298;
        DWORD1(v474) = v460;
        if ( v460 < v519.m128i_i32[1] )
        {
          v460 = v519.m128i_i32[1];
          DWORD1(v474) = v519.m128i_i32[1];
        }
      }
    }
  }
  if ( v477 )
    *((_DWORD *)*v473 + 200) &= 0xFFFFFFF9;
  v303 = *(_QWORD *)v112;
  v304 = *(_BYTE *)(*(_QWORD *)v112 + 31LL);
  if ( (((v304 & 0xC0) + 0x80) & 0xBF) == 0 )
  {
    v305 = *(_DWORD *)(v303 + 28);
    v306 = *(_DWORD *)(v303 + 24);
    v307 = *(_DWORD *)(v303 + 232);
    *(_BYTE *)(v303 + 31) = v304 | 4;
    if ( !(unsigned int)IsWindowDesktopComposed(v85) )
      goto LABEL_593;
    v308 = *(_DWORD **)(v85 + 40);
    v309 = v308[6] ^ v306;
    v310 = v307 ^ v308[58];
    v311 = v308[7] ^ v305;
    if ( !v311 && !v309 && !v310 )
      goto LABEL_593;
    v312 = 0;
    if ( (v311 & 0xB1CF0000) != 0 || (v309 & 0x4E27A9) != 0 || (v310 & 0x12C0) != 0 )
      v312 = 1;
    if ( v312 )
    {
      DirtyVisRgnTrackers(v85);
      v314 = (void *)ReferenceDwmApiPort(v313);
      DwmAsyncChildStyleChange(v314);
    }
    if ( (v311 & 0xC40000) != 0 || (v309 & 0x200A0381) != 0 )
    {
      WindowMargins::CheckForChanges(v85, 1LL);
      v112 = v85 + 40;
    }
    else
    {
LABEL_593:
      v112 = v85 + 40;
    }
  }
  *(_WORD *)(*(_QWORD *)v112 + 30LL) |= v484;
  if ( !v476 && !*(_QWORD *)v475[0] && (_BYTE)v463 != 64 && *(_QWORD *)(*(_QWORD *)v469[0] + 96LL) )
  {
    v538 = 0LL;
    v315 = v85;
    if ( *(_QWORD *)(v85 + 104) )
      v315 = *(_QWORD *)(v85 + 104);
    zzzLockDisplayAreaAndInvalidateDCCache(v315, 16, 0LL);
    RtlInitUnicodeStringOrId(&v538, *(WCHAR **)(*(_QWORD *)v469[0] + 96LL));
    Menu = xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 64LL), (void **)&v538);
    v476 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v475, Menu);
    if ( (*(_BYTE *)(*(_QWORD *)v112 + 31LL) & 0xC0) == 0x40 || (unsigned int)IsWindowBeingDestroyed(v85) )
    {
      v318 = SmartObjStackRef<tagMENU>::operator tagMENU *(v475);
      DestroyMenu(v318);
      v476 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v475, 0LL);
      goto LABEL_840;
    }
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v475) )
      *(_QWORD *)&v503 = 0LL;
    else
      *(_QWORD *)&v503 = *(_QWORD *)SmartObjStackRef<tagMENU>::operator tagMENU *(v475);
  }
  v317 = (_QWORD *)(v85 + 168);
  if ( (*(_BYTE *)(*(_QWORD *)v112 + 31LL) & 0xC0) == 0x40 )
  {
    *(_QWORD *)(*(_QWORD *)v112 + 320LL) = SmartObjStackRef<tagMENU>::operator tagMENU *(v475);
    *(_QWORD *)(*(_QWORD *)(v85 + 40) + 152LL) = 0LL;
    *v317 = 0LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v112 + 320LL) = 0LL;
    if ( *v317 )
    {
      v319 = (_QWORD *)(*v317 + 80LL);
      if ( *v319 == v85 )
        HMAssignmentUnlock(v319);
    }
    if ( (v476 || *(_QWORD *)v475[0]) && !*(_QWORD *)(*(_QWORD *)v475[0] + 80LL) )
    {
      v531[0] = *(_QWORD *)v475[0] + 80LL;
      v531[1] = v85;
      HMAssignmentLock(v531, 0LL);
    }
    v320 = v476;
    if ( v476 || (v320 = *(_QWORD **)v475[0]) != 0LL )
      *(_QWORD *)(*(_QWORD *)(v85 + 40) + 152LL) = v320[6];
    else
      *(_QWORD *)(*(_QWORD *)(v85 + 40) + 152LL) = 0LL;
    v536[0] = v85 + 168;
    v536[1] = v320;
    HMAssignmentLock(v536, 0LL);
  }
  v177 = *(unsigned __int8 *)(*(_QWORD *)v112 + 31LL);
  LOBYTE(v177) = v177 & 0xC0;
  if ( (_BYTE)v177 != 64 )
  {
    if ( (v468 & 4) != 0 )
    {
      LOBYTE(v178) = 1;
      CoreWindowProp::ChangeRole(v85, 1LL, v178);
    }
    *(_QWORD *)(*(_QWORD *)(v85 + 40) + 176LL) = *(_QWORD *)(v85 + 48);
    v532[0] = v85 + 200;
    v532[1] = v85;
    HMAssignmentLock(v532, 0LL);
    if ( !v467
      || (v323 = *((_QWORD *)v467 + 3), v467 == *(struct tagWND **)(v323 + 104))
      || (v387 = v467 == *(struct tagWND **)(*(_QWORD *)(v323 + 8) + 24LL), v324 = 0, v387) )
    {
      v324 = 1;
    }
    if ( v324 )
    {
      v326 = (__int64 *)(v85 + 120);
      *(_QWORD *)(*(_QWORD *)(v85 + 40) + 64LL) = 0LL;
      v533[0] = v85 + 120;
      v533[1] = 0LL;
      HMAssignmentLock(v533, 0LL);
    }
    else
    {
      NonChildAncestor = (struct tagWND *)GetNonChildAncestor((__int64)v467);
      if ( !(unsigned int)ValidateOwnerDepth(v85, NonChildAncestor) )
        goto LABEL_665;
      if ( NonChildAncestor )
      {
        *(_DWORD *)(*(_QWORD *)v112 + 236LL) = *(_DWORD *)(*((_QWORD *)NonChildAncestor + 5) + 236LL);
        SetOrClrWF(*(_BYTE *)(*((_QWORD *)NonChildAncestor + 5) + 232LL) & 0x40, v85, 55360LL, 1LL);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(NonChildAncestor);
      }
      v326 = (__int64 *)(v85 + 120);
      v539 = *(_OWORD *)LockPointer(&v548, v85 + 120, (__int64)NonChildAncestor);
      HMAssignmentLock(&v539, 1LL);
      v327 = *(_QWORD *)(v85 + 120);
      if ( v327 && ((*(_BYTE *)(*(_QWORD *)(v327 + 40) + 24LL) & 8) != 0 || *(_DWORD *)(*(_QWORD *)v112 + 236LL) != 1) )
      {
        SetOrClrWF(1LL, v85, 2056LL, 1LL);
        v327 = *v326;
      }
      if ( v466 != *(_WORD *)(gpsi + 898LL) )
      {
        if ( v327 )
        {
          v328 = *(_QWORD *)(v327 + 16);
          if ( v328 != v461 )
            zzzAttachThreadInput(v461, v328, 1LL);
        }
      }
    }
    if ( !*v326 )
    {
      v329 = 0;
      if ( (*(_DWORD *)(v85 + 320) & 0x1000) != 0 )
      {
        v487 = 0LL;
        if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(v85, &v487) )
          v329 = *(_DWORD *)(v487 + 28);
      }
      v322 = (_DWORD *)(v85 + 320);
      if ( v329
        || ((v330 = *(_DWORD *)(*(_QWORD *)v112 + 236LL), v330 > 0xF) || (v331 = 44800, !_bittest(&v331, v330)))
        && (v322 = (_DWORD *)(v85 + 320), (*(_BYTE *)(*(_QWORD *)v112 + 232LL) & 0x40) == 0) )
      {
LABEL_654:
        v321 = v467;
        if ( v467 && v467 == *(struct tagWND **)(*((_QWORD *)v467 + 3) + 104LL) )
        {
          v334 = v461;
        }
        else
        {
          v321 = 0LL;
          v467 = 0LL;
          v332 = PtiCurrentShared();
          if ( v332 )
          {
            v333 = *((_QWORD *)v332 + 58);
            if ( v333 )
            {
              v321 = *(struct tagWND **)(v333 + 24);
              v467 = v321;
            }
          }
          v334 = v461;
          *(_QWORD *)&v527 = *(_QWORD *)(v461 + 416);
          *(_QWORD *)(v461 + 416) = &v527;
          *((_QWORD *)&v527 + 1) = v321;
          if ( v321 )
            HMLockObject(v321);
          v480 = 1;
        }
        if ( !v495 )
          goto LABEL_670;
        v335 = (_QWORD *)(v334 + 1432);
        if ( *v335 )
          goto LABEL_665;
        SetOrClrWF(1LL, v85, 55424LL, 1LL);
        v336 = v461;
        *(_DWORD *)(v461 + 1272) |= 0x40000u;
        *(_DWORD *)(*(_QWORD *)(v336 + 432) + 396LL) |= 0x2000000u;
        if ( *(_QWORD *)(v336 + 1424)
          || (KernelEvent = CreateKernelEvent(1LL, 0LL), v177 = v461, (*(_QWORD *)(v461 + 1424) = KernelEvent) != 0LL) )
        {
          v534[0] = v335;
          v534[1] = v85;
          HMAssignmentLock(v534, 0LL);
          goto LABEL_670;
        }
        v464 = 7;
        v237 = v177;
LABEL_841:
        v402 = (__int64 *)(v85 + 104);
        v403 = *(_BYTE *)(*(_QWORD *)v112 + 31LL) & 0x10;
        if ( v480 )
          ThreadUnlock1(v177, v176, v178);
        SetWF(v85, 1152LL);
        SetWF(v85, 896LL);
        if ( v403 )
          SetVisible((struct tagWND *)v85);
        if ( *v402 )
        {
          if ( v403 )
            zzzLockDisplayAreaAndInvalidateDCCache(*v402, 16, 0LL);
          if ( (*(_BYTE *)(*(_QWORD *)v112 + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(v85) )
          {
            v405 = *(_QWORD *)(v404 + 16);
            if ( v237 != v405 )
              zzzAttachThreadInput(*v513, v405, 0LL);
          }
          UnlinkWindow(v85, *v402);
        }
        ClassUnlock(*(struct tagCLS **)v469[0]);
        xxxFreeWindow((struct tagWND *)v85);
        if ( v464 )
          TraceLoggingCreateWindowFailed(
            v464,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        goto LABEL_63;
      }
      WindowCloakStateComponentUIAware = 2;
    }
    v322 = (_DWORD *)(v85 + 320);
    goto LABEL_654;
  }
  v321 = v467;
  if ( !v467 )
    goto LABEL_840;
  if ( v494 )
  {
LABEL_665:
    UserSetLastError(87LL);
    goto LABEL_840;
  }
  v322 = (_DWORD *)(v85 + 320);
LABEL_670:
  if ( (*v322 & 0x1000000) != 0 )
  {
    v497 = *(_QWORD *)(v85 + 104);
    UnlinkWindow(v85, v497);
  }
  if ( !v321
    || (v338 = *((_QWORD *)v321 + 3), v321 == *(struct tagWND **)(v338 + 104))
    || (v387 = v321 == *(struct tagWND **)(*(_QWORD *)(v338 + 8) + 24LL), v339 = 0, v387) )
  {
    v339 = 1;
  }
  if ( !v339 )
  {
    *(_DWORD *)(*(_QWORD *)v112 + 236LL) = *(_DWORD *)(*((_QWORD *)v321 + 5) + 236LL);
    SetOrClrWF(*(_BYTE *)(*((_QWORD *)v321 + 5) + 232LL) & 0x40, v85, 55360LL, 1LL);
  }
  if ( v321 )
  {
    v340 = *(_QWORD *)v112;
    if ( *(char *)(*(_QWORD *)v112 + 19LL) >= 0 )
    {
      v341 = *((_QWORD *)v321 + 5);
      if ( *(char *)(v341 + 19) >= 0 )
      {
        v176 = v321;
        v342 = (_QWORD *)v85;
        v177 = 1LL;
        do
        {
          v343 = 0LL;
          v344 = *((_QWORD *)v176 + 3);
          if ( v344 )
          {
            v345 = *(_QWORD *)(v344 + 8);
            if ( v345 )
              v343 = *(struct tagWND **)(v345 + 24);
          }
          if ( v176 == v343 )
            break;
          v176 = (struct tagWND *)*((_QWORD *)v176 + 13);
          v177 = (unsigned int)(v177 + 1);
        }
        while ( v176 );
        v178 = (unsigned int)v177;
        if ( *(_QWORD *)(v85 + 112) )
        {
          while ( 1 )
          {
LABEL_688:
            while ( v342[14] )
            {
              v342 = (_QWORD *)v342[14];
              LODWORD(v177) = v177 + 1;
            }
            v176 = (struct tagWND *)v342[11];
            if ( !v176 )
              break;
            v342 = (_QWORD *)v342[11];
          }
          if ( (unsigned int)v177 > (unsigned int)v178 )
            v178 = (unsigned int)v177;
          while ( 1 )
          {
            v342 = (_QWORD *)v342[13];
            v177 = (unsigned int)(v177 - 1);
            if ( v342 == (_QWORD *)v85 )
              break;
            v176 = (struct tagWND *)v342[11];
            if ( v176 )
            {
              v342 = (_QWORD *)v342[11];
              goto LABEL_688;
            }
          }
        }
        if ( (unsigned int)v178 <= gNestedWindowLimit )
        {
          v346 = *((_QWORD *)v321 + 3);
          if ( v346 == *(_QWORD *)(v85 + 24) )
          {
            if ( v321 == *(struct tagWND **)(v346 + 104)
              || (v387 = v321 == *(struct tagWND **)(*(_QWORD *)(v346 + 8) + 24LL), v347 = 0, v387) )
            {
              v347 = 1;
            }
            if ( v347
              || (*(_BYTE *)(v341 + 233) & 8) != 0
              || *(_DWORD *)(v341 + 236) == *(_DWORD *)(v340 + 236)
              && (v177 = *(unsigned __int8 *)(v340 + 232),
                  LOBYTE(v177) = *(_BYTE *)(v341 + 232) ^ v177,
                  (v177 & 0x40) == 0) )
            {
              v349 = v321;
              while ( (struct tagWND *)v85 != v349 )
              {
                v349 = (struct tagWND *)*((_QWORD *)v349 + 13);
                if ( !v349 )
                {
                  v350 = *((_QWORD *)v321 + 15);
                  if ( !v350 )
                  {
LABEL_715:
                    v351 = 1;
                    goto LABEL_717;
                  }
                  while ( v85 != v350 )
                  {
                    v350 = *(_QWORD *)(v350 + 120);
                    if ( !v350 )
                      goto LABEL_715;
                  }
                  break;
                }
              }
            }
          }
        }
      }
    }
    UserSetLastError(87LL);
    v351 = 0;
LABEL_717:
    if ( !v351 )
    {
      v464 = 9;
      goto LABEL_840;
    }
    *(_QWORD *)(*(_QWORD *)(v85 + 40) + 48LL) = *((_QWORD *)v321 + 6);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v85 + 40) + 48LL) = 0LL;
  }
  v535[0] = v85 + 104;
  v535[1] = v321;
  HMAssignmentLock(v535, 0LL);
  if ( v321 )
    v355 = (int)(*(_DWORD *)(*((_QWORD *)v321 + 5) + 232LL) << 22) >> 31;
  else
    v355 = 0;
  v356 = (*(_DWORD *)(*(_QWORD *)v112 + 232LL) & 0x200u) >> 9;
  if ( (_DWORD)v356 != (v355 != 0) && ((*v322 & 0x1000) == 0 || v355) )
  {
    SetOrClrWF(v355, v85, 55554LL, 1LL);
    v357 = *(_QWORD **)(v85 + 112);
    if ( v357 )
    {
LABEL_728:
      while ( v357 != (_QWORD *)v85 )
      {
        if ( (*v322 & 0x1000) == 0 || v355 )
        {
          v358 = 0;
          SetOrClrWF(v355, v357, 55554LL, 1LL);
        }
        else
        {
          v358 = 1;
        }
        v359 = (_QWORD *)v357[14];
        if ( !v359 || v358 )
        {
          v359 = (_QWORD *)v357[11];
          if ( !v359 )
          {
            while ( 1 )
            {
              v357 = (_QWORD *)v357[13];
              if ( !v357 )
                goto LABEL_742;
              v359 = (_QWORD *)v357[11];
              if ( v359 )
                break;
              if ( v357 == (_QWORD *)v85 )
                goto LABEL_728;
            }
          }
        }
        v357 = v359;
      }
    }
  }
LABEL_742:
  if ( (*(_DWORD *)(*(_QWORD *)v112 + 288LL) & 0xF) == 2 )
  {
    if ( (unsigned int)IsTopLevelWindow(v85) )
    {
      v361 = *v322 >> 19;
      goto LABEL_756;
    }
    v362 = v85;
    do
    {
      v363 = 0;
      v352 = *(_QWORD *)(v362 + 104);
      if ( v352 )
      {
        v364 = 0LL;
        v353 = *(_QWORD *)(v362 + 24);
        if ( v353 )
        {
          v354 = *(_QWORD *)(v353 + 8);
          if ( v354 )
            v364 = *(_QWORD *)(v354 + 24);
        }
        if ( v352 == v364 )
          v363 = 1;
      }
      if ( v363 )
        break;
      v362 = *(_QWORD *)(v362 + 104);
    }
    while ( v352 );
    v365 = 0;
    if ( v362 )
    {
      v361 = *(_DWORD *)(v362 + 320) >> 20;
LABEL_756:
      v365 = v361 & 1;
    }
    v356 = *(_DWORD *)(v360 + 232) & 0xFFFFFBFF | (v365 << 10);
    *(_DWORD *)(v360 + 232) = v356;
  }
  v366 = v467;
  if ( (*(_BYTE *)(*(_QWORD *)v112 + 21LL) & 1) == 0 )
  {
    v356 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 8LL);
    if ( (v356 & 0x80u) != 0LL && (*(_BYTE *)(*((_QWORD *)v467 + 5) + 31LL) & 2) == 0 )
      SetOrClrWF(0LL, v85, 3846LL, 1LL);
  }
  v367 = WindowCloakStateComponentUIAware;
  if ( (WindowCloakStateComponentUIAware & 2) == 0 )
    *v322 |= 0x800u;
  if ( v367 )
  {
    v368 = zzzSetWindowCompositionCloak((struct tagWND *)v85, 0LL, v367);
    if ( v368 < 0 )
    {
      v369 = RtlNtStatusToDosError(v368);
      UserSetLastError(v369);
      v464 = 8;
      goto LABEL_840;
    }
  }
  if ( !*(_QWORD *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v356, v352, v353, v354)
    || (v374 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v371, v370, v372, v373),
        !ExIsResourceAcquiredSharedLite(*v374)) )
  {
    v468 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) == 0 )
    {
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      goto LABEL_771;
    }
LABEL_942:
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  }
LABEL_771:
  v378 = PsGetCurrentThreadWin32Thread(v376, v375, v377);
  ++*(_DWORD *)(v378 + 48);
  if ( v497 )
    zzzLockDisplayAreaAndInvalidateDCCache(v497, 16, 0LL);
  if ( v366 )
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v366, 16, 0LL);
  v382 = PsGetCurrentThreadWin32Thread(v380, v379, v381);
  --*(_DWORD *)(v382 + 48);
  v384 = *(unsigned __int8 *)(*(_QWORD *)v112 + 31LL);
  LOBYTE(v384) = v384 & 0xC0;
  if ( (_BYTE)v384 == 64 && !(unsigned int)IsTopLevelWindow(v85) )
  {
    v385 = *(struct tagWND **)(v85 + 104);
    if ( v385 )
    {
      v384 = v461;
      if ( v461 != *((_QWORD *)v385 + 2) )
      {
        if ( v366 != v385 )
        {
          v468 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2170LL);
        }
        zzzAttachThreadInput(v461, *(_QWORD *)(*(_QWORD *)(v85 + 104) + 16LL), 1LL);
        v386 = 0LL;
        v384 = *(_QWORD *)(v85 + 24);
        if ( v384 )
          v386 = *(struct tagWND **)(v384 + 104);
        v383 = *(struct tagWND **)(v85 + 104);
        if ( v383 != v386 )
        {
          v384 = *(unsigned int *)(*((_QWORD *)v383 + 5) + 288LL);
          if ( (((unsigned __int8)v384 ^ *(_BYTE *)(*(_QWORD *)v112 + 288LL)) & 0xF) != 0
            && !IsChildWindowDpiIsolationEnabled((struct tagWND *)v85, v383) )
          {
            xxxForceUpdateProcessDpiAwarenessContext(
              (struct tagWND *)v85,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v85 + 104) + 40LL) + 288LL));
          }
        }
      }
    }
  }
  if ( (unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v384, v383) )
  {
    if ( v488 != (unsigned __int16)gatomMessage )
    {
      v387 = v488 == 32769;
      goto LABEL_790;
    }
  }
  else if ( v488 != (unsigned __int16)gatomMessage && v488 != 32769 )
  {
    v387 = v488 == 32774;
LABEL_790:
    if ( !v387 && !*(_DWORD *)(v461 + 904) )
    {
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(v461 + 448) + 20LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      xxxUpdateInputHangInfo(0LL, 1LL);
    }
  }
  xxxAdjustSize((struct tagWND *)v85);
  ConstrainWindowSIZERECT(&v474);
  if ( *(_QWORD *)(v85 + 24)
    && (*(_BYTE *)(*(_QWORD *)v112 + 31LL) & 0x40) == 0
    && *(char *)(*(_QWORD *)v112 + 24LL) >= 0 )
  {
    xxxCheckFullScreen((struct tagWND *)v85, (struct tagSIZERECT *)&v474);
  }
  v388 = DWORD2(v474);
  if ( SDWORD2(v474) < 0 )
    v388 = 0;
  DWORD2(v474) = v388;
  v389 = HIDWORD(v474);
  if ( v474 < 0 )
    v389 = 0;
  HIDWORD(v474) = v389;
  RECTFromSIZERECT(*(_QWORD *)v112 + 88LL, &v474);
  if ( (_BYTE)v463 != 64 )
  {
    if ( v481 )
    {
      v390 = GetInheritedMonitor((struct tagWND *)v85);
      goto LABEL_808;
    }
    goto LABEL_809;
  }
  v390 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v366 + 5) + 256LL));
LABEL_808:
  v391 = (__int64 *)v390;
  if ( v390 )
  {
LABEL_810:
    v392 = *v391;
  }
  else
  {
LABEL_809:
    v391 = (__int64 *)MonitorFromRect(*(_QWORD *)v112 + 88LL, 2LL);
    v392 = 0LL;
    if ( v391 )
      goto LABEL_810;
  }
  if ( v392 != *(_QWORD *)(*(_QWORD *)v112 + 256LL) )
  {
    *(_QWORD *)(*(_QWORD *)v112 + 256LL) = v392;
    *(_WORD *)(*(_QWORD *)v112 + 284LL) = *(_WORD *)(v391[5] + 60);
    v393 = *(_DWORD **)(v85 + 288);
    if ( v393 )
    {
      --*v393;
      v394 = *(_DWORD **)(v85 + 288);
      if ( !*v394 )
        Win32FreePool(v394);
      *(_QWORD *)(v85 + 288) = 0LL;
    }
    v395 = (_DWORD *)v391[16];
    *(_QWORD *)(v85 + 288) = v395;
    ++*v395;
    if ( (_BYTE)v463 != 64 )
      UpdateTopLevelWindowDPITransform(v85, v391);
  }
  if ( (*(_BYTE *)(*(_QWORD *)v112 + 27LL) & 0x20) != 0 && GetRedirectionBitmap(v85) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v396 = RecreateRedirectionBitmap((struct tagWND *)v85, 0, 0LL);
    v397 = *(_QWORD *)(gpDispInfo + 40LL);
    if ( v396 < 0 )
    {
      GreUnlockVisRgn(v397);
      v464 = 3;
      goto LABEL_840;
    }
    GreUnlockVisRgn(v397);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 8LL) & 0x20) != 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v469[0] + 8LL) + 8LL) & 0x40) != 0 && !*(_QWORD *)(*(_QWORD *)v469[0] + 40LL) )
  {
    StyleWindow = GetStyleWindow(v85, 2848LL);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v399 = 49152LL;
    if ( !StyleWindow )
      v399 = 0x8000LL;
    CacheDC = CreateCacheDC(v85, v399, 0LL);
    v401 = *(_QWORD *)(gpDispInfo + 40LL);
    if ( !CacheDC )
    {
      GreUnlockVisRgn(v401);
      v464 = 10;
      goto LABEL_840;
    }
    GreUnlockVisRgn(v401);
  }
  if ( (v462 & 0x80000) != 0
    && (*(_BYTE *)(*(_QWORD *)v112 + 26LL) & 8) == 0
    && (int)xxxSetLayeredWindow((struct tagWND *)v85) < 0 )
  {
    v464 = 11;
    goto LABEL_840;
  }
  if ( (v462 & 0x2000000) != 0 && !GetStyleWindow(*(_QWORD *)(v85 + 104), 2818LL) )
  {
    SetWF(v85, 2818LL);
    if ( (int)SetRedirectedWindow((struct tagWND *)v85) < 0 )
    {
      ClrWF(v85, 2818LL);
      v464 = 12;
      goto LABEL_840;
    }
  }
  *((_QWORD *)&v504 + 1) = __PAIR64__(v471, v460);
  *(_QWORD *)&v504 = __PAIR64__(v472, HIDWORD(v472));
  if ( !xxxSendMessage(v85, 129LL, 0LL, &v502) )
  {
LABEL_840:
    v237 = v461;
    goto LABEL_841;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v85 + 136) + 8LL) + 9LL) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu((struct tagWND *)v85);
    SmartObjStackRef<tagMENU>::operator=(v475, SystemMenu);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator!=(v475) )
    {
      v541 = 0LL;
      v542 = 0LL;
      v407 = SmartObjStackRef<tagMENU>::operator tagMENU *(v475);
      ThreadLock(v407, &v541);
      xxxDeleteMenu(v475, 5LL, 1024LL);
      xxxDeleteMenu(v475, 5LL, 1024LL);
      ThreadUnlock1(v409, v408, v410);
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)v112 + 18LL) & 2) != 0
    && (!*((_QWORD *)&v507 + 1) || (_DWORD)v507 || *(_QWORD *)(v85 + 184)) )
  {
    v540 = 0LL;
    *((_QWORD *)&v505 + 1) = *(_QWORD *)(v85 + 184);
    v507 = *(_OWORD *)tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                        (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v85 + 184),
                        (struct _LARGE_UNICODE_STRING *)&v540);
  }
  if ( (*gpsi & 4) != 0 )
  {
    v411 = (_QWORD *)(v461 + 784);
    if ( !*(_QWORD *)(v461 + 784) && (*v322 & 0x10000000) != 0 )
    {
      DefaultImeWindow = xxxCreateDefaultImeWindow((struct tagWND *)v85, v466, v490[0]);
      v490[0] = (void *)(v461 + 784);
      v490[1] = DefaultImeWindow;
      HMAssignmentLock(v490, 0LL);
      v413 = *v411;
      if ( *v411 )
      {
        v543 = 0LL;
        v544 = 0LL;
        ThreadLockAlways(v413, &v543);
        xxxSendMessage(*v411, 647LL, 33LL, 0LL);
        ThreadUnlock1(v415, v414, v416);
      }
      v417 = (**(_DWORD **)(v461 + 480) >> 6) & 1;
      v526 = v417;
      v418 = *v411;
      if ( *v411 && v417 )
      {
        v545 = 0LL;
        v546 = 0LL;
        ThreadLock(v418, &v545);
        xxxSendMessage(*v411, 647LL, 25LL, *(_QWORD *)(*(_QWORD *)(v461 + 440) + 40LL));
        **(_QWORD **)(v461 + 480) &= ~0x40uLL;
        ThreadUnlock1(v420, v419, v421);
      }
    }
  }
  v422 = v467;
  if ( v467 && ((*v322 & 0x1000000) == 0 || *(struct tagWND **)(v85 + 104) == v467) )
  {
    v423 = PWInsertAfter(v486);
    v424 = v423;
    if ( (unsigned __int64)(v423 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v423 + 104) != *(_QWORD *)(v85 + 104) )
      v424 = (_BYTE)v463 == 64;
    v425 = *(_QWORD *)(v85 + 120);
    if ( v425 )
    {
      *(_DWORD *)(*(_QWORD *)v112 + 236LL) = *(_DWORD *)(*(_QWORD *)(v425 + 40) + 236LL);
      SetOrClrWF(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v85 + 120) + 40LL) + 232LL) & 0x40, v85, 55360LL, 1LL);
    }
    if ( !(unsigned int)ValidateNewParent(v85, v467, 1LL) )
    {
      v429 = 9;
      goto LABEL_904;
    }
    UnlinkWindow(v85, *(_QWORD *)(v85 + 104));
    v427 = *(_QWORD *)v112;
    v426 = v467;
    if ( (*(_BYTE *)(*(_QWORD *)v112 + 31LL) & 0xC0) != 0x40
      && v467 != *(struct tagWND **)(*((_QWORD *)v467 + 3) + 104LL) )
    {
      if ( (*(_BYTE *)(v427 + 24) & 8) != 0 )
      {
        if ( gHardErrorHandler )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v85);
          if ( TopMostInsertAfter )
            v424 = TopMostInsertAfter;
LABEL_894:
          v426 = v467;
        }
      }
      else
      {
        if ( !v424 )
          goto LABEL_890;
        v430 = 0;
        if ( v424 >= 0xFFFFFFFFFFFFFFFEuLL || v424 == 1 )
          v430 = 1;
        if ( !v430 && (*(_BYTE *)(*(_QWORD *)(v424 + 40) + 24LL) & 8) != 0 )
        {
LABEL_890:
          v424 = (unsigned __int64)CalcForegroundInsertAfterComponentUIAware((struct tagWND *)v85);
          goto LABEL_894;
        }
      }
    }
    if ( v424 >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      v429 = 13;
      goto LABEL_904;
    }
    LinkWindow((struct tagWND *)v85);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v467, 16, 0LL);
    v422 = v467;
  }
  v432 = *(_QWORD *)v112;
  if ( (*(_BYTE *)(*(_QWORD *)v112 + 31LL) & 0xC0) == 0x40 && (*(_BYTE *)(*((_QWORD *)v422 + 5) + 26LL) & 0x40) != 0 )
  {
    v433 = *(_DWORD *)(v432 + 96);
    v434 = *(_DWORD *)(v432 + 88);
    v435 = v489;
    *(_DWORD *)(v432 + 96) = DWORD2(v489) + v489 - v434;
    *(_DWORD *)(*(_QWORD *)v112 + 88LL) = v434 + *(_DWORD *)(*(_QWORD *)v112 + 96LL) - v433;
  }
  else
  {
    v435 = v489;
  }
  v568 = *(_OWORD *)(*(_QWORD *)v112 + 88LL);
  xxxSendTransformableMessage(v85, 131, 0, (unsigned int)&v568, 0);
  tagWND::RedirectedRecttagWNDrcClient::RedirectedFieldleft<long>::operator=(v85 + 132, &v568);
  tagWND::RedirectedRecttagWNDrcClient::RedirectedFieldtop<long>::operator=(v85 + 133, (char *)&v568 + 4);
  tagWND::RedirectedRecttagWNDrcClient::RedirectedFieldright<long>::operator=(v85 + 134, (char *)&v568 + 8);
  tagWND::RedirectedRecttagWNDrcClient::RedirectedFieldbottom<long>::operator=(v85 + 135, (char *)&v568 + 12);
  if ( xxxSendMessage(v85, 1LL, 0LL, &v502) != -1 )
  {
    SetWF(v85, 1920LL);
    xxxConsiderPreferredDpiChange((struct tagWND *)v85);
    if ( (unsigned int)IsWindowDesktopComposed(v85) )
    {
      v437 = (void *)ReferenceDwmApiPort(v436);
      DwmAsyncChildStyleChange(v437);
      DwmChildRectChange((struct tagWND *)v85);
      DirtyVisRgnTrackers(v85);
      v439 = (void *)ReferenceDwmApiPort(v438);
      DwmAsyncOwnerChange(v439);
    }
    xxxWindowEvent(0x8000u, 0);
    if ( (*(_BYTE *)(*(_QWORD *)v112 + 16LL) & 0x10) == 0 )
    {
      xxxSendSizeMessage(v85);
      if ( v467 )
      {
        DesktopWindow = GetDesktopWindow(v85, v440);
        if ( DesktopWindow != v442 )
        {
          LODWORD(v568) = v568 - v435;
          DWORD1(v568) -= DWORD1(v489);
        }
      }
      xxxSendTransformableMessage(v85, 3, 0, (unsigned __int16)v568 | (WORD2(v568) << 16), 0);
    }
    v443 = *(_BYTE *)(*(_QWORD *)v112 + 31LL);
    if ( (v443 & 0x20) != 0 )
    {
      SetMinimize((struct tagWND *)v85);
      v444 = 7LL;
    }
    else
    {
      if ( (v443 & 1) == 0 )
        goto LABEL_922;
      ClrWF(v85, 3841LL);
      v444 = 3LL;
    }
    xxxMinMaximize(v85, v444);
LABEL_922:
    CalcWindowFullScreen((struct tagWND *)v85);
    if ( (*(_BYTE *)(*(_QWORD *)v112 + 31LL) & 0xC0) == 0x40 && (*(_BYTE *)(*(_QWORD *)v112 + 24LL) & 4) == 0 )
    {
      v445 = *(_QWORD *)(v85 + 104);
      if ( v445 )
      {
        *(_QWORD *)&v529 = *(_QWORD *)(v461 + 416);
        *(_QWORD *)(v461 + 416) = &v529;
        *((_QWORD *)&v529 + 1) = v445;
        HMLockObject(v445);
        xxxSendTransformableMessage(
          *(_QWORD *)(v85 + 104),
          528,
          (*(unsigned __int16 *)(*(_QWORD *)v112 + 320LL) << 16) | 1,
          *(_QWORD *)v85,
          0);
        ThreadUnlock1(v447, v446, v448);
      }
    }
    xxxInheritWindowMonitor((struct tagWND *)v85);
    if ( (a5 & 0x10000000) != 0 )
      xxxShowWindow((struct tagWND *)v85, v479 | gdwPUDFlags & 0x10000u);
    v451 = *(_QWORD *)v112;
    if ( (*(_BYTE *)(*(_QWORD *)v112 + 31LL) & 0xC0) == 0 || (*(_BYTE *)(v451 + 26) & 4) != 0 )
    {
      v452 = v473;
      v451 = *((unsigned int *)*v473 + 171);
      if ( (_DWORD)v451 )
      {
        xxxSendMessage(v85, 50LL, (unsigned int)v451, 0LL);
        *((_DWORD *)*v452 + 171) = 0;
      }
    }
    if ( v480 )
      ThreadUnlock1(v451, v449, v450);
    ClassUnlock(*(struct tagCLS **)v469[0]);
    v456 = ThreadUnlock1(v454, v453, v455);
    v457 = v456;
    if ( !v456 || (*(_BYTE *)(_HMPheFromObject(v456) + 25) & 1) != 0 )
      v457 = 0LL;
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v475);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v469);
    return v457;
  }
  v429 = v464;
LABEL_904:
  if ( v480 )
    ThreadUnlock1(v427, v426, v428);
  if ( ThreadUnlock1(v427, v426, v428) )
    xxxDestroyWindow(v85);
  ClassUnlock(*(struct tagCLS **)v469[0]);
  if ( v429 )
    TraceLoggingCreateWindowFailed(
      v429,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
LABEL_63:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v475);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v469);
  return 0LL;
}
