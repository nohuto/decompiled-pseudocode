/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC
 * Callers:
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F5724 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F59A8 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F62F4 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F65C4 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     DwmAsyncNotifyAnimationChange @ 0x1C001635C (DwmAsyncNotifyAnimationChange.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C003A028 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     PostIAMShellHookMessage @ 0x1C009C174 (PostIAMShellHookMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C009FA68 (AdjustPwndPtiPqForDelegation.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E6A40 (INPUTDEST_FROM_PWND.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00FF588 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     CkptRestore @ 0x1C0100A4C (CkptRestore.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F50B4 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01F6280 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
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
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  void *v18; // rax
  int v19; // r13d
  struct tagQ **v20; // rbx
  __int64 v21; // rcx
  struct tagWND *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned int v25; // ebx
  __int64 v26; // rdx
  _DWORD *v27; // rax
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct tagWND *v32; // rcx
  int v33; // r13d
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r14
  __int128 *v39; // rax
  __int64 v40; // rax
  unsigned __int16 v41; // bx
  void *v42; // rax
  int v43; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+84h] [rbp-7Ch] BYREF
  int v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  struct tagQ *v47; // [rsp+98h] [rbp-68h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-60h] BYREF
  struct tagWND *v49; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-50h]
  __int128 v51; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-38h]
  _DWORD v53[28]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v54; // [rsp+140h] [rbp+40h] BYREF
  __int128 v55; // [rsp+150h] [rbp+50h] BYREF
  __int128 v56; // [rsp+160h] [rbp+60h]
  __int128 v57; // [rsp+170h] [rbp+70h]
  __int128 v58; // [rsp+180h] [rbp+80h]
  __int128 v59; // [rsp+190h] [rbp+90h]
  __int128 v60; // [rsp+1A0h] [rbp+A0h]
  __int128 v61; // [rsp+1B0h] [rbp+B0h]

  v2 = 0LL;
  v48 = 0LL;
  v49 = a2;
  v54 = 0LL;
  v4 = a2;
  v44 = 0;
  v5 = 0;
  v45 = 0;
  v6 = 49185;
  v43 = *(_DWORD *)(gptiCurrent + 488LL) & 1;
  v7 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v7 & 0x20) != 0 )
    v44 = 1;
  else
    v5 = (v7 & 1) != 0;
  v8 = (__int128 *)INPUTDEST_FROM_PWND(v53, (__int64)a1);
  v55 = *v8;
  v56 = v8[1];
  v57 = v8[2];
  v58 = v8[3];
  v59 = v8[4];
  v60 = v8[5];
  v61 = v8[6];
  v9 = IsCapturedBySystem(&v55);
  v11 = *((_QWORD *)v4 + 2);
  v12 = *((_QWORD *)a1 + 2);
  LODWORD(v46) = v9;
  if ( v11 && v12 )
  {
    v13 = *(_QWORD *)(v12 + 432);
    if ( v13 == gpqForeground && *(struct tagWND **)(v13 + 128) == a1
      || gpqForeground && (v14 = *(_QWORD *)(gpqForeground + 128LL)) != 0 && *(struct tagWND **)(v14 + 120) == a1 )
    {
      *(_DWORD *)(v11 + 488) |= 0x20u;
    }
    else
    {
      v6 = 49201;
    }
  }
  v15 = *((_QWORD *)a1 + 5);
  v54 = *(_OWORD *)(v15 + 88);
  if ( (*(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL) & 0xF) != 2 )
  {
    v47 = (struct tagQ *)ValidateHmonitor(*(_QWORD *)(v15 + 256), v15, v11, v10);
    PhysicalToLogicalDPIRect(&v54, &v54, *(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL), &v47);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v45 = IsWindowDesktopComposed(v4);
    if ( v45 )
    {
      v17 = *(_QWORD *)a1;
      v18 = (void *)ReferenceDwmApiPort(v16);
      DwmAsyncNotifyAnimationChange(v18, 0, v17);
    }
  }
  v19 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v20 = (struct tagQ **)*((_QWORD *)a1 + 2);
    if ( v20 )
    {
      xxxWindowEvent(0x8003u, a1, 0, 0, 3);
      PostEventMessageEx((struct tagTHREADINFO *)v20, v20[54], 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v4) && IsTopLevelWindow(v21) )
  {
    v23 = *((_QWORD *)v4 + 5);
    v24 = (unsigned int)((v43 << 17) + 17);
    v25 = (v43 << 17) + 1;
    if ( v44 )
    {
      if ( (*(_BYTE *)(v23 + 31) & 0x20) == 0 )
      {
        v24 = v25;
        v26 = 7LL;
LABEL_26:
        xxxMinMaximize((__int64)v22, v26, v24);
      }
    }
    else
    {
      if ( !v5 )
      {
        if ( (*(_BYTE *)(v23 + 31) & 0x21) == 0 )
        {
LABEL_36:
          v28 = *((_QWORD *)v4 + 5);
          v29 = v6 | 0x40;
          if ( (*(_BYTE *)(v28 + 25) & 8) == 0 )
            v29 = v6;
          v6 = v29;
          if ( (_QWORD)v54 == *(_QWORD *)(v28 + 88) )
            v6 = v29 | 2;
          goto LABEL_40;
        }
        v27 = CkptRestore(v22, &v54);
        if ( v27 )
          *(_OWORD *)v27 = v54;
        xxxMinMaximize((__int64)v4, 9LL, v25);
LABEL_35:
        v6 |= 2u;
        goto LABEL_36;
      }
      if ( (*(_BYTE *)(v23 + 31) & 1) == 0 )
      {
        v26 = 3LL;
        goto LABEL_26;
      }
    }
    _CopyWindowCheckpoint(a1, v4);
    goto LABEL_35;
  }
LABEL_40:
  if ( v43 || !(unsigned int)IsWindowBeingDestroyed((__int64)v4) && IsTopLevelWindow(v30) && (v6 & 0x40) != 0 )
    SetVisible(a1, 0);
  else
    xxxShowWindowEx((__int64)a1, 0, 0);
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v4) )
  {
    if ( !IsTopLevelWindow(v31) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 25LL) & 8) != 0 )
      {
        SetVisible(v32, 0x11u);
        if ( !gdwDeferWinEvent )
          v19 = 1;
        xxxWindowEvent(0x8002u, v4, 0, 0, v19);
        xxxRedrawWindow(v4, 0LL, 0LL, 1157);
      }
      goto LABEL_75;
    }
    v52 = 0LL;
    v33 = 0;
    v34 = *((_QWORD *)a1 + 5);
    v51 = 0LL;
    if ( (*(_BYTE *)(v34 + 20) & 0x20) != 0 )
    {
      SetOrClrWF(0, (__int64 *)a1, 0x420u, 1);
      SetOrClrWF(1, (__int64 *)v4, 0x420u, 1);
      v35 = 1LL;
LABEL_57:
      if ( (v6 & 0x40) != 0 )
        SetVisible(v4, 1u);
      xxxSetWindowPos(v4, v35, (unsigned int)v54, DWORD1(v54), 0, 0, v6);
      if ( v33 )
        ThreadUnlock1(v32, v36, v37);
      if ( (v6 & 0x40) != 0 )
        xxxRedrawWindow(v4, 0LL, 0LL, 1157);
      if ( (v6 & 0x10) == 0 && !v43 )
        xxxActivateWindowWithOptions(v4, 0LL, 0LL, 1);
      if ( (_DWORD)v46 )
      {
        v38 = *((_QWORD *)v4 + 2);
        v46 = v38;
        if ( v38 )
        {
          v39 = (__int128 *)INPUTDEST_FROM_PWND(v53, (__int64)v4);
          v55 = *v39;
          v56 = v39[1];
          v57 = v39[2];
          v58 = v39[3];
          v59 = v39[4];
          v60 = v39[5];
          v61 = v39[6];
          ForceCapture(0LL);
          SetSystemInputSource(&v48);
          v40 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL));
          v43 = 0;
          v41 = v40;
          v50 = v40;
          v47 = *(struct tagQ **)(v38 + 432);
          v44 = 0;
          if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                               (__int64 *)&v47,
                               (__int64 *)&v49,
                               (struct tagTHREADINFO **)&v46,
                               0x201u,
                               &v48,
                               &v43,
                               &v44) )
          {
            v4 = v49;
            PostInputMessage(
              v47,
              v49,
              0x201u,
              0LL,
              v41 | (WORD2(v50) << 16),
              0,
              0LL,
              0LL,
              0,
              (struct tagINPUT_MESSAGE_SOURCE *)&v48,
              0LL,
              0LL,
              v43,
              v44,
              v46);
          }
          else
          {
            v4 = v49;
          }
        }
      }
LABEL_75:
      if ( v45 )
      {
        if ( v4 )
          v2 = *(_QWORD *)v4;
        v42 = (void *)ReferenceDwmApiPort(v32);
        DwmAsyncNotifyAnimationChange(v42, 1, v2);
      }
      xxxNotifyShellOfWindowSwap(a1, v4);
      return;
    }
    v35 = *((_QWORD *)a1 + 12);
    if ( v35 )
    {
      if ( (struct tagWND *)v35 == v4 )
      {
        v6 |= 4u;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 24LL) & 8) == 0 || (*(_BYTE *)(*((_QWORD *)v4 + 5) + 24LL) & 8) != 0 )
      {
        ThreadLock(*((_QWORD *)a1 + 12), &v51);
        v33 = 1;
        goto LABEL_57;
      }
    }
    v35 = 0LL;
    goto LABEL_57;
  }
  PostShellHookMessagesEx(2u, *(_QWORD *)a1, 0LL);
  PostIAMShellHookMessage(0x12u, *(_QWORD *)a1);
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 25LL) & 8) != 0 )
    PostIAMShellHookMessage(0x12u, *(_QWORD *)v4);
}
