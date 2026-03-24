/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C00058B0 (xxxSetModernAppWindow.c)
 *     xxxResetTooltip @ 0x1C002B35C (xxxResetTooltip.c)
 *     xxxSetWindowData @ 0x1C008A1A8 (xxxSetWindowData.c)
 *     NtUserSetParent @ 0x1C01192E0 (NtUserSetParent.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0208A6C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C0208BD8 (xxxSetBridgeWindowChild.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0242990 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C00010A4 (TraceChildWindowDpiTelemetry.c)
 *     zzzAttachThreadInput @ 0x1C00115F8 (zzzAttachThreadInput.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0013BBC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0013D1C (SetWindowSubtreeCoreWindowStatus.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0013DA4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     _ScreenToClient @ 0x1C0013DCC (_ScreenToClient.c)
 *     IsImmersiveAppIORestricted @ 0x1C0013E08 (IsImmersiveAppIORestricted.c)
 *     IsWindowShellCloaked @ 0x1C0014650 (IsWindowShellCloaked.c)
 *     DecomposeWindowIfNeeded @ 0x1C0035294 (DecomposeWindowIfNeeded.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036CF0 (zzzSetWindowCompositionCloak.c)
 *     CalcForegroundInsertAfter @ 0x1C0038ADC (CalcForegroundInsertAfter.c)
 *     PostShellHookMessages @ 0x1C0043540 (PostShellHookMessages.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00491B4 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     UnredirectDCEs @ 0x1C004C19C (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C004C470 (RedirectDCEs.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C004C63C (ChangeRedirectionParentInDCEs.c)
 *     GetWindowCloakState @ 0x1C004DB6C (GetWindowCloakState.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     CalcWindowFullScreen @ 0x1C006A9C4 (CalcWindowFullScreen.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x1C006C7D8 (xxxInheritWindowMonitor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F8F4 (BuildWindowListWithDpiBoundaryInfo.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     LinkWindow @ 0x1C006FC60 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C00714C0 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00726C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ValidateNewParent @ 0x1C0078D78 (ValidateNewParent.c)
 *     UnlinkWindow @ 0x1C007E8D8 (UnlinkWindow.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00F13D0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0111B98 (IsChildWindowDpiIsolationEnabled.c)
 *     ResetWindowTransform @ 0x1C0132C1C (ResetWindowTransform.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5EAC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E6264 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxTurnOffCompositing @ 0x1C01E7FF0 (xxxTurnOffCompositing.c)
 *     HasMessageRootWindow @ 0x1C0208B48 (HasMessageRootWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *__fastcall xxxSetParentWorker(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3, int a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  struct tagWND *DesktopWindow; // r15
  struct tagWND *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // esi
  __int64 StyleWindow; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  _DWORD *v18; // r9
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  int v29; // r9d
  struct tagFREELIST *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // r9
  int v41; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v42[2]; // [rsp+50h] [rbp-71h] BYREF
  struct tagFREELIST *v43; // [rsp+58h] [rbp-69h]
  int v44; // [rsp+60h] [rbp-61h]
  __int128 v45; // [rsp+68h] [rbp-59h] BYREF
  __int64 v46; // [rsp+78h] [rbp-49h]
  __int64 v47; // [rsp+80h] [rbp-41h]
  _BYTE v48[8]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v49[3]; // [rsp+90h] [rbp-31h] BYREF
  _QWORD v50[4]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v51; // [rsp+C8h] [rbp+7h] BYREF
  _BYTE v52[64]; // [rsp+D8h] [rbp+17h] BYREF
  int v53; // [rsp+128h] [rbp+67h]

  v50[2] = 0LL;
  v49[2] = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v41 = 0;
  v53 = 5;
  v45 = 0LL;
  DesktopWindow = (struct tagWND *)GetDesktopWindow(a1);
  v8 = 0LL;
  v9 = *((_QWORD *)a1 + 3);
  if ( v9 )
    v8 = *(struct tagWND **)(v9 + 104);
  if ( a1 == DesktopWindow || a1 == v8 )
    goto LABEL_99;
  v10 = (__int64)DesktopWindow;
  if ( v5 )
    v10 = v5;
  if ( v6 && (*(_QWORD *)(v6 + 104) != v10 || (struct tagWND *)v6 == a1) )
    return 0LL;
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 424LL))
    && (unsigned int)HasMessageRootWindow(a1)
    && !(unsigned int)HasMessageRootWindow(v10) )
  {
LABEL_99:
    v39 = 5LL;
LABEL_100:
    UserSetLastError(v39);
    return 0LL;
  }
  if ( (struct tagWND *)v10 != DesktopWindow
    && (struct tagWND *)v10 != v8
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL)
    && (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)(v10 + 40) + 288LL)) & 0xF) != 0
    && !(unsigned int)IsChildWindowDpiIsolationEnabled(a1, v10) )
  {
    TraceChildWindowDpiTelemetry((__int64)a1, v10, 1);
    v39 = 5023LL;
    goto LABEL_100;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v49[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v49;
  v49[1] = v10;
  if ( v10 )
    HMLockObject(v10);
  if ( !(unsigned int)ValidateNewParent(a1, v10, 0LL)
    || (v12 = xxxShowWindowEx(a1, 0, 0),
        v13 = *((_QWORD *)a1 + 5),
        v14 = v12,
        v44 = v12,
        (*(_BYTE *)(v13 + 31) & 0x10) != 0) )
  {
LABEL_107:
    ThreadUnlock1();
    return 0LL;
  }
  if ( (*(_DWORD *)(v13 + 232) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  if ( !(unsigned int)ValidateNewParent(a1, v10, 0LL) )
  {
    if ( v14 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxShowWindowEx(a1, 1u, 0);
    goto LABEL_107;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v48);
  StyleWindow = GetStyleWindow(a1, 2848LL);
  v16 = *((_QWORD *)a1 + 13);
  v47 = StyleWindow;
  v17 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v50[0] = *(_QWORD *)(v17 + 416);
  *(_QWORD *)(v17 + 416) = v50;
  v50[1] = v16;
  if ( v16 )
    HMLockObject(v16);
  v18 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 26LL) & 0x40) != 0 )
    v19 = v18[24];
  else
    v19 = v18[22];
  v42[0] = v19;
  v42[1] = v18[23];
  ScreenToClient(v16, v42);
  if ( *(_DWORD *)(v20 + 236) != 1 && ((struct tagWND *)v10 == DesktopWindow || (struct tagWND *)v10 == v8) )
    SetOrClrWF(1LL, a1, 2056LL, 1LL);
  if ( (struct tagWND *)v10 == DesktopWindow )
  {
    if ( (struct tagWND *)v16 != DesktopWindow )
    {
      if ( (unsigned int)IsWindowShellCloaked((struct tagWND *)v16) )
      {
        LODWORD(v45) = 1;
        zzzSetWindowCompositionCloak(a1, &v45, 2LL);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 820) & 0x30) == 0x10 && (GetWindowCloakState(a1) & 1) != 0 )
      {
        LODWORD(v45) = 0;
        zzzSetWindowCompositionCloak(a1, &v45, 1LL);
      }
      v34 = *((_QWORD *)a1 + 5);
      v35 = *(_DWORD *)(v34 + 232);
      if ( (v35 & 0x8000) != 0 )
      {
        *(_DWORD *)(v34 + 232) = v35 & 0xFFFF7FFF;
        PostShellHookMessages(54LL, *(_QWORD *)a1);
      }
    }
  }
  else if ( (struct tagWND *)v16 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1) )
      zzzSetWindowCompositionCloak(a1, &v45, 2LL);
    ResetWindowTransform(a1);
  }
  UnlinkWindow(a1, v16);
  v51 = *(_OWORD *)LockPointer(v52, (char *)a1 + 104, v10);
  HMAssignmentLock(&v51);
  if ( v10 )
    v21 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(v10 + 40) + 232LL), 25);
  else
    v21 = 0LL;
  SetWindowSubtreeCoreWindowStatus(a1, v21);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    v22 = *((_QWORD *)a1 + 15);
    if ( v22 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v22 + 40) + 24LL) & 8) != 0 )
        SetOrClrWF(1LL, a1, 2056LL, 1LL);
    }
  }
  if ( v10 == GetDesktopWindow(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) == 0 )
  {
    CalcWindowFullScreen(a1);
    CalcForegroundInsertAfter(a1);
  }
  LinkWindow(a1);
  if ( a2 == (struct tagWND *)-3LL && !(unsigned int)IsWindowShellCloaked(a1) )
  {
    LODWORD(v45) = 1;
    zzzSetWindowCompositionCloak(a1, &v45, 2LL);
  }
  v23 = GetStyleWindow(a1, 2848LL);
  if ( v47 )
  {
    if ( v23 )
    {
      if ( v47 != v23 )
        ChangeRedirectionParentInDCEs(a1);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v23 )
  {
    RedirectDCEs(a1);
  }
  if ( v10 == GetDesktopWindow(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4) == 0 )
  {
    SetOrClrWF(1LL, a1, 3844LL, 1LL);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    v24 = (_QWORD *)((char *)a1 + 104);
    if ( *((_QWORD *)a1 + 13) != GetDesktopWindow(a1) )
    {
      v25 = *((_QWORD *)a1 + 2);
      v26 = *(_QWORD *)(v16 + 16);
      if ( v25 != v26 )
        zzzAttachThreadInput(v25, v26, 0);
    }
    if ( v10 != GetDesktopWindow(a1) )
    {
      v27 = *((_QWORD *)a1 + 2);
      v28 = *(_QWORD *)(v10 + 16);
      if ( v27 == v28 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 235LL) & 1) != 0
          && (unsigned int)IsTopLevelWindow(v10)
          && (unsigned int)IsDesktopApp(*(_QWORD *)(v40 + 424)) )
        {
          *(_DWORD *)(v10 + 324) |= 8u;
        }
      }
      else
      {
        zzzAttachThreadInput(v27, v28, a4 != 0 ? -32767 : 1);
      }
    }
  }
  else
  {
    v24 = (_QWORD *)((char *)a1 + 104);
  }
  if ( (struct tagWND *)v10 == v8 || (struct tagWND *)v16 == v8 )
  {
    v29 = 21;
    v53 = 21;
  }
  else
  {
    v29 = 5;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 232LL) & 0x10000000) != 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10000000) != 0 )
  {
    v36 = *((_QWORD *)a1 + 5);
    v37 = v36;
    v38 = *(_DWORD *)(v36 + 288);
    if ( (v38 & 0xF) == 2 && (v38 & 0xF0) == 0x10 )
    {
      *(_DWORD *)(v36 + 232) &= ~0x10000000u;
      v37 = *((_QWORD *)a1 + 5);
    }
    *(_DWORD *)(v37 + 232) &= ~0x8000000u;
    v53 = v29 | 0x20;
  }
  IsTopLevelWindow(a1);
  SetDeferredDpiStateForWindowAndChildren(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v48);
  zzzEndDeferWinEventNotify();
  if ( GetStyleWindow(*v24, 2818LL) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, 1u);
  if ( !v10 || (struct tagWND *)v10 == DesktopWindow || (struct tagWND *)v16 == DesktopWindow )
  {
    v30 = 0LL;
    goto LABEL_57;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v16 + 40) + 256LL) == *(_QWORD *)(*(_QWORD *)(v10 + 40) + 256LL) )
  {
    v30 = v43;
LABEL_57:
    xxxSetWindowPos(a1, 0, 0, v53);
    goto LABEL_58;
  }
  v30 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, v16, 0LL, &v41);
  if ( !v41 )
    goto LABEL_57;
LABEL_58:
  v31 = *v24;
  if ( !*v24
    || (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)(v31 + 40) + 288LL)) & 0xF) == 0
    || (struct tagWND *)v31 == DesktopWindow
    || (struct tagWND *)v31 == v8
    || (unsigned int)IsChildWindowDpiIsolationEnabled(a1, v31) )
  {
    xxxInheritWindowMonitor(a1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a1, *(_DWORD *)(*(_QWORD *)(*v24 + 40LL) + 288LL));
  }
  if ( v30 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v30);
    FreeListFree(v30);
  }
  if ( v44 )
    xxxShowWindowEx(a1, 1u, 0);
  v32 = ThreadUnlock1();
  ThreadUnlock1();
  return (struct tagWND *)v32;
}
