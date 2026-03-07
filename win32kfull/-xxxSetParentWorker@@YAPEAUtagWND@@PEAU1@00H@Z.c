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
  __int64 v22; // rdx
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
  struct tagFREELIST *v37; // rdi
  struct tagWND *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  struct CRecalcProp *RecalcProperty; // rax
  int v48; // edx
  int v49; // r8d
  __int64 v50; // rdx
  bool v51; // cf
  __int64 v52; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rcx
  int v57; // [rsp+58h] [rbp-69h]
  int v58; // [rsp+5Ch] [rbp-65h] BYREF
  unsigned int v59; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v60; // [rsp+64h] [rbp-5Dh]
  struct tagFREELIST *v61; // [rsp+68h] [rbp-59h]
  int v62; // [rsp+70h] [rbp-51h]
  __int128 v63; // [rsp+78h] [rbp-49h] BYREF
  __int64 v64; // [rsp+88h] [rbp-39h]
  __int64 v65; // [rsp+90h] [rbp-31h]
  __int128 v66; // [rsp+98h] [rbp-29h] BYREF
  __int128 v67; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v68; // [rsp+B8h] [rbp-9h]
  __int128 v69; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v70; // [rsp+D0h] [rbp+Fh]
  char v71[64]; // [rsp+D8h] [rbp+17h] BYREF
  char v72; // [rsp+128h] [rbp+67h] BYREF
  struct tagWND *v73; // [rsp+130h] [rbp+6Fh]
  int v74; // [rsp+140h] [rbp+7Fh]

  v74 = a4;
  v73 = a2;
  v61 = 0LL;
  v70 = 0LL;
  v68 = 0LL;
  v64 = 0LL;
  v58 = 0;
  v5 = 0LL;
  v57 = 5;
  v69 = 0LL;
  if ( a2 != (struct tagWND *)-3LL )
    v5 = a2;
  v67 = 0LL;
  v63 = 0LL;
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
  v10 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 812LL);
  if ( (v10 & 0x30) == 0x10
    && (v10 & 0x200) == 0
    && (unsigned int)HasMessageRootWindow(a1)
    && !(unsigned int)HasMessageRootWindow(v5) )
  {
LABEL_106:
    v56 = 5LL;
LABEL_107:
    UserSetLastError(v56);
    return 0LL;
  }
  if ( v5 != DesktopWindow
    && v5 != v8
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == *(_QWORD *)(*((_QWORD *)v5 + 2) + 424LL)
    && (((unsigned __int8)*(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL) ^ *(_BYTE *)(*((_QWORD *)a1 + 5) + 288LL)) & 0xF) != 0
    && !IsChildWindowDpiIsolationEnabled(a1, v5) )
  {
    TraceChildWindowDpiTelemetry((__int64)a1, (__int64)v5, 1);
    v56 = 5023LL;
    goto LABEL_107;
  }
  ThreadLock(v5, &v67);
  if ( !(unsigned int)ValidateNewParent(a1, v5, 0LL)
    || (v14 = xxxShowWindowEx((__int64)a1, 0, 0),
        v12 = *((_QWORD *)a1 + 5),
        v15 = v14,
        v62 = v14,
        (*(_BYTE *)(v12 + 31) & 0x10) != 0) )
  {
LABEL_98:
    ThreadUnlock1(v12, v11, v13);
    return 0LL;
  }
  if ( (*(_DWORD *)(v12 + 232) & 2) != 0 )
    DecomposeWindowIfNeeded(a1);
  v16 = ValidateNewParent(a1, v5, 0LL);
  v12 = 0LL;
  if ( !v16 )
  {
    if ( v15 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxShowWindowEx((__int64)a1, 1u, 0);
    goto LABEL_98;
  }
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v72);
  StyleWindow = GetStyleWindow(a1, 2848LL);
  v18 = *((_QWORD *)a1 + 13);
  v65 = StyleWindow;
  ThreadLock(v18, &v69);
  v19 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 26LL) & 0x40) != 0 )
    v20 = v19[24];
  else
    v20 = v19[22];
  v59 = v20;
  v60 = v19[23];
  ScreenToClient(v18, &v59);
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
      LODWORD(v63) = 1;
      zzzSetWindowCompositionCloak(a1, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v63, 2u);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v52);
    v54 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v54 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( (*(_DWORD *)(v54 + 812) & 0x30) == 0x10 && (GetWindowCloakState(a1) & 1) != 0 )
    {
      LODWORD(v63) = 0;
      zzzSetWindowCompositionCloak(a1, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v63, 1u);
    }
    v55 = *((_DWORD *)a1 + 80);
    if ( (v55 & 0x400) != 0 )
    {
      *((_DWORD *)a1 + 80) = v55 & 0xFFFFFBFF;
      PostShellHookMessagesEx(0x36uLL, *(_QWORD *)a1, 0LL);
    }
    v50 = 3LL;
    goto LABEL_77;
  }
LABEL_24:
  if ( (struct tagWND *)v18 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1, 1) )
    {
      LODWORD(v63) = 0;
      zzzSetWindowCompositionCloak(a1, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v63, 2u);
    }
    ResetWindowTransform(a1);
    RecalcProperty = CRecalcProp::GetRecalcProperty(a1);
    if ( RecalcProperty )
    {
      if ( *((_DWORD *)RecalcProperty + 6) == 2 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (LOBYTE(v48) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v48) = 0;
        }
        if ( (_BYTE)v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v49) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v48,
            v49,
            70,
            4,
            23,
            70,
            (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
            *(_QWORD *)a1);
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (LOBYTE(v48) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v48) = 0;
        }
        if ( (_BYTE)v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v49) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v48,
            v49,
            71,
            4,
            23,
            71,
            (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
            *(_QWORD *)a1);
        }
        CRecalcProp::RemoveRecalcProperty(a1);
      }
    }
    v50 = 4LL;
LABEL_77:
    WindowMargins::CheckForChanges(a1, v50);
  }
LABEL_25:
  UnlinkWindow(a1, v18);
  v66 = *(_OWORD *)LockPointer(v71, (char *)a1 + 104);
  HMAssignmentLock(&v66, 0LL);
  if ( !v5 || (v22 = 1LL, (*((_DWORD *)v5 + 80) & 0x1000) == 0) )
    v22 = 0LL;
  SetWindowSubtreeCoreWindowStatus(a1, v22);
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
  if ( v73 == (struct tagWND *)-3LL && !(unsigned int)IsWindowShellCloaked(a1, 1) )
  {
    LODWORD(v63) = 1;
    zzzSetWindowCompositionCloak(a1, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v63, 2u);
  }
  v25 = GetStyleWindow(a1, 2848LL);
  if ( v65 )
  {
    if ( v25 )
    {
      if ( v65 != v25 )
        ChangeRedirectionParentInDCEs(a1);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v25 )
  {
    RedirectDCEs((__int64)a1);
  }
  if ( v5 == (struct tagWND *)GetDesktopWindow(a1, v26) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4) == 0 )
  {
    SetOrClrWF(1LL, a1, 3844LL, 1LL);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    v29 = (struct tagWND **)((char *)a1 + 104);
    if ( *((_QWORD *)a1 + 13) != GetDesktopWindow(a1, v27) )
    {
      v30 = *((_QWORD *)a1 + 2);
      v28 = *(_QWORD *)(v18 + 16);
      if ( v30 != v28 )
        zzzAttachThreadInput(v30, v28, 0LL);
    }
    if ( v5 != (struct tagWND *)GetDesktopWindow(a1, v28) )
    {
      v31 = *((_QWORD *)a1 + 2);
      v32 = *((_QWORD *)v5 + 2);
      if ( v31 != v32 )
      {
        v51 = v74 != 0;
        v74 = -v74;
        zzzAttachThreadInput(v31, v32, v51 ? 32769 : 1);
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
    v57 = 21;
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
    v57 = v33 | 0x20;
  }
  IsTopLevelWindow(a1);
  SetDeferredDpiStateForWindowAndChildren(v36);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v72);
  zzzEndDeferWinEventNotify();
  if ( GetStyleWindow(*v29, 2818LL) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, 1);
  if ( !v5 || (struct tagWND *)v18 == DesktopWindow || v5 == DesktopWindow )
  {
    v37 = 0LL;
    goto LABEL_58;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v18 + 40) + 256LL) == *(_QWORD *)(*((_QWORD *)v5 + 5) + 256LL) )
  {
    v37 = v61;
LABEL_58:
    xxxSetWindowPos(a1, 0LL, v59, v60, 0, 0, v57);
    goto LABEL_59;
  }
  v37 = BuildWindowListWithDpiBoundaryInfo(a1, (struct tagWND *)v18, 0LL, &v58);
  if ( !v58 )
    goto LABEL_58;
LABEL_59:
  v38 = *v29;
  if ( !*v29
    || (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*((_QWORD *)v38 + 5) + 288LL)) & 0xF) == 0
    || v38 == DesktopWindow
    || v38 == v8
    || IsChildWindowDpiIsolationEnabled(a1, v38) )
  {
    xxxInheritWindowMonitor(a1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a1, *(_DWORD *)(*((_QWORD *)*v29 + 5) + 288LL));
  }
  if ( v37 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v37);
    FreeListFree(v37);
  }
  if ( v62 )
    xxxShowWindowEx((__int64)a1, 1u, 0);
  v42 = ThreadUnlock1(v40, v39, v41);
  ThreadUnlock1(v44, v43, v45);
  return (struct tagWND *)v42;
}
