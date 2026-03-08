/*
 * XREFs of xxxFreeWindow @ 0x1C0031C50
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00331B0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     FreeSpb @ 0x1C000B520 (FreeSpb.c)
 *     xxxReleaseCapture @ 0x1C00108E8 (xxxReleaseCapture.c)
 *     _FindActivationFilterWindow @ 0x1C00111D4 (_FindActivationFilterWindow.c)
 *     xxxResetTooltip @ 0x1C00164F0 (xxxResetTooltip.c)
 *     UpdatePointerRedirIsAlive @ 0x1C0020078 (UpdatePointerRedirIsAlive.c)
 *     InternalRemoveProp @ 0x1C002484C (InternalRemoveProp.c)
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x1C002774C (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     DwmAsyncOwnerChange @ 0x1C00280A4 (DwmAsyncOwnerChange.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C0033198 (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00331B0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C0033708 (xxxRemoveFullScreen.c)
 *     MagpDestroyLensContext @ 0x1C00337D8 (MagpDestroyLensContext.c)
 *     CleanupWindowRedirection @ 0x1C00340EC (CleanupWindowRedirection.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0034150 (GreDeleteSpriteOverlapPresent.c)
 *     ClearSendMessages @ 0x1C003421C (ClearSendMessages.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C0034440 (xxxClientFreeWindowClassExtraBytes.c)
 *     SfnDWORD @ 0x1C00385D0 (SfnDWORD.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     FindQMsg @ 0x1C0072160 (FindQMsg.c)
 *     DwmAsyncShellWindowChange @ 0x1C007DD0C (DwmAsyncShellWindowChange.c)
 *     IsMotherDesktopWindow @ 0x1C007E8EC (IsMotherDesktopWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C007EAF8 (DwmAsyncChildDestroy.c)
 *     CleanupIAMAccess @ 0x1C0092F00 (CleanupIAMAccess.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C0096800 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     DeleteHrgnClip @ 0x1C0096DB0 (DeleteHrgnClip.c)
 *     InvalidateDCE @ 0x1C0096E74 (InvalidateDCE.c)
 *     IsCancelRotationDelayWindow @ 0x1C009901C (IsCancelRotationDelayWindow.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C009BA70 (zzzInputFocusLostWindowEvent.c)
 *     PostIAMShellHookMessage @ 0x1C009C174 (PostIAMShellHookMessage.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C009E038 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C00BDB5C (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00BDC8C (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     _GetProcessWindowStation @ 0x1C00BF460 (_GetProcessWindowStation.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00C131C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C00DA2A8 (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 *     DestroyWindowsTimers @ 0x1C00DB1CC (DestroyWindowsTimers.c)
 *     ClearDelegationCapture @ 0x1C00DBDC0 (ClearDelegationCapture.c)
 *     xxxRemoveShadow @ 0x1C00EBAE0 (xxxRemoveShadow.c)
 *     GetClassPtr @ 0x1C00ECC80 (GetClassPtr.c)
 *     _DeregisterShellHookWindow @ 0x1C00EFC04 (_DeregisterShellHookWindow.c)
 *     ResetWindowTransform @ 0x1C00F2D80 (ResetWindowTransform.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00F9CD8 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     DecPaintCount @ 0x1C00FE604 (DecPaintCount.c)
 *     ??9?$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAEAEBQEAUHRGN__@@@Z @ 0x1C00FED88 (--9-$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAEAEBQEAUHRGN__@@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0109640 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     DereferenceClass @ 0x1C010AA40 (DereferenceClass.c)
 *     ??0EPOINTFIX@@QEAA@XZ @ 0x1C0125C10 (--0EPOINTFIX@@QEAA@XZ.c)
 *     ??8?$SharedPointerBase@UtagWND@@@@QEBAEH@Z @ 0x1C012C630 (--8-$SharedPointerBase@UtagWND@@@@QEBAEH@Z.c)
 *     ??9?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C012C640 (--9-$SharedPointerBase@G@@QEBAEH@Z.c)
 *     ?GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C012C650 (-GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ.c)
 *     ClrWF @ 0x1C012C660 (ClrWF.c)
 *     SetWF @ 0x1C012C6AC (SetWF.c)
 *     ??$?9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z @ 0x1C012D268 (--$-9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z.c)
 *     _PostQuitMessage @ 0x1C012D7C8 (_PostQuitMessage.c)
 *     Win32HeapFree @ 0x1C012D834 (Win32HeapFree.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C012D858 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C012D878 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C012D8B8 (safe_cast_fnid_to_PMENUWND.c)
 *     DestroyWindowsHotKeys @ 0x1C012E1A4 (DestroyWindowsHotKeys.c)
 *     FreeClientOnWindowDestruction @ 0x1C012E310 (FreeClientOnWindowDestruction.c)
 *     ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x1C012E824 (-ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowMessageFilter @ 0x1C012EDC4 (FreeWindowMessageFilter.c)
 *     ??$ClearStackReferences@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C012EE4C (--$ClearStackReferences@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C012EE68 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 *     ??4?$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z @ 0x1C012EF08 (--4-$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z.c)
 *     Feature_Servicing_DefaultIMEWindowNotDestroyed__private_IsEnabledDeviceUsage @ 0x1C012EF40 (Feature_Servicing_DefaultIMEWindowNotDestroyed__private_IsEnabledDeviceUsage.c)
 *     FreeWindowGCData @ 0x1C012EFE8 (FreeWindowGCData.c)
 *     UnlockWndMenu @ 0x1C012F0B4 (UnlockWndMenu.c)
 *     UnlockWndMenuSys @ 0x1C012F0CC (UnlockWndMenuSys.c)
 *     ?IsManagementWindow@ShellWindowManagement@@YA_NPEAUtagWND@@@Z @ 0x1C012F174 (-IsManagementWindow@ShellWindowManagement@@YA_NPEAUtagWND@@@Z.c)
 *     IsSysShadow @ 0x1C012F1E0 (IsSysShadow.c)
 *     DestroyWindowSmIcon @ 0x1C012F204 (DestroyWindowSmIcon.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??B?$RedirectedFielddwDesktopId@_K@tagKERNELDESKTOPINFO@@QEBA_KXZ @ 0x1C01A4014 (--B-$RedirectedFielddwDesktopId@_K@tagKERNELDESKTOPINFO@@QEBA_KXZ.c)
 *     ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01A6EB0 (--1AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??4?$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEAAAEBQEAUHRGN__@@AEBQEAU2@@Z @ 0x1C01A6EE0 (--4-$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEAAAEBQEAUHRGN__@@AEBQEAU2@@Z.c)
 *     ??B?$RedirectedFieldfnid@G@tagWND@@QEBAGXZ @ 0x1C01A6EFC (--B-$RedirectedFieldfnid@G@tagWND@@QEBAGXZ.c)
 *     ??B?$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C01A6F0C (--B-$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ??B?$SharedPointerBase@UtagSBINFO@@@@QEAA_KXZ @ 0x1C01A6F24 (--B-$SharedPointerBase@UtagSBINFO@@@@QEAA_KXZ.c)
 *     ??I@YA?AW4_TIFLAGS@@W40@0@Z @ 0x1C01A6F30 (--I@YA-AW4_TIFLAGS@@W40@0@Z.c)
 *     ?GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ @ 0x1C01A70E0 (-GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1C01A73E4 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z @ 0x1C01A73F8 (-RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z.c)
 *     ?GetFocusWnd@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C01AEEF4 (-GetFocusWnd@tagQ@@QEBAPEAUtagWND@@XZ.c)
 *     ??$?B_K@RedirectedFieldpExtraBytes@tagWND@@QEBA_KXZ @ 0x1C01B3E54 (--$-B_K@RedirectedFieldpExtraBytes@tagWND@@QEBA_KXZ.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@@Z @ 0x1C01B8C80 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@@Z.c)
 *     ??C?$SmartObjStackRefBase@UtagPOPUPMENU@@@@QEBAPEAUtagPOPUPMENU@@XZ @ 0x1C01B9BB8 (--C-$SmartObjStackRefBase@UtagPOPUPMENU@@@@QEBAPEAUtagPOPUPMENU@@XZ.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01BC2F8 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ??4?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEAAAEBIAEBI@Z @ 0x1C01BF230 (--4-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEAAAEBIAEBI@Z.c)
 *     ??4?$RedirectedFieldcbwndExtra@H@tagWND@@QEAAAEBHAEBH@Z @ 0x1C01BF24C (--4-$RedirectedFieldcbwndExtra@H@tagWND@@QEAAAEBHAEBH@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndProgman@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BFA30 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndProgman@UtagWND@@@tagKERNELDESKTOPI.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BFA48 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNELDESKTOPINF.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndTaskman@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BFA60 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndTaskman@UtagWND@@@tagKERNELDESKTOPI.c)
 *     _NotifyOverlayWindow @ 0x1C01C9960 (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01CB1C0 (RemoveSwitchWindowInfo.c)
 *     ??_5?$RedirectedFieldfnid@G@tagWND@@QEAA?BGAEBG@Z @ 0x1C01CCE30 (--_5-$RedirectedFieldfnid@G@tagWND@@QEAA-BGAEBG@Z.c)
 *     ??B?$RedirectedFieldfDeferredDesktopRotation@I@tagKERNELDESKTOPINFO@@QEBAIXZ @ 0x1C01F6B74 (--B-$RedirectedFieldfDeferredDesktopRotation@I@tagKERNELDESKTOPINFO@@QEBAIXZ.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F7030 (xxxDeferredDesktopRotation.c)
 *     FindSpb @ 0x1C01FA54C (FindSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C01FE184 (xxxDDETrackWindowDying.c)
 *     ??$?4H@RedirectedFieldpExtraBytes@tagWND@@QEAAAEBHAEBH@Z @ 0x1C0202F64 (--$-4H@RedirectedFieldpExtraBytes@tagWND@@QEAAAEBHAEBH@Z.c)
 *     ??4?$RedirectedFieldLength@K@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAAEBKAEBK@Z @ 0x1C0202F80 (--4-$RedirectedFieldLength@K@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAAEBKAEBK@Z.c)
 *     ??4?$RedirectedFieldhIcon@PEAUHICON__@@@tagWND@@QEAAAEBQEAUHICON__@@AEBQEAU2@@Z @ 0x1C0202F9C (--4-$RedirectedFieldhIcon@PEAUHICON__@@@tagWND@@QEAAAEBQEAUHICON__@@AEBQEAU2@@Z.c)
 *     ??4?$RedirectedFieldlpfnWndProc@P6A_JPEAUtagWND@@I_K_J@Z@tagWND@@QEAAAEBQ6A_JPEAU1@I_K_J@ZAEBQ6A_J0I12@Z@Z @ 0x1C0202FB8 (--4-$RedirectedFieldlpfnWndProc@P6A_JPEAUtagWND@@I_K_J@Z@tagWND@@QEAAAEBQ6A_JPEAU1@I_K_J@ZAEBQ6A.c)
 *     ??4?$SharedUserObjPointerFieldspmenu@UtagMENU@@@tagWND@@QEAAPEAUtagMENU@@PEBU2@@Z @ 0x1C0202FD4 (--4-$SharedUserObjPointerFieldspmenu@UtagMENU@@@tagWND@@QEAAPEAUtagMENU@@PEBU2@@Z.c)
 *     ??F?$RedirectedFieldcntMBox@H@tagKERNELDESKTOPINFO@@QEAAHH@Z @ 0x1C0203008 (--F-$RedirectedFieldcntMBox@H@tagKERNELDESKTOPINFO@@QEAAHH@Z.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C0203030 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@@Z @ 0x1C0203094 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@@Z @ 0x1C02030A8 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x1C02030C4 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z.c)
 *     SafeLockWindow @ 0x1C02030D8 (SafeLockWindow.c)
 *     CleanupShadow @ 0x1C02242EC (CleanupShadow.c)
 *     GreDeleteWnd @ 0x1C028A9D0 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxFreeWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rsi
  int v5; // r14d
  struct tagWND *v6; // rdx
  __int64 v7; // rdx
  EPOINTFIX *v8; // rax
  __int64 v9; // rax
  void *v10; // rax
  EPOINTFIX *v11; // rcx
  EPOINTFIX *v12; // rax
  EPOINTFIX *v13; // rcx
  EPOINTFIX *v14; // rax
  __int64 v15; // rax
  EPOINTFIX *v16; // rcx
  EPOINTFIX *v17; // rax
  __int64 v18; // rax
  struct tagWND *v19; // rdx
  ShellWindowManagement *v20; // rcx
  EPOINTFIX *v21; // rcx
  EPOINTFIX *v22; // rax
  EPOINTFIX *v23; // rcx
  EPOINTFIX *v24; // rax
  unsigned __int16 v25; // r8
  struct tagWND **v26; // r8
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rax
  EPOINTFIX *v31; // rax
  unsigned __int16 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  EPOINTFIX *v43; // r12
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  EPOINTFIX *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  EPOINTFIX *v51; // rax
  EPOINTFIX *v52; // rax
  EPOINTFIX *v53; // rax
  EPOINTFIX *v54; // rax
  tagQ *v55; // rax
  tagQ *v56; // rax
  tagTHREADINFO *v57; // rcx
  struct tagQ *v58; // rax
  EPOINTFIX *v59; // rax
  tagQ *v60; // rax
  tagQ *v61; // rax
  tagTHREADINFO *v62; // rcx
  int v63; // r9d
  struct tagQ *v64; // rax
  EPOINTFIX *v65; // rax
  EPOINTFIX *v66; // rax
  __int64 v67; // rax
  EPOINTFIX *v68; // rax
  EPOINTFIX *v69; // rcx
  EPOINTFIX *v70; // rax
  struct tagWND **v71; // rcx
  __int64 v72; // rcx
  struct tagTOOLTIPWND *v73; // rax
  struct tagTOOLTIPWND *v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  EPOINTFIX *v79; // rax
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 Prop; // rdi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rax
  void *v88; // rdi
  struct tagWND *v89; // rcx
  struct tagWND **v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdi
  EPOINTFIX *v93; // rax
  EPOINTFIX *v94; // rax
  _DWORD *v95; // rax
  _DWORD *v96; // rcx
  _DWORD *v97; // rax
  _DWORD *v98; // rcx
  __int64 v99; // rax
  __int64 QMsg; // rax
  __int64 v101; // rcx
  __int64 v102; // rdi
  __int64 v103; // rcx
  __int64 v104; // rdi
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  EWNDOBJ *v108; // rdi
  __int64 **v109; // r14
  __int64 *v110; // rdi
  int v111; // eax
  struct tagWND *v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 *v115; // rax
  char *Spb; // rax
  EPOINTFIX *v117; // rax
  char *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  EPOINTFIX *v124; // rax
  int v125; // eax
  bool v126; // zf
  EPOINTFIX *v127; // rax
  __int64 v128; // rax
  EPOINTFIX *v129; // rax
  __int64 v130; // rax
  EPOINTFIX *v131; // rax
  __int64 v132; // rax
  EPOINTFIX *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdi
  void *v136; // rax
  __int64 v137; // rax
  __int64 ProcessWindowStation; // rax
  _QWORD *v139; // rdi
  EPOINTFIX *v140; // rax
  EPOINTFIX *v141; // rax
  EPOINTFIX *v142; // rax
  __int64 v143; // rdx
  struct tagWND *v144; // rcx
  __int64 v145; // r8
  __int64 v146; // rax
  __int64 v147; // rdi
  __int64 v148; // rax
  _DWORD *v149; // rax
  void *v150; // rcx
  void *v151; // rax
  EPOINTFIX *v152; // rax
  __int64 v153; // rax
  void *v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // rax
  _QWORD *v157; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *ClassPtr; // rax
  __int64 v160; // rcx
  __int64 v161; // rax
  _BYTE v162[16]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v163; // [rsp+50h] [rbp-59h] BYREF
  __int128 v164; // [rsp+60h] [rbp-49h] BYREF
  __int64 v165; // [rsp+70h] [rbp-39h]
  __int128 v166; // [rsp+78h] [rbp-31h] BYREF
  __int64 v167; // [rsp+88h] [rbp-21h]
  __int128 v168; // [rsp+90h] [rbp-19h] BYREF
  __int64 v169; // [rsp+A0h] [rbp-9h]
  _BYTE v170[16]; // [rsp+A8h] [rbp-1h] BYREF
  _BYTE v171[24]; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v172; // [rsp+110h] [rbp+67h] BYREF
  __int64 v173; // [rsp+118h] [rbp+6Fh] BYREF

  v173 = a2;
  v166 = 0LL;
  v167 = 0LL;
  v4 = PtiCurrent();
  v5 = 0;
  if ( *(char *)(*(_QWORD *)(v3 + 40) + 20LL) >= 0 && !(unsigned int)IsMotherDesktopWindow(a1) )
  {
    LODWORD(v173) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4391LL);
  }
  v6 = (struct tagWND *)*((_QWORD *)a1 + 3);
  if ( v6 )
  {
    if ( a1 == (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(*((_QWORD *)v6 + 1) + 168LL) )
    {
      CleanupIAMAccess((struct tagDESKTOP *)v7);
      v8 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 168LL));
      v9 = UnlockPointer(v8);
      HMAssignmentUnlock(v9);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        tagKERNELDESKTOPINFO::RedirectedFielddwDesktopId<unsigned __int64>::operator unsigned __int64(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 16LL);
        v10 = (void *)ReferenceDwmApiPort();
        DwmAsyncShellWindowChange(v10);
      }
      if ( (unsigned int)tagKERNELDESKTOPINFO::RedirectedFieldfDeferredDesktopRotation<unsigned int>::operator unsigned int(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 250LL) )
        v5 = 1;
    }
    v11 = (EPOINTFIX *)(*(_QWORD *)(v7 + 8) + 184LL);
    if ( *(struct tagWND **)v11 == a1 )
    {
      v12 = EPOINTFIX::EPOINTFIX(v11);
      HMAssignmentUnlock(v12);
    }
    if ( (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) == a1 )
    {
      v14 = EPOINTFIX::EPOINTFIX(v13);
      v15 = UnlockPointer(v14);
      HMAssignmentUnlock(v15);
    }
    if ( (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 200LL) == a1 )
    {
      v17 = EPOINTFIX::EPOINTFIX(v16);
      v18 = UnlockPointer(v17);
      HMAssignmentUnlock(v18);
    }
    if ( (unsigned int)IsCancelRotationDelayWindow(a1) )
    {
      v21 = (EPOINTFIX *)(*((_QWORD *)a1 + 3) + 296LL);
    }
    else
    {
      if ( ShellWindowManagement::IsManagementWindow(v20, v19) )
      {
        ShellWindowManagement::SetWindow((ShellWindowManagement *)v26, 0LL, (struct tagWND *)v26);
        goto LABEL_19;
      }
      v21 = (EPOINTFIX *)(v26 + 36);
      if ( a1 != v26[36] )
      {
        ActivationFilterWindow = FindActivationFilterWindow((__int64)a1);
        v28 = ActivationFilterWindow;
        if ( ActivationFilterWindow )
        {
          v29 = *ActivationFilterWindow;
          if ( *(_QWORD **)(*ActivationFilterWindow + 8LL) != ActivationFilterWindow
            || (v30 = (_QWORD *)ActivationFilterWindow[1], (_QWORD *)*v30 != v28) )
          {
            __fastfail(3u);
          }
          *v30 = v29;
          *(_QWORD *)(v29 + 8) = v30;
          v31 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v28 + 2));
          HMAssignmentUnlock(v31);
          Win32FreePool(v28);
        }
        goto LABEL_19;
      }
    }
    v22 = EPOINTFIX::EPOINTFIX(v21);
    HMAssignmentUnlock(v22);
LABEL_19:
    UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
    v6 = (struct tagWND *)*((_QWORD *)a1 + 3);
    v23 = (EPOINTFIX *)(*((_QWORD *)v6 + 1) + 232LL);
    if ( *(struct tagWND **)v23 == a1 )
    {
      v24 = EPOINTFIX::EPOINTFIX(v23);
      HMAssignmentUnlock(v24);
      v6 = (struct tagWND *)*((_QWORD *)a1 + 3);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x40) != 0 )
    {
      DeregisterShellHookWindow(a1);
      v6 = (struct tagWND *)*((_QWORD *)a1 + 3);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x20) != 0 )
    {
      tagKERNELDESKTOPINFO::RedirectedFieldcntMBox<int>::operator--(*((_QWORD *)v6 + 1) + 248LL);
      ClrWF(a1, 32LL);
    }
  }
  if ( *((_DWORD *)a1 + 65) )
    CleanupInputDelegation(a1);
  InputTransform::ClearTransforms(a1, v6);
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 && v4 != *((struct tagTHREADINFO **)a1 + 2) )
    HMChangeOwnerThread(a1, v4);
  if ( v5 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage(a1, 130LL, 0LL, 0LL);
  xxxRemoveFullScreen(a1);
  if ( ((unsigned __int16)tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x2FFFu) >= 0x29A
    && (tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x4000) == 0 )
  {
    if ( v25 > 0x2A0u )
    {
      if ( v25 <= 0x2AAu && !(unsigned int)operator&(*((unsigned int *)v4 + 122), 1LL) )
        SfnDWORD((_DWORD)a1, 112, 0, 0, 0LL, *(_QWORD *)(gpsi + 8LL * v32 - 4608));
    }
    else
    {
      (*((void (__fastcall **)(struct tagWND *, __int64, _QWORD))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
       + (((_BYTE)v25 + 6) & 0x1F)))(
        a1,
        112LL,
        0LL);
    }
    LOWORD(v173) = 0x4000;
    tagWND::RedirectedFieldfnid<unsigned short>::operator|=((char *)a1 + 87, &v173);
  }
  LOWORD(v173) = 0x8000;
  tagWND::RedirectedFieldfnid<unsigned short>::operator|=((char *)a1 + 87, &v173);
  v173 = 0LL;
  if ( (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>((char *)a1 + 315, &v173) )
  {
    v173 = -1LL;
    if ( (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>(v33, &v173) )
    {
      v36 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v36 & 0x10) != 0 )
      {
        v80 = tagWND::RedirectedFieldpExtraBytes::operator<unsigned __int64> unsigned __int64(
                v34,
                v36,
                *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
        Win32HeapFree(v81, v81 + v80);
        LODWORD(v173) = 0;
        tagWND::RedirectedFieldpExtraBytes::operator=<int>((char *)a1 + 315, &v173);
      }
      else
      {
        v37 = tagWND::RedirectedFieldpExtraBytes::operator<unsigned __int64> unsigned __int64(v34, v36, v35);
        LODWORD(v172) = 0;
        v38 = v37;
        tagWND::RedirectedFieldpExtraBytes::operator=<int>(v39, &v172);
        if ( (*(_DWORD *)(PsGetCurrentProcess(v41, v40, v42) + 1124) & 0x40000008) == 0
          && !(unsigned int)operator&(*((unsigned int *)v4 + 122), 1LL) )
        {
          xxxClientFreeWindowClassExtraBytes(a1, v38);
        }
      }
    }
  }
  LODWORD(v172) = 0;
  tagWND::RedirectedFieldcbwndExtra<int>::operator=((char *)a1 + 177, &v172);
  v43 = (struct tagWND *)((char *)a1 + 120);
  if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120) )
  {
    v45 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v44);
    if ( (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v45 + 200) == a1 )
    {
      SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120);
      v47 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v46);
      v48 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v47 + 200));
      SafeLockWindow(v48);
      v49 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120);
      SharedPointerBase<tagSBINFO>::operator unsigned __int64(v49 + 200);
      v50 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120);
      v51 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v50 + 200));
      v163 = *(_OWORD *)LockPointer(v170, v51);
      HMAssignmentLock(&v163, 0LL);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *((struct tagWND **)v4 + 98) )
  {
    v52 = EPOINTFIX::EPOINTFIX((struct tagTHREADINFO *)((char *)v4 + 784));
    HMAssignmentUnlock(v52);
  }
  if ( *((struct tagWND **)v4 + 179) == a1 )
  {
    v53 = EPOINTFIX::EPOINTFIX((struct tagTHREADINFO *)((char *)v4 + 1432));
    HMAssignmentUnlock(v53);
  }
  if ( *((struct tagWND **)v4 + 188) == a1 )
  {
    v54 = EPOINTFIX::EPOINTFIX((struct tagTHREADINFO *)((char *)v4 + 1504));
    HMAssignmentUnlock(v54);
  }
  v55 = tagTHREADINFO::GetQ(v4);
  if ( a1 == tagQ::GetFocusWnd(v55) )
  {
    v56 = tagTHREADINFO::GetQ(v4);
    tagQ::UnlockFocusWnd(v56);
    if ( tagTHREADINFO::GetQ(v4) == (struct tagQ *)gpqForeground )
      zzzInputFocusLostWindowEvent(a1, 10LL);
  }
  if ( a1 == *((struct tagWND **)tagTHREADINFO::GetQ(v4) + 17) )
  {
    v58 = tagTHREADINFO::GetQ(v57);
    v59 = EPOINTFIX::EPOINTFIX((struct tagQ *)((char *)v58 + 136));
    HMAssignmentUnlock(v59);
  }
  v60 = tagTHREADINFO::GetQ(v4);
  if ( a1 == tagQ::GetActiveWindow(v60) )
  {
    v61 = tagTHREADINFO::GetQ(v4);
    tagQ::SetActiveWindow(v61, 0LL);
  }
  if ( a1 == *((struct tagWND **)tagTHREADINFO::GetQ(v4) + 18) )
  {
    v64 = tagTHREADINFO::GetQ(v62);
    ClearDelegationCapture(v64);
  }
  if ( a1 == (struct tagWND *)gspwndActivate )
  {
    v65 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndActivate);
    HMAssignmentUnlock(v65);
  }
  if ( a1 == (struct tagWND *)gspwndBSDR )
  {
    v66 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndBSDR);
    HMAssignmentUnlock(v66);
  }
  v67 = *((_QWORD *)a1 + 3);
  if ( v67 )
  {
    if ( a1 == *(struct tagWND **)(v67 + 88) )
    {
      v68 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v67 + 88));
      HMAssignmentUnlock(v68);
    }
    v69 = (EPOINTFIX *)(*((_QWORD *)a1 + 3) + 96LL);
    if ( a1 == *(struct tagWND **)v69 )
    {
      v70 = EPOINTFIX::EPOINTFIX(v69);
      HMAssignmentUnlock(v70);
    }
    v71 = (struct tagWND **)*((_QWORD *)a1 + 3);
    if ( a1 == v71[23] )
    {
      NotifyShell::HitTestPartUpdate((NotifyShell *)v71, a1, 0LL, v63);
      v72 = *((_QWORD *)a1 + 3);
      if ( (*(_DWORD *)(v72 + 48) & 0x200) != 0 )
      {
        v73 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v72 + 112));
        v74 = v73;
        if ( v73 )
        {
          v75 = *(_QWORD *)v73;
          if ( *(_QWORD *)v73 )
          {
            v168 = 0LL;
            v169 = 0LL;
            ThreadLockAlways(v75, &v168);
            xxxResetTooltip(v74);
            ThreadUnlock1(v77, v76, v78);
          }
        }
      }
      v79 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(*((_QWORD *)a1 + 3) + 184LL));
      HMAssignmentUnlock(v79);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFFA3F;
    }
  }
  if ( a1 == *((struct tagWND **)tagTHREADINFO::GetQ(v4) + 14) )
    xxxReleaseCapture();
  if ( (unsigned int)IsSysShadow(a1) )
    CleanupShadow(a1);
  else
    xxxRemoveShadow(a1);
  DestroyWindowSmIcon(a1);
  v172 = 0LL;
  tagWND::RedirectedFieldhIcon<HICON__ *>::operator=((char *)a1 + 313, &v172);
  v82 = *((_QWORD *)a1 + 18);
  if ( v82 && *(_QWORD *)(v82 + 24) )
  {
    v165 = 0LL;
    v164 = 0LL;
    Prop = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1u);
    if ( Prop )
    {
      *(_QWORD *)&v164 = *((_QWORD *)v4 + 52);
      *((_QWORD *)v4 + 52) = &v164;
      *((_QWORD *)&v164 + 1) = Prop;
      HMLockObject(Prop);
      xxxDDETrackWindowDying(a1, Prop);
      ThreadUnlock1(v85, v84, v86);
    }
    v87 = InternalRemoveProp((__int64)a1, (unsigned __int16)atomDDEImp, 1u);
    v88 = (void *)v87;
    if ( v87 )
    {
      *(_WORD *)(v87 + 88) = 0;
      if ( !*(_WORD *)(v87 + 90) )
      {
        SeDeleteClientSecurity(v87 + 16);
        Win32FreePool(v88);
      }
    }
    InternalRemoveProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, 1u);
  }
  if ( (unsigned __int8)tagWND::HasState(a1, 512LL) )
    PostIAMShellHookMessage(18LL, *(_QWORD *)a1);
  if ( (unsigned int)Feature_Servicing_DefaultIMEWindowNotDestroyed__private_IsEnabledDeviceUsage() )
  {
    if ( (unsigned __int8)tagWND::HasState(a1, 0x10000000LL) )
    {
      tagWND::RemoveState();
      --*((_DWORD *)v4 + 228);
    }
    else
    {
      v89 = (struct tagWND *)*((_QWORD *)v4 + 98);
      v90 = (struct tagWND **)((char *)v4 + 784);
      if ( a1 == v89
        || (v90 = (struct tagWND **)((char *)v4 + 784), !v89)
        || (v90 = (struct tagWND **)((char *)v4 + 784), *((_DWORD *)v4 + 228)) )
      {
LABEL_112:
        if ( *v90 && !*((_DWORD *)v4 + 228) && a1 != *v90 )
          xxxDestroyWindow();
        goto LABEL_116;
      }
      LODWORD(v172) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4721LL);
    }
    v90 = (struct tagWND **)((char *)v4 + 784);
    goto LABEL_112;
  }
LABEL_116:
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v173);
  HandleFullWindowDestruction(a1);
  if ( (tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x2FFF) == 0x2A0 )
  {
    v91 = safe_cast_fnid_to_PSWITCHWND(a1);
    v92 = v91;
    if ( v91 )
    {
      v172 = *(_QWORD *)(v91 + 8);
      if ( v172 )
      {
        RemoveSwitchWindowInfo(&v172);
        *(_QWORD *)(v92 + 8) = 0LL;
      }
    }
  }
  if ( a1 == (struct tagWND *)gspwndCursor )
  {
    v93 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndCursor);
    HMAssignmentUnlock(v93);
  }
  if ( a1 == (struct tagWND *)gspwndCursorNC )
  {
    v94 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndCursorNC);
    HMAssignmentUnlock(v94);
  }
  MagpDestroyLensContext(gMagnContext, v4, a1);
  DestroyWindowsTimers(a1);
  DestroyWindowsHotKeys(a1);
  v95 = (_DWORD *)*((_QWORD *)a1 + 36);
  if ( v95 )
  {
    --*v95;
    v96 = (_DWORD *)*((_QWORD *)a1 + 36);
    if ( !*v96 )
      Win32FreePool(v96);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  v97 = (_DWORD *)*((_QWORD *)a1 + 37);
  if ( v97 )
  {
    --*v97;
    v98 = (_DWORD *)*((_QWORD *)a1 + 37);
    if ( !*v98 )
      Win32FreePool(v98);
    *((_QWORD *)a1 + 37) = 0LL;
  }
  if ( !WPP_MAIN_CB.ActiveThreadCount )
    ClearSendMessages(a1);
  CleanupWindowRedirection(a1);
  v172 = 0LL;
  if ( (unsigned __int8)tagWND::RedirectedFieldhrgnUpdate<HRGN__ *>::operator!=((char *)a1 + 176, &v172)
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) != 0 )
  {
    DecPaintCount(a1);
    v99 = tagWND::RedirectedFieldhrgnUpdate<HRGN__ *>::operator HRGN__ *((char *)a1 + 176);
    DeleteMaybeSpecialRgn(v99);
    v172 = 0LL;
    tagWND::RedirectedFieldhrgnUpdate<HRGN__ *>::operator=((char *)a1 + 176, &v172);
    ClrWF(a1, 272LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0xA) != 0 )
  {
    ClrWF(a1, 264LL);
    ClrWF(a1, 258LL);
  }
  if ( *((_QWORD *)v4 + 101) )
  {
    QMsg = FindQMsg(v4, (struct tagTHREADINFO *)((char *)v4 + 808), 18, 1);
    if ( QMsg )
      PostQuitMessage(*(unsigned int *)(QMsg + 32));
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40
    && !(unsigned __int8)SharedPointerBase<tagWND>::operator==((char *)a1 + 168) )
  {
    LODWORD(v172) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4866LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    if ( (unsigned __int8)SharedPointerBase<unsigned short>::operator!=((char *)a1 + 168) )
    {
      v102 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v101);
      if ( UnlockWndMenu(a1) )
        DestroyMenu(v102);
    }
  }
  if ( (unsigned __int8)SharedPointerBase<unsigned short>::operator!=((char *)a1 + 160) )
  {
    v104 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v103);
    if ( v104 == *(_QWORD *)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenuSys(a1);
    }
    else if ( UnlockWndMenuSys(a1) )
    {
      DestroyMenu(v104);
    }
  }
  v105 = *((_QWORD *)a1 + 3);
  if ( v105 )
  {
    v106 = *(_QWORD *)(v105 + 56);
    if ( v106 && a1 == *(struct tagWND **)(v106 + 80) )
    {
      v107 = *(_QWORD *)(v105 + 56);
LABEL_160:
      UnlockNotifyWindow((struct tagMENU *)v107);
      goto LABEL_161;
    }
    v107 = *(_QWORD *)(v105 + 64);
    if ( v107 && a1 == *(struct tagWND **)(v107 + 80) )
      goto LABEL_160;
  }
LABEL_161:
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
  {
    v108 = (EWNDOBJ *)InternalRemoveProp((__int64)a1, (unsigned __int16)atomWndObj, 1u);
    if ( v108 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteWnd(v108);
      --*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v109 = (__int64 **)(gpDispInfo + 24LL);
  v110 = *(__int64 **)(gpDispInfo + 24LL);
  if ( v110 )
  {
    while ( 1 )
    {
      v111 = *((_DWORD *)v110 + 16);
      if ( (v111 & 0x400800) != 0 )
      {
LABEL_180:
        v115 = (__int64 *)*v110;
        v109 = (__int64 **)v110;
        goto LABEL_181;
      }
      v112 = (struct tagWND *)v110[2];
      if ( v112 == a1 || (struct tagWND *)v110[3] == a1 || (struct tagWND *)v110[4] == a1 )
        break;
LABEL_179:
      v115 = *v109;
      if ( v110 == *v109 )
        goto LABEL_180;
LABEL_181:
      v110 = v115;
      if ( !v115 )
      {
        v43 = (struct tagWND *)((char *)a1 + 120);
        goto LABEL_183;
      }
    }
    if ( (v111 & 2) == 0 )
    {
      if ( v110 == *(__int64 **)(SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)v112 + 136) + 40)
        || v110 != *(__int64 **)(v113 + 248) )
      {
        if ( !gbIgnoreStressedOutStuff
          && v110 == *(__int64 **)(SharedPointerBase<tagSBINFO>::operator unsigned __int64(v114) + 40) )
        {
          LODWORD(v172) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4969LL);
        }
        if ( (v110[8] & 0xC0) != 0 )
          DeleteHrgnClip(v110);
LABEL_178:
        InvalidateDCE(v110);
        goto LABEL_179;
      }
      *(_QWORD *)(v113 + 248) = 0LL;
      goto LABEL_205;
    }
    if ( (v111 & 0x1000) != 0 )
    {
      if ( (struct tagTHREADINFO *)v110[9] != v4 )
      {
LABEL_205:
        DestroyCacheDC(v109, v110[1]);
        goto LABEL_179;
      }
      v125 = ReleaseCacheDC(v110[1], 0LL);
      if ( v125 == 1 )
        goto LABEL_179;
      v126 = v125 == 2;
    }
    else
    {
      v126 = (unsigned int)GreSetDCOwnerEx(v110[1], 2147483666LL, 0LL, 0LL) == 0;
    }
    if ( !v126 )
      goto LABEL_178;
    goto LABEL_205;
  }
LABEL_183:
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 == (struct tagWND *)gspwndLockUpdate )
  {
    Spb = (char *)FindSpb(a1);
    FreeSpb(Spb);
    v117 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndLockUpdate);
    HMAssignmentUnlock(v117);
    gptiLockUpdate = 0LL;
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 16LL) < 0 )
  {
    v118 = (char *)FindSpb(a1);
    FreeSpb(v118);
  }
  if ( (tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x2FFF) != 0x29D )
    tagWND::ClearClipRgnOrMaxClip(a1);
  if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 152) )
  {
    v119 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 152);
    Win32HeapFree(*(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL), v119);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=((char *)a1 + 152, 0LL);
  }
  if ( (unsigned __int8)tagWND::HasState(a1, 0x10000LL) )
    NotifyOverlayWindow(v120, 0LL);
  if ( (unsigned __int8)SharedPointerBase<unsigned short>::operator!=((char *)a1 + 184) )
  {
    v121 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 184);
    Win32HeapFree(*(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL), v121);
    tagWND::ProtectedLargeUnicodeStringWNDstrName::SharedPointerFieldBuffer<unsigned short>::operator=(
      (char *)a1 + 184,
      0LL);
    LODWORD(v172) = 0;
    tagWND::ProtectedLargeUnicodeStringWNDstrName::RedirectedFieldLength<unsigned long>::operator=(
      (char *)a1 + 192,
      &v172);
  }
  ResetWindowTransform(a1);
  v122 = *((_QWORD *)a1 + 3);
  if ( !v122
    || a1 == (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(*(_QWORD *)(v122 + 8) + 24LL) )
  {
    v127 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 104));
    v128 = UnlockPointer(v127);
    HMAssignmentUnlock(v128);
  }
  else
  {
    SharedPointerBase<tagSBINFO>::operator unsigned __int64(v123);
    v124 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 104));
    v163 = *(_OWORD *)LockPointer(v171, v124);
    HMAssignmentLock(&v163, 1LL);
  }
  v129 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 112));
  v130 = UnlockPointer(v129);
  HMAssignmentUnlock(v130);
  v131 = EPOINTFIX::EPOINTFIX(v43);
  v132 = UnlockPointer(v131);
  HMAssignmentUnlock(v132);
  v133 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 200));
  v134 = UnlockPointer(v133);
  HMAssignmentUnlock(v134);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v135 = *(_QWORD *)a1;
    v136 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v136, v135, 0LL);
  }
  DereferenceClass(*((struct tagPROCESSINFO **)v4 + 53));
  HMMarkObjectDestroy(a1);
  v137 = _HMPheFromObject(a1);
  *(_BYTE *)(v137 + 25) |= 2u;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  v139 = (_QWORD *)ProcessWindowStation;
  if ( ProcessWindowStation )
  {
    if ( *(struct tagWND **)(ProcessWindowStation + 96) == a1 )
    {
      v140 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(ProcessWindowStation + 96));
      HMAssignmentUnlock(v140);
      v139[10] = 0LL;
    }
    if ( (struct tagWND *)v139[14] == a1 )
    {
      v141 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v139 + 14));
      HMAssignmentUnlock(v141);
    }
    if ( (struct tagWND *)v139[13] == a1 )
    {
      v142 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v139 + 13));
      HMAssignmentUnlock(v142);
    }
  }
  if ( (unsigned __int8)tagWND::HasState(a1, 0x800000LL) )
    _RemoveClipboardFormatListener(v144);
  if ( ThreadUnlock1(v144, v143, v145) )
  {
    FreeClientOnWindowDestruction(a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 18) )
      {
        DeleteProperties(a1);
        Win32FreePool(*((void **)a1 + 18));
        *((_QWORD *)a1 + 18) = 0LL;
      }
      v146 = safe_cast_fnid_to_PMENUWND(a1);
      v147 = v146;
      if ( v146 && *(_QWORD *)(v146 + 16) )
      {
        SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v162);
        if ( (*(_DWORD *)SmartObjStackRefBase<tagPOPUPMENU>::operator->(v162) & 0x20000000) != 0 )
        {
          v149 = (_DWORD *)SmartObjStackRefBase<tagPOPUPMENU>::operator->(v162);
          *v149 &= ~0x40000000u;
        }
        else if ( (void *const)SmartObjStackRefBase<tagPOPUPMENU>::operator->(v162) == gpopupMenu )
        {
          gdwPUDFlags &= ~0x800000u;
          ClearStackReferences<tagPOPUPMENU>(gpopupMenu);
        }
        else
        {
          v148 = SmartObjStackRefBase<tagPOPUPMENU>::operator->(v162);
          FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU,NSInstrumentation::CTypeIsolation<24576,96>>(v148);
          *(_QWORD *)(v147 + 16) = 0LL;
        }
        SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v162);
      }
      v150 = (void *)*((_QWORD *)a1 + 35);
      if ( v150 )
      {
        Win32FreePool(v150);
        *((_QWORD *)a1 + 35) = 0LL;
      }
      LODWORD(v172) = 0;
      tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator=((char *)a1 + 316, &v172);
      --*((_DWORD *)v4 + 226);
      if ( !(unsigned int)Feature_Servicing_DefaultIMEWindowNotDestroyed__private_IsEnabledDeviceUsage()
        && (unsigned __int8)tagWND::HasState(a1, 0x10000000LL) )
      {
        tagWND::RemoveState();
        --*((_DWORD *)v4 + 228);
      }
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v151 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildDestroy(v151);
      }
      v152 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 104));
      v153 = UnlockPointer(v152);
      HMAssignmentUnlock(v153);
      PushW32ThreadLock(*((_QWORD *)a1 + 3), &v166, UserDereferenceObject);
      v154 = (void *)*((_QWORD *)a1 + 3);
      if ( v154 )
        ObfReferenceObject(v154);
      tagObjLock::LockUnInitializeThreadCreator((struct tagWND *)((char *)a1 + 56));
      HMFreeObject(a1);
      PopAndFreeW32ThreadLock(&v166);
    }
    else
    {
      v172 = 0LL;
      tagWND::RedirectedFieldlpfnWndProc<__int64 (*)(tagWND *,unsigned int,unsigned __int64,__int64)>::operator=(
        (char *)a1 + 212,
        &v172);
      v156 = *((_QWORD *)a1 + 3);
      if ( v156 )
      {
        v157 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v156 + 40) + 56LL) + 16LL) + 424LL);
      }
      else
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v155);
        v157 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
          v157 = 0LL;
      }
      ClassPtr = (_QWORD *)GetClassPtr(*(unsigned __int16 *)(gpsi + 910LL), v157, hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)a1 + 136, *ClassPtr);
      v161 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v160);
      ++*(_DWORD *)(v161 + 72);
      SetWF(a1, 516LL);
      ClrWF(a1, 544LL);
      ClrWF(a1, 4032LL);
      SetWF(a1, 3840LL);
      tagWND::SharedUserObjPointerFieldspmenu<tagMENU>::operator=((char *)a1 + 168);
    }
  }
  AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v173);
}
