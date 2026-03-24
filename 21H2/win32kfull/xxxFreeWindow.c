/*
 * XREFs of xxxFreeWindow @ 0x1C007A7C0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C007BF90 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C000AD64 (IPostQuitMessage.c)
 *     FreeTimer @ 0x1C000B6C0 (FreeTimer.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C000E7EC (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00257D4 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     xxxResetTooltip @ 0x1C002B3FC (xxxResetTooltip.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C002DB24 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0030A88 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C0032A80 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C003501C (zzzInputFocusLostWindowEvent.c)
 *     DwmAsyncOwnerChange @ 0x1C0035D14 (DwmAsyncOwnerChange.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C003AA5C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     _DestroyMenu @ 0x1C0048A30 (_DestroyMenu.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C0051A24 (xxxClientFreeWindowClassExtraBytes.c)
 *     FindQMsg @ 0x1C00582A0 (FindQMsg.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     SfnDWORD @ 0x1C006B3C0 (SfnDWORD.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     DereferenceClass @ 0x1C0079C50 (DereferenceClass.c)
 *     ClearHungFlag @ 0x1C007BEC8 (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C007BF90 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowGCData @ 0x1C007C120 (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1C007C1F0 (FreeWindowMessageFilter.c)
 *     UpdatePointerRedirIsAlive @ 0x1C007C23C (UpdatePointerRedirIsAlive.c)
 *     _FindActivationFilterWindow @ 0x1C007C288 (_FindActivationFilterWindow.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C007C2C0 (GreDeleteSpriteOverlapPresent.c)
 *     ClearSendMessages @ 0x1C007C38C (ClearSendMessages.c)
 *     MagpFindThreadContext @ 0x1C007C568 (MagpFindThreadContext.c)
 *     DestroyWindowSmIcon @ 0x1C007C580 (DestroyWindowSmIcon.c)
 *     xxxRemoveFullScreen @ 0x1C007CA20 (xxxRemoveFullScreen.c)
 *     xxxRemoveShadow @ 0x1C007CAF0 (xxxRemoveShadow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D85C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     GetClassPtr @ 0x1C00BF4B0 (GetClassPtr.c)
 *     DeleteHrgnClip @ 0x1C00D5220 (DeleteHrgnClip.c)
 *     InvalidateDCE @ 0x1C00D5694 (InvalidateDCE.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C00D7884 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     CleanupIAMAccess @ 0x1C00D78F0 (CleanupIAMAccess.c)
 *     xxxReleaseCapture @ 0x1C00DAE50 (xxxReleaseCapture.c)
 *     DwmAsyncChildDestroy @ 0x1C00EA520 (DwmAsyncChildDestroy.c)
 *     DwmAsyncShellWindowChange @ 0x1C00EB72C (DwmAsyncShellWindowChange.c)
 *     UnsetLayeredWindow @ 0x1C00EF178 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00EF7E8 (UnsetRedirectedWindow.c)
 *     DecPaintCount @ 0x1C00F5984 (DecPaintCount.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C0124890 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     _DeregisterShellHookWindow @ 0x1C0132570 (_DeregisterShellHookWindow.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0169888 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C0169A1C (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     Feature_Servicing_IMEWindowDestructionIssue__private_IsEnabledDeviceUsage @ 0x1C0169A30 (Feature_Servicing_IMEWindowDestructionIssue__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CC74C (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ChangeComposableCursor @ 0x1C01D42BC (ChangeComposableCursor.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D4860 (safe_cast_fnid_to_PSWITCHWND.c)
 *     _NotifyOverlayWindow @ 0x1C01D7BA0 (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F3CE0 (RemoveSwitchWindowInfo.c)
 *     ?UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z @ 0x1C01F57F0 (-UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z.c)
 *     FindSpb @ 0x1C021A2B4 (FindSpb.c)
 *     FreeSpb @ 0x1C021A2E4 (FreeSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C021D538 (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C021E6C0 (xxxDeferredDesktopRotation.c)
 *     NullifyLookasideRef @ 0x1C0221750 (NullifyLookasideRef.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C0222F78 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DwmAsyncMagnDestroy @ 0x1C027442C (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C02878F0 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxFreeWindow(NotifyShell *this, __int64 a2)
{
  __int64 v2; // r8
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rdx
  void *v7; // rax
  NotifyShell **v8; // rcx
  NotifyShell **v9; // rcx
  NotifyShell **v10; // rcx
  __int64 v11; // rcx
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  NotifyShell **v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  struct tagINPUTTRANSFORMENTRY **i; // rbx
  CompositionObject **v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  NotifyShell **v32; // rcx
  NotifyShell **v33; // rax
  __int64 v34; // rcx
  struct tagTOOLTIPWND *v35; // rax
  struct tagTOOLTIPWND *v36; // rbx
  __int64 v37; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rcx
  NotifyShell **v40; // rbx
  struct tagSHADOW **v41; // rcx
  struct tagSHADOW **v42; // rax
  __int64 Prop; // rbx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rbx
  TOKEN_TYPE v49; // eax
  void *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  NotifyShell *v53; // rax
  NotifyShell *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 ThreadContext; // rax
  __int64 v58; // rbx
  _QWORD *LensContext; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rsi
  __int64 v62; // rcx
  _QWORD *v63; // rax
  int v64; // eax
  void *v65; // rax
  void *v66; // rcx
  void *v67; // rcx
  _DWORD *v68; // rax
  _DWORD *v69; // rcx
  _DWORD *v70; // rax
  _DWORD *v71; // rcx
  __int64 v72; // rcx
  __int64 *QMsg; // rax
  __int64 v74; // rbx
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  EWNDOBJ *v80; // rbx
  __int64 **v81; // rsi
  __int64 *v82; // rbx
  int v83; // edx
  NotifyShell *v84; // rcx
  __int64 *v85; // rax
  __int64 Spb; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  void *v89; // r8
  void *v90; // r8
  void *v91; // rcx
  __int64 v92; // rax
  NotifyShell *v93; // rcx
  char *v94; // rsi
  __int64 v95; // rdx
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  void *v99; // rax
  __int64 v100; // r9
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rbx
  __int64 v105; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rbx
  NotifyShell **v108; // r15
  struct _LIST_ENTRY *v109; // r14
  struct _LIST_ENTRY *v110; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // r14
  __int64 v115; // rdx
  _DWORD *v116; // rcx
  _DWORD *v117; // rbx
  __int64 v118; // rbx
  _QWORD *v119; // rax
  void *v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  void *v123; // rax
  __int64 v124; // r15
  __int64 v125; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v133; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v135; // rax
  void *v136; // rcx
  __int64 v137; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *ClassPtr; // rax
  __int64 v140; // [rsp+48h] [rbp-69h] BYREF
  __int128 v141; // [rsp+58h] [rbp-59h] BYREF
  __int64 (*v142)(void); // [rsp+68h] [rbp-49h]
  __int128 v143; // [rsp+70h] [rbp-41h] BYREF
  __int64 v144; // [rsp+80h] [rbp-31h]
  _QWORD v145[2]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v146[2]; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v147[4]; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v148; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v149; // [rsp+D8h] [rbp+27h] BYREF
  __int64 v150; // [rsp+120h] [rbp+6Fh] BYREF

  v150 = a2;
  v2 = *((_QWORD *)this + 3);
  v142 = 0LL;
  v4 = 0;
  v141 = 0LL;
  if ( !v2 )
    goto LABEL_30;
  if ( this == *(NotifyShell **)(*(_QWORD *)(v2 + 8) + 168LL) )
  {
    CleanupIAMAccess((struct tagDESKTOP *)v2);
    v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL);
    *(_QWORD *)(*(_QWORD *)v5 + 24LL) = 0LL;
    HMAssignmentUnlock(v5 + 168);
    if ( (unsigned int)IsWindowDesktopComposed(this) )
    {
      v7 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL), v6);
      DwmAsyncShellWindowChange(v7);
    }
    v2 = *((_QWORD *)this + 3);
    if ( (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 2) != 0 )
      v4 = 1;
  }
  v8 = (NotifyShell **)(*(_QWORD *)(v2 + 8) + 184LL);
  if ( *v8 == this )
  {
    HMAssignmentUnlock(v8);
    v2 = *((_QWORD *)this + 3);
  }
  v9 = (NotifyShell **)(*(_QWORD *)(v2 + 8) + 192LL);
  if ( *v9 == this )
  {
    *(_QWORD *)(**(_QWORD **)(v2 + 8) + 24LL) = 0LL;
    HMAssignmentUnlock(v9);
    v2 = *((_QWORD *)this + 3);
  }
  v10 = (NotifyShell **)(*(_QWORD *)(v2 + 8) + 200LL);
  if ( *v10 == this )
  {
    *(_QWORD *)(**(_QWORD **)(v2 + 8) + 40LL) = 0LL;
    HMAssignmentUnlock(v10);
    v2 = *((_QWORD *)this + 3);
  }
  v11 = v2 + 304;
  if ( *(NotifyShell **)(v2 + 304) == this )
  {
LABEL_17:
    HMAssignmentUnlock(v11);
    goto LABEL_22;
  }
  if ( *(NotifyShell **)(v2 + 328) != this )
  {
    v11 = v2 + 296;
    if ( this != *(NotifyShell **)(v2 + 296) )
    {
      ActivationFilterWindow = (_QWORD *)FindActivationFilterWindow(this);
      v13 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v14 = *ActivationFilterWindow;
        if ( *(_QWORD **)(v14 + 8) != v13 )
          goto LABEL_272;
        v15 = (_QWORD *)v13[1];
        if ( (_QWORD *)*v15 != v13 )
          goto LABEL_272;
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        HMAssignmentUnlock(v13 + 2);
        Win32FreePool(v13);
      }
      goto LABEL_22;
    }
    goto LABEL_17;
  }
  ShellWindowManagement::SetWindow((ShellWindowManagement *)v2, 0LL, (struct tagWND *)v2);
LABEL_22:
  v16 = *((_QWORD *)this + 3);
  if ( *(NotifyShell **)(v16 + 248) == this )
  {
    HMAssignmentUnlock(v16 + 248);
    v16 = *((_QWORD *)this + 3);
  }
  UpdatePointerRedirIsAlive(*(_QWORD *)(v16 + 8));
  v17 = (NotifyShell **)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 232LL);
  if ( *v17 == this )
    HMAssignmentUnlock(v17);
  v18 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v18 + 23) & 0x40) != 0 )
  {
    DeregisterShellHookWindow(this);
    v18 = *((_QWORD *)this + 5);
  }
  if ( (*(_BYTE *)(v18 + 16) & 0x20) != 0 )
  {
    v19 = **(_QWORD **)(*((_QWORD *)this + 3) + 8LL);
    --*(_DWORD *)(v19 + 48);
    SetOrClrWF(0, (__int64)this, 0x20u, 1);
  }
LABEL_30:
  if ( *((_DWORD *)this + 65) )
    CleanupInputDelegation(this);
  v20 = *((_QWORD *)this + 34);
  if ( v20 )
  {
    for ( i = (struct tagINPUTTRANSFORMENTRY **)(v20 + 8); *i != (struct tagINPUTTRANSFORMENTRY *)i; UnlinkAndFreeEntry(*i) )
      ;
    v22 = (CompositionObject **)*((_QWORD *)this + 34);
    if ( v22[12] )
    {
      CompositionObject::Release(v22[12]);
      *(_QWORD *)(*((_QWORD *)this + 34) + 96LL) = 0LL;
      v22 = (CompositionObject **)*((_QWORD *)this + 34);
    }
    Win32FreePool(v22);
    *((_QWORD *)this + 34) = 0LL;
  }
  FreeWindowMessageFilter(this);
  FreeWindowGCData(this);
  if ( (*(_BYTE *)(_HMPheFromObject(this) + 25) & 1) != 0 && gptiCurrent != *((_QWORD *)this + 2) )
    HMChangeOwnerThread(this, gptiCurrent);
  if ( v4 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(this);
  xxxSendMessage((unsigned __int64)this, 0x82u, 0LL, 0LL);
  xxxRemoveFullScreen(this);
  v23 = *((_QWORD *)this + 5);
  v26 = 12287LL;
  v24 = *(unsigned __int16 *)(v23 + 42);
  v25 = 672LL;
  LOWORD(v26) = v24 & 0x2FFF;
  if ( ((unsigned __int16)v24 & 0x2FFFu) >= 0x29A && (v24 & 0x4000) == 0 )
  {
    if ( (unsigned __int16)v26 > 0x2A0u )
    {
      if ( (unsigned __int16)v26 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
        SfnDWORD((__int64 *)this, 112, 0LL, 0LL, 0LL, *(_QWORD *)(gpsi + 8LL * (unsigned __int16)v26 - 4608));
    }
    else
    {
      ((void (__fastcall *)(NotifyShell *, __int64, _QWORD))mpFnidPfn[((_BYTE)v24 + 6) & 0x1F])(this, 112LL, 0LL);
    }
    *(_WORD *)(*((_QWORD *)this + 5) + 42LL) |= 0x4000u;
    v23 = *((_QWORD *)this + 5);
  }
  *(_WORD *)(v23 + 42) |= 0x8000u;
  v27 = *((_QWORD *)this + 5);
  v28 = *(_QWORD *)(v27 + 296);
  if ( (unsigned __int64)(v28 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (*(_DWORD *)(v27 + 232) & 0x800) != 0 )
    {
      RtlFreeHeap(
        *(PVOID *)(*((_QWORD *)this + 3) + 128LL),
        0,
        (PVOID)(*(_QWORD *)(*((_QWORD *)this + 3) + 128LL) + v28));
      *(_QWORD *)(*((_QWORD *)this + 5) + 296LL) = 0LL;
    }
    else
    {
      *(_QWORD *)(v27 + 296) = 0LL;
      if ( (*(_DWORD *)(PsGetCurrentProcess(v27, v26, v24) + 1124) & 0x40000008) == 0
        && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
      {
        xxxClientFreeWindowClassExtraBytes((__int64)this, v28);
      }
    }
  }
  *(_DWORD *)(*((_QWORD *)this + 5) + 200LL) = 0;
  v29 = *((_QWORD *)this + 15);
  if ( v29 )
  {
    v26 = v29 + 200;
    if ( *(NotifyShell **)(v29 + 200) == this )
    {
      v30 = *(_QWORD *)(v29 + 40);
      if ( *(char *)(v30 + 19) < 0 || *(char *)(v30 + 20) < 0 )
        v29 = 0LL;
      v145[0] = v26;
      v145[1] = v29;
      HMAssignmentLock(v145);
      v148 = *(_OWORD *)LockPointer(&v149, *((_QWORD *)this + 15) + 200LL, *(_QWORD *)(*((_QWORD *)this + 15) + 200LL));
      HMAssignmentLock(&v148);
    }
  }
  if ( (*gpsi & 4) != 0 && this == *(NotifyShell **)(gptiCurrent + 784LL) )
    HMAssignmentUnlock(gptiCurrent + 784LL);
  if ( *(NotifyShell **)(gptiCurrent + 1392LL) == this )
    HMAssignmentUnlock(gptiCurrent + 1392LL);
  if ( *(NotifyShell **)(gptiCurrent + 1464LL) == this )
    HMAssignmentUnlock(gptiCurrent + 1464LL);
  v31 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( this == *(NotifyShell **)(v31 + 112) )
  {
    HMAssignmentUnlock(v31 + 112);
    v31 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( v31 == gpqForeground )
    {
      zzzInputFocusLostWindowEvent((__int64)this);
      v31 = *(_QWORD *)(gptiCurrent + 432LL);
    }
  }
  if ( this == *(NotifyShell **)(v31 + 128) )
  {
    HMAssignmentUnlock(v31 + 128);
    v31 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  if ( this == *(NotifyShell **)(v31 + 120) )
  {
    HMAssignmentUnlock(v31 + 120);
    v31 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v32 = (NotifyShell **)(v31 + 136);
  if ( this == *(NotifyShell **)(v31 + 136) )
  {
    HMAssignmentUnlock(v32);
    *(_BYTE *)(v31 + 144) = 0;
  }
  if ( this == gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( this == gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v33 = (NotifyShell **)*((_QWORD *)this + 3);
  if ( v33 )
  {
    if ( this == v33[11] )
    {
      HMAssignmentUnlock(v33 + 11);
      v33 = (NotifyShell **)*((_QWORD *)this + 3);
    }
    v32 = v33 + 12;
    if ( this == v33[12] )
    {
      HMAssignmentUnlock(v32);
      v33 = (NotifyShell **)*((_QWORD *)this + 3);
    }
    if ( this == v33[23] )
    {
      NotifyShell::WindowBorderExitIfEntered(this, (struct tagWND *)v26);
      v34 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(v34 + 48) & 0x200) != 0 )
      {
        v35 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v34 + 112));
        v36 = v35;
        if ( v35 )
        {
          v37 = *(_QWORD *)v35;
          if ( *(_QWORD *)v35 )
          {
            v147[2] = 0LL;
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v147[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v147;
            v147[1] = v37;
            HMLockObject(v37);
            xxxResetTooltip(v36);
            ThreadUnlock1(v39);
          }
        }
      }
      HMAssignmentUnlock(*((_QWORD *)this + 3) + 184LL);
      *(_DWORD *)(*((_QWORD *)this + 3) + 48LL) &= 0xFFFFFA3F;
    }
  }
  if ( this == *(NotifyShell **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) )
    xxxReleaseCapture(v32, v26, v24, v25);
  if ( **(_WORD **)(*((_QWORD *)this + 17) + 8LL) == gatomShadow )
  {
    v40 = (NotifyShell **)gpshadowFirst;
    v41 = &gpshadowFirst;
    while ( v40 )
    {
      v42 = v40 + 2;
      if ( v40[1] == this )
      {
        *v41 = *v42;
        HMAssignmentUnlock(v40);
        HMAssignmentUnlock(v40 + 1);
        Win32FreePool(v40);
        break;
      }
      v40 = (NotifyShell **)*v42;
      v41 = v42;
    }
  }
  else
  {
    xxxRemoveShadow(this);
  }
  DestroyWindowSmIcon(this, v26, v24, v25);
  *(_QWORD *)(*((_QWORD *)this + 5) + 272LL) = 0LL;
  if ( *((_QWORD *)this + 18) )
  {
    v144 = 0LL;
    v143 = 0LL;
    Prop = GetProp((__int64)this, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      *(_QWORD *)&v143 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v143;
      *((_QWORD *)&v143 + 1) = Prop;
      HMLockObject(Prop);
      xxxDDETrackWindowDying(this, Prop);
      ThreadUnlock1(v44);
    }
    v45 = (unsigned __int16)atomDDEImp;
    v46 = *((_QWORD *)this + 18);
    if ( atomDDEImp == word_1C033AF44 )
      *(_QWORD *)(*((_QWORD *)this + 5) + 312LL) = 0LL;
    v47 = RealInternalRemoveProp(v46, v45, 1LL);
    v48 = (_QWORD *)v47;
    if ( v47 )
    {
      *(_WORD *)(v47 + 88) = 0;
      if ( !*(_WORD *)(v47 + 90) )
      {
        v49 = SeTokenType(*(PACCESS_TOKEN *)(v47 + 32));
        v50 = (void *)v48[4];
        if ( v49 == TokenPrimary || v50 )
          ObfDereferenceObject(v50);
        Win32FreePool(v48);
      }
    }
    v51 = (unsigned __int16)gatomMonitorInheritance;
    v52 = *((_QWORD *)this + 18);
    if ( gatomMonitorInheritance == word_1C033AF44 )
      *(_QWORD *)(*((_QWORD *)this + 5) + 312LL) = 0LL;
    RealInternalRemoveProp(v52, v51, 1LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 234LL) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x12u, *(_QWORD *)this);
  if ( (unsigned int)Feature_Servicing_IMEWindowDestructionIssue__private_IsEnabledDeviceUsage() )
  {
    if ( (unsigned __int8)tagWND::HasState(this) )
    {
      *((_DWORD *)this + 81) &= ~0x20000000u;
      --*(_DWORD *)(gptiCurrent + 904LL);
    }
    else
    {
      v53 = *(NotifyShell **)(gptiCurrent + 784LL);
      if ( this != v53 && v53 && !*(_DWORD *)(gptiCurrent + 904LL) )
      {
        LODWORD(v150) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4813LL);
      }
    }
    v54 = *(NotifyShell **)(gptiCurrent + 784LL);
    if ( v54 && !*(_DWORD *)(gptiCurrent + 904LL) && this != v54 )
      xxxDestroyWindow(v54);
  }
  HandleFullWindowDestruction(this);
  if ( (*(_WORD *)(*((_QWORD *)this + 5) + 42LL) & 0x2FFF) == 0x2A0 )
  {
    v55 = safe_cast_fnid_to_PSWITCHWND(this);
    v56 = v55;
    if ( v55 )
    {
      v150 = *(_QWORD *)(v55 + 8);
      if ( v150 )
      {
        RemoveSwitchWindowInfo(&v150);
        *(_QWORD *)(v56 + 8) = 0LL;
      }
    }
  }
  if ( this == (NotifyShell *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( this == (NotifyShell *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  ThreadContext = MagpFindThreadContext(*(_QWORD *)&gMagnContext, gptiCurrent);
  v58 = ThreadContext;
  if ( ThreadContext )
  {
    LensContext = (_QWORD *)MagpFindLensContext(ThreadContext, this, 2LL);
    v61 = LensContext;
    if ( LensContext )
    {
      v62 = *LensContext;
      if ( *(_QWORD **)(*LensContext + 8LL) == LensContext )
      {
        v63 = (_QWORD *)LensContext[1];
        if ( (_QWORD *)*v63 == v61 )
        {
          *v63 = v62;
          *(_QWORD *)(v62 + 8) = v63;
          v64 = *((_DWORD *)v61 + 4);
          if ( (v64 & 0x40) != 0 )
          {
            ChangeComposableCursor(0LL);
            *((_DWORD *)v61 + 4) &= ~0x40u;
            v64 = *((_DWORD *)v61 + 4);
          }
          if ( (v64 & 0x20) == 0 )
          {
            v65 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v58 + 16) + 456LL) + 8LL), v60);
            DwmAsyncMagnDestroy(v65);
          }
          if ( (unsigned __int64)(v61[3] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
            HMAssignmentUnlock(v61 + 3);
          v66 = (void *)v61[29];
          if ( v66 )
            Win32FreePool(v66);
          v67 = (void *)v61[32];
          if ( v67 )
            Win32FreePool(v67);
          Win32FreePool(v61);
          goto LABEL_155;
        }
      }
LABEL_272:
      __fastfail(3u);
    }
  }
LABEL_155:
  HKRemoveMatchingHotkeys(0LL, (__int64)this, 0, 1);
  v68 = (_DWORD *)*((_QWORD *)this + 36);
  if ( v68 )
  {
    --*v68;
    v69 = (_DWORD *)*((_QWORD *)this + 36);
    if ( !*v69 )
      Win32FreePool(v69);
    *((_QWORD *)this + 36) = 0LL;
  }
  v70 = (_DWORD *)*((_QWORD *)this + 37);
  if ( v70 )
  {
    --*v70;
    v71 = (_DWORD *)*((_QWORD *)this + 37);
    if ( !*v71 )
      Win32FreePool(v71);
    *((_QWORD *)this + 37) = 0LL;
  }
  if ( !gbInSMSCleanup )
    ClearSendMessages(this);
  v72 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v72 + 26) & 8) != 0 )
  {
    UnsetLayeredWindow(this);
    v72 = *((_QWORD *)this + 5);
  }
  if ( (*(_BYTE *)(v72 + 27) & 2) != 0 )
  {
    UnsetRedirectedWindow(this);
    SetOrClrWF(0, (__int64)this, 0xB02u, 1);
    v72 = *((_QWORD *)this + 5);
  }
  if ( (*(_DWORD *)(v72 + 232) & 4) != 0 )
  {
    UnsetRedirectedWindow(this);
    *(_DWORD *)(*((_QWORD *)this + 5) + 232LL) &= ~4u;
    v72 = *((_QWORD *)this + 5);
  }
  if ( *(_QWORD *)(v72 + 136) || (*(_BYTE *)(v72 + 17) & 0x10) != 0 )
  {
    DecPaintCount(this);
    DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)this + 5) + 136LL));
    *(_QWORD *)(*((_QWORD *)this + 5) + 136LL) = 0LL;
    SetOrClrWF(0, (__int64)this, 0x110u, 1);
    v72 = *((_QWORD *)this + 5);
  }
  if ( (*(_BYTE *)(v72 + 17) & 0xA) != 0 )
  {
    SetOrClrWF(0, (__int64)this, 0x108u, 1);
    SetOrClrWF(0, (__int64)this, 0x102u, 1);
  }
  ClearHungFlag(this);
  ClearHungFlag(this);
  if ( *(_QWORD *)(gptiCurrent + 808LL) )
  {
    QMsg = FindQMsg(gptiCurrent, (struct tagMLIST *)(gptiCurrent + 808LL), (__int64 *)this, 0x12u, 0x12u, 1);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *((_DWORD *)QMsg + 8));
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v74 = *((_QWORD *)this + 21);
    if ( v74 )
    {
      if ( UnlockWndMenuWorker(this, 0) )
        DestroyMenu(v74);
    }
  }
  v75 = *((_QWORD *)this + 20);
  if ( v75 )
  {
    if ( v75 == *(_QWORD *)(*((_QWORD *)this + 3) + 64LL) )
    {
      UnlockWndMenuWorker(this, 1);
    }
    else if ( UnlockWndMenuWorker(this, 1) )
    {
      DestroyMenu(v75);
    }
  }
  v76 = *((_QWORD *)this + 3);
  if ( v76 )
  {
    if ( (v77 = *(_QWORD *)(v76 + 56)) != 0 && this == *(NotifyShell **)(v77 + 80)
      || (v77 = *(_QWORD *)(v76 + 64)) != 0 && this == *(NotifyShell **)(v77 + 80) )
    {
      UnlockNotifyWindow((struct tagMENU *)v77);
    }
  }
  if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) )
  {
    v78 = (unsigned __int16)atomWndObj;
    v79 = *((_QWORD *)this + 18);
    if ( atomWndObj == word_1C033AF44 )
      *(_QWORD *)(*((_QWORD *)this + 5) + 312LL) = 0LL;
    v80 = (EWNDOBJ *)RealInternalRemoveProp(v79, v78, 1LL);
    if ( v80 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteWnd(v80);
      --*(&WPP_MAIN_CB.AlignmentRequirement + 1);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)this);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v81 = (__int64 **)(gpDispInfo + 24LL);
  v82 = *(__int64 **)(gpDispInfo + 24LL);
  if ( v82 )
  {
    do
    {
      v83 = *((_DWORD *)v82 + 16);
      if ( (v83 & 0x400800) != 0 )
      {
LABEL_212:
        v85 = (__int64 *)*v82;
        v81 = (__int64 **)v82;
        goto LABEL_213;
      }
      v84 = (NotifyShell *)v82[2];
      if ( v84 == this || (NotifyShell *)v82[3] == this || (NotifyShell *)v82[4] == this )
      {
        if ( (v83 & 2) == 0 )
        {
          if ( v82 == *(__int64 **)(*((_QWORD *)v84 + 17) + 40LL) || v82 != *((__int64 **)v84 + 31) )
          {
            if ( (v83 & 0xC0) != 0 )
              DeleteHrgnClip(v82);
LABEL_210:
            InvalidateDCE(v82);
            goto LABEL_211;
          }
          *((_QWORD *)v84 + 31) = 0LL;
          goto LABEL_242;
        }
        if ( (v83 & 0x1000) != 0 )
        {
          if ( v82[9] == gptiCurrent )
          {
            v96 = ReleaseCacheDC(v82[1], 0LL);
          }
          else
          {
            DestroyCacheDC(v81, v82[1]);
            v96 = 1;
          }
        }
        else
        {
          if ( (unsigned int)GreSetDCOwnerEx(v82[1], 2147483666LL, 0LL, 0LL) )
            goto LABEL_210;
          v96 = 2;
        }
        if ( v96 != 1 )
        {
          if ( v96 != 2 )
            goto LABEL_210;
LABEL_242:
          DestroyCacheDC(v81, v82[1]);
        }
      }
LABEL_211:
      v85 = *v81;
      if ( v82 == *v81 )
        goto LABEL_212;
LABEL_213:
      v82 = v85;
    }
    while ( v85 );
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( this == gspwndLockUpdate )
  {
    Spb = FindSpb(this);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  v87 = *((_QWORD *)this + 5);
  if ( *(char *)(v87 + 16) < 0 )
  {
    v88 = FindSpb(this);
    FreeSpb(v88);
    v87 = *((_QWORD *)this + 5);
  }
  if ( *(_QWORD *)(v87 + 168) && (*(_BYTE *)(v87 + 21) & 8) == 0 && (*(_WORD *)(v87 + 42) & 0x2FFF) != 0x29D )
  {
    GreDeleteObject(*(_QWORD *)(v87 + 168));
    *(_QWORD *)(*((_QWORD *)this + 5) + 168LL) = 0LL;
  }
  v89 = (void *)*((_QWORD *)this + 19);
  if ( v89 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)this + 3) + 128LL), 0, v89);
    *(_QWORD *)(*((_QWORD *)this + 5) + 144LL) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 232LL) & 0x400) != 0 )
    NotifyOverlayWindow(this, 0LL);
  v90 = (void *)*((_QWORD *)this + 23);
  if ( v90 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)this + 3) + 128LL), 0, v90);
    *(_QWORD *)(*((_QWORD *)this + 5) + 192LL) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *(_DWORD *)(*((_QWORD *)this + 5) + 184LL) = 0;
  }
  v91 = (void *)*((_QWORD *)this + 27);
  if ( v91 )
  {
    Win32FreePool(v91);
    *((_QWORD *)this + 27) = 0LL;
  }
  v92 = *((_QWORD *)this + 3);
  if ( !v92 || (v93 = *(NotifyShell **)(*(_QWORD *)(v92 + 8) + 24LL), this == v93) )
  {
    v94 = (char *)this + 104;
    *(_QWORD *)(*((_QWORD *)this + 5) + 48LL) = 0LL;
    HMAssignmentUnlock((char *)this + 104);
  }
  else
  {
    v94 = (char *)this + 104;
    if ( v93 )
      v95 = *((_QWORD *)v93 + 6);
    else
      v95 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 5) + 48LL) = v95;
    v146[1] = v93;
    v146[0] = (char *)this + 104;
    HMAssignmentLock(v146);
  }
  *(_QWORD *)(*((_QWORD *)this + 5) + 56LL) = 0LL;
  HMAssignmentUnlock((char *)this + 112);
  *(_QWORD *)(*((_QWORD *)this + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)this + 120);
  *(_QWORD *)(*((_QWORD *)this + 5) + 176LL) = 0LL;
  HMAssignmentUnlock((char *)this + 200);
  if ( (unsigned int)IsWindowDesktopComposed(this) )
  {
    v99 = (void *)ReferenceDwmApiPort(v98, v97);
    DwmAsyncOwnerChange(v99, *(_QWORD *)this, 0LL, v100);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), (__int64)this);
  HMMarkObjectDestroy(this);
  v101 = _HMPheFromObject(this);
  *(_BYTE *)(v101 + 25) |= 2u;
  v104 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v102) + 664);
  if ( v104 )
  {
    if ( *(NotifyShell **)(v104 + 96) == this )
    {
      HMAssignmentUnlock(v104 + 96);
      *(_QWORD *)(v104 + 80) = 0LL;
    }
    if ( *(NotifyShell **)(v104 + 112) == this )
      HMAssignmentUnlock(v104 + 112);
    if ( *(NotifyShell **)(v104 + 104) == this )
      HMAssignmentUnlock(v104 + 104);
  }
  v105 = *(unsigned int *)(*((_QWORD *)this + 5) + 232LL);
  if ( (v105 & 1) != 0 )
    _RemoveClipboardFormatListener(this, v103);
  result = ThreadUnlock1(v105);
  if ( result )
  {
    Flink = gPointerDeviceClients.Flink;
    while ( Flink != &gPointerDeviceClients )
    {
      v108 = (NotifyShell **)&Flink[-1];
      v109 = Flink;
      Flink = Flink->Flink;
      if ( this == *v108 )
      {
        HMAssignmentUnlock(v108);
        v110 = v109->Flink;
        if ( v109->Flink->Blink != v109 )
          goto LABEL_272;
        Blink = v109->Blink;
        if ( Blink->Flink != v109 )
          goto LABEL_272;
        Blink->Flink = v110;
        v110->Blink = Blink;
        Win32FreePool(v108);
      }
    }
    if ( (unsigned int)HMMarkObjectDestroy(this) )
    {
      if ( *((_QWORD *)this + 18) )
        DeleteProperties(this);
      v113 = safe_cast_fnid_to_PMENUWND(this);
      v114 = v113;
      if ( v113 )
      {
        v115 = *(_QWORD *)(v113 + 16);
        if ( v115 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v140, v115);
          v116 = *(_DWORD **)v140;
          if ( (**(_DWORD **)v140 & 0x20000000) != 0 )
          {
            *v116 &= ~0x40000000u;
          }
          else if ( v116 == gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
            NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
          }
          else
          {
            v117 = *(_DWORD **)v140;
            NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v140 + 88LL));
            UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v117);
            *(_QWORD *)(v114 + 16) = 0LL;
          }
          v118 = W32GetThreadWin32Thread(KeGetCurrentThread());
          if ( v140 != gSmartObjNullRef && !--*(_DWORD *)(v140 + 8) )
          {
            if ( *(_BYTE *)(v140 + 12) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v140);
          }
          v119 = *(_QWORD **)(v118 + 1472);
          if ( v119 )
            *(_QWORD *)(v118 + 1472) = *v119;
        }
      }
      v120 = (void *)*((_QWORD *)this + 35);
      if ( v120 )
      {
        Win32FreePool(v120);
        *((_QWORD *)this + 35) = 0LL;
      }
      *(_DWORD *)(*((_QWORD *)this + 5) + 252LL) = 0;
      --*(_DWORD *)(gptiCurrent + 896LL);
      if ( !(unsigned int)Feature_Servicing_IMEWindowDestructionIssue__private_IsEnabledDeviceUsage()
        && (unsigned __int8)tagWND::HasState(this) )
      {
        *((_DWORD *)this + 81) &= ~0x20000000u;
        --*(_DWORD *)(gptiCurrent + 904LL);
      }
      if ( (unsigned int)IsWindowDesktopComposed(this) )
      {
        v123 = (void *)ReferenceDwmApiPort(v122, v121);
        DwmAsyncChildDestroy(v123);
      }
      *(_QWORD *)(*((_QWORD *)v94 - 8) + 48LL) = 0LL;
      HMAssignmentUnlock(v94);
      v124 = *((_QWORD *)this + 3);
      v125 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v127)
        || (CurrentProcess = PsGetCurrentProcess(v129, v128, v130),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v133),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        v135 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v135 )
          v125 = *v135;
      }
      *(_QWORD *)&v141 = *(_QWORD *)(v125 + 16);
      *(_QWORD *)(v125 + 16) = &v141;
      v136 = (void *)*((_QWORD *)this + 3);
      *((_QWORD *)&v141 + 1) = v124;
      v142 = (__int64 (*)(void))UserDereferenceObject;
      if ( v136 )
        ObfReferenceObject(v136);
      tagObjLock::LockUnInitializeThreadCreator((NotifyShell *)((char *)this + 56));
      HMFreeObject(this);
      result = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)(result + 16) = v141;
      if ( *((_QWORD *)&v141 + 1) )
        return v142();
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 120LL) = 0LL;
      v137 = *((_QWORD *)this + 3);
      if ( v137 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v137 + 40) + 56LL) + 16LL) + 424LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v112);
      ClassPtr = (__int64 *)GetClassPtr(*(unsigned __int16 *)(gpsi + 910LL), CurrentProcessWin32Process, hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((_QWORD *)this + 17, *ClassPtr);
      ++*(_DWORD *)(*((_QWORD *)this + 17) + 72LL);
      SetOrClrWF(1, (__int64)this, 0x204u, 1);
      SetOrClrWF(0, (__int64)this, 0x220u, 1);
      SetOrClrWF(0, (__int64)this, 0xFC0u, 1);
      SetOrClrWF(1, (__int64)this, 0xF00u, 1);
      result = *((_QWORD *)this + 5);
      *(_QWORD *)(result + 152) = 0LL;
      *((_QWORD *)this + 21) = 0LL;
    }
  }
  return result;
}
