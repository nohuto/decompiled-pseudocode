/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000EF44 (xxxSetModernAppWindow.c)
 *     xxxResetTooltip @ 0x1C0016C80 (xxxResetTooltip.c)
 *     NtUserSetParent @ 0x1C00A93D0 (NtUserSetParent.c)
 *     xxxSetWindowData @ 0x1C00CA930 (xxxSetWindowData.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F2C68 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F2E24 (xxxSetBridgeWindowChild.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0225DAC (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1C000F69C (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0025058 (zzzEndDeferWinEventNotify.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzAttachThreadInput @ 0x1C005BB64 (zzzAttachThreadInput.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C006AFC4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C008E62C (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C008EC6C (ChangeRedirectionParentInDCEs.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1C00A7840 (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C00AD698 (SetWindowSubtreeCoreWindowStatus.c)
 *     _ScreenToClient @ 0x1C00B02A4 (_ScreenToClient.c)
 *     ResetWindowTransform @ 0x1C00BB224 (ResetWindowTransform.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C00C0B54 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C00C2A50 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C00C8060 (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C85B8 (DecomposeWindowIfNeeded.c)
 *     ValidateNewParent @ 0x1C00CEFDC (ValidateNewParent.c)
 *     CalcWindowFullScreen @ 0x1C00CF81C (CalcWindowFullScreen.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00CFBE0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00D2278 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     RedirectDCEs @ 0x1C00D3618 (RedirectDCEs.c)
 *     UnredirectDCEs @ 0x1C00D3C74 (UnredirectDCEs.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     CalcForegroundInsertAfter @ 0x1C00EC140 (CalcForegroundInsertAfter.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     LinkWindow @ 0x1C00F2760 (LinkWindow.c)
 *     UnlinkWindow @ 0x1C010B5E0 (UnlinkWindow.c)
 *     GetStyleWindow @ 0x1C0119070 (GetStyleWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C01210F8 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     xxxTurnOffCompositing @ 0x1C01BD2F0 (xxxTurnOffCompositing.c)
 *     HasMessageRootWindow @ 0x1C01F2D08 (HasMessageRootWindow.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C021F904 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C021FD38 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *__fastcall xxxSetParentWorker(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3, int a4)
{
  struct tagWND *v5; // rdi
  struct tagWND *v6; // r8
  struct tagWND *DesktopWindow; // r15
  struct tagWND *v8; // r13
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  int v15; // esi
  int v16; // eax
  __int64 StyleWindow; // rax
  __int64 v18; // r14
  _DWORD *v19; // r10
  unsigned int v20; // eax
  __int64 v21; // r10
  unsigned int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  struct tagWND **v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // r8d
  __int64 v34; // rdx
  int v35; // ecx
  struct tagWND *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  struct tagFREELIST *v39; // rdi
  struct tagWND *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct CRecalcProp *RecalcProperty; // rax
  int v50; // edx
  int v51; // r8d
  __int64 v52; // rdx
  bool v53; // cf
  __int64 v54; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rcx
  int v59; // [rsp+58h] [rbp-69h]
  int v60; // [rsp+5Ch] [rbp-65h] BYREF
  unsigned int v61; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v62; // [rsp+64h] [rbp-5Dh]
  struct tagFREELIST *v63; // [rsp+68h] [rbp-59h]
  int v64; // [rsp+70h] [rbp-51h]
  __int128 v65; // [rsp+78h] [rbp-49h] BYREF
  __int64 v66; // [rsp+88h] [rbp-39h]
  __int64 v67; // [rsp+90h] [rbp-31h]
  __int128 v68; // [rsp+98h] [rbp-29h] BYREF
  __int128 v69; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-9h]
  __int128 v71; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v72; // [rsp+D0h] [rbp+Fh]
  __int64 v73[8]; // [rsp+D8h] [rbp+17h] BYREF
  char v74; // [rsp+128h] [rbp+67h] BYREF
  struct tagWND *v75; // [rsp+130h] [rbp+6Fh]
  int v76; // [rsp+140h] [rbp+7Fh]

  v76 = a4;
  v75 = a2;
  v63 = 0LL;
  v72 = 0LL;
  v70 = 0LL;
  v66 = 0LL;
  v60 = 0;
  v5 = 0LL;
  v59 = 5;
  v71 = 0LL;
  if ( a2 != (struct tagWND *)-3LL )
    v5 = a2;
  v69 = 0LL;
  v65 = 0LL;
  DesktopWindow = (struct tagWND *)GetDesktopWindow(a1, a2);
  v8 = 0LL;
  v9 = *((_QWORD *)a1 + 3);
  if ( v9 )
    v8 = *(struct tagWND **)(v9 + 104);
  if ( a1 == DesktopWindow || a1 == v8 )
    goto LABEL_106;
  if ( !v5 )
    v5 = DesktopWindow;
  if ( v6 && (*((struct tagWND **)v6 + 13) != v5 || v6 == a1) )
    return 0LL;
  v10 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 816LL);
  if ( (v10 & 0x30) == 0x10
    && (v10 & 0x200) == 0
    && (unsigned int)HasMessageRootWindow(a1)
    && !(unsigned int)HasMessageRootWindow(v5) )
  {
LABEL_106:
    v58 = 5LL;
LABEL_107:
    UserSetLastError(v58);
    return 0LL;
  }
  if ( v5 != DesktopWindow
    && v5 != v8
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == *(_QWORD *)(*((_QWORD *)v5 + 2) + 424LL)
    && (((unsigned __int8)*(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL) ^ *(_BYTE *)(*((_QWORD *)a1 + 5) + 288LL)) & 0xF) != 0
    && !IsChildWindowDpiIsolationEnabled(a1, v5) )
  {
    TraceChildWindowDpiTelemetry((__int64)a1, (__int64)v5, 1);
    v58 = 5023LL;
    goto LABEL_107;
  }
  ThreadLock(v5, &v69);
  if ( !(unsigned int)ValidateNewParent(a1, v5)
    || (v14 = xxxShowWindowEx((ULONG_PTR)a1, 0, 0),
        v12 = *((_QWORD *)a1 + 5),
        v15 = v14,
        v64 = v14,
        (*(_BYTE *)(v12 + 31) & 0x10) != 0) )
  {
LABEL_98:
    ThreadUnlock1(v12, v11, v13);
    return 0LL;
  }
  if ( (*(_DWORD *)(v12 + 232) & 2) != 0 )
    DecomposeWindowIfNeeded(a1);
  v16 = ValidateNewParent(a1, v5);
  v12 = 0LL;
  if ( !v16 )
  {
    if ( v15 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxShowWindowEx((ULONG_PTR)a1, 1u, 0);
    goto LABEL_98;
  }
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v74);
  StyleWindow = GetStyleWindow(a1, 2848LL);
  v18 = *((_QWORD *)a1 + 13);
  v67 = StyleWindow;
  ThreadLock(v18, &v71);
  v19 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 26LL) & 0x40) != 0 )
    v20 = v19[24];
  else
    v20 = v19[22];
  v61 = v20;
  v62 = v19[23];
  ScreenToClient(v18, &v61);
  if ( *(_DWORD *)(v21 + 236) != 1 )
  {
    if ( v5 != DesktopWindow && v5 != v8 )
      goto LABEL_24;
    SetOrClrWF(1LL, a1, 2056LL, 1LL);
  }
  if ( v5 == DesktopWindow )
  {
    if ( (struct tagWND *)v18 == DesktopWindow )
      goto LABEL_25;
    if ( (unsigned int)IsWindowShellCloaked((struct tagWND *const)v18, 0) )
    {
      LODWORD(v65) = 1;
      zzzSetWindowCompositionCloak(a1, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v65, 2u);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v54);
    v56 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v56 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( (*(_DWORD *)(v56 + 816) & 0x30) == 0x10 && (GetWindowCloakState(a1) & 1) != 0 )
    {
      LODWORD(v65) = 0;
      zzzSetWindowCompositionCloak(a1, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v65, 1u);
    }
    v57 = *((_DWORD *)a1 + 80);
    if ( (v57 & 0x400) != 0 )
    {
      *((_DWORD *)a1 + 80) = v57 & 0xFFFFFBFF;
      PostShellHookMessagesEx(0x36uLL, *(_QWORD *)a1, 0LL);
    }
    v52 = 3LL;
    goto LABEL_77;
  }
LABEL_24:
  if ( (struct tagWND *)v18 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1, 1) )
    {
      LODWORD(v65) = 0;
      zzzSetWindowCompositionCloak(a1, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v65, 2u);
    }
    ResetWindowTransform((__int64)a1);
    RecalcProperty = CRecalcProp::GetRecalcProperty(a1);
    if ( RecalcProperty )
    {
      if ( *((_DWORD *)RecalcProperty + 6) == 2 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v50) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v50) = 0;
        }
        if ( (_BYTE)v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v51) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v50,
            v51,
            70,
            4,
            7,
            70,
            (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
            *(_QWORD *)a1);
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v50) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v50) = 0;
        }
        if ( (_BYTE)v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v51) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v50,
            v51,
            71,
            4,
            7,
            71,
            (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
            *(_QWORD *)a1);
        }
        CRecalcProp::RemoveRecalcProperty(a1);
      }
    }
    v52 = 4LL;
LABEL_77:
    WindowMargins::CheckForChanges(a1, v52);
  }
LABEL_25:
  UnlinkWindow(a1, v18);
  v68 = *(_OWORD *)LockPointer(v73, (__int64)a1 + 104, (__int64)v5);
  HMAssignmentLock(&v68, 0LL);
  if ( !v5 || (v22 = 1, (*((_DWORD *)v5 + 80) & 0x1000) == 0) )
    v22 = 0;
  SetWindowSubtreeCoreWindowStatus((__int64)a1, v22);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    v24 = *((_QWORD *)a1 + 15);
    if ( v24 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v24 + 40) + 24LL) & 8) != 0 )
        SetOrClrWF(1LL, a1, 2056LL, 1LL);
    }
  }
  if ( v5 == (struct tagWND *)GetDesktopWindow(a1, v23) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) == 0 )
  {
    CalcWindowFullScreen(a1);
    CalcForegroundInsertAfter(a1);
  }
  LinkWindow(a1);
  if ( v75 == (struct tagWND *)-3LL && !(unsigned int)IsWindowShellCloaked(a1, 1) )
  {
    LODWORD(v65) = 1;
    zzzSetWindowCompositionCloak(a1, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v65, 2u);
  }
  v25 = GetStyleWindow(a1, 2848LL);
  if ( v67 )
  {
    if ( v25 )
    {
      if ( v67 != v25 )
        ChangeRedirectionParentInDCEs(a1, 1u);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v25 )
  {
    RedirectDCEs(a1);
  }
  if ( v5 == (struct tagWND *)GetDesktopWindow(a1, v26) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4) == 0 )
  {
    SetOrClrWF(1LL, a1, 3844LL, 1LL);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    v29 = (struct tagWND **)((char *)a1 + 104);
    if ( *((_QWORD *)a1 + 13) != GetDesktopWindow(a1, v27) )
    {
      v30 = *((_QWORD *)a1 + 2);
      v28 = *(_QWORD *)(v18 + 16);
      if ( v30 != v28 )
        zzzAttachThreadInput(v30, v28, 0);
    }
    if ( v5 != (struct tagWND *)GetDesktopWindow(a1, v28) )
    {
      v31 = *((_QWORD *)a1 + 2);
      v32 = *((_QWORD *)v5 + 2);
      if ( v31 != v32 )
      {
        v53 = v76 != 0;
        v76 = -v76;
        zzzAttachThreadInput(v31, v32, v53 ? -32767 : 1);
      }
    }
  }
  else
  {
    v29 = (struct tagWND **)((char *)a1 + 104);
  }
  if ( v5 == v8 || (struct tagWND *)v18 == v8 )
  {
    v33 = 21;
    v59 = 21;
  }
  else
  {
    v33 = 5;
  }
  if ( _bittest((const signed __int32 *)(v18 + 320), 0x13u) || _bittest((const signed __int32 *)a1 + 80, 0x13u) )
  {
    v34 = *((_QWORD *)a1 + 5);
    v35 = *(_DWORD *)(v34 + 288);
    if ( (v35 & 0xF) == 2 && (v35 & 0xF0) == 0x10 )
      *((_DWORD *)a1 + 80) &= ~0x80000u;
    *(_DWORD *)(v34 + 232) &= ~0x400u;
    v59 = v33 | 0x20;
  }
  IsTopLevelWindow(a1);
  SetDeferredDpiStateForWindowAndChildren(v36);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v74, v37, v38);
  zzzEndDeferWinEventNotify();
  if ( GetStyleWindow(*v29, 2818LL) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, 1);
  if ( !v5 || (struct tagWND *)v18 == DesktopWindow || v5 == DesktopWindow )
  {
    v39 = 0LL;
    goto LABEL_58;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v18 + 40) + 256LL) == *(_QWORD *)(*((_QWORD *)v5 + 5) + 256LL) )
  {
    v39 = v63;
LABEL_58:
    xxxSetWindowPos(a1, 0LL, v61, v62, 0, 0, v59);
    goto LABEL_59;
  }
  v39 = BuildWindowListWithDpiBoundaryInfo(a1, (struct tagWND *)v18, 0LL, &v60);
  if ( !v60 )
    goto LABEL_58;
LABEL_59:
  v40 = *v29;
  if ( !*v29
    || (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*((_QWORD *)v40 + 5) + 288LL)) & 0xF) == 0
    || v40 == DesktopWindow
    || v40 == v8
    || IsChildWindowDpiIsolationEnabled(a1, v40) )
  {
    xxxInheritWindowMonitor(a1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a1, *(_DWORD *)(*((_QWORD *)*v29 + 5) + 288LL));
  }
  if ( v39 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v39);
    FreeListFree(v39);
  }
  if ( v64 )
    xxxShowWindowEx((ULONG_PTR)a1, 1u, 0);
  v44 = ThreadUnlock1(v42, v41, v43);
  ThreadUnlock1(v46, v45, v47);
  return (struct tagWND *)v44;
}
