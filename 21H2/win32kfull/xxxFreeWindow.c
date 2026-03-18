/*
 * XREFs of xxxFreeWindow @ 0x1C005E458
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005FA70 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 * Callees:
 *     InvalidateDCE @ 0x1C0026C64 (InvalidateDCE.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     SfnDWORD @ 0x1C004DC40 (SfnDWORD.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     FindQMsg @ 0x1C0057C00 (FindQMsg.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     DecPaintCount @ 0x1C005DF94 (DecPaintCount.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C005F8D8 (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     ClearHungFlag @ 0x1C005F8F0 (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005FA70 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowGCData @ 0x1C005FC00 (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1C005FCD0 (FreeWindowMessageFilter.c)
 *     UpdatePointerRedirIsAlive @ 0x1C005FD1C (UpdatePointerRedirIsAlive.c)
 *     _FindActivationFilterWindow @ 0x1C005FD68 (_FindActivationFilterWindow.c)
 *     FreeClientOnWindowDestruction @ 0x1C005FDA0 (FreeClientOnWindowDestruction.c)
 *     DereferenceClass @ 0x1C005FE40 (DereferenceClass.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0060B00 (GreDeleteSpriteOverlapPresent.c)
 *     ClearSendMessages @ 0x1C0060BF8 (ClearSendMessages.c)
 *     DestroyWindowsTimers @ 0x1C0060DA4 (DestroyWindowsTimers.c)
 *     MagpFindThreadContext @ 0x1C0060DF0 (MagpFindThreadContext.c)
 *     DestroyWindowSmIcon @ 0x1C0060E08 (DestroyWindowSmIcon.c)
 *     xxxRemoveFullScreen @ 0x1C0060E84 (xxxRemoveFullScreen.c)
 *     xxxRemoveShadow @ 0x1C0060F54 (xxxRemoveShadow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0060FF4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x1C0061020 (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     IsMotherDesktopWindow @ 0x1C0062F70 (IsMotherDesktopWindow.c)
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     GetClassPtr @ 0x1C0070980 (GetClassPtr.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C007E9B8 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     DwmAsyncOwnerChange @ 0x1C00825E4 (DwmAsyncOwnerChange.c)
 *     DwmAsyncChildDestroy @ 0x1C0098E78 (DwmAsyncChildDestroy.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C009DF10 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00A8748 (zzzInputFocusLostWindowEvent.c)
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     IPostQuitMessage @ 0x1C00AD668 (IPostQuitMessage.c)
 *     UnsetLayeredWindow @ 0x1C00B3964 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00CE4AC (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DeleteHrgnClip @ 0x1C00DC270 (DeleteHrgnClip.c)
 *     FreeSpb @ 0x1C00DCA08 (FreeSpb.c)
 *     DwmAsyncShellWindowChange @ 0x1C00F150C (DwmAsyncShellWindowChange.c)
 *     CleanupIAMAccess @ 0x1C00F1920 (CleanupIAMAccess.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C00F1A30 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00F806C (xxxClientFreeWindowClassExtraBytes.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00F8378 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00FDE78 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C010D388 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C010E9D4 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     xxxResetTooltip @ 0x1C0118B6C (xxxResetTooltip.c)
 *     _DeregisterShellHookWindow @ 0x1C011B194 (_DeregisterShellHookWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     FindSpb @ 0x1C0158F38 (FindSpb.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1C01C95C8 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z.c)
 *     ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01CC410 (--1AtomicExecutionCheck@@QEAA@XZ.c)
 *     ChangeComposableCursor @ 0x1C01CFAF0 (ChangeComposableCursor.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D0578 (safe_cast_fnid_to_PSWITCHWND.c)
 *     _NotifyOverlayWindow @ 0x1C01D3A0C (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01EE4E0 (RemoveSwitchWindowInfo.c)
 *     ?UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z @ 0x1C01EFE84 (-UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z.c)
 *     xxxDeferredDesktopRotation @ 0x1C0211D1C (xxxDeferredDesktopRotation.c)
 *     xxxDDETrackWindowDying @ 0x1C0218544 (xxxDDETrackWindowDying.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C021AF28 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C021B890 (NullifyLookasideRef.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C021C968 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DwmAsyncMagnDestroy @ 0x1C0271EF8 (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C02844B0 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxFreeWindow(struct tagWND *a1, __int64 a2)
{
  int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  void *v7; // rax
  struct tagWND **v8; // rcx
  struct tagWND **v9; // rcx
  struct tagWND **v10; // rcx
  __int64 v11; // rcx
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct tagWND **v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  struct tagINPUTTRANSFORMENTRY **i; // rbx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rcx
  __int16 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  struct tagWND **v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct tagSHADOW *v41; // rbx
  struct tagSHADOW **v42; // rcx
  struct tagSHADOW **v43; // rax
  __int64 v44; // rax
  __int64 Prop; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  struct _MAG_THREAD_CONTEXT *ThreadContext; // rax
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  struct _MAG_LENS_CONTEXT *v55; // rbx
  __int64 v56; // rcx
  struct _MAG_LENS_CONTEXT **v57; // rax
  int v58; // eax
  void *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  _DWORD *v62; // rax
  _DWORD *v63; // rcx
  _DWORD *v64; // rax
  _DWORD *v65; // rcx
  __int64 v66; // rcx
  __int64 *QMsg; // rax
  __int64 v68; // rcx
  void *v69; // rbx
  void *v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  EWNDOBJ *v74; // rbx
  __int64 *v75; // rsi
  __int64 v76; // rbx
  int v77; // edx
  struct tagWND *v78; // rcx
  __int64 v79; // rax
  __int64 Spb; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  void *v83; // r8
  __int64 v84; // rcx
  void *v85; // r8
  __int64 v86; // rcx
  __int64 v87; // rax
  struct tagWND *v88; // r8
  char *v89; // rsi
  int v90; // eax
  bool v91; // zf
  void *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rbx
  __int64 v96; // rdx
  struct tagWND *v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // r14
  _DWORD *v102; // rcx
  __int64 v103; // rbx
  __int64 v104; // rcx
  __int64 v105; // rcx
  int v106; // r8d
  void *v107; // rax
  __int64 v108; // rbx
  __int64 v109; // rax
  void *v110; // rcx
  __int64 v111; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *ClassPtr; // rax
  __int128 v114; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v115[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v116; // [rsp+60h] [rbp-49h] BYREF
  __int64 v117; // [rsp+70h] [rbp-39h]
  __int128 v118; // [rsp+78h] [rbp-31h] BYREF
  __int64 v119; // [rsp+88h] [rbp-21h]
  _QWORD v120[3]; // [rsp+90h] [rbp-19h] BYREF
  char v121[16]; // [rsp+A8h] [rbp-1h] BYREF
  char v122[72]; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v123; // [rsp+110h] [rbp+67h] BYREF
  __int64 v124; // [rsp+118h] [rbp+6Fh] BYREF

  v124 = a2;
  v117 = 0LL;
  v116 = 0LL;
  v3 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 && !(unsigned int)IsMotherDesktopWindow() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  v5 = *((_QWORD *)a1 + 3);
  if ( v5 )
  {
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(v5 + 8) + 168LL) )
    {
      CleanupIAMAccess(*((struct tagDESKTOP **)a1 + 3));
      v6 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
      *(_QWORD *)(*(_QWORD *)v6 + 24LL) = 0LL;
      HMAssignmentUnlock(v6 + 168);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v7 = (void *)ReferenceDwmApiPort();
        DwmAsyncShellWindowChange(v7);
      }
      v5 = *((_QWORD *)a1 + 3);
      if ( (*(_DWORD *)(**(_QWORD **)(v5 + 8) + 64LL) & 2) != 0 )
        v3 = 1;
    }
    v8 = (struct tagWND **)(*(_QWORD *)(v5 + 8) + 184LL);
    if ( *v8 == a1 )
    {
      HMAssignmentUnlock(v8);
      v5 = *((_QWORD *)a1 + 3);
    }
    v9 = (struct tagWND **)(*(_QWORD *)(v5 + 8) + 192LL);
    if ( *v9 == a1 )
    {
      *(_QWORD *)(**(_QWORD **)(v5 + 8) + 32LL) = 0LL;
      HMAssignmentUnlock(v9);
      v5 = *((_QWORD *)a1 + 3);
    }
    v10 = (struct tagWND **)(*(_QWORD *)(v5 + 8) + 200LL);
    if ( *v10 == a1 )
    {
      *(_QWORD *)(**(_QWORD **)(v5 + 8) + 40LL) = 0LL;
      HMAssignmentUnlock(v10);
      v5 = *((_QWORD *)a1 + 3);
    }
    v11 = v5 + 296;
    if ( *(struct tagWND **)(v5 + 296) != a1 )
    {
      if ( *(struct tagWND **)(v5 + 320) == a1 )
      {
        ShellWindowManagement::SetWindow((ShellWindowManagement *)v5, 0LL, (struct tagWND *)v5);
LABEL_25:
        UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
        v16 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 232LL);
        if ( *v16 == a1 )
          HMAssignmentUnlock(v16);
        v17 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v17 + 23) & 0x40) != 0 )
        {
          DeregisterShellHookWindow(a1);
          v17 = *((_QWORD *)a1 + 5);
        }
        if ( (*(_BYTE *)(v17 + 16) & 0x20) != 0 )
        {
          v18 = **(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
          --*(_DWORD *)(v18 + 48);
          SetOrClrWF(0LL, a1, 32LL, 1LL);
        }
        goto LABEL_31;
      }
      v11 = v5 + 288;
      if ( a1 != *(struct tagWND **)(v5 + 288) )
      {
        ActivationFilterWindow = (_QWORD *)FindActivationFilterWindow(a1);
        v13 = ActivationFilterWindow;
        if ( ActivationFilterWindow )
        {
          v14 = *ActivationFilterWindow;
          if ( *(_QWORD **)(*ActivationFilterWindow + 8LL) != ActivationFilterWindow )
            goto LABEL_174;
          v15 = (_QWORD *)ActivationFilterWindow[1];
          if ( (_QWORD *)*v15 != v13 )
            goto LABEL_174;
          *v15 = v14;
          *(_QWORD *)(v14 + 8) = v15;
          HMAssignmentUnlock(v13 + 2);
          Win32FreePool(v13);
        }
        goto LABEL_25;
      }
    }
    HMAssignmentUnlock(v11);
    goto LABEL_25;
  }
LABEL_31:
  if ( *((_DWORD *)a1 + 65) )
    CleanupInputDelegation(a1);
  v19 = *((_QWORD *)a1 + 34);
  if ( v19 )
  {
    for ( i = (struct tagINPUTTRANSFORMENTRY **)(v19 + 8); *i != (struct tagINPUTTRANSFORMENTRY *)i; UnlinkAndFreeEntry(*i) )
      ;
    v21 = *((_QWORD *)a1 + 34);
    if ( *(_QWORD *)(v21 + 96) )
    {
      CompositionObject::Release(*(CompositionObject **)(v21 + 96));
      *(_QWORD *)(*((_QWORD *)a1 + 34) + 96LL) = 0LL;
      v21 = *((_QWORD *)a1 + 34);
    }
    Win32FreePool(v21);
    *((_QWORD *)a1 + 34) = 0LL;
  }
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 && gptiCurrent != *((_QWORD *)a1 + 2) )
    HMChangeOwnerThread(a1, gptiCurrent);
  if ( v3 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage((ULONG_PTR)a1);
  xxxRemoveFullScreen(a1);
  v23 = *((_QWORD *)a1 + 5);
  v25 = 12287LL;
  v24 = *(_WORD *)(v23 + 42);
  LOWORD(v25) = v24 & 0x2FFF;
  if ( (v24 & 0x2FFFu) >= 0x29A && (v24 & 0x4000) == 0 )
  {
    if ( (unsigned __int16)v25 > 0x2A0u )
    {
      if ( (unsigned __int16)v25 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
        SfnDWORD((__int64 *)a1, 112, 0LL, 0LL, 0LL, *(_QWORD *)(gpsi + 8LL * (unsigned __int16)v25 - 4608));
    }
    else
    {
      ((void (__fastcall *)(struct tagWND *, __int64, _QWORD))mpFnidPfn[((_BYTE)v24 + 6) & 0x1F])(a1, 112LL, 0LL);
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= 0x4000u;
    v23 = *((_QWORD *)a1 + 5);
  }
  *(_WORD *)(v23 + 42) |= 0x8000u;
  v26 = *((_QWORD *)a1 + 5);
  v27 = *(_QWORD *)(v26 + 296);
  if ( (unsigned __int64)(v27 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (*(_DWORD *)(v26 + 232) & 0x10) != 0 )
    {
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, (PVOID)(v27 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL)));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 296LL) = 0LL;
    }
    else
    {
      *(_QWORD *)(v26 + 296) = 0LL;
      if ( (*(_DWORD *)(PsGetCurrentProcess(v26, v25) + 1124) & 0x40000008) == 0
        && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
      {
        xxxClientFreeWindowClassExtraBytes(a1, v27);
      }
    }
  }
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = 0;
  v28 = *((_QWORD *)a1 + 15);
  if ( v28 )
  {
    v29 = v28 + 200;
    if ( *(struct tagWND **)(v28 + 200) == a1 )
    {
      v30 = *(_QWORD *)(v28 + 40);
      if ( *(char *)(v30 + 19) < 0 || *(char *)(v30 + 20) < 0 )
        v28 = 0LL;
      *(_QWORD *)&v114 = v29;
      *((_QWORD *)&v114 + 1) = v28;
      HMAssignmentLock(&v114, 0LL);
      v114 = *(_OWORD *)LockPointer(v121, *((_QWORD *)a1 + 15) + 200LL, *(_QWORD *)(*((_QWORD *)a1 + 15) + 200LL));
      HMAssignmentLock(&v114, 0LL);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *(struct tagWND **)(gptiCurrent + 784LL) )
    HMAssignmentUnlock(gptiCurrent + 784LL);
  if ( *(struct tagWND **)(gptiCurrent + 1392LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1392LL);
  if ( *(struct tagWND **)(gptiCurrent + 1464LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1464LL);
  v31 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( a1 == *(struct tagWND **)(v31 + 112) )
  {
    tagQ::UnlockFocusWnd(*(tagQ **)(gptiCurrent + 432LL));
    v31 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( v31 == gpqForeground )
    {
      zzzInputFocusLostWindowEvent(a1, 10LL);
      v31 = *(_QWORD *)(gptiCurrent + 432LL);
    }
  }
  if ( a1 == *(struct tagWND **)(v31 + 128) )
  {
    HMAssignmentUnlock(v31 + 128);
    v31 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  if ( a1 == *(struct tagWND **)(v31 + 120) )
  {
    HMAssignmentUnlock(v31 + 120);
    v31 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  if ( a1 == *(struct tagWND **)(v31 + 136) )
  {
    HMAssignmentUnlock(v31 + 136);
    *(_BYTE *)(v31 + 144) = 0;
  }
  if ( a1 == (struct tagWND *)gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( a1 == gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v32 = (struct tagWND **)*((_QWORD *)a1 + 3);
  if ( v32 )
  {
    if ( a1 == v32[11] )
    {
      HMAssignmentUnlock(v32 + 11);
      v32 = (struct tagWND **)*((_QWORD *)a1 + 3);
    }
    if ( a1 == v32[12] )
    {
      HMAssignmentUnlock(v32 + 12);
      v32 = (struct tagWND **)*((_QWORD *)a1 + 3);
    }
    if ( a1 == v32[23] )
    {
      NotifyShell::HitTestPartUpdate((NotifyShell *)v32, a1, 0LL, v22);
      v33 = *((_QWORD *)a1 + 3);
      if ( (*(_DWORD *)(v33 + 48) & 0x200) != 0 )
      {
        v34 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v33 + 112));
        v35 = v34;
        if ( v34 )
        {
          v36 = *v34;
          if ( *v34 )
          {
            v120[2] = 0LL;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v120[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v120;
            v120[1] = v36;
            HMLockObject(v36);
            xxxResetTooltip(v35);
            ThreadUnlock1(v39, v38, v40);
          }
        }
      }
      HMAssignmentUnlock(*((_QWORD *)a1 + 3) + 184LL);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFFA3F;
    }
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) )
    xxxReleaseCapture();
  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == gatomShadow )
  {
    v41 = gpshadowFirst;
    v42 = &gpshadowFirst;
    while ( v41 )
    {
      v43 = (struct tagSHADOW **)((char *)v41 + 16);
      if ( *((struct tagWND **)v41 + 1) == a1 )
      {
        *v42 = *v43;
        HMAssignmentUnlock(v41);
        HMAssignmentUnlock((char *)v41 + 8);
        Win32FreePool(v41);
        break;
      }
      v41 = *v43;
      v42 = v43;
    }
  }
  else
  {
    xxxRemoveShadow(a1);
  }
  DestroyWindowSmIcon(a1);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = 0LL;
  v44 = *((_QWORD *)a1 + 18);
  if ( v44 && *(_QWORD *)(v44 + 24) )
  {
    v119 = 0LL;
    v118 = 0LL;
    Prop = GetProp(a1, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      *(_QWORD *)&v118 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v118;
      *((_QWORD *)&v118 + 1) = Prop;
      HMLockObject(Prop);
      xxxDDETrackWindowDying(a1, Prop);
      ThreadUnlock1(v47, v46, v48);
    }
    v49 = InternalRemoveProp(a1, (unsigned __int16)atomDDEImp, 1LL);
    v50 = v49;
    if ( v49 )
    {
      *(_WORD *)(v49 + 88) = 0;
      if ( !*(_WORD *)(v49 + 90) )
      {
        SeDeleteClientSecurity(v49 + 16);
        Win32FreePool(v50);
      }
    }
    InternalRemoveProp(a1, (unsigned __int16)gatomMonitorInheritance, 1LL);
  }
  if ( (unsigned __int8)tagWND::HasState(a1, 512LL) )
    PostIAMShellHookMessage(18LL, *(_QWORD *)a1);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v124);
  HandleFullWindowDestruction(a1);
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2A0 )
  {
    v51 = safe_cast_fnid_to_PSWITCHWND(a1);
    v52 = v51;
    if ( v51 )
    {
      v123 = *(_QWORD *)(v51 + 8);
      if ( v123 )
      {
        RemoveSwitchWindowInfo(&v123);
        *(_QWORD *)(v52 + 8) = 0LL;
      }
    }
  }
  if ( a1 == (struct tagWND *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( a1 == (struct tagWND *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  ThreadContext = (struct _MAG_THREAD_CONTEXT *)MagpFindThreadContext(gMagnContext, gptiCurrent);
  if ( ThreadContext )
  {
    LensContext = MagpFindLensContext(ThreadContext, a1);
    v55 = LensContext;
    if ( LensContext )
    {
      v56 = *(_QWORD *)LensContext;
      if ( *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)LensContext + 8LL) == LensContext )
      {
        v57 = (struct _MAG_LENS_CONTEXT **)*((_QWORD *)LensContext + 1);
        if ( *v57 == v55 )
        {
          *v57 = (struct _MAG_LENS_CONTEXT *)v56;
          *(_QWORD *)(v56 + 8) = v57;
          v58 = *((_DWORD *)v55 + 4);
          if ( (v58 & 0x40) != 0 )
          {
            ChangeComposableCursor(0LL);
            *((_DWORD *)v55 + 4) &= ~0x40u;
            v58 = *((_DWORD *)v55 + 4);
          }
          if ( (v58 & 0x20) == 0 )
          {
            v59 = (void *)ReferenceDwmApiPort();
            DwmAsyncMagnDestroy(v59);
          }
          if ( (unsigned __int64)(*((_QWORD *)v55 + 3) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
            HMAssignmentUnlock((char *)v55 + 24);
          v60 = *((_QWORD *)v55 + 29);
          if ( v60 )
            Win32FreePool(v60);
          v61 = *((_QWORD *)v55 + 32);
          if ( v61 )
            Win32FreePool(v61);
          Win32FreePool(v55);
          goto LABEL_139;
        }
      }
LABEL_174:
      __fastfail(3u);
    }
  }
LABEL_139:
  DestroyWindowsTimers(a1);
  HKRemoveMatchingHotkeys(0LL, a1, 0LL, 1LL);
  v62 = (_DWORD *)*((_QWORD *)a1 + 36);
  if ( v62 )
  {
    --*v62;
    v63 = (_DWORD *)*((_QWORD *)a1 + 36);
    if ( !*v63 )
      Win32FreePool(v63);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  v64 = (_DWORD *)*((_QWORD *)a1 + 37);
  if ( v64 )
  {
    --*v64;
    v65 = (_DWORD *)*((_QWORD *)a1 + 37);
    if ( !*v65 )
      Win32FreePool(v65);
    *((_QWORD *)a1 + 37) = 0LL;
  }
  if ( !gbInSMSCleanup )
    ClearSendMessages(a1);
  v66 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v66 + 26) & 8) != 0 )
  {
    UnsetLayeredWindow(a1);
    v66 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v66 + 27) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1);
    SetOrClrWF(0LL, a1, 2818LL, 1LL);
    v66 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v66 + 232) & 1) != 0 )
  {
    UnsetRedirectedWindow(a1);
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~1u;
    v66 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v66 + 136) || (*(_BYTE *)(v66 + 17) & 0x10) != 0 )
  {
    DecPaintCount((__int64)a1);
    DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    v66 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v66 + 17) & 0xA) != 0 )
  {
    SetOrClrWF(0LL, a1, 264LL, 1LL);
    SetOrClrWF(0LL, a1, 258LL, 1LL);
  }
  ClearHungFlag(a1);
  ClearHungFlag(a1);
  if ( *(_QWORD *)(gptiCurrent + 808LL) )
  {
    QMsg = FindQMsg(gptiCurrent, (__int64 **)(gptiCurrent + 808LL), a1, 0x12u, 0x12u, 1);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *((unsigned int *)QMsg + 8));
  }
  v68 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v68 + 31) & 0xC0) == 0x40 && *((_QWORD *)a1 + 21) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v68);
    v68 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v68 + 31) & 0xC0) != 0x40 )
  {
    v69 = (void *)*((_QWORD *)a1 + 21);
    if ( v69 )
    {
      if ( UnlockWndMenuWorker(a1, 0) )
        DestroyMenu(v69);
    }
  }
  v70 = (void *)*((_QWORD *)a1 + 20);
  if ( v70 )
  {
    if ( v70 == *(void **)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenuWorker(a1, 1);
    }
    else if ( UnlockWndMenuWorker(a1, 1) )
    {
      DestroyMenu(v70);
    }
  }
  v71 = *((_QWORD *)a1 + 3);
  if ( v71 )
  {
    v72 = *(_QWORD *)(v71 + 56);
    if ( v72 && a1 == *(struct tagWND **)(v72 + 80) )
    {
      v73 = *(_QWORD *)(v71 + 56);
LABEL_182:
      UnlockNotifyWindow((struct tagMENU *)v73);
      goto LABEL_183;
    }
    v73 = *(_QWORD *)(v71 + 64);
    if ( v73 && a1 == *(struct tagWND **)(v73 + 80) )
      goto LABEL_182;
  }
LABEL_183:
  if ( *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) )
  {
    v74 = (EWNDOBJ *)InternalRemoveProp(a1, (unsigned __int16)atomWndObj, 1LL);
    if ( v74 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteWnd(v74);
      --*((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v75 = (__int64 *)(gpDispInfo + 24LL);
  v76 = *(_QWORD *)(gpDispInfo + 24LL);
  if ( v76 )
  {
    do
    {
      v77 = *(_DWORD *)(v76 + 64);
      if ( (v77 & 0x400800) != 0 )
      {
LABEL_199:
        v79 = *(_QWORD *)v76;
        v75 = (__int64 *)v76;
        goto LABEL_200;
      }
      v78 = *(struct tagWND **)(v76 + 16);
      if ( v78 == a1 || *(struct tagWND **)(v76 + 24) == a1 || *(struct tagWND **)(v76 + 32) == a1 )
      {
        if ( (v77 & 2) == 0 )
        {
          if ( v76 == *(_QWORD *)(*((_QWORD *)v78 + 17) + 40LL) || v76 != *((_QWORD *)v78 + 31) )
          {
            if ( (v77 & 0xC0) != 0 )
              DeleteHrgnClip(v76);
LABEL_197:
            InvalidateDCE(v76);
            goto LABEL_198;
          }
          *((_QWORD *)v78 + 31) = 0LL;
          goto LABEL_226;
        }
        if ( (v77 & 0x1000) == 0 )
        {
          v91 = (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v76 + 8), 2147483666LL, 0LL, 0LL) == 0;
          goto LABEL_225;
        }
        if ( *(_QWORD *)(v76 + 72) == gptiCurrent )
        {
          v90 = ReleaseCacheDC(*(_QWORD *)(v76 + 8), 0LL);
        }
        else
        {
          DestroyCacheDC(v75, *(_QWORD *)(v76 + 8));
          v90 = 1;
        }
        if ( v90 != 1 )
        {
          v91 = v90 == 2;
LABEL_225:
          if ( !v91 )
            goto LABEL_197;
LABEL_226:
          DestroyCacheDC(v75, *(_QWORD *)(v76 + 8));
        }
      }
LABEL_198:
      v79 = *v75;
      if ( v76 == *v75 )
        goto LABEL_199;
LABEL_200:
      v76 = v79;
    }
    while ( v79 );
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 == (struct tagWND *)gspwndLockUpdate )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  v81 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v81 + 16) < 0 )
  {
    v82 = FindSpb(a1);
    FreeSpb(v82);
    v81 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_WORD *)(v81 + 42) & 0x2FFF) != 0x29D )
    tagWND::ClearClipRgnOrMaxClip(a1);
  v83 = (void *)*((_QWORD *)a1 + 19);
  if ( v83 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v83);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
    *((_QWORD *)a1 + 19) = 0LL;
  }
  if ( (unsigned __int8)tagWND::HasState(a1, 0x10000LL) )
    NotifyOverlayWindow(v84, 0LL);
  v85 = (void *)*((_QWORD *)a1 + 23);
  if ( v85 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v85);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 192LL) = 0LL;
    *((_QWORD *)a1 + 23) = 0LL;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
  }
  v86 = *((_QWORD *)a1 + 27);
  if ( v86 )
  {
    Win32FreePool(v86);
    *((_QWORD *)a1 + 27) = 0LL;
  }
  v87 = *((_QWORD *)a1 + 3);
  if ( !v87 || (v88 = *(struct tagWND **)(*(_QWORD *)(v87 + 8) + 24LL), a1 == v88) )
  {
    v89 = (char *)a1 + 104;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 104);
  }
  else
  {
    v89 = (char *)a1 + 104;
    v114 = *(_OWORD *)LockPointer(v122, (char *)a1 + 104, v88);
    HMAssignmentLock(&v114, 1LL);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 112);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 120);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 176LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 200);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v92 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v92);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL));
  HMMarkObjectDestroy(a1);
  v93 = _HMPheFromObject(a1);
  *(_BYTE *)(v93 + 25) |= 2u;
  v95 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v94) + 664);
  if ( v95 )
  {
    if ( *(struct tagWND **)(v95 + 96) == a1 )
    {
      HMAssignmentUnlock(v95 + 96);
      *(_QWORD *)(v95 + 80) = 0LL;
    }
    if ( *(struct tagWND **)(v95 + 112) == a1 )
      HMAssignmentUnlock(v95 + 112);
    if ( *(struct tagWND **)(v95 + 104) == a1 )
      HMAssignmentUnlock(v95 + 104);
  }
  if ( (unsigned __int8)tagWND::HasState(a1, 0x800000LL) )
    _RemoveClipboardFormatListener(v97);
  if ( ThreadUnlock1(v97, v96, v98) )
  {
    FreeClientOnWindowDestruction(a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 18) )
      {
        DeleteProperties(a1);
        Win32FreePool(*((_QWORD *)a1 + 18));
        *((_QWORD *)a1 + 18) = 0LL;
      }
      v100 = safe_cast_fnid_to_PMENUWND(a1);
      v101 = v100;
      if ( v100 && *(_QWORD *)(v100 + 16) )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v115);
        v102 = *(_DWORD **)v115[0];
        if ( (**(_DWORD **)v115[0] & 0x20000000) != 0 )
        {
          *v102 &= ~0x40000000u;
        }
        else if ( v102 == gpopupMenu )
        {
          gdwPUDFlags &= ~0x800000u;
          NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
        }
        else
        {
          v103 = *(_QWORD *)v115[0];
          NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v115[0] + 88LL));
          UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v103);
          *(_QWORD *)(v101 + 16) = 0LL;
        }
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v115);
      }
      v104 = *((_QWORD *)a1 + 35);
      if ( v104 )
      {
        Win32FreePool(v104);
        *((_QWORD *)a1 + 35) = 0LL;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 248LL) = 0;
      --*(_DWORD *)(gptiCurrent + 896LL);
      if ( (unsigned __int8)tagWND::HasState(a1, 0x20000000LL) )
      {
        *((_DWORD *)a1 + 80) &= ~0x20000000u;
        *(_DWORD *)(gptiCurrent + 904LL) += v106;
      }
      if ( (unsigned int)IsWindowDesktopComposed(v105) )
      {
        v107 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildDestroy(v107);
      }
      *(_QWORD *)(*((_QWORD *)v89 - 8) + 48LL) = 0LL;
      HMAssignmentUnlock(v89);
      v108 = *((_QWORD *)a1 + 3);
      v109 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v116 = *(_QWORD *)(v109 + 16);
      *(_QWORD *)(v109 + 16) = &v116;
      v110 = (void *)*((_QWORD *)a1 + 3);
      *((_QWORD *)&v116 + 1) = v108;
      v117 = UserDereferenceObject;
      if ( v110 )
        ObfReferenceObject(v110);
      tagObjLock::LockUnInitializeThreadCreator((struct tagWND *)((char *)a1 + 56));
      HMFreeObject(a1);
      PopAndFreeW32ThreadLock((__int64)&v116);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = 0LL;
      v111 = *((_QWORD *)a1 + 3);
      if ( v111 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v111 + 40) + 56LL) + 16LL) + 424LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v99);
      ClassPtr = (_QWORD *)GetClassPtr(*(unsigned __int16 *)(gpsi + 910LL), CurrentProcessWin32Process, hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)a1 + 136, *ClassPtr);
      ++*(_DWORD *)(*((_QWORD *)a1 + 17) + 72LL);
      SetOrClrWF(1LL, a1, 516LL, 1LL);
      SetOrClrWF(0LL, a1, 544LL, 1LL);
      SetOrClrWF(0LL, a1, 4032LL, 1LL);
      SetOrClrWF(1LL, a1, 3840LL, 1LL);
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 152LL) = 0LL;
      *((_QWORD *)a1 + 21) = 0LL;
    }
  }
  AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v124);
}
