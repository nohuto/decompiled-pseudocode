/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0002004 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     NtUserSetParent @ 0x1C0105390 (NtUserSetParent.c)
 *     xxxResetTooltip @ 0x1C0118B6C (xxxResetTooltip.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0210694 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C0210798 (xxxSetBridgeWindowChild.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C023EA24 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1C0002DA0 (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C001FCCC (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C0020208 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C00204E0 (RedirectDCEs.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0060FF4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C006A228 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     CalcWindowFullScreen @ 0x1C006C0E8 (CalcWindowFullScreen.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     LinkWindow @ 0x1C006F9A0 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     UnlinkWindow @ 0x1C0072CAC (UnlinkWindow.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     ValidateNewParent @ 0x1C0075A78 (ValidateNewParent.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C0082264 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C0085330 (CalcForegroundInsertAfter.c)
 *     ResetWindowTransform @ 0x1C009B010 (ResetWindowTransform.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C009C90C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C009CA7C (SetWindowSubtreeCoreWindowStatus.c)
 *     _ScreenToClient @ 0x1C009CB08 (_ScreenToClient.c)
 *     IsImmersiveAppIORestricted @ 0x1C009CB44 (IsImmersiveAppIORestricted.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C009D490 (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     zzzAttachThreadInput @ 0x1C009D530 (zzzAttachThreadInput.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C00B0BF8 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     DecomposeWindowIfNeeded @ 0x1C00B3750 (DecomposeWindowIfNeeded.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1C00FECFC (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C0109E90 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxTurnOffCompositing @ 0x1C01E2C78 (xxxTurnOffCompositing.c)
 *     HasMessageRootWindow @ 0x1C0210758 (HasMessageRootWindow.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C0238468 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C02388A8 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *__fastcall xxxSetParentWorker(struct tagWND *this, struct tagWND *a2, struct tagWND *a3, int a4)
{
  struct tagWND *v5; // rdi
  __int64 v7; // rdx
  struct tagWND *v8; // r8
  struct tagWND *DesktopWindow; // r15
  struct tagWND *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v16; // esi
  __int64 StyleWindow; // rax
  __int64 v18; // r14
  _DWORD *v19; // r9
  unsigned int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r12d
  struct tagFREELIST *v30; // r14
  struct tagWND *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v40; // rcx
  int v41; // eax
  int v42; // edx
  __int64 v43; // rdx
  int v44; // ecx
  bool v45; // cf
  struct CRecalcProp *RecalcProperty; // rax
  int v47; // edx
  int v48; // r8d
  __int64 v49; // rcx
  int v50; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v51; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v52; // [rsp+54h] [rbp-5Dh]
  struct tagFREELIST *v53; // [rsp+58h] [rbp-59h]
  int v54; // [rsp+60h] [rbp-51h]
  __int128 v55; // [rsp+68h] [rbp-49h] BYREF
  __int64 v56; // [rsp+78h] [rbp-39h]
  __int64 v57; // [rsp+80h] [rbp-31h]
  __int128 v58; // [rsp+88h] [rbp-29h] BYREF
  __int128 v59; // [rsp+98h] [rbp-19h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-9h]
  __int128 v61; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v62; // [rsp+C0h] [rbp+Fh]
  _QWORD v63[8]; // [rsp+C8h] [rbp+17h] BYREF
  char v64; // [rsp+118h] [rbp+67h] BYREF
  struct tagWND *v65; // [rsp+120h] [rbp+6Fh]
  int v66; // [rsp+130h] [rbp+7Fh]

  v66 = a4;
  v65 = a2;
  v53 = 0LL;
  v62 = 0LL;
  v60 = 0LL;
  v56 = 0LL;
  v5 = 0LL;
  v50 = 0;
  if ( a2 != (struct tagWND *)-3LL )
    v5 = a2;
  v61 = 0LL;
  v59 = 0LL;
  v55 = 0LL;
  DesktopWindow = (struct tagWND *)GetDesktopWindow((__int64)this);
  v10 = 0LL;
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
    v10 = *(struct tagWND **)(v11 + 104);
  if ( this == DesktopWindow || this == v10 )
    goto LABEL_103;
  if ( !v5 )
    v5 = DesktopWindow;
  if ( v8 && (*((struct tagWND **)v8 + 13) != v5 || v8 == this) )
    return 0LL;
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 424LL))
    && (unsigned int)HasMessageRootWindow(this)
    && !(unsigned int)HasMessageRootWindow(v5) )
  {
LABEL_103:
    v49 = 5LL;
LABEL_104:
    UserSetLastError(v49, v7);
    return 0LL;
  }
  if ( v5 != DesktopWindow
    && v5 != v10
    && *(_QWORD *)(*((_QWORD *)this + 2) + 424LL) == *(_QWORD *)(*((_QWORD *)v5 + 2) + 424LL)
    && (((unsigned __int8)*(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL) ^ *(_BYTE *)(*((_QWORD *)this + 5) + 288LL)) & 0xF) != 0
    && !IsChildWindowDpiIsolationEnabled(this, v5) )
  {
    TraceChildWindowDpiTelemetry((__int64)this, (__int64)v5, 1);
    v49 = 5023LL;
    goto LABEL_104;
  }
  ThreadLock((__int64)v5, (__int64 *)&v59);
  if ( !(unsigned int)ValidateNewParent(this, v5)
    || (v15 = xxxShowWindowEx((ULONG_PTR)this, 0, 0),
        v13 = *((_QWORD *)this + 5),
        v16 = v15,
        v54 = v15,
        (*(_BYTE *)(v13 + 31) & 0x10) != 0) )
  {
LABEL_111:
    ThreadUnlock1(v13, v12, v14);
    return 0LL;
  }
  if ( (*(_DWORD *)(v13 + 232) & 2) != 0 )
    DecomposeWindowIfNeeded(this);
  if ( !(unsigned int)ValidateNewParent(this, v5) )
  {
    if ( v16 && *(char *)(*((_QWORD *)this + 5) + 19LL) >= 0 )
      xxxShowWindowEx((ULONG_PTR)this, 1u, 0);
    goto LABEL_111;
  }
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v64);
  StyleWindow = GetStyleWindow((__int64)this, 2848);
  v18 = *((_QWORD *)this + 13);
  v57 = StyleWindow;
  ThreadLock(v18, (__int64 *)&v61);
  v19 = (_DWORD *)*((_QWORD *)this + 5);
  if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 26LL) & 0x40) != 0 )
    v20 = v19[24];
  else
    v20 = v19[22];
  v51 = v20;
  v52 = v19[23];
  ScreenToClient(v18, &v51);
  if ( *(_DWORD *)(v21 + 236) != 1 )
  {
    if ( v5 != DesktopWindow && v5 != v10 )
      goto LABEL_24;
    SetOrClrWF(1, this, 0x808u, 1);
  }
  if ( v5 == DesktopWindow )
  {
    if ( (struct tagWND *)v18 == DesktopWindow )
      goto LABEL_25;
    if ( (unsigned int)IsWindowShellCloaked((struct tagWND *const)v18, 0) )
    {
      LODWORD(v55) = 1;
      zzzSetWindowCompositionCloak(this, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v55, 2u);
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 820) & 0x30) == 0x10
      && (GetWindowCloakState(this) & 1) != 0 )
    {
      LODWORD(v55) = 0;
      zzzSetWindowCompositionCloak(this, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v55, 1u);
    }
    v41 = *((_DWORD *)this + 80);
    if ( (v41 & 0x400) != 0 )
    {
      *((_DWORD *)this + 80) = v41 & 0xFFFFFBFF;
      PostShellHookMessages(54LL, *(_QWORD *)this);
    }
    v42 = 5;
LABEL_72:
    WindowMargins::CheckForChanges(this, v42);
    goto LABEL_25;
  }
LABEL_24:
  if ( (struct tagWND *)v18 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked(this, 1) )
      zzzSetWindowCompositionCloak(this, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v55, 2u);
    ResetWindowTransform((__int64)this);
    RecalcProperty = CRecalcProp::GetRecalcProperty(this);
    if ( RecalcProperty )
    {
      if ( *((_DWORD *)RecalcProperty + 10) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (LOBYTE(v47) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v47) = 0;
        }
        if ( (_BYTE)v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v48) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v47,
            v48,
            38,
            3,
            23,
            38,
            (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
        }
      }
      else
      {
        CRecalcProp::RemoveRecalcProperty(this);
      }
    }
    v42 = 6;
    goto LABEL_72;
  }
LABEL_25:
  UnlinkWindow(this, v18);
  v58 = *(_OWORD *)LockPointer(v63, (__int64)this + 104, (__int64)v5);
  HMAssignmentLock(&v58, 0LL);
  if ( !v5 || (v22 = 1LL, (*((_DWORD *)v5 + 80) & 0x1000) == 0) )
    v22 = 0LL;
  SetWindowSubtreeCoreWindowStatus(this, v22);
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x40) != 0 )
  {
    v23 = *((_QWORD *)this + 15);
    if ( v23 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 24LL) & 8) != 0 )
        SetOrClrWF(1, this, 0x808u, 1);
    }
  }
  if ( v5 == (struct tagWND *)GetDesktopWindow((__int64)this) && (*(_BYTE *)(*((_QWORD *)this + 5) + 24LL) & 8) == 0 )
  {
    CalcWindowFullScreen(this);
    a3 = CalcForegroundInsertAfter(this);
  }
  LinkWindow(this, a3, (__int64)v5);
  if ( v65 == (struct tagWND *)-3LL && !(unsigned int)IsWindowShellCloaked(this, 1) )
  {
    LODWORD(v55) = 1;
    zzzSetWindowCompositionCloak(this, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v55, 2u);
  }
  v24 = GetStyleWindow((__int64)this, 2848);
  if ( v57 )
  {
    if ( v24 )
    {
      if ( v57 != v24 )
        ChangeRedirectionParentInDCEs(this, 1u);
    }
    else
    {
      UnredirectDCEs(this);
    }
  }
  else if ( v24 )
  {
    RedirectDCEs(this);
  }
  if ( v5 == (struct tagWND *)GetDesktopWindow((__int64)this) && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 4) == 0 )
  {
    SetOrClrWF(1, this, 0xF04u, 1);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)this, 1, 0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0xC0) == 0x40 )
  {
    if ( *((_QWORD *)this + 13) != GetDesktopWindow((__int64)this) )
    {
      v25 = *((_QWORD *)this + 2);
      v26 = *(_QWORD *)(v18 + 16);
      if ( v25 != v26 )
        zzzAttachThreadInput(v25, v26, 0LL);
    }
    if ( v5 != (struct tagWND *)GetDesktopWindow((__int64)this) )
    {
      v27 = *((_QWORD *)this + 2);
      v28 = *((_QWORD *)v5 + 2);
      if ( v27 != v28 )
      {
        v45 = v66 != 0;
        v66 = -v66;
        zzzAttachThreadInput(v27, v28, v45 ? 32769 : 1);
      }
    }
  }
  if ( v5 == v10 || (struct tagWND *)v18 == v10 )
    v29 = 21;
  else
    v29 = 5;
  if ( _bittest((const signed __int32 *)(v18 + 320), 0x13u) || _bittest((const signed __int32 *)this + 80, 0x13u) )
  {
    v43 = *((_QWORD *)this + 5);
    v44 = *(_DWORD *)(v43 + 288);
    if ( (v44 & 0xF) == 2 && (v44 & 0xF0) == 0x10 )
      *((_DWORD *)this + 80) &= ~0x80000u;
    *(_DWORD *)(v43 + 232) &= ~0x400u;
    v29 |= 0x20u;
  }
  IsTopLevelWindow((__int64)this);
  SetDeferredDpiStateForWindowAndChildren(this);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v64);
  zzzEndDeferWinEventNotify();
  if ( GetStyleWindow(*((_QWORD *)this + 13), 2818) )
    xxxTurnOffCompositing(this, 0LL);
  xxxWindowEvent(0x800Fu, this, 0, 0, 1);
  if ( !v5 || v5 == DesktopWindow || (struct tagWND *)v18 == DesktopWindow )
  {
    v30 = 0LL;
    goto LABEL_55;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v18 + 40) + 256LL) == *(_QWORD *)(*((_QWORD *)v5 + 5) + 256LL) )
  {
    v30 = v53;
LABEL_55:
    xxxSetWindowPos(this, 0LL, v51, v52, 0, 0, v29);
    goto LABEL_56;
  }
  v30 = BuildWindowListWithDpiBoundaryInfo(this, (struct tagWND *)v18, 0LL, &v50);
  if ( !v50 )
    goto LABEL_55;
LABEL_56:
  v31 = (struct tagWND *)*((_QWORD *)this + 13);
  if ( !v31
    || (((unsigned __int8)*(_DWORD *)(*((_QWORD *)this + 5) + 288LL) ^ *(_BYTE *)(*((_QWORD *)v31 + 5) + 288LL)) & 0xF) == 0
    || v31 == DesktopWindow
    || v31 == v10
    || IsChildWindowDpiIsolationEnabled(this, v31) )
  {
    xxxInheritWindowMonitor(this, 0LL, 0);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(this, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 40LL) + 288LL));
  }
  if ( v30 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v30);
    FreeListFree(v30);
  }
  if ( v54 )
    xxxShowWindowEx((ULONG_PTR)this, 1u, 0);
  v35 = ThreadUnlock1(v33, v32, v34);
  ThreadUnlock1(v37, v36, v38);
  return (struct tagWND *)v35;
}
