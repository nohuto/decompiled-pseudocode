/*
 * XREFs of xxxFreeWindow @ 0x1C00E8F70
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00EA3D4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 * Callees:
 *     FreeSpb @ 0x1C000C170 (FreeSpb.c)
 *     xxxReleaseCapture @ 0x1C0011688 (xxxReleaseCapture.c)
 *     _FindActivationFilterWindow @ 0x1C0011F74 (_FindActivationFilterWindow.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C0018DD4 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C0018F04 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DereferenceClass @ 0x1C001F550 (DereferenceClass.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0020230 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     CleanupIAMAccess @ 0x1C003AE10 (CleanupIAMAccess.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C003B148 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     DestroyWindowsTimers @ 0x1C003BD44 (DestroyWindowsTimers.c)
 *     DwmAsyncShellWindowChange @ 0x1C005971C (DwmAsyncShellWindowChange.c)
 *     IsMotherDesktopWindow @ 0x1C005A5D8 (IsMotherDesktopWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C005A7E4 (DwmAsyncChildDestroy.c)
 *     _DestroyMenu @ 0x1C0061170 (_DestroyMenu.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0066AC4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C006AFC4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     _GetProcessWindowStation @ 0x1C006B240 (_GetProcessWindowStation.c)
 *     UpdatePointerRedirIsAlive @ 0x1C006D138 (UpdatePointerRedirIsAlive.c)
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x1C0077D58 (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     ??9?$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAEAEBQEAUHRGN__@@@Z @ 0x1C008C304 (--9-$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAEAEBQEAUHRGN__@@@Z.c)
 *     DecPaintCount @ 0x1C008C320 (DecPaintCount.c)
 *     DeleteHrgnClip @ 0x1C008ED20 (DeleteHrgnClip.c)
 *     InvalidateDCE @ 0x1C008F178 (InvalidateDCE.c)
 *     ClearDelegationCapture @ 0x1C00A4B50 (ClearDelegationCapture.c)
 *     xxxRemoveShadow @ 0x1C00B3A30 (xxxRemoveShadow.c)
 *     GetClassPtr @ 0x1C00B4D40 (GetClassPtr.c)
 *     _DeregisterShellHookWindow @ 0x1C00B76E4 (_DeregisterShellHookWindow.c)
 *     ResetWindowTransform @ 0x1C00BB224 (ResetWindowTransform.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C00C405C (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 *     IsCancelRotationDelayWindow @ 0x1C00C5D7C (IsCancelRotationDelayWindow.c)
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     DwmAsyncOwnerChange @ 0x1C00CCF70 (DwmAsyncOwnerChange.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C00D1B4C (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     PostIAMShellHookMessage @ 0x1C00D34E8 (PostIAMShellHookMessage.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00EA3D4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C00EA564 (xxxRemoveFullScreen.c)
 *     MagpDestroyLensContext @ 0x1C00EA634 (MagpDestroyLensContext.c)
 *     CleanupWindowRedirection @ 0x1C00EAF48 (CleanupWindowRedirection.c)
 *     ClearSendMessages @ 0x1C00EAFAC (ClearSendMessages.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00EBECC (xxxClientFreeWindowClassExtraBytes.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C00F72B4 (GreDeleteSpriteOverlapPresent.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     SfnDWORD @ 0x1C0123CE0 (SfnDWORD.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     FindQMsg @ 0x1C012AFC0 (FindQMsg.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0131018 (zzzInputFocusLostWindowEvent.c)
 *     ??0EPOINTFIX@@QEAA@XZ @ 0x1C01312F0 (--0EPOINTFIX@@QEAA@XZ.c)
 *     ??8?$SharedPointerBase@UtagWND@@@@QEBAEH@Z @ 0x1C0138BE0 (--8-$SharedPointerBase@UtagWND@@@@QEBAEH@Z.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C0138BF0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     ?GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C0138C4C (-GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ.c)
 *     ClrWF @ 0x1C0138C5C (ClrWF.c)
 *     SetWF @ 0x1C0138D3C (SetWF.c)
 *     ??$?9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z @ 0x1C0139B98 (--$-9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z.c)
 *     _PostQuitMessage @ 0x1C013A284 (_PostQuitMessage.c)
 *     Win32HeapFree @ 0x1C013A2F0 (Win32HeapFree.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C013A314 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C013A334 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C013A398 (safe_cast_fnid_to_PMENUWND.c)
 *     DestroyWindowsHotKeys @ 0x1C013ADE8 (DestroyWindowsHotKeys.c)
 *     FreeClientOnWindowDestruction @ 0x1C013B810 (FreeClientOnWindowDestruction.c)
 *     ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x1C013BE64 (-ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowMessageFilter @ 0x1C013C880 (FreeWindowMessageFilter.c)
 *     ??$ClearStackReferences@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C013C908 (--$ClearStackReferences@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C013C924 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 *     ??4?$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z @ 0x1C013C968 (--4-$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C013C9A0 (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage @ 0x1C013CB2C (Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage.c)
 *     FreeWindowGCData @ 0x1C013CCB8 (FreeWindowGCData.c)
 *     UnlockWndMenu @ 0x1C013D0C4 (UnlockWndMenu.c)
 *     UnlockWndMenuSys @ 0x1C013D0DC (UnlockWndMenuSys.c)
 *     ?IsManagementWindow@ShellWindowManagement@@YA_NPEAUtagWND@@@Z @ 0x1C013D0F4 (-IsManagementWindow@ShellWindowManagement@@YA_NPEAUtagWND@@@Z.c)
 *     IsSysShadow @ 0x1C013D198 (IsSysShadow.c)
 *     DestroyWindowSmIcon @ 0x1C013D1BC (DestroyWindowSmIcon.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x1C013D59C (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ??B?$RedirectedFielddwDesktopId@_K@tagKERNELDESKTOPINFO@@QEBA_KXZ @ 0x1C01A2E0C (--B-$RedirectedFielddwDesktopId@_K@tagKERNELDESKTOPINFO@@QEBA_KXZ.c)
 *     ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01A5CC0 (--1AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??4?$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEAAAEBQEAUHRGN__@@AEBQEAU2@@Z @ 0x1C01A5CF0 (--4-$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEAAAEBQEAUHRGN__@@AEBQEAU2@@Z.c)
 *     ??B?$RedirectedFieldfnid@G@tagWND@@QEBAGXZ @ 0x1C01A5D54 (--B-$RedirectedFieldfnid@G@tagWND@@QEBAGXZ.c)
 *     ??B?$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C01A5D64 (--B-$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ??B?$SharedPointerBase@UtagSBINFO@@@@QEAA_KXZ @ 0x1C01A5D7C (--B-$SharedPointerBase@UtagSBINFO@@@@QEAA_KXZ.c)
 *     ??I@YA?AW4_TIFLAGS@@W40@0@Z @ 0x1C01A5D88 (--I@YA-AW4_TIFLAGS@@W40@0@Z.c)
 *     ?GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ @ 0x1C01A5F28 (-GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1C01A622C (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z @ 0x1C01A6240 (-RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z.c)
 *     ?GetFocusWnd@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C01ADD04 (-GetFocusWnd@tagQ@@QEBAPEAUtagWND@@XZ.c)
 *     ??$?B_K@RedirectedFieldpExtraBytes@tagWND@@QEBA_KXZ @ 0x1C01B2C94 (--$-B_K@RedirectedFieldpExtraBytes@tagWND@@QEBA_KXZ.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@@Z @ 0x1C01B7AE0 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@@Z.c)
 *     ??C?$SmartObjStackRefBase@UtagPOPUPMENU@@@@QEBAPEAUtagPOPUPMENU@@XZ @ 0x1C01B8A18 (--C-$SmartObjStackRefBase@UtagPOPUPMENU@@@@QEBAPEAUtagPOPUPMENU@@XZ.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01BB158 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ??4?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEAAAEBIAEBI@Z @ 0x1C01BE090 (--4-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEAAAEBIAEBI@Z.c)
 *     ??4?$RedirectedFieldcbwndExtra@H@tagWND@@QEAAAEBHAEBH@Z @ 0x1C01BE0AC (--4-$RedirectedFieldcbwndExtra@H@tagWND@@QEAAAEBHAEBH@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndProgman@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BE890 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndProgman@UtagWND@@@tagKERNELDESKTOPI.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BE8A8 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNELDESKTOPINF.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndTaskman@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BE8C0 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndTaskman@UtagWND@@@tagKERNELDESKTOPI.c)
 *     _NotifyOverlayWindow @ 0x1C01C8800 (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01CA0C0 (RemoveSwitchWindowInfo.c)
 *     ??_5?$RedirectedFieldfnid@G@tagWND@@QEAA?BGAEBG@Z @ 0x1C01CBD40 (--_5-$RedirectedFieldfnid@G@tagWND@@QEAA-BGAEBG@Z.c)
 *     ??B?$RedirectedFieldfDeferredDesktopRotation@I@tagKERNELDESKTOPINFO@@QEBAIXZ @ 0x1C01F59A8 (--B-$RedirectedFieldfDeferredDesktopRotation@I@tagKERNELDESKTOPINFO@@QEBAIXZ.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F5E60 (xxxDeferredDesktopRotation.c)
 *     FindSpb @ 0x1C01F935C (FindSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C01FB710 (xxxDDETrackWindowDying.c)
 *     ??$?4H@RedirectedFieldpExtraBytes@tagWND@@QEAAAEBHAEBH@Z @ 0x1C02003BC (--$-4H@RedirectedFieldpExtraBytes@tagWND@@QEAAAEBHAEBH@Z.c)
 *     ??4?$RedirectedFieldLength@K@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAAEBKAEBK@Z @ 0x1C02003D8 (--4-$RedirectedFieldLength@K@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAAEBKAEBK@Z.c)
 *     ??4?$RedirectedFieldhIcon@PEAUHICON__@@@tagWND@@QEAAAEBQEAUHICON__@@AEBQEAU2@@Z @ 0x1C02003F4 (--4-$RedirectedFieldhIcon@PEAUHICON__@@@tagWND@@QEAAAEBQEAUHICON__@@AEBQEAU2@@Z.c)
 *     ??4?$RedirectedFieldlpfnWndProc@P6A_JPEAUtagWND@@I_K_J@Z@tagWND@@QEAAAEBQ6A_JPEAU1@I_K_J@ZAEBQ6A_J0I12@Z@Z @ 0x1C0200410 (--4-$RedirectedFieldlpfnWndProc@P6A_JPEAUtagWND@@I_K_J@Z@tagWND@@QEAAAEBQ6A_JPEAU1@I_K_J@ZAEBQ6A.c)
 *     ??4?$SharedUserObjPointerFieldspmenu@UtagMENU@@@tagWND@@QEAAPEAUtagMENU@@PEBU2@@Z @ 0x1C020042C (--4-$SharedUserObjPointerFieldspmenu@UtagMENU@@@tagWND@@QEAAPEAUtagMENU@@PEBU2@@Z.c)
 *     ??F?$RedirectedFieldcntMBox@H@tagKERNELDESKTOPINFO@@QEAAHH@Z @ 0x1C0200460 (--F-$RedirectedFieldcntMBox@H@tagKERNELDESKTOPINFO@@QEAAHH@Z.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C0200488 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@@Z @ 0x1C02004EC (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@@Z @ 0x1C0200500 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x1C020051C (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z.c)
 *     SafeLockWindow @ 0x1C0200530 (SafeLockWindow.c)
 *     CleanupShadow @ 0x1C02215DC (CleanupShadow.c)
 *     GreDeleteWnd @ 0x1C0288120 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxFreeWindow(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rsi
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagWND *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  EPOINTFIX *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  void *v19; // rax
  EPOINTFIX *v20; // rcx
  EPOINTFIX *v21; // rax
  __int64 v22; // rdx
  EPOINTFIX *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  EPOINTFIX *v26; // rax
  __int64 v27; // rax
  EPOINTFIX *v28; // rcx
  EPOINTFIX *v29; // rax
  __int64 v30; // rax
  struct tagWND *v31; // rdx
  ShellWindowManagement *v32; // rcx
  EPOINTFIX *v33; // rcx
  EPOINTFIX *v34; // rax
  __int64 v35; // r8
  int v36; // r9d
  EPOINTFIX *v37; // rcx
  EPOINTFIX *v38; // rax
  unsigned __int16 v39; // r8
  struct tagWND **v40; // r8
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v42; // rdi
  __int64 v43; // rcx
  _QWORD *v44; // rax
  EPOINTFIX *v45; // rax
  unsigned __int16 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  EPOINTFIX *v57; // r12
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  EPOINTFIX *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r9
  __int64 v88; // rax
  EPOINTFIX *v89; // rax
  __int64 v90; // r8
  EPOINTFIX *v91; // rax
  EPOINTFIX *v92; // rax
  EPOINTFIX *v93; // rax
  tagQ *v94; // rax
  tagQ *v95; // rax
  tagTHREADINFO *v96; // rcx
  struct tagQ *v97; // rax
  EPOINTFIX *v98; // rax
  tagQ *v99; // rax
  tagQ *v100; // rax
  tagTHREADINFO *v101; // rcx
  __int64 v102; // r9
  struct tagQ *v103; // rax
  EPOINTFIX *v104; // rax
  EPOINTFIX *v105; // rax
  __int64 v106; // rax
  EPOINTFIX *v107; // rax
  EPOINTFIX *v108; // rcx
  EPOINTFIX *v109; // rax
  struct tagWND **v110; // rcx
  EPOINTFIX *v111; // rax
  __int64 v112; // rax
  __int64 v113; // r8
  __int64 v114; // rax
  __int64 Prop; // rdi
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rax
  void *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rdi
  EPOINTFIX *v124; // rax
  EPOINTFIX *v125; // rax
  _DWORD *v126; // rax
  _DWORD *v127; // rcx
  _DWORD *v128; // rax
  _DWORD *v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rax
  struct tagMLIST *v133; // rdx
  __int64 QMsg; // rax
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rdi
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdi
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rcx
  EWNDOBJ *v147; // rdi
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 *v150; // r14
  __int64 v151; // rdi
  int v152; // eax
  struct tagWND *v153; // rdx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rax
  char *Spb; // rax
  EPOINTFIX *v160; // rax
  char *v161; // rax
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rax
  __int64 v175; // rdx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  EPOINTFIX *v183; // rax
  __int64 v184; // r8
  int v185; // eax
  bool v186; // zf
  EPOINTFIX *v187; // rax
  __int64 v188; // rax
  EPOINTFIX *v189; // rax
  __int64 v190; // rax
  EPOINTFIX *v191; // rax
  __int64 v192; // rax
  EPOINTFIX *v193; // rax
  __int64 v194; // rax
  __int64 v195; // rcx
  __int64 v196; // rdi
  void *v197; // rax
  __int64 v198; // rax
  __int64 ProcessWindowStation; // rax
  _QWORD *v200; // rdi
  EPOINTFIX *v201; // rax
  EPOINTFIX *v202; // rax
  EPOINTFIX *v203; // rax
  __int64 v204; // rdx
  struct tagWND *v205; // rcx
  __int64 v206; // r8
  __int64 v207; // rax
  __int64 v208; // rdi
  __int64 v209; // rax
  _DWORD *v210; // rax
  void *v211; // rcx
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rcx
  __int64 v215; // rdi
  void *v216; // rax
  EPOINTFIX *v217; // rax
  __int64 v218; // rax
  void *v219; // rcx
  __int64 v220; // rcx
  __int64 v221; // r9
  __int64 v222; // rax
  __int64 v223; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 *ClassPtr; // rax
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 v230; // rax
  _BYTE v231[16]; // [rsp+40h] [rbp-49h] BYREF
  __int128 v232; // [rsp+50h] [rbp-39h] BYREF
  __int64 v233; // [rsp+60h] [rbp-29h] BYREF
  __int64 v234; // [rsp+70h] [rbp-19h] BYREF
  __int128 v235; // [rsp+80h] [rbp-9h] BYREF
  __int64 v236; // [rsp+90h] [rbp+7h]
  __int128 v237; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v238; // [rsp+A8h] [rbp+1Fh]
  __int64 v239; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v240; // [rsp+F8h] [rbp+6Fh] BYREF

  v240 = a2;
  v237 = 0LL;
  v238 = 0LL;
  v3 = PtiCurrent();
  v6 = *(_QWORD *)(v5 + 40);
  v7 = v3;
  v8 = 0;
  if ( *(char *)(v6 + 20) >= 0 && !(unsigned int)IsMotherDesktopWindow((__int64)a1) )
  {
    LODWORD(v240) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4515LL);
  }
  if ( (unsigned int)Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage(v6, v4) )
    xxxFW_DestroyIMEWindowIfRequired(a1, v7);
  v11 = (struct tagWND *)*((_QWORD *)a1 + 3);
  if ( v11 )
  {
    if ( a1 == (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(
                                  *((_QWORD *)v11 + 1) + 168LL,
                                  v11,
                                  v9,
                                  v10) )
    {
      CleanupIAMAccess((struct tagDESKTOP *)v12);
      v15 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 168LL));
      v16 = UnlockPointer(v15);
      HMAssignmentUnlock(v16);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v17 = tagKERNELDESKTOPINFO::RedirectedFielddwDesktopId<unsigned __int64>::operator unsigned __int64(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 16LL);
        v19 = (void *)ReferenceDwmApiPort(v18);
        DwmAsyncShellWindowChange(v19, 0LL, v17);
      }
      if ( (unsigned int)tagKERNELDESKTOPINFO::RedirectedFieldfDeferredDesktopRotation<unsigned int>::operator unsigned int(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 250LL) )
        v8 = 1;
    }
    v20 = (EPOINTFIX *)(*(_QWORD *)(v12 + 8) + 184LL);
    if ( *(struct tagWND **)v20 == a1 )
    {
      v21 = EPOINTFIX::EPOINTFIX(v20);
      HMAssignmentUnlock(v21);
    }
    if ( (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(
                            *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL,
                            v12,
                            v13,
                            v14) == a1 )
    {
      v26 = EPOINTFIX::EPOINTFIX(v23);
      v27 = UnlockPointer(v26);
      HMAssignmentUnlock(v27);
    }
    if ( (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(
                            *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 200LL,
                            v22,
                            v24,
                            v25) == a1 )
    {
      v29 = EPOINTFIX::EPOINTFIX(v28);
      v30 = UnlockPointer(v29);
      HMAssignmentUnlock(v30);
    }
    if ( IsCancelRotationDelayWindow((__int64)a1) )
    {
      v33 = (EPOINTFIX *)(*((_QWORD *)a1 + 3) + 304LL);
    }
    else
    {
      if ( ShellWindowManagement::IsManagementWindow(v32, v31) )
      {
        ShellWindowManagement::SetWindow((ShellWindowManagement *)v40, 0LL, (struct tagWND *)v40);
        goto LABEL_21;
      }
      v33 = (EPOINTFIX *)(v40 + 37);
      if ( a1 != v40[37] )
      {
        ActivationFilterWindow = FindActivationFilterWindow((__int64)a1);
        v42 = ActivationFilterWindow;
        if ( ActivationFilterWindow )
        {
          v43 = *ActivationFilterWindow;
          if ( *(_QWORD **)(*ActivationFilterWindow + 8LL) != ActivationFilterWindow
            || (v44 = (_QWORD *)ActivationFilterWindow[1], (_QWORD *)*v44 != v42) )
          {
            __fastfail(3u);
          }
          *v44 = v43;
          *(_QWORD *)(v43 + 8) = v44;
          v45 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v42 + 2));
          HMAssignmentUnlock(v45);
          Win32FreePool(v42);
        }
        goto LABEL_21;
      }
    }
    v34 = EPOINTFIX::EPOINTFIX(v33);
    HMAssignmentUnlock(v34);
LABEL_21:
    UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
    v11 = (struct tagWND *)*((_QWORD *)a1 + 3);
    v37 = (EPOINTFIX *)(*((_QWORD *)v11 + 1) + 232LL);
    if ( *(struct tagWND **)v37 == a1 )
    {
      v38 = EPOINTFIX::EPOINTFIX(v37);
      HMAssignmentUnlock(v38);
      v11 = (struct tagWND *)*((_QWORD *)a1 + 3);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x40) != 0 )
    {
      DeregisterShellHookWindow(a1, (unsigned __int64)v11, v35, v36);
      v11 = (struct tagWND *)*((_QWORD *)a1 + 3);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x20) != 0 )
    {
      tagKERNELDESKTOPINFO::RedirectedFieldcntMBox<int>::operator--(*((_QWORD *)v11 + 1) + 248LL);
      ClrWF(a1, 32LL);
    }
  }
  if ( *((_DWORD *)a1 + 65) )
    CleanupInputDelegation(a1);
  InputTransform::ClearTransforms(a1, v11);
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 && v7 != *((struct tagTHREADINFO **)a1 + 2) )
    HMChangeOwnerThread(a1, v7);
  if ( v8 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage(a1, 130LL, 0LL, 0LL);
  xxxRemoveFullScreen(a1);
  if ( ((unsigned __int16)tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x2FFFu) >= 0x29A
    && (tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x4000) == 0 )
  {
    if ( v39 > 0x2A0u )
    {
      if ( v39 <= 0x2AAu && !(unsigned int)operator&(*((unsigned int *)v7 + 122), 1LL) )
        SfnDWORD((_DWORD)a1, 112, 0, 0, 0LL, *(_QWORD *)(gpsi + 8LL * v46 - 4608));
    }
    else
    {
      (*((void (__fastcall **)(struct tagWND *, __int64, _QWORD))&WPP_MAIN_CB.SectorSize + (((_BYTE)v39 + 6) & 0x1F)))(
        a1,
        112LL,
        0LL);
    }
    LOWORD(v240) = 0x4000;
    tagWND::RedirectedFieldfnid<unsigned short>::operator|=((char *)a1 + 87, &v240);
  }
  LOWORD(v240) = 0x8000;
  tagWND::RedirectedFieldfnid<unsigned short>::operator|=((char *)a1 + 87, &v240);
  v240 = 0LL;
  if ( (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>((char *)a1 + 315, &v240) )
  {
    v240 = -1LL;
    if ( (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>(v47, &v240) )
    {
      v50 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v50 & 0x10) != 0 )
      {
        v112 = tagWND::RedirectedFieldpExtraBytes::operator<unsigned __int64> unsigned __int64(
                 v48,
                 v50,
                 *(_QWORD *)(*((_QWORD *)a1 + 3) + 136LL));
        Win32HeapFree(v113, v113 + v112);
        LODWORD(v240) = 0;
        tagWND::RedirectedFieldpExtraBytes::operator=<int>((char *)a1 + 315, &v240);
      }
      else
      {
        v51 = tagWND::RedirectedFieldpExtraBytes::operator<unsigned __int64> unsigned __int64(v48, v50, v49);
        LODWORD(v239) = 0;
        v52 = v51;
        tagWND::RedirectedFieldpExtraBytes::operator=<int>(v53, &v239);
        if ( (*(_DWORD *)(PsGetCurrentProcess(v55, v54, v56) + 1124) & 0x40000008) == 0
          && !(unsigned int)operator&(*((unsigned int *)v7 + 122), 1LL) )
        {
          xxxClientFreeWindowClassExtraBytes(a1, v52);
        }
      }
    }
  }
  LODWORD(v239) = 0;
  tagWND::RedirectedFieldcbwndExtra<int>::operator=((char *)a1 + 177, &v239);
  v57 = (struct tagWND *)((char *)a1 + 120);
  if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120, v58, v59, v60) )
  {
    v65 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v62, v61, v63, v64);
    if ( (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v65 + 200, v66, v67, v68) == a1 )
    {
      v72 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120, v69, v70, v71);
      v76 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v73, v72, v74, v75);
      v77 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v76 + 200));
      SafeLockWindow(v77);
      v81 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120, v78, v79, v80);
      v85 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v81 + 200, v82, v83, v84);
      v88 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120, v86, v85, v87);
      v89 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v88 + 200));
      v232 = *(_OWORD *)LockPointer(&v233, (__int64)v89, v90);
      HMAssignmentLock(&v232, 0LL);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *((struct tagWND **)v7 + 98) )
  {
    v91 = EPOINTFIX::EPOINTFIX((struct tagTHREADINFO *)((char *)v7 + 784));
    HMAssignmentUnlock(v91);
  }
  if ( *((struct tagWND **)v7 + 179) == a1 )
  {
    v92 = EPOINTFIX::EPOINTFIX((struct tagTHREADINFO *)((char *)v7 + 1432));
    HMAssignmentUnlock(v92);
  }
  if ( *((struct tagWND **)v7 + 188) == a1 )
  {
    v93 = EPOINTFIX::EPOINTFIX((struct tagTHREADINFO *)((char *)v7 + 1504));
    HMAssignmentUnlock(v93);
  }
  v94 = tagTHREADINFO::GetQ(v7);
  if ( a1 == tagQ::GetFocusWnd(v94) )
  {
    v95 = tagTHREADINFO::GetQ(v7);
    tagQ::UnlockFocusWnd(v95);
    if ( tagTHREADINFO::GetQ(v7) == (struct tagQ *)gpqForeground )
      zzzInputFocusLostWindowEvent(a1, 10LL);
  }
  if ( a1 == *((struct tagWND **)tagTHREADINFO::GetQ(v7) + 17) )
  {
    v97 = tagTHREADINFO::GetQ(v96);
    v98 = EPOINTFIX::EPOINTFIX((struct tagQ *)((char *)v97 + 136));
    HMAssignmentUnlock(v98);
  }
  v99 = tagTHREADINFO::GetQ(v7);
  if ( a1 == tagQ::GetActiveWindow(v99) )
  {
    v100 = tagTHREADINFO::GetQ(v7);
    tagQ::SetActiveWindow(v100, 0LL);
  }
  if ( a1 == *((struct tagWND **)tagTHREADINFO::GetQ(v7) + 18) )
  {
    v103 = tagTHREADINFO::GetQ(v101);
    ClearDelegationCapture((__int64)v103);
  }
  if ( a1 == (struct tagWND *)gspwndActivate )
  {
    v104 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndActivate);
    HMAssignmentUnlock(v104);
  }
  if ( a1 == (struct tagWND *)gspwndBSDR )
  {
    v105 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndBSDR);
    HMAssignmentUnlock(v105);
  }
  v106 = *((_QWORD *)a1 + 3);
  if ( v106 )
  {
    if ( a1 == *(struct tagWND **)(v106 + 88) )
    {
      v107 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v106 + 88));
      HMAssignmentUnlock(v107);
    }
    v108 = (EPOINTFIX *)(*((_QWORD *)a1 + 3) + 96LL);
    if ( a1 == *(struct tagWND **)v108 )
    {
      v109 = EPOINTFIX::EPOINTFIX(v108);
      HMAssignmentUnlock(v109);
    }
    v110 = (struct tagWND **)*((_QWORD *)a1 + 3);
    if ( a1 == v110[24] )
    {
      NotifyShell::HitTestPartUpdate((NotifyShell *)v110, a1, 0LL, v102);
      xxxOnTrackingWindowDestroyed(v7, *((struct tagDESKTOP **)a1 + 3));
      v111 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(*((_QWORD *)a1 + 3) + 192LL));
      HMAssignmentUnlock(v111);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFF23F;
    }
  }
  if ( a1 == *((struct tagWND **)tagTHREADINFO::GetQ(v7) + 14) )
    xxxReleaseCapture();
  if ( (unsigned int)IsSysShadow(a1) )
    CleanupShadow(a1);
  else
    xxxRemoveShadow((__int64)a1);
  DestroyWindowSmIcon(a1);
  v239 = 0LL;
  tagWND::RedirectedFieldhIcon<HICON__ *>::operator=((char *)a1 + 313, &v239);
  v114 = *((_QWORD *)a1 + 18);
  if ( v114 && *(_QWORD *)(v114 + 24) )
  {
    v236 = 0LL;
    v235 = 0LL;
    Prop = GetProp(a1, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      *(_QWORD *)&v235 = *((_QWORD *)v7 + 52);
      *((_QWORD *)v7 + 52) = &v235;
      *((_QWORD *)&v235 + 1) = Prop;
      HMLockObject(Prop);
      xxxDDETrackWindowDying(v116, Prop);
      ThreadUnlock1(v118, v117, v119);
    }
    v120 = InternalRemoveProp((__int64)a1, (unsigned __int16)atomDDEImp, 1u);
    v121 = (void *)v120;
    if ( v120 )
    {
      *(_WORD *)(v120 + 88) = 0;
      if ( !*(_WORD *)(v120 + 90) )
      {
        SeDeleteClientSecurity(v120 + 16);
        Win32FreePool(v121);
      }
    }
    InternalRemoveProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, 1u);
  }
  if ( tagWND::HasState((__int64)a1, 512) )
    PostIAMShellHookMessage(0x12u);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v240);
  HandleFullWindowDestruction(a1);
  if ( (tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x2FFF) == 0x2A0 )
  {
    v122 = safe_cast_fnid_to_PSWITCHWND(a1);
    v123 = v122;
    if ( v122 )
    {
      v239 = *(_QWORD *)(v122 + 8);
      if ( v239 )
      {
        RemoveSwitchWindowInfo(&v239);
        *(_QWORD *)(v123 + 8) = 0LL;
      }
    }
  }
  if ( a1 == (struct tagWND *)gspwndCursor )
  {
    v124 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndCursor);
    HMAssignmentUnlock(v124);
  }
  if ( a1 == (struct tagWND *)gspwndCursorNC )
  {
    v125 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndCursorNC);
    HMAssignmentUnlock(v125);
  }
  MagpDestroyLensContext(gMagnContext, v7, a1);
  DestroyWindowsTimers();
  DestroyWindowsHotKeys(a1);
  v126 = (_DWORD *)*((_QWORD *)a1 + 36);
  if ( v126 )
  {
    --*v126;
    v127 = (_DWORD *)*((_QWORD *)a1 + 36);
    if ( !*v127 )
      Win32FreePool(v127);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  v128 = (_DWORD *)*((_QWORD *)a1 + 37);
  if ( v128 )
  {
    --*v128;
    v129 = (_DWORD *)*((_QWORD *)a1 + 37);
    if ( !*v129 )
      Win32FreePool(v129);
    *((_QWORD *)a1 + 37) = 0LL;
  }
  if ( !LODWORD(WPP_MAIN_CB.SecurityDescriptor) )
    ClearSendMessages(a1);
  CleanupWindowRedirection(a1);
  v239 = 0LL;
  if ( tagWND::RedirectedFieldhrgnUpdate<HRGN__ *>::operator!=((__int64)a1 + 176, &v239)
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) != 0 )
  {
    DecPaintCount((__int64)a1);
    v132 = tagWND::RedirectedFieldhrgnUpdate<HRGN__ *>::operator HRGN__ *((char *)a1 + 176);
    DeleteMaybeSpecialRgn(v132);
    v239 = 0LL;
    tagWND::RedirectedFieldhrgnUpdate<HRGN__ *>::operator=((char *)a1 + 176, &v239);
    ClrWF(a1, 272LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0xA) != 0 )
  {
    ClrWF(a1, 264LL);
    ClrWF(a1, 258LL);
  }
  v133 = (struct tagTHREADINFO *)((char *)v7 + 808);
  if ( *((_QWORD *)v7 + 101) )
  {
    QMsg = FindQMsg(v7, v133, 18, 1);
    if ( QMsg )
      PostQuitMessage(*(unsigned int *)(QMsg + 32));
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40
    && !(unsigned __int8)SharedPointerBase<tagWND>::operator==((char *)a1 + 168, v133, v130, v131) )
  {
    LODWORD(v239) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4955LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    if ( (unsigned __int8)HmgLockResultBase<META>::operator bool((char *)a1 + 168, v133) )
    {
      v138 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v135, v133, v136, v137);
      if ( UnlockWndMenu(a1) )
        DestroyMenu(v138);
    }
  }
  if ( (unsigned __int8)HmgLockResultBase<META>::operator bool((char *)a1 + 160, v133) )
  {
    v143 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v140, v139, v141, v142);
    if ( v143 == *(_QWORD *)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenuSys(a1);
    }
    else if ( UnlockWndMenuSys(a1) )
    {
      DestroyMenu(v143);
    }
  }
  v144 = *((_QWORD *)a1 + 3);
  if ( v144 )
  {
    v145 = *(_QWORD *)(v144 + 56);
    if ( v145 && a1 == *(struct tagWND **)(v145 + 80) )
    {
      v146 = *(_QWORD *)(v144 + 56);
LABEL_146:
      UnlockNotifyWindow((struct tagMENU *)v146);
      goto LABEL_147;
    }
    v146 = *(_QWORD *)(v144 + 64);
    if ( v146 && a1 == *(struct tagWND **)(v146 + 80) )
      goto LABEL_146;
  }
LABEL_147:
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
  {
    v147 = (EWNDOBJ *)InternalRemoveProp((__int64)a1, (unsigned __int16)atomWndObj, 1u);
    if ( v147 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteWnd(v147);
      --*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v150 = (__int64 *)(gpDispInfo + 24LL);
  v151 = *(_QWORD *)(gpDispInfo + 24LL);
  if ( v151 )
  {
    while ( 1 )
    {
      v152 = *(_DWORD *)(v151 + 64);
      if ( (v152 & 0x400800) != 0 )
      {
LABEL_166:
        v158 = *(_QWORD *)v151;
        v150 = (__int64 *)v151;
        goto LABEL_167;
      }
      v153 = *(struct tagWND **)(v151 + 16);
      if ( v153 == a1 || *(struct tagWND **)(v151 + 24) == a1 || *(struct tagWND **)(v151 + 32) == a1 )
        break;
LABEL_165:
      v158 = *v150;
      if ( v151 == *v150 )
        goto LABEL_166;
LABEL_167:
      v151 = v158;
      if ( !v158 )
      {
        v57 = (struct tagWND *)((char *)a1 + 120);
        goto LABEL_169;
      }
    }
    if ( (v152 & 2) == 0 )
    {
      if ( v151 == *(_QWORD *)(SharedPointerBase<tagSBINFO>::operator unsigned __int64(
                                 (char *)v153 + 136,
                                 v153,
                                 v148,
                                 v149)
                             + 40)
        || v151 != *(_QWORD *)(v154 + 248) )
      {
        if ( !gbIgnoreStressedOutStuff
          && v151 == *(_QWORD *)(SharedPointerBase<tagSBINFO>::operator unsigned __int64(v155, v154, v156, v157) + 40) )
        {
          LODWORD(v239) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5058LL);
        }
        if ( (*(_DWORD *)(v151 + 64) & 0xC0) != 0 )
          DeleteHrgnClip(v151);
LABEL_164:
        InvalidateDCE(v151);
        goto LABEL_165;
      }
      *(_QWORD *)(v154 + 248) = 0LL;
      goto LABEL_191;
    }
    if ( (v152 & 0x1000) != 0 )
    {
      if ( *(struct tagTHREADINFO **)(v151 + 72) != v7 )
      {
LABEL_191:
        DestroyCacheDC(v150, *(_QWORD *)(v151 + 8));
        goto LABEL_165;
      }
      v185 = ReleaseCacheDC(*(_QWORD *)(v151 + 8), 0LL);
      if ( v185 == 1 )
        goto LABEL_165;
      v186 = v185 == 2;
    }
    else
    {
      v186 = (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v151 + 8), 2147483666LL, 0LL, 0LL) == 0;
    }
    if ( !v186 )
      goto LABEL_164;
    goto LABEL_191;
  }
LABEL_169:
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 == (struct tagWND *)gspwndLockUpdate )
  {
    Spb = (char *)FindSpb(a1);
    FreeSpb(Spb);
    v160 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndLockUpdate);
    HMAssignmentUnlock(v160);
    gptiLockUpdate = 0LL;
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 16LL) < 0 )
  {
    v161 = (char *)FindSpb(a1);
    FreeSpb(v161);
  }
  if ( (tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x2FFF) != 0x29D )
    tagWND::ClearClipRgnOrMaxClip(a1);
  if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 152, v162, v163, v164) )
  {
    v168 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 152, v165, v166, v167);
    Win32HeapFree(*(_QWORD *)(*((_QWORD *)a1 + 3) + 136LL), v168);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=((_QWORD *)a1 + 19, 0LL);
  }
  if ( tagWND::HasState((__int64)a1, 0x10000) )
    NotifyOverlayWindow(v170, 0LL);
  if ( (unsigned __int8)HmgLockResultBase<META>::operator bool((char *)a1 + 184, v169) )
  {
    v174 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 184, v171, v172, v173);
    Win32HeapFree(*(_QWORD *)(*((_QWORD *)a1 + 3) + 136LL), v174);
    tagWND::ProtectedLargeUnicodeStringWNDstrName::SharedPointerFieldBuffer<unsigned short>::operator=(
      (char *)a1 + 184,
      0LL);
    LODWORD(v239) = 0;
    tagWND::ProtectedLargeUnicodeStringWNDstrName::RedirectedFieldLength<unsigned long>::operator=(
      (char *)a1 + 192,
      &v239);
  }
  ResetWindowTransform((__int64)a1);
  v178 = *((_QWORD *)a1 + 3);
  if ( !v178
    || a1 == (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(
                                *(_QWORD *)(v178 + 8) + 24LL,
                                v175,
                                v176,
                                v177) )
  {
    v187 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 104));
    v188 = UnlockPointer(v187);
    HMAssignmentUnlock(v188);
  }
  else
  {
    SharedPointerBase<tagSBINFO>::operator unsigned __int64(v180, v179, v181, v182);
    v183 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 104));
    v232 = *(_OWORD *)LockPointer(&v234, (__int64)v183, v184);
    HMAssignmentLock(&v232, 1LL);
  }
  v189 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 112));
  v190 = UnlockPointer(v189);
  HMAssignmentUnlock(v190);
  v191 = EPOINTFIX::EPOINTFIX(v57);
  v192 = UnlockPointer(v191);
  HMAssignmentUnlock(v192);
  v193 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 200));
  v194 = UnlockPointer(v193);
  HMAssignmentUnlock(v194);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v196 = *(_QWORD *)a1;
    v197 = (void *)ReferenceDwmApiPort(v195);
    DwmAsyncOwnerChange(v197, v196, 0LL);
  }
  DereferenceClass(*((struct tagPROCESSINFO **)v7 + 53), (__int64)a1);
  HMMarkObjectDestroy(a1);
  v198 = _HMPheFromObject(a1);
  *(_BYTE *)(v198 + 25) |= 2u;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  v200 = (_QWORD *)ProcessWindowStation;
  if ( ProcessWindowStation )
  {
    if ( *(struct tagWND **)(ProcessWindowStation + 96) == a1 )
    {
      v201 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(ProcessWindowStation + 96));
      HMAssignmentUnlock(v201);
      v200[10] = 0LL;
    }
    if ( (struct tagWND *)v200[14] == a1 )
    {
      v202 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v200 + 14));
      HMAssignmentUnlock(v202);
    }
    if ( (struct tagWND *)v200[13] == a1 )
    {
      v203 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v200 + 13));
      HMAssignmentUnlock(v203);
    }
  }
  if ( tagWND::HasState((__int64)a1, 0x800000) )
    _RemoveClipboardFormatListener(v205);
  if ( ThreadUnlock1(v205, v204, v206) )
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
      v207 = safe_cast_fnid_to_PMENUWND(a1);
      v208 = v207;
      if ( v207 && *(_QWORD *)(v207 + 16) )
      {
        SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v231);
        if ( (*(_DWORD *)SmartObjStackRefBase<tagPOPUPMENU>::operator->(v231) & 0x20000000) != 0 )
        {
          v210 = (_DWORD *)SmartObjStackRefBase<tagPOPUPMENU>::operator->(v231);
          *v210 &= ~0x40000000u;
        }
        else if ( (void *const)SmartObjStackRefBase<tagPOPUPMENU>::operator->(v231) == gpopupMenu )
        {
          gdwPUDFlags &= ~0x800000u;
          ClearStackReferences<tagPOPUPMENU>(gpopupMenu);
        }
        else
        {
          v209 = SmartObjStackRefBase<tagPOPUPMENU>::operator->(v231);
          FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU,NSInstrumentation::CTypeIsolation<24576,96>>(v209);
          *(_QWORD *)(v208 + 16) = 0LL;
        }
        SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v231);
      }
      v211 = (void *)*((_QWORD *)a1 + 35);
      if ( v211 )
      {
        Win32FreePool(v211);
        *((_QWORD *)a1 + 35) = 0LL;
      }
      LODWORD(v239) = 0;
      tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator=((char *)a1 + 316, &v239);
      --*((_DWORD *)v7 + 226);
      if ( !(unsigned int)Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage(v213, v212)
        && tagWND::HasState((__int64)a1, 0x10000000) )
      {
        tagWND::RemoveState();
        --*((_DWORD *)v7 + 228);
      }
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v215 = *(_QWORD *)a1;
        v216 = (void *)ReferenceDwmApiPort(v214);
        DwmAsyncChildDestroy(v216, v215);
      }
      v217 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 104));
      v218 = UnlockPointer(v217);
      HMAssignmentUnlock(v218);
      PushW32ThreadLock(*((_QWORD *)a1 + 3), &v237, UserDereferenceObject);
      v219 = (void *)*((_QWORD *)a1 + 3);
      if ( v219 )
        ObfReferenceObject(v219);
      tagObjLock::LockUnInitializeThreadCreator((struct tagWND *)((char *)a1 + 56));
      HMFreeObject(a1);
      PopAndFreeW32ThreadLock((__int64)&v237);
    }
    else
    {
      v239 = 0LL;
      tagWND::RedirectedFieldlpfnWndProc<__int64 (*)(tagWND *,unsigned int,unsigned __int64,__int64)>::operator=(
        (char *)a1 + 212,
        &v239);
      v222 = *((_QWORD *)a1 + 3);
      if ( v222 )
      {
        v223 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v222 + 40) + 56LL) + 16LL) + 424LL);
      }
      else
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v220);
        v223 = (__int64)CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
          v223 = 0LL;
      }
      ClassPtr = (__int64 *)GetClassPtr(*(unsigned __int16 *)(gpsi + 910LL), v223, hModuleWin, v221);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((_QWORD *)a1 + 17, *ClassPtr);
      v230 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v227, v226, v228, v229);
      ++*(_DWORD *)(v230 + 72);
      SetWF(a1, 516LL);
      ClrWF(a1, 544LL);
      ClrWF(a1, 4032LL);
      SetWF(a1, 3840LL);
      tagWND::SharedUserObjPointerFieldspmenu<tagMENU>::operator=((char *)a1 + 168);
    }
  }
  AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v240);
}
