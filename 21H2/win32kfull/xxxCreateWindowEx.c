/*
 * XREFs of xxxCreateWindowEx @ 0x1C00751E0
 * Callers:
 *     xxxCreateWindowStation @ 0x1C000C6EC (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C0033658 (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateWindowEx @ 0x1C00BF540 (NtUserCreateWindowEx.c)
 *     xxxCsDdeInitialize @ 0x1C01280E0 (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C013DECC (xxxAddShadow.c)
 *     xxxNextWindow @ 0x1C01F412C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F4970 (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C00010A4 (TraceChildWindowDpiTelemetry.c)
 *     zzzAttachThreadInput @ 0x1C00115F8 (zzzAttachThreadInput.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0013D1C (SetWindowSubtreeCoreWindowStatus.c)
 *     IsImmersiveAppIORestricted @ 0x1C0013E08 (IsImmersiveAppIORestricted.c)
 *     xxxCreateClassSmIcon @ 0x1C00236C8 (xxxCreateClassSmIcon.c)
 *     xxxClientLoadMenu @ 0x1C00237E0 (xxxClientLoadMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C0025544 (RtlInitUnicodeStringOrId.c)
 *     ReferenceClass @ 0x1C0025580 (ReferenceClass.c)
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C002C16C (SetMinimize.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0031998 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     IsValidBandForProcess @ 0x1C00325B8 (IsValidBandForProcess.c)
 *     IsValidBand @ 0x1C0032658 (IsValidBand.c)
 *     xxxCreateDefaultImeWindow @ 0x1C0033658 (xxxCreateDefaultImeWindow.c)
 *     RtlInitLargeAnsiString @ 0x1C0034008 (RtlInitLargeAnsiString.c)
 *     DwmAsyncOwnerChange @ 0x1C0035D14 (DwmAsyncOwnerChange.c)
 *     xxxSetLayeredWindow @ 0x1C0035DC0 (xxxSetLayeredWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036D90 (zzzSetWindowCompositionCloak.c)
 *     PWInsertAfter @ 0x1C0037514 (PWInsertAfter.c)
 *     IsWindowBeingDestroyed @ 0x1C00388DC (IsWindowBeingDestroyed.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C003892C (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00389A0 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C00389C8 (GetNonChildAncestor.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0038B50 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetMonitorRect @ 0x1C0041DF8 (GetMonitorRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042200 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0042310 (_MonitorFromRect.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C0042710 (UpdateTopLevelWindowDPITransform.c)
 *     xxxLoadUserApiHook @ 0x1C0046930 (xxxLoadUserApiHook.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C00472D4 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00473F8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C0047A8C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     _DestroyMenu @ 0x1C0048A30 (_DestroyMenu.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0049A6C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     xxxAdjustSize @ 0x1C004B2E8 (xxxAdjustSize.c)
 *     SetVisible @ 0x1C004BD40 (SetVisible.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E0F0 (DwmAsyncChildStyleChange.c)
 *     DwmChildRectChange @ 0x1C004E18C (DwmChildRectChange.c)
 *     NeedsWindowEdge @ 0x1C004E930 (NeedsWindowEdge.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C0051E4C (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxUpdateInputHangInfo @ 0x1C0057B10 (xxxUpdateInputHangInfo.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     SetTiledRect @ 0x1C00643D4 (SetTiledRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     CalcWindowFullScreen @ 0x1C006AA64 (CalcWindowFullScreen.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006B740 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetInheritedMonitor @ 0x1C006C184 (GetInheritedMonitor.c)
 *     xxxInheritWindowMonitor @ 0x1C006C878 (xxxInheritWindowMonitor.c)
 *     _GetWindowCompositionInfo @ 0x1C006DEB0 (_GetWindowCompositionInfo.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C006FC28 (ShouldUseLogPixelsForWindowMetrics.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     LinkWindow @ 0x1C006FD00 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C00704E0 (IsDpiBoundaryBetweenWindows.c)
 *     GetStyleWindow @ 0x1C0071560 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0072764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078DC8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ValidateNewParent @ 0x1C0078E18 (ValidateNewParent.c)
 *     ValidateParentDepth @ 0x1C0078FA0 (ValidateParentDepth.c)
 *     DereferenceClass @ 0x1C0079C50 (DereferenceClass.c)
 *     _InnerGetClassPtr @ 0x1C007A650 (_InnerGetClassPtr.c)
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     xxxCheckFullScreen @ 0x1C007C5FC (xxxCheckFullScreen.c)
 *     RegisterDefaultClass @ 0x1C007D654 (RegisterDefaultClass.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     UnlinkWindow @ 0x1C007E978 (UnlinkWindow.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C008A9C4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     SetRedirectedWindow @ 0x1C00BD1BC (SetRedirectedWindow.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BD4F8 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetRedirectionBitmap @ 0x1C00BEF20 (GetRedirectionBitmap.c)
 *     MapClientNeuterToClientPfn @ 0x1C00BFE0C (MapClientNeuterToClientPfn.c)
 *     xxxGetSystemMenu @ 0x1C00DC8C4 (xxxGetSystemMenu.c)
 *     DwmAsyncChildCreate @ 0x1C00EA364 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C00EA4A8 (DwmGetClassStyle.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F180C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F1850 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     RecreateRedirectionBitmap @ 0x1C00F18E8 (RecreateRedirectionBitmap.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00FD288 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     xxxSendSizeMessage @ 0x1C00FFBC0 (xxxSendSizeMessage.c)
 *     ClassLock @ 0x1C0101110 (ClassLock.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     W32GetCurrentThreadDpiHostingBehavior @ 0x1C0101C30 (W32GetCurrentThreadDpiHostingBehavior.c)
 *     RECTFromSIZERECT @ 0x1C0102FFC (RECTFromSIZERECT.c)
 *     GetThreadDesktopWindow @ 0x1C0104120 (GetThreadDesktopWindow.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C010F6F0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     IsTopLevelParent @ 0x1C010F778 (IsTopLevelParent.c)
 *     GetAppCompatFlags @ 0x1C0110F40 (GetAppCompatFlags.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0111F18 (IsChildWindowDpiIsolationEnabled.c)
 *     RegisterIconTitleClass @ 0x1C0118998 (RegisterIconTitleClass.c)
 *     ValidateOwnerDepth @ 0x1C011BBA4 (ValidateOwnerDepth.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0123424 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     UserGetLastError @ 0x1C012D0A8 (UserGetLastError.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C01681B0 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     _lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator() @ 0x1C01698B8 (_lambda_cd33d3260540cb20afcdcf97ba84ccae_--operator().c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C0169A1C (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetTopMostInsertAfter @ 0x1C01D0ADC (GetTopMostInsertAfter.c)
 *     ??$?9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z @ 0x1C01D2BC8 (--$-9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E646C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     HasMessageRootWindow @ 0x1C0209108 (HasMessageRootWindow.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1C0224CC4 (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     _W32ExceptionHandler @ 0x1C025D4E4 (_W32ExceptionHandler.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        __int32 a6,
        LONG a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  __int64 v19; // r12
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  int v24; // edi
  int v25; // eax
  __int64 v26; // rax
  int v27; // r15d
  int v28; // ecx
  int v29; // r13d
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v35; // rcx
  int v36; // r15d
  __int64 v37; // rdi
  unsigned __int16 Atom; // bx
  __int64 v39; // rdi
  __int64 v40; // r15
  __int64 *ClassPtr; // rax
  __int64 v42; // r14
  __int64 v43; // rdi
  __int64 v44; // rbx
  unsigned __int16 v45; // r15
  int v46; // eax
  __int64 v47; // r8
  int v48; // r10d
  unsigned int v49; // ecx
  int v50; // r10d
  __int64 v51; // rax
  NotifyShell *v52; // rdi
  unsigned int CurrentThreadDpiHostingBehavior; // eax
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // ebx
  __int64 v60; // r8
  int v61; // ecx
  int v62; // ecx
  int v63; // edx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // ebx
  wchar_t *v67; // rcx
  __int64 v68; // rbx
  __int64 *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rdx
  LONG v74; // ebx
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  LONG v77; // eax
  LONG v78; // edx
  unsigned int v79; // ecx
  unsigned int v80; // eax
  __int64 *InheritedMonitor; // rbx
  __int64 v82; // rcx
  _DWORD *v83; // rax
  _DWORD *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 *ThreadDesktopWindow; // rbx
  struct _KPROCESS *v89; // rcx
  int ProcessId; // r14d
  __int64 v91; // rsi
  __int64 v92; // rax
  int v93; // r15d
  int v94; // r12d
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // edi
  __int64 v97; // rdx
  __int64 v98; // rcx
  void *v99; // rax
  char v100; // r14
  __int64 v101; // rax
  SIZE_T v102; // rcx
  __int64 v103; // rcx
  volatile void *v104; // rbx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // r8
  int v109; // ebx
  __int64 v110; // rdx
  int AppCompatFlags; // eax
  __int64 v112; // rcx
  char v113; // bl
  unsigned __int16 v114; // r8
  int v115; // eax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v117; // r14
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v123; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 *v128; // rax
  int v129; // eax
  unsigned int v130; // esi
  __int32 v131; // r14d
  unsigned int v132; // r15d
  int v133; // edx
  int v134; // r13d
  int v135; // r15d
  LONG v136; // ebx
  LONG v137; // r14d
  __int64 v138; // rdx
  int v139; // r13d
  int v140; // eax
  __int64 v141; // rcx
  __int64 v142; // rbx
  __int64 v143; // rcx
  _DWORD *v144; // rax
  _DWORD *v145; // rcx
  _DWORD *v146; // rax
  __int16 v147; // ax
  int v148; // eax
  _DWORD *v149; // rcx
  int v150; // eax
  unsigned __int64 v151; // xmm0_8
  int v152; // r15d
  int v153; // r14d
  _DWORD *v154; // rcx
  int v155; // eax
  __int64 v156; // rcx
  char v157; // al
  _QWORD *v158; // r13
  __int64 v159; // r8
  __int64 v160; // rcx
  __int64 v161; // rcx
  char v162; // al
  __int64 v163; // rdx
  __int64 v164; // rax
  _QWORD *v165; // rax
  __int64 v166; // rdx
  char v167; // bl
  __int64 v168; // rcx
  __int64 NonChildAncestor; // rbx
  _QWORD *v170; // r14
  __int64 v171; // rcx
  unsigned int v172; // eax
  __int64 v173; // rax
  __int64 KernelEvent; // rax
  __int64 v175; // rax
  __int64 v176; // rcx
  unsigned int v177; // edx
  __int64 v178; // rbx
  __int64 v179; // rcx
  NTSTATUS v180; // eax
  ULONG v181; // eax
  __int64 v182; // rdx
  __int64 v183; // r8
  int v184; // r13d
  unsigned __int64 v185; // rbx
  unsigned int v186; // edx
  __int64 *v187; // r13
  __int64 v188; // rdx
  __int64 v189; // rdx
  __int64 v190; // rax
  __int64 v191; // rcx
  int v192; // ecx
  int v193; // eax
  int v194; // edx
  int v195; // ecx
  __int64 v196; // r8
  __int64 v197; // rax
  __int64 *v198; // rbx
  __int64 v199; // rcx
  __int64 v200; // rdx
  _DWORD *v201; // rax
  _DWORD *v202; // rcx
  _DWORD *v203; // rax
  int v204; // eax
  __int64 v205; // rcx
  __int64 StyleWindow; // rbx
  __int64 v207; // rdx
  __int64 CacheDC; // rax
  __int64 v209; // rcx
  int v210; // ebx
  int v211; // ebx
  __int64 v212; // r9
  __int64 v213; // r10
  __int64 v214; // r9
  __int64 v215; // rdx
  struct tagCLS *v216; // rbx
  __int64 v217; // rax
  _QWORD *v218; // rbx
  __int64 v219; // rax
  __int64 v220; // rcx
  _QWORD *v221; // rcx
  __int64 DefaultImeWindow; // rax
  __int64 v223; // rdx
  __int64 v224; // rbx
  __int64 v225; // rax
  __int64 v226; // rcx
  int v227; // ecx
  __int64 v228; // rbx
  __int64 v229; // rax
  _QWORD *v230; // rcx
  __int64 v231; // rdx
  __int64 v232; // rax
  unsigned __int64 v233; // rbx
  __int64 v234; // rax
  __int64 v235; // rcx
  __int64 TopMostInsertAfter; // rax
  __int64 v237; // r9
  __int64 v238; // rdx
  int v239; // edx
  int v240; // r8d
  struct tagCLS *v241; // rbx
  __int64 v242; // rax
  __int64 v243; // rdx
  __int64 v244; // rcx
  int v245; // ebx
  void *v246; // rax
  __int64 v247; // rdx
  int v248; // r8d
  __int64 v249; // rdx
  __int64 v250; // rcx
  __int64 *v251; // rbx
  __int64 v252; // rbx
  void *v253; // rax
  __int64 v254; // r9
  __int64 v255; // rcx
  __int64 v256; // rax
  __int64 v257; // rcx
  __int64 v258; // rcx
  char v259; // al
  unsigned int v260; // edx
  __int64 v261; // rcx
  __int64 v262; // rcx
  __int64 v263; // rax
  unsigned __int64 v264; // rcx
  struct _LARGE_STRING *v265; // r9
  __int64 v266; // rcx
  __int64 v267; // rcx
  unsigned int v268; // eax
  struct tagCLS *v269; // r15
  struct _KTHREAD *v270; // r14
  __int64 v271; // rdi
  __int64 v272; // rdx
  __int64 v273; // rcx
  __int64 v274; // r8
  __int64 v275; // rax
  int v276; // ebx
  __int64 v277; // rcx
  __int64 v278; // rax
  __int64 *v279; // rax
  __int64 v280; // rcx
  __int64 v281; // rax
  __int64 v282; // rbx
  int LowLimit; // [rsp+30h] [rbp-478h]
  __int64 v284; // [rsp+60h] [rbp-448h] BYREF
  int v285; // [rsp+68h] [rbp-440h]
  int v286; // [rsp+70h] [rbp-438h]
  LONG v287; // [rsp+78h] [rbp-430h]
  unsigned __int16 v288; // [rsp+7Ch] [rbp-42Ch]
  int v289; // [rsp+80h] [rbp-428h]
  int v290; // [rsp+84h] [rbp-424h]
  __int32 v291; // [rsp+88h] [rbp-420h]
  unsigned int v292; // [rsp+8Ch] [rbp-41Ch]
  __int64 v293[2]; // [rsp+90h] [rbp-418h] BYREF
  int v294; // [rsp+A0h] [rbp-408h]
  unsigned int v295; // [rsp+A4h] [rbp-404h]
  __int128 v296; // [rsp+A8h] [rbp-400h] BYREF
  _QWORD *v297; // [rsp+B8h] [rbp-3F0h]
  int v298; // [rsp+C0h] [rbp-3E8h]
  _QWORD v299[2]; // [rsp+C8h] [rbp-3E0h] BYREF
  _QWORD *v300; // [rsp+D8h] [rbp-3D0h]
  int v301; // [rsp+E0h] [rbp-3C8h]
  int v302; // [rsp+E4h] [rbp-3C4h]
  unsigned int WindowCloakStateComponentUIAware; // [rsp+E8h] [rbp-3C0h]
  int v304; // [rsp+ECh] [rbp-3BCh]
  int v305; // [rsp+F0h] [rbp-3B8h]
  int v306; // [rsp+F4h] [rbp-3B4h]
  __int16 v307; // [rsp+F8h] [rbp-3B0h]
  __int16 v308; // [rsp+FAh] [rbp-3AEh]
  int v309; // [rsp+FCh] [rbp-3ACh]
  int v310; // [rsp+100h] [rbp-3A8h]
  int v311; // [rsp+104h] [rbp-3A4h]
  int v312; // [rsp+108h] [rbp-3A0h]
  __int64 v313; // [rsp+110h] [rbp-398h]
  int v314; // [rsp+118h] [rbp-390h]
  __int64 v315; // [rsp+120h] [rbp-388h]
  NotifyShell *v316; // [rsp+128h] [rbp-380h]
  __int128 v317; // [rsp+130h] [rbp-378h] BYREF
  int v318; // [rsp+140h] [rbp-368h]
  int v319; // [rsp+148h] [rbp-360h]
  int v320; // [rsp+150h] [rbp-358h]
  int v321; // [rsp+154h] [rbp-354h]
  __int64 v322; // [rsp+158h] [rbp-350h]
  __int64 v323; // [rsp+160h] [rbp-348h]
  wchar_t *Str1; // [rsp+168h] [rbp-340h]
  __int128 v325; // [rsp+170h] [rbp-338h] BYREF
  __int128 v326; // [rsp+180h] [rbp-328h]
  __int128 v327; // [rsp+190h] [rbp-318h]
  __int128 v328; // [rsp+1A0h] [rbp-308h]
  __int128 v329; // [rsp+1B0h] [rbp-2F8h]
  __int128 v330; // [rsp+1C0h] [rbp-2E8h]
  __int128 v331; // [rsp+1D0h] [rbp-2D8h] BYREF
  __int64 v332; // [rsp+1E0h] [rbp-2C8h]
  __int128 *v333; // [rsp+1E8h] [rbp-2C0h]
  __int64 v334; // [rsp+1F0h] [rbp-2B8h]
  __int64 v335; // [rsp+1F8h] [rbp-2B0h]
  __m128i v336; // [rsp+200h] [rbp-2A8h]
  __int128 v337; // [rsp+210h] [rbp-298h] BYREF
  __int64 v338; // [rsp+220h] [rbp-288h]
  __int128 v339; // [rsp+228h] [rbp-280h] BYREF
  __int64 v340; // [rsp+238h] [rbp-270h]
  __int64 v341; // [rsp+250h] [rbp-258h]
  __int128 *v342; // [rsp+258h] [rbp-250h]
  wchar_t *v343; // [rsp+260h] [rbp-248h]
  char v344[8]; // [rsp+268h] [rbp-240h] BYREF
  struct _KPROCESS *v345; // [rsp+270h] [rbp-238h]
  _QWORD v346[2]; // [rsp+278h] [rbp-230h] BYREF
  int v347; // [rsp+288h] [rbp-220h]
  __int64 v348; // [rsp+290h] [rbp-218h] BYREF
  unsigned __int64 v349; // [rsp+298h] [rbp-210h]
  __int128 v350; // [rsp+2A0h] [rbp-208h] BYREF
  __int64 v351; // [rsp+2B0h] [rbp-1F8h]
  __int128 v352; // [rsp+2B8h] [rbp-1F0h] BYREF
  __int64 v353; // [rsp+2C8h] [rbp-1E0h]
  struct _UNICODE_STRING v354; // [rsp+2D0h] [rbp-1D8h] BYREF
  _QWORD v355[2]; // [rsp+2E0h] [rbp-1C8h] BYREF
  _QWORD v356[2]; // [rsp+2F0h] [rbp-1B8h] BYREF
  _QWORD v357[2]; // [rsp+300h] [rbp-1A8h] BYREF
  _QWORD v358[2]; // [rsp+310h] [rbp-198h] BYREF
  _QWORD v359[2]; // [rsp+320h] [rbp-188h] BYREF
  _QWORD v360[2]; // [rsp+330h] [rbp-178h] BYREF
  _QWORD v361[2]; // [rsp+340h] [rbp-168h] BYREF
  _QWORD v362[2]; // [rsp+350h] [rbp-158h] BYREF
  _QWORD v363[4]; // [rsp+360h] [rbp-148h] BYREF
  _QWORD v364[3]; // [rsp+380h] [rbp-128h] BYREF
  _QWORD v365[3]; // [rsp+398h] [rbp-110h] BYREF
  _QWORD v366[3]; // [rsp+3B0h] [rbp-F8h] BYREF
  __int64 v367; // [rsp+3C8h] [rbp-E0h]
  volatile void *v368; // [rsp+3D0h] [rbp-D8h]
  __int128 v369; // [rsp+3E0h] [rbp-C8h] BYREF
  __int128 v370; // [rsp+3F0h] [rbp-B8h] BYREF
  __int64 v371[2]; // [rsp+400h] [rbp-A8h] BYREF
  __int128 v372; // [rsp+410h] [rbp-98h]
  __int64 v373; // [rsp+420h] [rbp-88h]
  __int128 v374; // [rsp+428h] [rbp-80h] BYREF
  __int64 v375; // [rsp+438h] [rbp-70h] BYREF
  int v376[4]; // [rsp+448h] [rbp-60h] BYREF
  struct tagRECT v377; // [rsp+458h] [rbp-50h] BYREF

  v333 = a4;
  v323 = a3;
  Str1 = a2;
  v301 = a1;
  v321 = a1;
  v343 = a2;
  v342 = a4;
  v19 = a10;
  v313 = a10;
  v315 = a12;
  v332 = a13;
  v312 = 0;
  v318 = 0;
  v309 = 0;
  v302 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v293);
  *(_OWORD *)v376 = 0LL;
  v296 = 0LL;
  v304 = 5;
  v319 = 5;
  v322 = 0LL;
  v325 = 0LL;
  v326 = 0LL;
  v327 = 0LL;
  v328 = 0LL;
  v329 = 0LL;
  v330 = 0LL;
  v331 = 0LL;
  v284 = gptiCurrent;
  v339 = 0LL;
  v340 = 0LL;
  v350 = 0LL;
  v351 = 0LL;
  v352 = 0LL;
  v353 = 0LL;
  v337 = 0LL;
  v338 = 0LL;
  v306 = 0;
  v305 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v20 = 0;
  v289 = 0;
  v317 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>((__int64)v299, a11);
  v290 = 0;
  v23 = gptiCurrent;
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0 )
  {
    if ( !(unsigned int)RegisterIconTitleClass() )
      goto LABEL_35;
    v23 = v284;
  }
  v24 = a1 & 0x7FFFFFFF;
  if ( a1 >= 0 )
    v24 = a1;
  v25 = 800;
  if ( a1 >= 0 )
    LOWORD(v25) = 0;
  v310 = v25;
  v307 = v25;
  v26 = *(_QWORD *)(v23 + 456);
  v335 = v26;
  v341 = v26;
  if ( a10 && *(_QWORD *)(a10 + 24) != v26 )
    goto LABEL_35;
  v298 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(v23 + 424)) )
      goto LABEL_43;
    v20 = 1;
    v289 = 1;
    v23 = v284;
  }
  if ( (a16 & 2) != 0 )
  {
    if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(v23 + 424)) )
    {
      v23 = v284;
      goto LABEL_16;
    }
LABEL_43:
    v33 = 5LL;
    goto LABEL_36;
  }
LABEL_16:
  v27 = a14;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14) )
      goto LABEL_35;
    if ( a14 == 15 )
      goto LABEL_35;
    v28 = *(_DWORD *)(*(_QWORD *)(v23 + 424) + 820LL);
    if ( (v28 & 0x30) == 0x10 && (v28 & 0x200) == 0 && a14 == 1 && !v20 && !(unsigned int)HasMessageRootWindow(a10) )
      goto LABEL_35;
  }
  v29 = HIWORD(a5) & 0xC000;
  v294 = v29;
  v308 = HIWORD(a5) & 0xC000;
  v314 = (_WORD)v29 == 0x4000;
  if ( (_WORD)v29 == 0x4000 || (v30 = ShouldSetNoOwner(*(_QWORD *)(v23 + 424), a10), v23 = v284, !v30) )
  {
    if ( a10 && a10 != GetDesktopWindow(a10) )
    {
      v32 = *(_QWORD *)(a10 + 40);
      v289 = *(_BYTE *)(v32 + 234) & 0x20;
      if ( a14 )
      {
        if ( a14 != *(_DWORD *)(v32 + 236) )
          goto LABEL_35;
      }
      else
      {
        v27 = *(_DWORD *)(v32 + 236);
        a14 = v27;
      }
      goto LABEL_42;
    }
  }
  else
  {
    v19 = 0LL;
    v313 = 0LL;
  }
  if ( !a14 )
  {
    if ( IsImmersiveAppIORestricted(*(_QWORD *)(v23 + 424)) )
    {
      v289 = 1;
      v27 = 15;
    }
    else if ( (*(_DWORD *)(v31 + 820) & 2) == 0 || (v27 = 2, (v24 & 8) == 0) )
    {
      v27 = 1;
    }
    a14 = v27;
  }
LABEL_42:
  v320 = v289;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v23 + 424), v27, v19) )
    goto LABEL_43;
  v285 = v24;
  v286 = v24;
  if ( (v24 & 0x400000) != 0 )
    goto LABEL_53;
  if ( !v19 )
  {
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 || (v36 = v24, v285 = v24, v286 = v24, (_WORD)a2 != 0x8002) )
    {
      v36 = v24;
      v285 = v24;
      v286 = v24;
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 824) & 1) != 0 )
      {
        v36 = v24 | 0x400000;
        v285 = v24 | 0x400000;
        v286 = v24 | 0x400000;
      }
    }
    goto LABEL_54;
  }
  v285 = v24;
  v286 = v24;
  if ( (_WORD)v29 == 0x4000 && (v285 = v24, v286 = v24, (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 26LL) & 0x50) == 0x40) )
  {
    v36 = v24 | 0x400000;
    v285 = v24 | 0x400000;
    v286 = v24 | 0x400000;
  }
  else
  {
LABEL_53:
    v36 = v285;
  }
LABEL_54:
  if ( (v36 & 0x2200000) == 0x2200000 )
    goto LABEL_35;
  if ( *(_QWORD *)(v284 + 592) && !RtlAreAllAccessesGranted(*(_DWORD *)(v284 + 888), 2u) )
    goto LABEL_43;
  if ( (_WORD)v29 == 0x4000 )
  {
    if ( !v19 )
    {
      v33 = 1406LL;
      goto LABEL_36;
    }
    if ( !(unsigned int)ValidateParentDepth(0LL, v19) )
    {
LABEL_35:
      v33 = 87LL;
LABEL_36:
      UserSetLastError(v33, v21, v22);
      goto LABEL_37;
    }
  }
  v311 = a15;
  v295 = a9;
  v292 = a8;
  v287 = a7;
  v291 = a6;
  while ( 1 )
  {
    v37 = v323;
    if ( (v323 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v344);
      if ( (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, *(char **)(v37 + 8)) < 0 )
      {
        Atom = 0;
        v288 = 0;
        v305 = 1;
      }
      else
      {
        Atom = UserFindAtom(gawchAtomScratch);
        v288 = Atom;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v344);
    }
    else
    {
      Atom = v323;
      v288 = v323;
    }
    if ( Atom )
    {
      v39 = *(_QWORD *)(v284 + 424);
      v40 = v39 + 344;
      ClassPtr = (__int64 *)InnerGetClassPtr(Atom, v39 + 344, v315);
      if ( ClassPtr )
        break;
      v42 = v39 + 352;
      ClassPtr = (__int64 *)InnerGetClassPtr(Atom, v39 + 352, 0LL);
      if ( ClassPtr )
        break;
      v43 = hModClient;
      ClassPtr = (__int64 *)InnerGetClassPtr(Atom, v40, hModClient);
      if ( ClassPtr )
        break;
      ClassPtr = (__int64 *)InnerGetClassPtr(Atom, v42, v43);
      if ( ClassPtr )
        break;
    }
LABEL_109:
    if ( v305
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v67 = Str1)
        : (v67 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v67)) )
    {
      v33 = 1407LL;
      goto LABEL_36;
    }
    v305 = 1;
  }
  v44 = *ClassPtr;
  if ( *ClassPtr != *(_QWORD *)v293[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v293);
    if ( v44 )
    {
      v293[0] = *(_QWORD *)(v44 + 128);
      ++*(_DWORD *)(v293[0] + 8);
    }
    else
    {
      v293[0] = gSmartObjNullRef;
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 6LL) & 1) != 0 && (unsigned int)PsGetWin32KFilterSet() == 5 )
    goto LABEL_37;
  v45 = v311;
  v46 = NeedsWindowEdge(a5, v285, (unsigned __int16)v311 >= 0x400u);
  v49 = v48 & 0xFFFFFEFF;
  v50 = v48 | 0x100;
  if ( !v46 )
    v50 = v49;
  v285 = v50;
  LOBYTE(v47) = 1;
  v51 = HMAllocObject(v284, v335, v47);
  v297 = (_QWORD *)v51;
  v52 = (NotifyShell *)v51;
  v316 = (NotifyShell *)v51;
  if ( !v51 )
  {
    if ( (unsigned int)UserGetLastError() == 8 )
      TraceLoggingCreateWindowFailed(
        1u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    goto LABEL_37;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v51 + 56));
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v52 + 2) + 424LL) + 820LL) & 0x1000000) != 0 )
    *((_DWORD *)v52 + 82) |= 0x40u;
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 296LL) = 0LL;
  *((_QWORD *)v52 + 35) = 0LL;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 232LL) &= ~0x40000000u;
  CurrentThreadDpiHostingBehavior = W32GetCurrentThreadDpiHostingBehavior();
  v54 = CurrentThreadDpiHostingBehavior;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 292LL) = CurrentThreadDpiHostingBehavior;
  if ( (_WORD)v29 != 0x4000 || !v19 || v19 == GetThreadDesktopWindow(0LL) )
    goto LABEL_97;
  v55 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v57 = *(_QWORD *)(ThreadWin32Thread + 456);
    if ( v57 )
      v55 = *(_QWORD *)(v57 + 104);
  }
  if ( v19 == v55
    || (v54 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 424LL), *(_QWORD *)(v284 + 424) != v54)
    || (unsigned int)IsChildWindowDpiIsolationEnabled(0LL, v19) )
  {
LABEL_97:
    *(_DWORD *)(*((_QWORD *)v52 + 5) + 288LL) = W32GetCurrentThreadDpiAwarenessContext(v54);
    if ( (*(_DWORD *)(*((_QWORD *)v52 + 5) + 288LL) & 0x4000000F) == 0
      && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) + 224LL) & 0x40) != 0 )
    {
      *(_DWORD *)(*((_QWORD *)v52 + 5) + 288LL) |= 0x40000000u;
    }
  }
  else
  {
    v58 = *(unsigned int *)(*(_QWORD *)(v19 + 40) + 288LL);
    *(_DWORD *)(*((_QWORD *)v52 + 5) + 288LL) = v58;
    v59 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 288LL);
    if ( (((unsigned __int8)v59 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext(v58)) & 0xF) != 0 )
      TraceChildWindowDpiTelemetry((__int64)v52, v19, 0);
  }
  v60 = *((_QWORD *)v52 + 5);
  v61 = *(_DWORD *)(v60 + 288);
  if ( (v61 & 0xF) == 2 && (v61 & 0xF0) == 0x20 )
  {
    v62 = 0x10000000;
    v63 = 0x20000000;
  }
  else
  {
    v62 = 0;
    v63 = 0;
  }
  *(_DWORD *)(v60 + 232) = v62 | *(_DWORD *)(v60 + 232) & 0xEFFFFFFF;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 232LL) = v63 | *(_DWORD *)(*((_QWORD *)v52 + 5) + 232LL) & 0xDFFFFFFF;
  v64 = *(_QWORD *)v293[0];
  if ( *(_QWORD *)v293[0] )
    v65 = *(_QWORD *)(v64 + 16);
  else
    v65 = 0LL;
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 128LL) = v65;
  *((_QWORD *)v52 + 17) = v64;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 28LL) = a5 & 0xEFFFFFFF;
  v66 = v285;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 24LL) = v285 & 0xFDF7FFFF;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 200LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 80LL);
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 252LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 84LL);
  if ( !(unsigned int)ReferenceClass(*(_QWORD *)v293[0], (__int64)v52, v60) )
  {
    HMFreeObject(v52);
    v286 = v66;
    goto LABEL_109;
  }
  v68 = *((_QWORD *)v52 + 17);
  if ( v68 != *(_QWORD *)v293[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v293);
    if ( v68 )
    {
      v293[0] = *(_QWORD *)(v68 + 128);
      ++*(_DWORD *)(v293[0] + 8);
    }
    else
    {
      v293[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v293[0], &v337) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(v284 + 424));
    HMFreeObject(v52);
    v286 = v285;
    goto LABEL_109;
  }
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 224LL) = a17;
  if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 2LL) == *(_WORD *)(gpsi + 868LL) )
  {
    *(_QWORD *)(*((_QWORD *)v52 + 5) + 208LL) = 0LL;
  }
  else
  {
    v69 = *(__int64 **)(v284 + 792);
    if ( v69 )
      v70 = *v69;
    else
      v70 = 0LL;
    *(_QWORD *)(*((_QWORD *)v52 + 5) + 208LL) = v70;
  }
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 236LL) = a14;
  v71 = *((_QWORD *)v52 + 5);
  if ( *(_DWORD *)(v71 + 236) == 1 )
    v72 = 0;
  else
    v72 = IsTopLevelParent(v19);
  if ( v72 )
  {
    *(_DWORD *)(v71 + 24) |= 8u;
    v71 = *((_QWORD *)v52 + 5);
  }
  if ( v289 )
    *(_BYTE *)(v71 + 234) |= 0x20u;
  ++*(_DWORD *)(v284 + 896);
  *(_QWORD *)&v325 = 0LL;
  v326 = 0LL;
  v327 = 0LL;
  v328 = 0LL;
  v329 = 0LL;
  v330 = 0LL;
  v331 = 0LL;
  DWORD2(v329) = v285;
  *((_QWORD *)&v325 + 1) = v315;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v301 >= 0 )
    {
      *(_QWORD *)&v329 = *((_QWORD *)Str1 + 1);
      v331 = *(_OWORD *)Str1;
    }
    else
    {
      v73 = *(_QWORD *)(*(_QWORD *)v293[0] + 104LL);
      *(_QWORD *)&v329 = v73;
      if ( (v73 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString((__int64)&v331, v73);
    }
  }
  else
  {
    *(_QWORD *)&v329 = Str1;
  }
  if ( v333 )
  {
    *((_QWORD *)&v328 + 1) = *((_QWORD *)v333 + 1);
    v330 = *v333;
  }
  LODWORD(v328) = a5;
  v74 = v291;
  *((_QWORD *)&v327 + 1) = __PAIR64__(v291, v287);
  *(_QWORD *)&v327 = __PAIR64__(v292, v295);
  if ( v19 )
    *((_QWORD *)&v326 + 1) = *(_QWORD *)v19;
  else
    *((_QWORD *)&v326 + 1) = 0LL;
  if ( (_WORD)v29 == 0x4000 )
  {
    v75 = v300;
    if ( !v300 )
      v75 = *(_QWORD **)v299[0];
    *(_QWORD *)&v326 = v75;
    *(_DWORD *)(*((_QWORD *)v52 + 5) + 24LL) |= *(_DWORD *)(*(_QWORD *)(v19 + 40) + 24LL) & 0xC4000000;
  }
  else if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v299) )
  {
    *(_QWORD *)&v326 = 0LL;
  }
  else
  {
    v76 = v300;
    if ( !v300 )
      v76 = *(_QWORD **)v299[0];
    *(_QWORD *)&v326 = *v76;
  }
  *(_QWORD *)&v325 = v332;
  *(_QWORD *)&v339 = *(_QWORD *)(v284 + 416);
  *(_QWORD *)(v284 + 416) = &v339;
  *((_QWORD *)&v339 + 1) = v52;
  HMLockObject(v52);
  *(_QWORD *)&v377.left = 0LL;
  if ( v74 == 0x80000000 || v74 == 0x8000 )
  {
    v77 = 0;
    v377.left = 0;
  }
  else
  {
    v77 = v74;
    v377.left = v74;
  }
  if ( v287 == 0x80000000 || v287 == 0x8000 )
  {
    v78 = 0;
    v377.top = 0;
  }
  else
  {
    v78 = v287;
    v377.top = v287;
  }
  v79 = v292;
  if ( v292 == 0x80000000 || v292 == 0x8000 )
    v79 = 0;
  v377.right = v79 + v77;
  v80 = v295;
  if ( v295 == 0x80000000 || v295 == 0x8000 )
    v80 = 0;
  v377.bottom = v78 + v80;
  InheritedMonitor = (__int64 *)GetInheritedMonitor(v52);
  if ( InheritedMonitor )
  {
    v286 = 1;
  }
  else
  {
    v286 = 0;
    if ( v19 )
      InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 256LL));
  }
  if ( InheritedMonitor || (InheritedMonitor = (__int64 *)MonitorFromRect(&v377, 2u, 0), v82 = 0LL, InheritedMonitor) )
    v82 = *InheritedMonitor;
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 256LL) = v82;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 284LL) = *(unsigned __int16 *)(InheritedMonitor[5] + 64);
  v83 = (_DWORD *)InheritedMonitor[39];
  *((_QWORD *)v52 + 36) = v83;
  ++*v83;
  *((_QWORD *)v52 + 37) = 0LL;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 232LL) &= ~0x4000000u;
  if ( (_WORD)v29 != 0x4000 || (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v52, v19) )
    UpdateTopLevelWindowDPITransform((__int64)v52, (__int64)InheritedMonitor);
  if ( (_WORD)v29 == 0x4000 )
  {
    if ( v19 )
    {
      *(_WORD *)(*((_QWORD *)v52 + 5) + 286LL) = *(_WORD *)(*(_QWORD *)(v19 + 40) + 286LL);
      v84 = *(_DWORD **)(v19 + 296);
      if ( v84 )
      {
        *((_QWORD *)v52 + 37) = v84;
        ++*v84;
      }
    }
  }
  v85 = *((_QWORD *)v52 + 3);
  if ( v85 )
  {
    v86 = *(_QWORD *)(v85 + 104);
    if ( v86 )
      v87 = *(_QWORD *)(v86 + 48);
    else
      v87 = 0LL;
    *(_QWORD *)(*((_QWORD *)v52 + 5) + 48LL) = v87;
    v361[0] = (char *)v52 + 104;
    v361[1] = v86;
    HMAssignmentLock(v361);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v52) )
  {
    ThreadDesktopWindow = (__int64 *)v19;
    if ( (_WORD)v29 != 0x4000 && (!v19 || v19 != *(_QWORD *)(*(_QWORD *)(v19 + 24) + 104LL)) )
      ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
    *(_OWORD *)v371 = 0LL;
    v372 = 0LL;
    v373 = 0LL;
    GetWindowCompositionInfo((__int64)v52, (__int64)v371);
    v89 = *(struct _KPROCESS **)(**((_QWORD **)v52 + 2) + 544LL);
    v345 = v89;
    if ( ThreadDesktopWindow )
      v334 = *ThreadDesktopWindow;
    else
      v334 = 0LL;
    ProcessId = (unsigned int)PsGetProcessId(v89);
    v91 = ***(_QWORD ***)(*((_QWORD *)v52 + 3) + 8LL);
    v92 = *((_QWORD *)v52 + 5);
    v93 = *(_DWORD *)(v92 + 232);
    v94 = *(_DWORD *)(v92 + 24);
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v345);
    ClassStyle = DwmGetClassStyle(v52);
    v99 = (void *)ReferenceDwmApiPort(v98, v97);
    LowLimit = ClassStyle;
    v52 = v316;
    DwmAsyncChildCreate(v99, v94, v93, LowLimit, (__int64)v371, v91, (__int64)&v377, ProcessId, ProcessSequenceNumber);
    v19 = v313;
    LOWORD(v29) = v294;
    v45 = v311;
  }
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 32LL) = v315;
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 120LL) = MapClientNeuterToClientPfn(
                                                *(_QWORD *)v293[0],
                                                0LL,
                                                (unsigned __int16)v310);
  SetOrClrWF(*(_WORD *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 6LL) & 1, (__int64)v52, 0x204u, 1);
  v100 = *(_BYTE *)(*((_QWORD *)v52 + 5) + 18LL) & 4;
  v363[0] = &v339;
  v363[1] = v293;
  v363[2] = &v337;
  v363[3] = &v284;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 84LL) )
  {
    v101 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 84LL), 1937208149LL);
    *((_QWORD *)v52 + 35) = v101;
    if ( !v101 )
    {
      v290 = 5;
LABEL_197:
      lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator()(v363);
      v286 = v285;
      goto LABEL_109;
    }
  }
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v100 )
  {
    *(_DWORD *)(*((_QWORD *)v52 + 5) + 200LL) = (*(_DWORD *)(*((_QWORD *)v52 + 5) + 200LL) + 7) & 0xFFFFFFF8;
    *(_DWORD *)(*((_QWORD *)v52 + 5) + 200LL) += 32;
  }
  v102 = *(unsigned int *)(*((_QWORD *)v52 + 5) + 200LL);
  if ( !(_DWORD)v102 )
    goto LABEL_211;
  v104 = xxxClientAllocWindowClassExtraBytes(v102, (__int64)v52);
  v368 = v104;
  if ( !v104 )
  {
    v290 = 2;
    if ( *((_DWORD *)v52 + 2) != 1 )
      goto LABEL_537;
    goto LABEL_197;
  }
  if ( (unsigned int)IsWindowBeingDestroyed((__int64)v52)
    || (*(_BYTE *)(_HMPheFromObject(v103) + 25) & 1) != 0
    || (v346[0] = 0LL,
        (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>((char *)v52 + 320, v346)) )
  {
LABEL_537:
    v130 = v290;
    goto LABEL_538;
  }
  v105 = *((_QWORD *)v52 + 5);
  if ( (*(_DWORD *)(v105 + 232) & 0x800) != 0 )
  {
    v294 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1265LL);
    v105 = v297[5];
  }
  *(_QWORD *)(v105 + 296) = v104;
LABEL_211:
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || v100 )
  {
    v109 = v301;
  }
  else
  {
    v106 = *((_QWORD *)v52 + 5);
    v107 = *(_QWORD *)(v106 + 296);
    v108 = *(int *)(v106 + 200);
    v367 = *(_QWORD *)(v106 + 120);
    *(_QWORD *)(v108 + v107 - 32) = v367;
    v109 = v301;
    if ( v301 >= 0 )
      v110 = *(_QWORD *)(gpsi + 768LL);
    else
      v110 = *(_QWORD *)(gpsi + 576LL);
    *(_QWORD *)(*((_QWORD *)v52 + 5) + 120LL) = v110;
  }
  if ( *(_QWORD *)(*(_QWORD *)v293[0] + 80LL)
    && !*(_QWORD *)(*(_QWORD *)v293[0] + 112LL)
    && (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
    xxxCreateClassSmIcon(v293);
  }
  SetOrClrWF(1, (__int64)v52, v310, 1);
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 6LL) & 2) != 0
    || v109 < 0
    && (v288 == *(_WORD *)(gpsi + 868LL)
     || v288 == *(_WORD *)(gpsi + 878LL)
     || v288 == *(_WORD *)(gpsi + 882LL)
     || v288 == *(_WORD *)(gpsi + 904LL)
     || v288 == *(_WORD *)(gpsi + 870LL)
     || v288 == *(_WORD *)(gpsi + 874LL)
     || v288 == *(_WORD *)(gpsi + 880LL)
     || v288 == *(_WORD *)(gpsi + 898LL)
     || v288 == *(_WORD *)(gpsi + 872LL)) )
  {
    SetOrClrWF(1, (__int64)v52, 0x208u, 1);
  }
  AppCompatFlags = GetAppCompatFlags(v284);
  v113 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1, (__int64)v52, 0x408u, 1);
    v285 &= 0x3Fu;
    DWORD2(v329) = BYTE8(v329) & 0x3F;
  }
  *(_WORD *)(*((_QWORD *)v52 + 5) + 40LL) = 0;
  if ( v45 < 0x30Au )
  {
    if ( (v113 & 0x40) != 0 )
    {
      v114 = 1600;
LABEL_242:
      SetOrClrWF(1, (__int64)v52, v114, 1);
    }
  }
  else
  {
    SetOrClrWF(1, (__int64)v52, 0x501u, 1);
    if ( v45 >= 0x400u )
    {
      SetOrClrWF(1, (__int64)v52, 0x502u, 1);
      if ( v45 >= 0x500u )
      {
        v114 = 1284;
        goto LABEL_242;
      }
    }
  }
  if ( v45 <= *(_WORD *)(v284 + 636) )
    v115 = *(_DWORD *)(v284 + 636);
  else
    v115 = v45;
  *((_DWORD *)v52 + 64) = v115;
  CurrentThread = KeGetCurrentThread();
  v117 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v112)
    || (CurrentProcess = PsGetCurrentProcess(v119, v118, v120),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v123),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v128 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v128 )
      v117 = *v128;
  }
  v129 = 0;
  if ( *(_DWORD *)(v117 + 632) <= 0x9900u )
    v129 = *(_DWORD *)(v117 + 648);
  if ( (v129 & 0x10000000) != 0 )
    SetOrClrWF(1, (__int64)v52, 0xA80u, 1);
  if ( gihmodUserApiHook >= 0 )
    xxxLoadUserApiHook(v126, v125, v127);
  if ( (unsigned int)WantImeWindow((struct tagWND *)v19, v52) )
  {
    *((_DWORD *)v52 + 81) |= 0x20000000u;
    ++*(_DWORD *)(v284 + 904);
  }
  if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v284 + 464) + 16LL) | *(_BYTE *)(v284 + 680)) & 0x40) != 0 )
  {
    v348 = (__int64)&v325;
    v349 = 0LL;
    if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v52, (__int64)&v348, 5) )
    {
      v130 = 6;
      goto LABEL_538;
    }
    v131 = HIDWORD(v327);
    v291 = HIDWORD(v327);
    v287 = DWORD2(v327);
    v132 = DWORD1(v327);
    v292 = DWORD1(v327);
    v295 = v327;
    v313 = v349;
  }
  else
  {
    v313 = 0LL;
    v131 = v291;
    v132 = v292;
  }
  v103 = *((_QWORD *)v52 + 5);
  if ( (*(_BYTE *)(v103 + 31) & 0xC0) == 0x40 )
  {
    v133 = 1;
    v289 = 1;
    if ( !v19 )
      goto LABEL_537;
  }
  else
  {
    v133 = 0;
    v289 = 0;
  }
  if ( v133 != v314 )
  {
    v300 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v299);
    v103 = v297[5];
    v133 = v289;
  }
  if ( (*(_BYTE *)(v103 + 31) & 0xC0) != 0 )
  {
    v134 = 0;
    if ( v131 == 0x80000000 || v131 == 0x8000 )
    {
      v131 = 0;
      v291 = 0;
      v287 = 0;
    }
    if ( v132 == 0x80000000 || v132 == 0x8000 )
    {
      v292 = 0;
      v295 = 0;
    }
  }
  else
  {
    v134 = 1;
  }
  v135 = v131;
  *(_QWORD *)&v296 = __PAIR64__(v287, v131);
  v136 = v287;
  v137 = v287;
  *((_QWORD *)&v296 + 1) = __PAIR64__(v295, v292);
  if ( v133 )
  {
    v317 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 104LL);
    if ( (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v52, v19) )
    {
      *((_QWORD *)v52 + 28) = 0LL;
      LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v317, (char *)v52 + 224);
      PhysicalToLogicalInPlaceRectWithSubpixel(v52, &v317, (char *)v52 + 224);
    }
    if ( v19 != GetDesktopWindow((__int64)v52) )
    {
      v135 = v291 + v317;
      LODWORD(v296) = v291 + v317;
      v137 = v136 + DWORD1(v317);
      DWORD1(v296) = v136 + DWORD1(v317);
    }
    v313 = 1LL;
  }
  if ( v134 )
  {
    SetOrClrWF(1, (__int64)v52, 0xF04u, 1);
    v312 = 192;
    if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 21LL) & 2) != 0 )
      SetOrClrWF(1, (__int64)v52, 0x901u, 1);
    SetOrClrWF(1, (__int64)v52, 0x10u, 1);
    v139 = v291;
    if ( (v291 == 0x80000000 || v291 == 0x8000) && v137 != 0x80000000 )
    {
      v140 = v304;
      if ( v137 != 0x8000 )
        v140 = v137;
      v304 = v140;
    }
    if ( !v286 && (v291 == 0x80000000 || v291 == 0x8000 || v292 == 0x80000000 || v292 == 0x8000) )
    {
      v141 = *(_QWORD *)(*(_QWORD *)(v284 + 424) + 696LL);
      if ( v141 )
      {
        v142 = ValidateHmonitor(v141);
      }
      else if ( v19 )
      {
        v142 = (__int64)_MonitorFromWindowInternal((struct tagWND *)v19, 2, 0);
      }
      else
      {
        v142 = 0LL;
      }
      if ( !v142 )
      {
        v142 = *(_QWORD *)(GetDispInfo(v141, v138) + 96);
        goto LABEL_305;
      }
    }
    else
    {
      v142 = 0LL;
LABEL_305:
      if ( !v142 )
      {
        v142 = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)v52 + 5) + 256LL));
        if ( !v142 )
        {
          if ( !v286 || (v142 = GetInheritedMonitor(v52)) == 0 )
            v142 = MonitorFromRect((struct tagRECT *)(*((_QWORD *)v52 + 5) + 88LL), 2u, 0);
          v143 = 0LL;
          if ( v142 )
            v143 = *(_QWORD *)v142;
          *(_QWORD *)(*((_QWORD *)v52 + 5) + 256LL) = v143;
          *(_WORD *)(*((_QWORD *)v52 + 5) + 284LL) = *(_WORD *)(*(_QWORD *)(v142 + 40) + 64LL);
          v144 = (_DWORD *)*((_QWORD *)v52 + 36);
          if ( v144 )
          {
            --*v144;
            v145 = (_DWORD *)*((_QWORD *)v52 + 36);
            if ( !*v145 )
              Win32FreePool(v145);
            *((_QWORD *)v52 + 36) = 0LL;
          }
          v146 = *(_DWORD **)(v142 + 312);
          *((_QWORD *)v52 + 36) = v146;
          ++*v146;
          UpdateTopLevelWindowDPITransform((__int64)v52, v142);
        }
      }
    }
    SetTiledRect((__int64)v52, v376, v142);
    if ( v139 == 0x80000000 || v139 == 0x8000 )
    {
      v149 = *(_DWORD **)(v284 + 424);
      if ( (v149[202] & 4) != 0 )
      {
        v302 = 1;
        v139 = v149[198];
        v150 = v149[199];
      }
      else
      {
        v139 = v376[0];
        v150 = v376[1];
      }
      v137 = v150;
      v287 = v150;
      *(_QWORD *)&v296 = __PAIR64__(v150, v139);
      v135 = v139;
      v291 = v139;
      v148 = 1;
    }
    else
    {
      v147 = *(_WORD *)(v142 + 226);
      if ( v147 )
        *(_WORD *)(v142 + 226) = v147 - 1;
      v148 = v309;
    }
    if ( v292 == 0x80000000 || v292 == 0x8000 )
    {
      v154 = *(_DWORD **)(v284 + 424);
      if ( (v154[202] & 2) != 0 )
      {
        v302 = 1;
        DWORD2(v296) = v154[200];
        v155 = v154[201];
      }
      else
      {
        DWORD2(v296) = v376[2] - v139;
        v155 = v376[3] - v287;
      }
      HIDWORD(v296) = v155;
    }
    else if ( v148 )
    {
      v336 = *(__m128i *)GetMonitorRect(&v374, v142);
      v151 = _mm_srli_si128(v336, 8).m128i_u64[0];
      v152 = v292 + v135 - v151;
      v153 = v295 + v137 - HIDWORD(v151);
      if ( v152 > 0 )
      {
        v291 = v139 - v152;
        LODWORD(v296) = v139 - v152;
        if ( v139 - v152 < v336.m128i_i32[0] )
        {
          v291 = v336.m128i_i32[0];
          LODWORD(v296) = v336.m128i_i32[0];
        }
      }
      if ( v153 > 0 )
      {
        v287 -= v153;
        DWORD1(v296) = v287;
        if ( v287 < v336.m128i_i32[1] )
        {
          v287 = v336.m128i_i32[1];
          DWORD1(v296) = v336.m128i_i32[1];
        }
      }
    }
  }
  if ( v302 )
    *(_DWORD *)(*(_QWORD *)(v284 + 424) + 808LL) &= 0xFFFFFFF9;
  v156 = *((_QWORD *)v52 + 5);
  v157 = *(_BYTE *)(v156 + 31) & 0xC0;
  if ( v157 == (char)0x80 || v157 == -64 )
  {
    SetOrClrWF(1, (__int64)v52, 0xF04u, 1);
    v158 = v297;
    v156 = v297[5];
  }
  else
  {
    v158 = v297;
  }
  *(_WORD *)(v156 + 30) |= v312;
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v299) || v289 || !*(_QWORD *)(*(_QWORD *)v293[0] + 96LL) )
  {
    v163 = (__int64)v300;
    goto LABEL_361;
  }
  v354 = 0LL;
  v160 = (__int64)v52;
  if ( *((_QWORD *)v52 + 13) )
    v160 = *((_QWORD *)v52 + 13);
  zzzLockDisplayAreaAndInvalidateDCCache(v160, 16, 0LL);
  RtlInitUnicodeStringOrId(&v354, *(WCHAR **)(*(_QWORD *)v293[0] + 96LL));
  xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 64LL), &v354.Length);
  v300 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v299);
  if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v162 = SmartObjStackRef<tagMENU>::operator==(v299);
    v163 = (__int64)v300;
    if ( v162 )
    {
      *(_QWORD *)&v326 = 0LL;
    }
    else if ( v300 )
    {
      *(_QWORD *)&v326 = *v300;
    }
    else
    {
      v163 = 0LL;
      *(_QWORD *)&v326 = **(_QWORD **)v299[0];
    }
LABEL_361:
    if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      if ( !v163 )
        v163 = *(_QWORD *)v299[0];
      *(_QWORD *)(*((_QWORD *)v52 + 5) + 152LL) = v163;
      *((_QWORD *)v52 + 21) = v163;
    }
    else
    {
      v164 = *((_QWORD *)v52 + 21);
      if ( v164 && *(NotifyShell **)(v164 + 80) == v52 )
        HMAssignmentUnlock(v164 + 80);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v299) && !*(_QWORD *)(*(_QWORD *)v299[0] + 80LL) )
      {
        v355[0] = *(_QWORD *)v299[0] + 80LL;
        v355[1] = v52;
        HMAssignmentLock(v355);
      }
      v165 = v300;
      if ( !v300 )
        v165 = *(_QWORD **)v299[0];
      if ( v165 )
        v166 = v165[6];
      else
        v166 = 0LL;
      *(_QWORD *)(*((_QWORD *)v52 + 5) + 152LL) = v166;
      v362[0] = (char *)v52 + 168;
      v362[1] = v165;
      HMAssignmentLock(v362);
    }
    v103 = *(unsigned __int8 *)(*((_QWORD *)v52 + 5) + 31LL);
    LOBYTE(v103) = v103 & 0xC0;
    if ( (_BYTE)v103 == 64 )
    {
      if ( !v19 )
        goto LABEL_354;
      if ( (v298 & 2) != 0 )
        goto LABEL_409;
LABEL_415:
      if ( (*(_DWORD *)(*((_QWORD *)v52 + 5) + 232LL) & 8) != 0 )
      {
        v322 = *((_QWORD *)v52 + 13);
        UnlinkWindow(v52, v322);
      }
      if ( v19 )
      {
        v175 = *(_QWORD *)(v19 + 24);
        if ( v19 != *(_QWORD *)(v175 + 104) && v19 != *(_QWORD *)(*(_QWORD *)(v175 + 8) + 24LL) )
        {
          *(_DWORD *)(*((_QWORD *)v52 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 236LL);
          SetOrClrWF(*(_BYTE *)(*(_QWORD *)(v19 + 40) + 234LL) & 0x20, (__int64)v52, 0xDA20u, 1);
        }
        if ( !(unsigned int)ValidateNewParent(v52, v19, 1LL) )
        {
          v130 = 9;
          goto LABEL_539;
        }
      }
      if ( v19 )
        v176 = *(_QWORD *)(v19 + 48);
      else
        v176 = 0LL;
      *(_QWORD *)(*((_QWORD *)v52 + 5) + 48LL) = v176;
      v359[0] = (char *)v52 + 104;
      v359[1] = v19;
      HMAssignmentLock(v359);
      if ( v19 )
        v177 = (int)(*(_DWORD *)(*(_QWORD *)(v19 + 40) + 232LL) << 6) >> 31;
      else
        v177 = 0;
      SetWindowSubtreeCoreWindowStatus(v52, v177);
      v178 = *((_QWORD *)v52 + 5);
      if ( (*(_DWORD *)(v178 + 288) & 0xF) == 2 )
      {
        *(_DWORD *)(v178 + 232) ^= (*(_DWORD *)(v178 + 232) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics((__int64)v52) << 27)) & 0x8000000;
        v178 = v158[5];
      }
      if ( (*(_BYTE *)(v178 + 21) & 1) == 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 8LL) & 0x80u) != 0
        && (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 31LL) & 2) == 0 )
      {
        SetOrClrWF(0, (__int64)v52, 0xF06u, 1);
      }
      v179 = WindowCloakStateComponentUIAware;
      if ( (WindowCloakStateComponentUIAware & 2) == 0 )
        *(_BYTE *)(v158[5] + 234LL) |= 0x10u;
      if ( (_DWORD)v179 )
      {
        v180 = zzzSetWindowCompositionCloak((__int64)v52, 0LL, v179);
        if ( v180 < 0 )
        {
          v181 = RtlNtStatusToDosError(v180);
          UserSetLastError(v181, v182, v183);
          v130 = 8;
          goto LABEL_539;
        }
      }
      if ( gpresUser
        && (unsigned int)UserIsUserCritSecInExclusive(v179)
        && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
      {
        v184 = ++gdwAtomicCheckSerial;
        v179 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v179 << 6) + gpAtomickCheckStacks) )
          {
            v179 = (unsigned int)(v179 + 1);
            if ( (unsigned int)v179 >= gdwAtomicCheckLogSize )
              goto LABEL_449;
          }
          v185 = (unsigned __int64)(unsigned int)v179 << 6;
          *(_DWORD *)(gpAtomickCheckStacks + v185) = gdwAtomicCheckSerial;
          *(_DWORD *)(gpAtomickCheckStacks + v185 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v185 + 8) = (MEMORY[0xFFFFF78000000320]
                                                        * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v185 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
      else
      {
        v184 = v314;
      }
LABEL_449:
      if ( v322 )
        zzzLockDisplayAreaAndInvalidateDCCache(v322, 16, 0LL);
      if ( v19 )
        zzzLockDisplayAreaAndInvalidateDCCache(v19, 16, 0LL);
      if ( gpresUser )
      {
        if ( (unsigned int)UserIsUserCritSecInExclusive(v179) )
        {
          --gdwInAtomicOperation;
          if ( gpAtomickCheckStacks )
          {
            v186 = 0;
            if ( gdwAtomicCheckLogSize )
            {
              while ( *(_DWORD *)(((unsigned __int64)v186 << 6) + gpAtomickCheckStacks) != v184 )
              {
                if ( ++v186 >= gdwAtomicCheckLogSize )
                  goto LABEL_461;
              }
              *(_DWORD *)(((unsigned __int64)v186 << 6) + gpAtomickCheckStacks) = 0;
            }
          }
        }
      }
LABEL_461:
      if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 31LL) & 0xC0) == 0x40 )
      {
        v187 = (__int64 *)((char *)v52 + 104);
        if ( !(unsigned int)IsTopLevelWindow((__int64)v52) )
        {
          v188 = *v187;
          if ( *v187 )
          {
            if ( v284 != *(_QWORD *)(v188 + 16) )
            {
              if ( v19 != v188 )
              {
                v294 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2114LL);
                v188 = v297[13];
              }
              zzzAttachThreadInput(v284, *(_QWORD *)(v188 + 16), 1);
              v189 = *v187;
              v190 = 0LL;
              v191 = *((_QWORD *)v52 + 3);
              if ( v191 )
                v190 = *(_QWORD *)(v191 + 104);
              if ( v189 != v190
                && (((unsigned __int8)*(_DWORD *)(*(_QWORD *)(v189 + 40) + 288LL) ^ *(_BYTE *)(*((_QWORD *)v52 + 5)
                                                                                             + 288LL)) & 0xF) != 0
                && !(unsigned int)IsChildWindowDpiIsolationEnabled(v52, v189) )
              {
                xxxForceUpdateProcessDpiAwarenessContext(v52, *(_DWORD *)(*(_QWORD *)(*v187 + 40) + 288LL));
              }
            }
          }
        }
      }
      else
      {
        v187 = (__int64 *)((char *)v52 + 104);
      }
      if ( v323 != (unsigned __int16)gatomMessage && v323 != 32769 && v323 != 32774 && !*(_DWORD *)(v284 + 896) )
      {
        _InterlockedExchange(
          (volatile __int32 *)(*(_QWORD *)(v284 + 448) + 12LL),
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        xxxUpdateInputHangInfo(0LL, 1);
      }
      xxxAdjustSize(v52, (int *)&v296 + 2, (int *)&v296 + 3);
      v192 = v296;
      v193 = 0x7FFF;
      if ( (int)v296 <= 0x7FFF )
      {
        if ( (int)v296 < -32768 )
          v192 = -32768;
      }
      else
      {
        v192 = 0x7FFF;
      }
      LODWORD(v296) = v192;
      if ( SDWORD1(v296) <= 0x7FFF )
      {
        v193 = DWORD1(v296);
        if ( SDWORD1(v296) < -32768 )
          v193 = -32768;
      }
      DWORD1(v296) = v193;
      v194 = DWORD2(v296);
      v195 = 0xFFFF;
      if ( SDWORD2(v296) <= 0xFFFF )
      {
        if ( SDWORD2(v296) < 0 )
          v194 = 0;
      }
      else
      {
        v194 = 0xFFFF;
      }
      DWORD2(v296) = v194;
      if ( SHIDWORD(v296) <= 0xFFFF )
      {
        v195 = HIDWORD(v296);
        if ( v296 < 0 )
          v195 = 0;
      }
      HIDWORD(v296) = v195;
      if ( *((_QWORD *)v52 + 3) )
      {
        v196 = *((_QWORD *)v52 + 5);
        if ( (*(_BYTE *)(v196 + 31) & 0x40) == 0 && *(char *)(v196 + 24) >= 0 )
        {
          xxxCheckFullScreen(v52, (struct tagSIZERECT *)&v296);
          v195 = HIDWORD(v296);
          v194 = DWORD2(v296);
        }
      }
      if ( v194 < 0 )
        v194 = 0;
      DWORD2(v296) = v194;
      if ( v195 < 0 )
        v195 = 0;
      HIDWORD(v296) = v195;
      RECTFromSIZERECT(*((_QWORD *)v52 + 5) + 88LL, &v296);
      if ( v289 )
      {
        v197 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 256LL));
      }
      else
      {
        if ( !v286 )
          goto LABEL_506;
        v197 = GetInheritedMonitor(v52);
      }
      v198 = (__int64 *)v197;
      if ( v197 )
      {
LABEL_507:
        v199 = *v198;
LABEL_508:
        v346[1] = v199;
        v200 = *((_QWORD *)v52 + 5);
        if ( v199 != *(_QWORD *)(v200 + 256) )
        {
          *(_QWORD *)(v200 + 256) = v199;
          *(_WORD *)(*((_QWORD *)v52 + 5) + 284LL) = *(_WORD *)(v198[5] + 64);
          v201 = (_DWORD *)*((_QWORD *)v52 + 36);
          if ( v201 )
          {
            --*v201;
            v202 = (_DWORD *)*((_QWORD *)v52 + 36);
            if ( !*v202 )
              Win32FreePool(v202);
            *((_QWORD *)v52 + 36) = 0LL;
          }
          v203 = (_DWORD *)v198[39];
          *((_QWORD *)v52 + 36) = v203;
          ++*v203;
          if ( !v289 )
            UpdateTopLevelWindowDPITransform((__int64)v52, (__int64)v198);
        }
        if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 27LL) & 0x20) != 0 && GetRedirectionBitmap(v52) )
        {
          GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
          v204 = RecreateRedirectionBitmap(v52, 0, 0LL);
          v205 = *(_QWORD *)(gpDispInfo + 40LL);
          if ( v204 < 0 )
          {
            GreUnlockVisRgn(v205);
            v130 = 3;
LABEL_538:
            v158 = v297;
            goto LABEL_539;
          }
          GreUnlockVisRgn(v205);
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 8LL) & 0x20) != 0
          || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v293[0] + 8LL) + 8LL) & 0x40) != 0
          && !*(_QWORD *)(*(_QWORD *)v293[0] + 40LL) )
        {
          StyleWindow = GetStyleWindow((__int64)v52, 2848);
          GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
          v207 = 49152LL;
          if ( !StyleWindow )
            v207 = 0x8000LL;
          CacheDC = CreateCacheDC(v52, v207, 0LL);
          v209 = *(_QWORD *)(gpDispInfo + 40LL);
          if ( !CacheDC )
          {
            GreUnlockVisRgn(v209);
            v130 = 10;
            goto LABEL_538;
          }
          GreUnlockVisRgn(v209);
        }
        v210 = v285;
        if ( (v285 & 0x80000) != 0
          && (*(_BYTE *)(*((_QWORD *)v52 + 5) + 26LL) & 8) == 0
          && (int)xxxSetLayeredWindow(v52, 0, 0LL) < 0 )
        {
          v130 = 11;
          goto LABEL_538;
        }
        if ( (v210 & 0x2000000) != 0 && !GetStyleWindow(*v187, 2818) )
        {
          SetOrClrWF(1, (__int64)v52, 0xB02u, 1);
          if ( (int)SetRedirectedWindow(v52) < 0 )
          {
            SetOrClrWF(0, (__int64)v52, 0xB02u, 1);
            v130 = 12;
            goto LABEL_538;
          }
        }
        *((_QWORD *)&v327 + 1) = __PAIR64__(v291, v287);
        *(_QWORD *)&v327 = __PAIR64__(v292, v295);
        if ( !xxxSendMessage((unsigned __int64)v52, 0x81u, 0LL, (struct _LARGE_STRING *)&v325) )
          goto LABEL_537;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v52 + 17) + 8LL) + 9LL) & 2) != 0 )
        {
          xxxGetSystemMenu(v52);
          v300 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v299);
          if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v299) )
          {
            v366[2] = 0LL;
            v218 = v300;
            if ( !v300 )
              v218 = *(_QWORD **)v299[0];
            v219 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v366[0] = *(_QWORD *)(v219 + 416);
            *(_QWORD *)(v219 + 416) = v366;
            v366[1] = v218;
            if ( v218 )
              HMLockObject(v218);
            xxxRemoveDeleteMenuHelper((__int64)v299, 5u, 1024, 1u);
            xxxRemoveDeleteMenuHelper((__int64)v299, 5u, 1024, 1u);
            ThreadUnlock1(v220);
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 18LL) & 2) != 0
          && (!*((_QWORD *)&v330 + 1) || (_DWORD)v330 || *((_QWORD *)v52 + 23)) )
        {
          v370 = 0LL;
          *((_QWORD *)&v328 + 1) = *((_QWORD *)v52 + 23);
          v330 = *(_OWORD *)tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                              (NotifyShell *)((char *)v52 + 184),
                              (struct _LARGE_UNICODE_STRING *)&v370);
        }
        if ( (*gpsi & 4) != 0 && !*(_QWORD *)(v284 + 784) && (unsigned __int8)tagWND::HasState(v52) )
        {
          DefaultImeWindow = xxxCreateDefaultImeWindow(v221, v288, v315);
          v360[0] = v284 + 784;
          v360[1] = DefaultImeWindow;
          HMAssignmentLock(v360);
          v223 = v284;
          v224 = *(_QWORD *)(v284 + 784);
          if ( v224 )
          {
            v364[2] = 0LL;
            v225 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v364[0] = *(_QWORD *)(v225 + 416);
            *(_QWORD *)(v225 + 416) = v364;
            v364[1] = v224;
            HMLockObject(v224);
            xxxSendMessage(*(_QWORD *)(v284 + 784), 0x287u, 0x21uLL, 0LL);
            ThreadUnlock1(v226);
            v223 = v284;
          }
          v227 = (**(_DWORD **)(v223 + 480) >> 6) & 1;
          v347 = v227;
          v228 = *(_QWORD *)(v223 + 784);
          if ( v228 && v227 )
          {
            v365[2] = 0LL;
            v229 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v365[0] = *(_QWORD *)(v229 + 416);
            *(_QWORD *)(v229 + 416) = v365;
            v365[1] = v228;
            HMLockObject(v228);
            xxxSendMessage(
              *(_QWORD *)(v284 + 784),
              0x287u,
              0x19uLL,
              *(struct _LARGE_STRING **)(*(_QWORD *)(v284 + 440) + 40LL));
            v230 = *(_QWORD **)(v284 + 480);
            *v230 &= ~0x40uLL;
            ThreadUnlock1(v230);
          }
        }
        if ( v19 )
        {
          v231 = *(unsigned int *)(*((_QWORD *)v52 + 5) + 232LL);
          if ( (v231 & 8) == 0 || *v187 == v19 )
          {
            v232 = PWInsertAfter(v313, v231);
            v233 = v232;
            if ( (unsigned __int64)(v232 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v232 + 104) != *v187 )
              v233 = v289 != 0;
            v234 = *((_QWORD *)v52 + 15);
            if ( v234 )
            {
              *(_DWORD *)(*((_QWORD *)v52 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(v234 + 40) + 236LL);
              SetOrClrWF(*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v52 + 15) + 40LL) + 234LL) & 0x20, (__int64)v52, 0xDA20u, 1);
            }
            if ( !(unsigned int)ValidateNewParent(v52, v19, 1LL) )
            {
              v130 = 9;
              goto LABEL_602;
            }
            UnlinkWindow(v52, *v187);
            v235 = *((_QWORD *)v52 + 5);
            if ( (*(_BYTE *)(v235 + 31) & 0xC0) != 0x40 && v19 != *(_QWORD *)(*(_QWORD *)(v19 + 24) + 104LL) )
            {
              if ( (*(_BYTE *)(v235 + 24) & 8) != 0 )
              {
                if ( gHardErrorHandler )
                {
                  TopMostInsertAfter = GetTopMostInsertAfter(v52);
                  if ( TopMostInsertAfter )
                    v233 = TopMostInsertAfter;
                }
              }
              else
              {
                if ( !v233 )
                  goto LABEL_590;
                if ( v233 >= 0xFFFFFFFFFFFFFFFEuLL )
                {
LABEL_595:
                  v130 = 13;
                  goto LABEL_602;
                }
                if ( v233 != 1 && (*(_BYTE *)(*(_QWORD *)(v233 + 40) + 24LL) & 8) != 0 )
LABEL_590:
                  v233 = (unsigned __int64)CalcForegroundInsertAfterComponentUIAware(v52);
              }
            }
            if ( v233 >= 0xFFFFFFFFFFFFFFFEuLL )
              goto LABEL_595;
            LinkWindow(v52, (struct tagWND *)v233, (_QWORD *)v19);
            zzzLockDisplayAreaAndInvalidateDCCache(v19, 16, 0LL);
          }
        }
        v237 = *((_QWORD *)v52 + 5);
        v238 = v237;
        if ( (*(_BYTE *)(v237 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 26LL) & 0x40) != 0 )
        {
          v239 = *(_DWORD *)(v237 + 96);
          v240 = *(_DWORD *)(v237 + 88);
          *(_DWORD *)(v237 + 96) = DWORD2(v317) + v317 - v240;
          *(_DWORD *)(*((_QWORD *)v52 + 5) + 88LL) = v240 + *(_DWORD *)(*((_QWORD *)v52 + 5) + 96LL) - v239;
          v238 = v297[5];
        }
        *(_OWORD *)v376 = *(_OWORD *)(v238 + 88);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (unsigned __int64)v52,
          0x83u,
          0LL,
          (struct _LARGE_STRING *)v376,
          0,
          0,
          0LL,
          1,
          0);
        *(_DWORD *)(*((_QWORD *)v52 + 5) + 104LL) = v376[0];
        *(_DWORD *)(*((_QWORD *)v52 + 5) + 108LL) = v376[1];
        *(_DWORD *)(*((_QWORD *)v52 + 5) + 112LL) = v376[2];
        *(_DWORD *)(*((_QWORD *)v52 + 5) + 116LL) = v376[3];
        if ( xxxSendMessage((unsigned __int64)v52, 1u, 0LL, (struct _LARGE_STRING *)&v325) == -1 )
        {
          v130 = v290;
LABEL_602:
          if ( v306 )
            ThreadUnlock1(v235);
          if ( ThreadUnlock1(v235) )
            xxxDestroyWindow(v52);
          v241 = *(struct tagCLS **)v293[0];
          v242 = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)(v242 + 16) = v337;
          ClassUnlockWorker(v241);
          if ( v130 )
            goto LABEL_552;
          goto LABEL_37;
        }
        SetOrClrWF(1, (__int64)v52, 0x780u, 1);
        if ( (unsigned int)IsWindowDesktopComposed(v52) )
        {
          v245 = *(_DWORD *)(*((_QWORD *)v52 + 5) + 28LL);
          v246 = (void *)ReferenceDwmApiPort(v244, v243);
          DwmAsyncChildStyleChange(v246, *(_QWORD *)v52, -16, v245);
          DwmChildRectChange((unsigned __int64)v52, v247, v248);
          v251 = (__int64 *)*((_QWORD *)v52 + 15);
          if ( v251 )
            v252 = *v251;
          else
            v252 = 0LL;
          v253 = (void *)ReferenceDwmApiPort(v250, v249);
          DwmAsyncOwnerChange(v253, *(_QWORD *)v52, v252, v254);
        }
        xxxWindowEvent(0x8000u, 0);
        v255 = *((_QWORD *)v52 + 5);
        if ( (*(_BYTE *)(v255 + 16) & 0x10) == 0 )
        {
          xxxSendSizeMessage((int)v52, 0);
          if ( v19 )
          {
            v256 = 0LL;
            v257 = *((_QWORD *)v52 + 3);
            if ( v257 )
            {
              v258 = *(_QWORD *)(v257 + 8);
              if ( v258 )
                v256 = *(_QWORD *)(v258 + 24);
            }
            if ( v256 != v19 )
            {
              v376[0] -= v317;
              v376[1] -= DWORD1(v317);
            }
          }
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            (unsigned __int64)v52,
            3u,
            0LL,
            (struct _LARGE_STRING *)(LOWORD(v376[0]) | (LOWORD(v376[1]) << 16)),
            0,
            0,
            0LL,
            1,
            0);
          v255 = v297[5];
        }
        v259 = *(_BYTE *)(v255 + 31);
        if ( (v259 & 0x20) != 0 )
        {
          SetMinimize((__int64)v52, 0);
          v260 = 7;
        }
        else
        {
          if ( (v259 & 1) == 0 )
            goto LABEL_626;
          SetOrClrWF(0, (__int64)v52, 0xF01u, 1);
          v260 = 3;
        }
        xxxMinMaximizeEx(v52, v260, gdwPUDFlags & 0x10000 | 1, 0LL, 0LL, 0LL);
LABEL_626:
        CalcWindowFullScreen(v52);
        v261 = *((_QWORD *)v52 + 5);
        if ( (*(_BYTE *)(v261 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(v261 + 24) & 4) == 0 )
        {
          v262 = *v187;
          if ( *v187 )
          {
            *(_QWORD *)&v352 = *(_QWORD *)(v284 + 416);
            *(_QWORD *)(v284 + 416) = &v352;
            *((_QWORD *)&v352 + 1) = v262;
            HMLockObject(v262);
            v263 = *((_QWORD *)v52 + 21);
            v264 = *v187;
            v265 = *(struct _LARGE_STRING **)v52;
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(v264, 0x210u, ((unsigned __int16)v263 << 16) | 1, v265, 0, 0, 0LL, 1, 0);
            ThreadUnlock1(v266);
          }
        }
        xxxInheritWindowMonitor(v52, 0LL, 0);
        if ( (a5 & 0x10000000) != 0 )
          xxxShowWindow(v52, v304 | gdwPUDFlags & 0x10000);
        v267 = *((_QWORD *)v52 + 5);
        if ( (*(_BYTE *)(v267 + 31) & 0xC0) == 0 || (*(_BYTE *)(v267 + 26) & 4) != 0 )
        {
          v267 = *(_QWORD *)(v284 + 424);
          v268 = *(_DWORD *)(v267 + 692);
          if ( v268 )
          {
            xxxSendMessage((unsigned __int64)v52, 0x32u, v268, 0LL);
            v267 = *(_QWORD *)(v284 + 424);
            *(_DWORD *)(v267 + 692) = 0;
          }
        }
        if ( v306 )
          ThreadUnlock1(v267);
        v269 = *(struct tagCLS **)v293[0];
        v270 = KeGetCurrentThread();
        v271 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v267)
          || (v275 = PsGetCurrentProcess(v273, v272, v274),
              v276 = PsGetProcessSessionIdEx(v275),
              v278 = PsGetCurrentThreadProcess(v277),
              v276 == (unsigned int)PsGetProcessSessionIdEx(v278)) )
        {
          v279 = (__int64 *)PsGetThreadWin32Thread(v270);
          if ( v279 )
            v271 = *v279;
        }
        *(_QWORD *)(v271 + 16) = v337;
        ClassUnlockWorker(v269);
        v281 = ThreadUnlock1(v280);
        v282 = v281;
        if ( !v281 || (*(_BYTE *)(_HMPheFromObject(v281) + 25) & 1) != 0 )
          v282 = 0LL;
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v299);
        SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v293);
        return v282;
      }
LABEL_506:
      v198 = (__int64 *)MonitorFromRect((struct tagRECT *)(*((_QWORD *)v52 + 5) + 88LL), 2u, 0);
      v199 = 0LL;
      if ( !v198 )
        goto LABEL_508;
      goto LABEL_507;
    }
    v167 = v298;
    if ( (v298 & 4) != 0 )
    {
      LOBYTE(v159) = 1;
      CoreWindowProp::ChangeRole(v52, 1LL, v159);
    }
    *(_QWORD *)(*((_QWORD *)v52 + 5) + 176LL) = *((_QWORD *)v52 + 6);
    v356[0] = (char *)v52 + 200;
    v356[1] = v52;
    HMAssignmentLock(v356);
    if ( (unsigned int)IsTopLevelParent(v19) )
    {
      v170 = (_QWORD *)((char *)v52 + 120);
      *(_QWORD *)(*((_QWORD *)v52 + 5) + 64LL) = 0LL;
      v357[0] = (char *)v52 + 120;
      v357[1] = 0LL;
      HMAssignmentLock(v357);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor(v168);
      if ( !(unsigned int)ValidateOwnerDepth(v52, NonChildAncestor) )
        goto LABEL_409;
      if ( NonChildAncestor )
      {
        *(_DWORD *)(*((_QWORD *)v52 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 40) + 236LL);
        SetOrClrWF(*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 234LL) & 0x20, (__int64)v52, 0xDA20u, 1);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)NonChildAncestor);
      }
      v170 = (_QWORD *)((char *)v52 + 120);
      v369 = *(_OWORD *)LockPointer(&v375, (__int64)v52 + 120, NonChildAncestor);
      HMAssignmentLock(&v369);
      v163 = *((_QWORD *)v52 + 15);
      if ( v163
        && ((*(_BYTE *)(*(_QWORD *)(v163 + 40) + 24LL) & 8) != 0 || *(_DWORD *)(*((_QWORD *)v52 + 5) + 236LL) != 1) )
      {
        SetOrClrWF(1, (__int64)v52, 0x808u, 1);
        v163 = v158[15];
      }
      if ( v288 != *(_WORD *)(gpsi + 898LL) )
      {
        if ( v163 )
        {
          v163 = *(_QWORD *)(v163 + 16);
          if ( v163 != v284 )
            zzzAttachThreadInput(v284, v163, 1);
        }
      }
      v167 = v298;
    }
    if ( !*v170 && !(unsigned int)CoreWindowProp::IsComponent(v52) )
    {
      if ( (v171 = *((_QWORD *)v52 + 5), v172 = *(_DWORD *)(v171 + 236), v172 <= 0xF)
        && (v163 = 44800LL, _bittest((const int *)&v163, v172))
        || (*(_BYTE *)(v171 + 234) & 0x20) != 0 )
      {
        WindowCloakStateComponentUIAware = 2;
      }
    }
    if ( !v19 || v19 != *(_QWORD *)(*(_QWORD *)(v19 + 24) + 104LL) )
    {
      v19 = GetThreadDesktopWindow(0LL);
      v163 = v284;
      *(_QWORD *)&v350 = *(_QWORD *)(v284 + 416);
      *(_QWORD *)(v284 + 416) = &v350;
      *((_QWORD *)&v350 + 1) = v19;
      if ( v19 )
        HMLockObject(v19);
      v306 = 1;
    }
    if ( (v167 & 2) == 0 )
      goto LABEL_415;
    if ( !*(_QWORD *)(v284 + 1392) )
    {
      SetOrClrWF(1, (__int64)v52, 0xDA40u, 1);
      *(_DWORD *)(v284 + 1232) |= 0x40000u;
      *(_DWORD *)(*(_QWORD *)(v284 + 432) + 388LL) |= 0x2000000u;
      v173 = v284;
      if ( !*(_QWORD *)(v284 + 1384) )
      {
        KernelEvent = CreateKernelEvent(1LL);
        v103 = v284;
        *(_QWORD *)(v284 + 1384) = KernelEvent;
        v173 = v284;
        if ( !*(_QWORD *)(v284 + 1384) )
        {
          v130 = 7;
          goto LABEL_539;
        }
      }
      v358[0] = v173 + 1392;
      v358[1] = v52;
      HMAssignmentLock(v358);
      goto LABEL_415;
    }
LABEL_409:
    UserSetLastError(87LL, v163, v159);
    v130 = v290;
    goto LABEL_539;
  }
  v161 = (__int64)v300;
  if ( !v300 )
    v161 = *(_QWORD *)v299[0];
  DestroyMenu(v161);
  v300 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v299);
LABEL_354:
  v130 = v290;
LABEL_539:
  v211 = *(_BYTE *)(*((_QWORD *)v52 + 5) + 31LL) & 0x10;
  if ( v306 )
    ThreadUnlock1(v103);
  SetOrClrWF(1, (__int64)v52, 0x480u, 1);
  SetOrClrWF(1, (__int64)v52, 0x380u, 1);
  if ( v211 )
    SetVisible(v52, 0);
  v212 = *((_QWORD *)v52 + 13);
  if ( v212 )
  {
    if ( v211 )
    {
      zzzLockDisplayAreaAndInvalidateDCCache(*((_QWORD *)v52 + 13), 16, 0LL);
      v212 = v158[13];
    }
    v213 = v212;
    if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow((__int64)v52) )
    {
      v215 = *(_QWORD *)(v214 + 16);
      if ( v284 != v215 )
      {
        zzzAttachThreadInput(*((_QWORD *)v52 + 2), v215, 0);
        v213 = v158[13];
      }
    }
    UnlinkWindow(v52, v213);
  }
  v216 = *(struct tagCLS **)v293[0];
  v217 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(v217 + 16) = v337;
  ClassUnlockWorker(v216);
  xxxFreeWindow(v52);
  if ( v130 )
LABEL_552:
    TraceLoggingCreateWindowFailed(
      v130,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
LABEL_37:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v299);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v293);
  return 0LL;
}
