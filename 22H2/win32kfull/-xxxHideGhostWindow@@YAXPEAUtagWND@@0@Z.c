/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F49BC
 * Callers:
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4524 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F47A8 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F5128 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F53F8 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     DwmAsyncNotifyAnimationChange @ 0x1C0016AEC (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C0060D1C (AdjustPwndPtiPqForDelegation.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00AE500 (INPUTDEST_FROM_PWND.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00C3EC4 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     PostIAMShellHookMessage @ 0x1C00D34E8 (PostIAMShellHookMessage.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00E19D0 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     PostInputMessage @ 0x1C0117268 (PostInputMessage.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     Feature_MissingShowWinEventOnUnGhost__private_IsEnabledDeviceUsage @ 0x1C013C700 (Feature_MissingShowWinEventOnUnGhost__private_IsEnabledDeviceUsage.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F3EB4 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01F50B4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
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
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  void *v17; // rax
  int v18; // r13d
  struct tagQ **v19; // rbx
  __int64 v20; // rcx
  struct tagWND *v21; // rcx
  __int64 v22; // r9
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
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r14
  __int128 *v38; // rax
  __int64 v39; // rax
  unsigned __int16 v40; // bx
  void *v41; // rax
  int v42; // [rsp+80h] [rbp-80h] BYREF
  int v43; // [rsp+84h] [rbp-7Ch] BYREF
  int v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  struct tagQ *v46; // [rsp+98h] [rbp-68h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-60h] BYREF
  struct tagWND *v48; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-50h]
  __int128 v50; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-38h]
  _DWORD v52[28]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v53; // [rsp+140h] [rbp+40h] BYREF
  __int128 v54; // [rsp+150h] [rbp+50h] BYREF
  __int128 v55; // [rsp+160h] [rbp+60h]
  __int128 v56; // [rsp+170h] [rbp+70h]
  __int128 v57; // [rsp+180h] [rbp+80h]
  __int128 v58; // [rsp+190h] [rbp+90h]
  __int128 v59; // [rsp+1A0h] [rbp+A0h]
  __int128 v60; // [rsp+1B0h] [rbp+B0h]

  v2 = 0LL;
  v47 = 0LL;
  v48 = a2;
  v53 = 0LL;
  v4 = a2;
  v42 = 0;
  v5 = 0;
  v44 = 0;
  v6 = 49185;
  v43 = *(_DWORD *)(gptiCurrent + 488LL) & 1;
  v7 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v7 & 0x20) != 0 )
    v42 = 1;
  else
    v5 = (v7 & 1) != 0;
  v8 = (__int128 *)INPUTDEST_FROM_PWND(v52, (__int64)a1);
  v54 = *v8;
  v55 = v8[1];
  v56 = v8[2];
  v57 = v8[3];
  v58 = v8[4];
  v59 = v8[5];
  v60 = v8[6];
  v9 = IsCapturedBySystem(&v54);
  v10 = *((_QWORD *)v4 + 2);
  v11 = *((_QWORD *)a1 + 2);
  LODWORD(v45) = v9;
  if ( v10 && v11 )
  {
    v12 = *(_QWORD *)(v11 + 432);
    if ( v12 == gpqForeground && *(struct tagWND **)(v12 + 128) == a1
      || gpqForeground && (v13 = *(_QWORD *)(gpqForeground + 128LL)) != 0 && *(struct tagWND **)(v13 + 120) == a1 )
    {
      *(_DWORD *)(v10 + 488) |= 0x20u;
    }
    else
    {
      v6 = 49201;
    }
  }
  v14 = *((_QWORD *)a1 + 5);
  v53 = *(_OWORD *)(v14 + 88);
  if ( (*(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL) & 0xF) != 2 )
  {
    v46 = (struct tagQ *)ValidateHmonitor(*(_QWORD *)(v14 + 256));
    PhysicalToLogicalDPIRect(&v53, &v53, *(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL), &v46);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v44 = IsWindowDesktopComposed(v4);
    if ( v44 )
    {
      v16 = *(_QWORD *)a1;
      v17 = (void *)ReferenceDwmApiPort(v15);
      DwmAsyncNotifyAnimationChange(v17, 0, v16);
    }
  }
  v18 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v19 = (struct tagQ **)*((_QWORD *)a1 + 2);
    if ( v19 )
    {
      xxxWindowEvent(0x8003u, a1, 0, 0, 3);
      PostEventMessageEx((struct tagTHREADINFO *)v19, v19[54], 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v4) && IsTopLevelWindow(v20) )
  {
    v23 = *((_QWORD *)v4 + 5);
    v24 = (unsigned int)((v43 << 17) + 17);
    v25 = (v43 << 17) + 1;
    if ( v42 )
    {
      if ( (*(_BYTE *)(v23 + 31) & 0x20) == 0 )
      {
        v24 = v25;
        v26 = 7LL;
LABEL_26:
        xxxMinMaximize((__int64)v21, v26, v24);
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
          if ( (_QWORD)v53 == *(_QWORD *)(v28 + 88) )
            v6 = v29 | 2;
          goto LABEL_40;
        }
        v27 = CkptRestore(v21, &v53);
        if ( v27 )
          *(_OWORD *)v27 = v53;
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
    _CopyWindowCheckpoint(a1, v4, v24, v22);
    goto LABEL_35;
  }
LABEL_40:
  if ( v43 || !(unsigned int)IsWindowBeingDestroyed((__int64)v4) && IsTopLevelWindow(v30) && (v6 & 0x40) != 0 )
    SetVisible(a1, 0);
  else
    xxxShowWindowEx((ULONG_PTR)a1, 0, 0);
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v4) )
  {
    if ( !IsTopLevelWindow(v31) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 25LL) & 8) != 0 )
      {
        SetVisible(v32, 0x11u);
        if ( !gdwDeferWinEvent )
          v18 = 1;
        xxxWindowEvent(0x8002u, v4, 0, 0, v18);
        xxxRedrawWindow(v4, 0LL, 0LL, 1157);
      }
      goto LABEL_73;
    }
    v42 = 0;
    v51 = 0LL;
    v33 = *((_QWORD *)a1 + 5);
    v50 = 0LL;
    if ( (*(_BYTE *)(v33 + 20) & 0x20) != 0 )
    {
      SetOrClrWF(0, a1, 0x420u, 1);
      SetOrClrWF(1, v4, 0x420u, 1);
      v34 = 1LL;
      goto LABEL_57;
    }
    v34 = *((_QWORD *)a1 + 12);
    if ( v34 )
    {
      if ( (struct tagWND *)v34 == v4 )
      {
        v6 |= 4u;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 24LL) & 8) == 0 || (*(_BYTE *)(*((_QWORD *)v4 + 5) + 24LL) & 8) != 0 )
      {
        ThreadLock(*((_QWORD *)a1 + 12), &v50);
        v42 = 1;
        goto LABEL_57;
      }
    }
    v34 = 0LL;
LABEL_57:
    if ( (v6 & 0x40) != 0 )
    {
      SetVisible(v4, 1u);
      if ( (unsigned int)Feature_MissingShowWinEventOnUnGhost__private_IsEnabledDeviceUsage() )
      {
        if ( !gdwDeferWinEvent )
          v18 = 1;
        xxxWindowEvent(0x8002u, v4, 0, 0, v18);
      }
    }
    xxxSetWindowPos(v4, v34, (unsigned int)v53, DWORD1(v53), 0, 0, v6);
    if ( v42 )
      ThreadUnlock1(v32, v35, v36);
    if ( (v6 & 0x40) != 0 )
      xxxRedrawWindow(v4, 0LL, 0LL, 1157);
    if ( (v6 & 0x10) == 0 && !v43 )
      xxxActivateWindowWithOptions(v4, 0, 0LL, 1);
    if ( (_DWORD)v45 )
    {
      v37 = *((_QWORD *)v4 + 2);
      v45 = v37;
      if ( v37 )
      {
        v38 = (__int128 *)INPUTDEST_FROM_PWND(v52, (__int64)v4);
        v54 = *v38;
        v55 = v38[1];
        v56 = v38[2];
        v57 = v38[3];
        v58 = v38[4];
        v59 = v38[5];
        v60 = v38[6];
        ForceCapture(0LL);
        SetSystemInputSource(&v47);
        v39 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL));
        v43 = 0;
        v40 = v39;
        v49 = v39;
        v46 = *(struct tagQ **)(v37 + 432);
        v42 = 0;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                             (__int64 *)&v46,
                             (__int64 *)&v48,
                             (struct tagTHREADINFO **)&v45,
                             0x201u,
                             &v47,
                             &v43,
                             &v42) )
        {
          v4 = v48;
          PostInputMessage(
            v46,
            v48,
            0x201u,
            0LL,
            v40 | (WORD2(v49) << 16),
            0,
            0LL,
            0LL,
            0,
            (struct tagINPUT_MESSAGE_SOURCE *)&v47,
            0LL,
            0LL,
            v43,
            v42,
            v45);
        }
        else
        {
          v4 = v48;
        }
      }
    }
LABEL_73:
    if ( v44 )
    {
      if ( v4 )
        v2 = *(_QWORD *)v4;
      v41 = (void *)ReferenceDwmApiPort(v32);
      DwmAsyncNotifyAnimationChange(v41, 1, v2);
    }
    xxxNotifyShellOfWindowSwap(a1, v4);
    return;
  }
  PostShellHookMessagesEx(2u, *(_QWORD *)a1, 0LL);
  PostIAMShellHookMessage(0x12u);
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 25LL) & 8) != 0 )
    PostIAMShellHookMessage(0x12u);
}
