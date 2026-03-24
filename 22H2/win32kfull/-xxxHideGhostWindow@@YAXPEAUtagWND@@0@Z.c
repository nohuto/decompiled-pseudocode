/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0003648 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0003A40 (xxxRegisterGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C00087E4 (xxxHandleDestroyGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C0209D20 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0004818 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C0004888 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     xxxMinMaximizeEx @ 0x1C002B69C (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C002BFF8 (DwmAsyncNotifyAnimationChange.c)
 *     PostIAMShellHookMessageEx @ 0x1C002DAB0 (PostIAMShellHookMessageEx.c)
 *     IsWindowBeingDestroyed @ 0x1C003883C (IsWindowBeingDestroyed.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039AC8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     CkptRestore @ 0x1C00411F0 (CkptRestore.c)
 *     PostShellHookMessages @ 0x1C0043540 (PostShellHookMessages.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00491B4 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     SetVisible @ 0x1C004BCA0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C004F480 (AdjustPwndPtiPqForDelegation.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FBD0 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PostInputMessage @ 0x1C00507E0 (PostInputMessage.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     xxxRedrawWindow @ 0x1C00722B4 (xxxRedrawWindow.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0132244 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall xxxHideGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  struct tagWND *v3; // rsi
  BOOL v4; // r12d
  int v5; // r14d
  char v6; // cl
  _OWORD *v7; // rax
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  char *v14; // r13
  void *v15; // rax
  unsigned int v16; // ebx
  char v17; // al
  unsigned __int64 v18; // rdx
  _OWORD *v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // r14
  _OWORD *v25; // rax
  __int64 v26; // rax
  unsigned __int16 v27; // bx
  __int64 v28; // rax
  __int64 v29; // rax
  __int128 *v30; // r8
  __int64 v31; // rax
  __int128 *v32; // rdx
  __int64 v33; // rax
  __int128 *v34; // rcx
  __int64 v35; // xmm1_8
  __int128 v36; // xmm0
  __int64 v37; // xmm1_8
  __int128 v38; // xmm0
  __int64 v39; // xmm1_8
  __int128 v40; // xmm0
  __int64 v41; // xmm1_8
  __int128 v42; // xmm0
  __int64 v43; // xmm1_8
  __int128 v44; // xmm0
  __int64 v45; // xmm1_8
  __int128 v46; // xmm0
  __int64 v47; // xmm1_8
  void *v48; // rax
  int v49; // [rsp+70h] [rbp-90h] BYREF
  int v50; // [rsp+74h] [rbp-8Ch]
  int v51; // [rsp+78h] [rbp-88h]
  struct tagWND *v52; // [rsp+80h] [rbp-80h] BYREF
  __int128 v53; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  int v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h] BYREF
  struct tagTHREADINFO *v57; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v58; // [rsp+B8h] [rbp-48h]
  struct tagQ *v59; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v60; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-20h]
  _BYTE v63[112]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v64[112]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v65; // [rsp+1C8h] [rbp+C8h] BYREF
  _OWORD v66[7]; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v67[7]; // [rsp+250h] [rbp+150h] BYREF

  v56 = 0LL;
  v3 = a2;
  v52 = a2;
  v49 = 0;
  v4 = 0;
  v5 = 49185;
  v51 = 0;
  v50 = *(_DWORD *)(gptiCurrent + 488LL) & 1;
  v6 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v6 & 0x20) != 0 )
    v49 = 1;
  else
    v4 = (v6 & 1) != 0;
  v7 = (_OWORD *)INPUTDEST_FROM_PWND(v63, a1);
  v66[0] = *v7;
  v66[1] = v7[1];
  v66[2] = v7[2];
  v66[3] = v7[3];
  v66[4] = v7[4];
  v66[5] = v7[5];
  v66[6] = v7[6];
  v8 = IsCapturedBySystem(v66);
  v9 = *((_QWORD *)a1 + 2);
  v55 = v8;
  v10 = *((_QWORD *)v3 + 2);
  v58 = (__int64 *)((char *)v3 + 16);
  if ( v10 && v9 )
  {
    v11 = *(_QWORD *)(v9 + 432);
    if ( v11 == gpqForeground && *(struct tagWND **)(v11 + 120) == a1
      || gpqForeground && (v12 = *(_QWORD *)(gpqForeground + 120LL)) != 0 && *(struct tagWND **)(v12 + 120) == a1 )
    {
      *(_DWORD *)(v10 + 488) |= 0x20u;
    }
    else
    {
      v5 = 49201;
    }
  }
  v13 = *((_QWORD *)a1 + 5);
  v14 = (char *)v3 + 40;
  v65 = *(_OWORD *)(v13 + 88);
  if ( (*(_DWORD *)(*((_QWORD *)v3 + 5) + 288LL) & 0xF) != 2 )
  {
    v57 = (struct tagTHREADINFO *)ValidateHmonitor(*(_QWORD *)(v13 + 256));
    PhysicalToLogicalDPIRect(&v65, &v65, *(unsigned int *)(*(_QWORD *)v14 + 288LL), &v57);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v3) )
  {
    v51 = IsWindowDesktopComposed(v3);
    if ( v51 )
    {
      v15 = (void *)ReferenceDwmApiPort();
      DwmAsyncNotifyAnimationChange(v15);
    }
  }
  v16 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    v57 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    if ( v57 )
    {
      xxxWindowEvent(0x8003u, 3u);
      PostEventMessageEx(v57, *((struct tagQ **)v57 + 54), 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed(v3) && (unsigned int)IsTopLevelWindow() )
  {
    v17 = *(_BYTE *)(*(_QWORD *)v14 + 31LL);
    if ( v49 )
    {
      if ( (v17 & 0x20) == 0 )
      {
        v18 = 7LL;
LABEL_26:
        xxxMinMaximizeEx(v3, v18, 0LL, 0LL);
      }
    }
    else
    {
      if ( !v4 )
      {
        if ( (v17 & 0x20) == 0 && (v17 & 1) == 0 )
          goto LABEL_37;
        v19 = (_OWORD *)CkptRestore(v3, &v65);
        if ( v19 )
          *v19 = v65;
        xxxMinMaximizeEx(v3, 9uLL, 0LL, 0LL);
LABEL_36:
        v5 |= 2u;
LABEL_37:
        v20 = v5 | 0x40;
        v16 = 3;
        if ( (*(_BYTE *)(*(_QWORD *)v14 + 25LL) & 8) == 0 )
          v20 = v5;
        v5 = v20;
        if ( (_QWORD)v65 == *(_QWORD *)(*(_QWORD *)v14 + 88LL) )
          v5 = v20 | 2;
        goto LABEL_41;
      }
      if ( (v17 & 1) == 0 )
      {
        v18 = 3LL;
        goto LABEL_26;
      }
    }
    _CopyWindowCheckpoint(a1, v3);
    goto LABEL_36;
  }
LABEL_41:
  if ( v50 || !(unsigned int)IsWindowBeingDestroyed(v3) && (unsigned int)IsTopLevelWindow() && (v5 & 0x40) != 0 )
    SetVisible(a1);
  else
    xxxShowWindowEx(a1, 0, 0);
  if ( (unsigned int)IsWindowBeingDestroyed(v3) )
  {
    PostShellHookMessages(2LL, *(_QWORD *)a1);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 18LL, *(_QWORD *)a1);
    if ( (*(_BYTE *)(*(_QWORD *)v14 + 25LL) & 8) != 0 )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 18LL, *(_QWORD *)v3);
  }
  else
  {
    if ( (unsigned int)IsTopLevelWindow() )
    {
      v49 = 0;
      v62 = 0LL;
      v21 = *((_QWORD *)a1 + 5);
      v61 = 0LL;
      if ( (*(_BYTE *)(v21 + 20) & 0x20) != 0 )
      {
        SetOrClrWF(0LL, a1, 1056LL, 1LL);
        SetOrClrWF(1LL, v3, 1056LL, 1LL);
      }
      else
      {
        v22 = *((_QWORD *)a1 + 12);
        if ( v22 )
        {
          if ( (struct tagWND *)v22 == v3 )
          {
            v5 |= 4u;
          }
          else if ( (*(_BYTE *)(*(_QWORD *)(v22 + 40) + 24LL) & 8) == 0 || (*(_BYTE *)(*(_QWORD *)v14 + 24LL) & 8) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            *(_QWORD *)&v61 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v61;
            *((_QWORD *)&v61 + 1) = v22;
            HMLockObject(v22);
            v3 = v52;
            v49 = 1;
          }
        }
      }
      if ( (v5 & 0x40) != 0 )
        SetVisible(v3);
      xxxSetWindowPos(v3, 0, 0, v5);
      if ( v49 )
        ThreadUnlock1();
      if ( (v5 & 0x40) != 0 )
        xxxRedrawWindow(v3);
      if ( (v5 & 0x10) == 0 && !v50 )
        xxxActivateWindowWithOptions(v3, 0LL, 0LL, 1LL);
      if ( v55 )
      {
        v24 = *v58;
        v60 = v24;
        if ( v24 )
        {
          v25 = (_OWORD *)INPUTDEST_FROM_PWND(v64, v3);
          v67[0] = *v25;
          v67[1] = v25[1];
          v67[2] = v25[2];
          v67[3] = v25[3];
          v67[4] = v25[4];
          v67[5] = v25[5];
          v67[6] = v25[6];
          ForceCapture(0LL, v67);
          SetSystemInputSource(&v56);
          v26 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)v14 + 288LL));
          v49 = 0;
          v27 = v26;
          v58 = (__int64 *)v26;
          v59 = *(struct tagQ **)(v24 + 432);
          if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                               (unsigned int)&v59,
                               (unsigned int)&v52,
                               (unsigned int)&v60,
                               513,
                               (__int64)&v56,
                               (__int64)&v49) )
          {
            v28 = *((_QWORD *)v59 + 15);
            if ( v28 )
              v29 = *(_QWORD *)(v28 + 16);
            else
              v29 = 0LL;
            v30 = (__int128 *)gObjDummyLock;
            if ( v29 )
              v30 = (__int128 *)(v29 + 392);
            v31 = *((_QWORD *)v59 + 11);
            v32 = (__int128 *)gObjDummyLock;
            if ( v31 )
              v32 = (__int128 *)(v31 + 392);
            v33 = *((_QWORD *)v59 + 12);
            v34 = (__int128 *)gObjDummyLock;
            if ( v33 )
              v34 = (__int128 *)(v33 + 392);
            v3 = v52;
            v35 = *((_QWORD *)&gpsiLock + 2);
            v53 = gpsiLock;
            v36 = *(_OWORD *)((char *)v52 + 56);
            v54 = v35;
            v37 = *((_QWORD *)v52 + 9);
            v53 = v36;
            v38 = *(_OWORD *)(v60 + 392);
            v54 = v37;
            v39 = *(_QWORD *)(v60 + 408);
            v53 = v38;
            v40 = *(_OWORD *)v59;
            v54 = v39;
            v41 = *((_QWORD *)v59 + 2);
            v53 = v40;
            v42 = *v34;
            v54 = v41;
            v43 = *((_QWORD *)v34 + 2);
            v53 = v42;
            v44 = *v32;
            v54 = v43;
            v45 = *((_QWORD *)v32 + 2);
            v53 = v44;
            v46 = *v30;
            v54 = v45;
            v47 = *((_QWORD *)v30 + 2);
            v53 = v46;
            v54 = v47;
            PostInputMessage(
              v59,
              v52,
              0x201u,
              v27 | (WORD2(v58) << 16),
              0,
              0LL,
              0LL,
              0,
              (struct tagINPUT_MESSAGE_SOURCE *)&v56,
              0LL,
              0LL,
              v49,
              v60);
          }
          else
          {
            v3 = v52;
          }
        }
      }
    }
    else if ( (*(_BYTE *)(*(_QWORD *)v14 + 25LL) & 8) != 0 )
    {
      SetVisible(v3);
      if ( !gdwDeferWinEvent )
        v16 = 1;
      xxxWindowEvent(0x8002u, v16);
      xxxRedrawWindow(v3);
    }
    if ( v51 )
    {
      v48 = (void *)ReferenceDwmApiPort();
      DwmAsyncNotifyAnimationChange(v48);
    }
    xxxNotifyShellOfWindowSwap(a1, v3);
  }
}
