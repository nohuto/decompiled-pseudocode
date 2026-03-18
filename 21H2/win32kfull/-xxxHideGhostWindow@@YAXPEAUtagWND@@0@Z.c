/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C
 * Callers:
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01446B8 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0144AD4 (xxxRegisterGhostWindow.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0151E84 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C0211880 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0077618 (INPUTDEST_FROM_PWND.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8 (AdjustPwndPtiPqForDelegation.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00CA760 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00CBC78 (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0145450 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01454C0 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall xxxHideGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdi
  struct tagWND *v4; // rsi
  BOOL v5; // r12d
  int v6; // r14d
  char v7; // cl
  __int128 *v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  void *v16; // rax
  int v17; // r13d
  struct tagQ **v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned int v22; // ebx
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  void *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  char v36; // cl
  struct tagRECT *v37; // rax
  __int64 v38; // r14
  __int128 *v39; // rax
  __int64 v40; // rax
  unsigned __int16 v41; // bx
  int v42; // [rsp+70h] [rbp-90h] BYREF
  struct tagQ *v43; // [rsp+78h] [rbp-88h] BYREF
  int v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  struct tagWND *v47; // [rsp+98h] [rbp-68h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-48h]
  _DWORD v51[28]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v52; // [rsp+130h] [rbp+30h] BYREF
  __int128 v53; // [rsp+140h] [rbp+40h] BYREF
  __int128 v54; // [rsp+150h] [rbp+50h]
  __int128 v55; // [rsp+160h] [rbp+60h]
  __int128 v56; // [rsp+170h] [rbp+70h]
  __int128 v57; // [rsp+180h] [rbp+80h]
  __int128 v58; // [rsp+190h] [rbp+90h]
  __int128 v59; // [rsp+1A0h] [rbp+A0h]

  v2 = 0LL;
  v46 = 0LL;
  v4 = a2;
  v47 = a2;
  v42 = 0;
  v5 = 0;
  v6 = 49185;
  v44 = 0;
  LODWORD(v43) = *(_DWORD *)(gptiCurrent + 488LL) & 1;
  v7 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v7 & 0x20) != 0 )
    v42 = 1;
  else
    v5 = (v7 & 1) != 0;
  v8 = (__int128 *)INPUTDEST_FROM_PWND(v51, (__int64)a1);
  v53 = *v8;
  v54 = v8[1];
  v55 = v8[2];
  v56 = v8[3];
  v57 = v8[4];
  v58 = v8[5];
  v59 = v8[6];
  v9 = IsCapturedBySystem(&v53);
  v10 = *((_QWORD *)v4 + 2);
  v11 = *((_QWORD *)a1 + 2);
  LODWORD(v45) = v9;
  if ( v10 && v11 )
  {
    v12 = *(_QWORD *)(v11 + 432);
    if ( v12 == gpqForeground && *(struct tagWND **)(v12 + 120) == a1
      || gpqForeground && (v34 = *(_QWORD *)(gpqForeground + 120LL)) != 0 && *(struct tagWND **)(v34 + 120) == a1 )
    {
      *(_DWORD *)(v10 + 488) |= 0x20u;
    }
    else
    {
      v6 = 49201;
    }
  }
  v13 = *((_QWORD *)a1 + 5);
  v52 = *(struct tagRECT *)(v13 + 88);
  if ( (*(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL) & 0xF) != 2 )
  {
    v48 = ValidateHmonitor(*(_QWORD *)(v13 + 256), v13);
    PhysicalToLogicalDPIRect(&v52, &v52, *(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL), &v48);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v44 = IsWindowDesktopComposed(v4);
    if ( v44 )
    {
      v15 = *(_QWORD *)a1;
      v16 = (void *)ReferenceDwmApiPort(v14);
      DwmAsyncNotifyAnimationChange(v16, 0, v15);
    }
  }
  v17 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v18 = (struct tagQ **)*((_QWORD *)a1 + 2);
    if ( v18 )
    {
      xxxWindowEvent(0x8003u, a1, 0, 0, 3);
      PostEventMessageEx((struct tagTHREADINFO *)v18, v18[54], 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v4) && IsTopLevelWindow(v19) )
  {
    v20 = *((_QWORD *)v4 + 5);
    v21 = (unsigned int)(((_DWORD)v43 << 17) + 17);
    v22 = ((_DWORD)v43 << 17) + 1;
    if ( v42 )
    {
      if ( (*(_BYTE *)(v20 + 31) & 0x20) != 0 )
        goto LABEL_21;
      v21 = v22;
      v35 = 7LL;
    }
    else
    {
      if ( !v5 )
      {
        v36 = *(_BYTE *)(v20 + 31);
        if ( (v36 & 0x20) == 0 && (v36 & 1) == 0 )
          goto LABEL_23;
        v37 = CkptRestore(v4, &v52);
        if ( v37 )
          *v37 = v52;
        xxxMinMaximize((__int64)v4, 9LL, v22);
LABEL_22:
        v6 |= 2u;
LABEL_23:
        v23 = *((_QWORD *)v4 + 5);
        v24 = v6 | 0x40;
        if ( (*(_BYTE *)(v23 + 25) & 8) == 0 )
          v24 = v6;
        v6 = v24;
        if ( v52.left == *(_DWORD *)(v23 + 88) && v52.top == *(_DWORD *)(v23 + 92) )
          v6 = v24 | 2;
        goto LABEL_28;
      }
      if ( (*(_BYTE *)(v20 + 31) & 1) != 0 )
      {
LABEL_21:
        _CopyWindowCheckpoint(a1, v4);
        goto LABEL_22;
      }
      v35 = 3LL;
    }
    xxxMinMaximize((__int64)v4, v35, v21);
    goto LABEL_21;
  }
LABEL_28:
  if ( (_DWORD)v43 || !(unsigned int)IsWindowBeingDestroyed((__int64)v4) && IsTopLevelWindow(v25) && (v6 & 0x40) != 0 )
    SetVisible(a1, 0);
  else
    xxxShowWindowEx((ULONG_PTR)a1, 0, 0);
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v4) )
  {
    if ( !IsTopLevelWindow(v26) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 25LL) & 8) != 0 )
      {
        SetVisible(v4, 0x11u);
        if ( !gdwDeferWinEvent )
          v17 = 1;
        xxxWindowEvent(0x8002u, v4, 0, 0, v17);
        xxxRedrawWindow(v4, 0LL, 0LL, 1157);
      }
      goto LABEL_51;
    }
    v50 = 0LL;
    v28 = 0;
    v29 = *((_QWORD *)a1 + 5);
    v49 = 0LL;
    if ( (*(_BYTE *)(v29 + 20) & 0x20) != 0 )
    {
      SetOrClrWF(0, a1, 0x420u, 1);
      SetOrClrWF(1, v4, 0x420u, 1);
      v30 = 1LL;
    }
    else
    {
      v30 = *((_QWORD *)a1 + 12);
      if ( v30 )
      {
        if ( (struct tagWND *)v30 == v4 )
        {
          v6 |= 4u;
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 24LL) & 8) == 0
               || (*(_BYTE *)(*((_QWORD *)v4 + 5) + 24LL) & 8) != 0 )
        {
          ThreadLock(*((_QWORD *)a1 + 12), (__int64 *)&v49);
          v28 = 1;
          goto LABEL_41;
        }
      }
      v30 = 0LL;
    }
LABEL_41:
    if ( (v6 & 0x40) != 0 )
      SetVisible(v4, 1u);
    xxxSetWindowPos(v4, v30, (unsigned int)v52.left, (unsigned int)v52.top, 0, 0, v6);
    if ( v28 )
      ThreadUnlock1(v27, v31, v32);
    if ( (v6 & 0x40) != 0 )
      xxxRedrawWindow(v4, 0LL, 0LL, 1157);
    if ( (v6 & 0x10) == 0 && !(_DWORD)v43 )
      xxxActivateWindowWithOptions(v4, 0LL, 0LL, 1);
    if ( (_DWORD)v45 )
    {
      v38 = *((_QWORD *)v4 + 2);
      v45 = v38;
      if ( v38 )
      {
        v39 = (__int128 *)INPUTDEST_FROM_PWND(v51, (__int64)v4);
        v53 = *v39;
        v54 = v39[1];
        v55 = v39[2];
        v56 = v39[3];
        v57 = v39[4];
        v58 = v39[5];
        v59 = v39[6];
        ForceCapture(0LL);
        SetSystemInputSource(&v46);
        v40 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL));
        v42 = 0;
        v41 = v40;
        v48 = v40;
        v43 = *(struct tagQ **)(v38 + 432);
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                             (__int64 *)&v43,
                             (__int64 *)&v47,
                             (struct tagTHREADINFO **)&v45,
                             0x201u,
                             &v46,
                             &v42) )
        {
          v4 = v47;
          PostInputMessage(
            v43,
            v47,
            0x201u,
            0LL,
            v41 | (WORD2(v48) << 16),
            0,
            0LL,
            0LL,
            0,
            (struct tagINPUT_MESSAGE_SOURCE *)&v46,
            0LL,
            0LL,
            v42,
            v45);
        }
        else
        {
          v4 = v47;
        }
      }
    }
LABEL_51:
    if ( v44 )
    {
      if ( v4 )
        v2 = *(_QWORD *)v4;
      v33 = (void *)ReferenceDwmApiPort(v27);
      DwmAsyncNotifyAnimationChange(v33, 1, v2);
    }
    xxxNotifyShellOfWindowSwap(a1, v4);
    return;
  }
  PostShellHookMessages(2uLL, *(_QWORD *)a1);
  PostIAMShellHookMessage(0x12u, *(_QWORD *)a1);
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 25LL) & 8) != 0 )
    PostIAMShellHookMessage(0x12u, *(_QWORD *)v4);
}
