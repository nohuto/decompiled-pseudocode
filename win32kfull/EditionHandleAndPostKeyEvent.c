__int64 __fastcall EditionHandleAndPostKeyEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        unsigned __int16 a9,
        unsigned __int16 a10,
        struct tagINPUT_MESSAGE_SOURCE *a11,
        unsigned int a12,
        void *a13,
        unsigned __int64 a14,
        unsigned __int16 a15,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a16)
{
  int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdi
  struct tagTHREADINFO **v21; // rdi
  __int64 v22; // rsi
  int v23; // r14d
  bool v24; // zf
  __int64 v25; // rcx
  __int64 KeyboardDelegationTargetQ; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct tagTHREADINFO **v29; // rcx
  unsigned __int16 v30; // r12
  unsigned int v31; // edx
  unsigned __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  char v37; // al
  struct tagINPUT_MESSAGE_SOURCE *v38; // r13
  struct tagQ *AppcommandQueue; // rax
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v41; // rax
  int v42; // ecx
  struct tagQ *v44; // rax
  unsigned __int16 v45; // ax
  __int64 v46; // rax
  int KeyboardInputRoutingPolicy; // eax
  bool v48; // dl
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // r8
  int v53; // [rsp+88h] [rbp-39h] BYREF
  int v54; // [rsp+8Ch] [rbp-35h] BYREF
  unsigned int v55; // [rsp+90h] [rbp-31h]
  int v56; // [rsp+94h] [rbp-2Dh]
  __int64 v57; // [rsp+98h] [rbp-29h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-21h] BYREF
  struct tagTHREADINFO **v59; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v60; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-1h]
  int v62; // [rsp+F8h] [rbp+37h]

  v62 = a1;
  v17 = a1;
  if ( !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(a1) + 58) + 56LL) )
  {
    v19 = *((_QWORD *)PtiCurrentShared(v18) + 58);
    if ( !*(_QWORD *)(v19 + 48)
      && !a4
      && (*(_BYTE *)(SGDGetUserSessionState(v19) + 13996) & 0x10) != 0
      && (a5 == 9 && (a6 & 1) == 0 || a5 == 27 && (a6 & 2) == 0) )
    {
      v61 = 0LL;
      v60 = 0LL;
      v20 = gpqForeground;
      if ( !gpqForeground )
        v20 = *(_QWORD *)(gptiRit + 432LL);
      ++*(_DWORD *)(v20 + 400);
      PushW32ThreadLock(v20, &v60, UnlockQueue);
      xxxNextWindow(v20, a5);
      PopAndFreeAlwaysW32ThreadLock((__int64)&v60);
      return 0LL;
    }
  }
  v21 = (struct tagTHREADINFO **)gpqForeground;
  if ( !gpqForeground )
  {
    if ( !a4 && (*gpsi & 0x6000) != 0 && (unsigned __int8)(a5 + 83) <= 6u )
      PostShellHookMessages(12LL, (unsigned __int64)(unsigned __int16)(a5 - 165) << 16);
    return 0LL;
  }
  v22 = *(_QWORD *)(gpqForeground + 32LL);
  v23 = a5;
  v55 = a5;
  v24 = (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() == 0;
  v25 = *(_QWORD *)(gpqForeground + 104LL);
  if ( v24 )
  {
    if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(v25) )
    {
      v34 = PtiKbdFromQ(gpqForeground);
      if ( (unsigned int)HasHidTable(v34)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 824LL) + 100LL) & 0x20) != 0 )
      {
        v36 = PtiKbdFromQ(v35);
        if ( (unsigned int)HasHidTable(v36) )
        {
          v29 = (struct tagTHREADINFO **)gpqForeground;
          goto LABEL_21;
        }
        return 1LL;
      }
      v23 = a5;
    }
  }
  else
  {
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v25) )
    {
      KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
      if ( KeyboardDelegationTargetQ )
      {
        v22 = *(_QWORD *)(KeyboardDelegationTargetQ + 32);
        v21 = (struct tagTHREADINFO **)KeyboardDelegationTargetQ;
      }
    }
    v27 = PtiKbdFromQ(v21);
    if ( (unsigned int)HasHidTable(v27)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(v21) + 424) + 824LL) + 100LL) & 0x20) != 0 )
    {
      v28 = PtiKbdFromQ(v21);
      if ( (unsigned int)HasHidTable(v28) )
      {
        v29 = v21;
LABEL_21:
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(v29) + 424) + 824LL) + 100LL) & 0x400) == 0
          || (unsigned __int8)(a5 + 90) > 0x11u )
        {
          return 1LL;
        }
        goto LABEL_23;
      }
      return 1LL;
    }
  }
  if ( a5 != 0xE7 || (a8 & 0x1000) == 0 )
  {
LABEL_23:
    v30 = a7;
    goto LABEL_24;
  }
  v55 = (a7 << 16) | v23;
  v30 = 0;
LABEL_24:
  v56 = ((a9 | v30) << 16) | 1;
  if ( !v22 )
    goto LABEL_50;
  if ( *(_DWORD *)(v22 + 24) != a15
    || ((a15 - 256) & 0xFFFB) != 0
    || *(_QWORD *)(v22 + 32) != v55
    || (unsigned int)IsProcessedByInputService(v22)
    || (v32 = (unsigned __int64)v31 >> 16, *(_WORD *)(v22 + 42) != HIWORD(v31)) )
  {
    v17 = v62;
LABEL_50:
    if ( (unsigned __int8)(a5 + 90) > 0x11u )
    {
      v38 = a11;
      goto LABEL_74;
    }
    if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
    {
      if ( !a4 && v21 )
      {
        if ( (unsigned __int8)(a5 + 83) > 2u )
        {
          v38 = a11;
          PostEventMessageEx(v21[13], (struct tagQ *)v21, 0xFu, 0LL, 0, 0LL, a5, a11);
LABEL_59:
          v41 = PtiKbdFromQ(v21);
          if ( !(unsigned int)HasHidTable(v41) )
            goto LABEL_74;
          v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(v21) + 424) + 824LL) + 100LL);
          goto LABEL_61;
        }
        AppcommandQueue = GetAppcommandQueue();
        if ( AppcommandQueue )
        {
          MouseKeyFlags = GetMouseKeyFlags(AppcommandQueue);
          PostShellHookMessages(12LL, ((unsigned __int64)(unsigned __int16)(a5 - 165) << 16) | MouseKeyFlags);
        }
      }
      v38 = a11;
      goto LABEL_59;
    }
    if ( !a4 && gpqForeground )
    {
      if ( (unsigned __int8)(a5 + 83) > 2u )
      {
        v38 = a11;
        PostEventMessageEx(*(struct tagTHREADINFO **)(gpqForeground + 104LL), gpqForeground, 0xFu, 0LL, 0, 0LL, a5, a11);
        goto LABEL_70;
      }
      v44 = GetAppcommandQueue();
      if ( v44 )
      {
        v45 = GetMouseKeyFlags(v44);
        PostShellHookMessages(12LL, ((unsigned __int64)(unsigned __int16)(a5 - 165) << 16) | v45);
      }
    }
    v38 = a11;
LABEL_70:
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL)) )
      goto LABEL_74;
    v46 = PtiKbdFromQ(gpqForeground);
    if ( !(unsigned int)HasHidTable(v46) )
      goto LABEL_74;
    v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 824LL) + 100LL);
LABEL_61:
    if ( (v42 & 0x20) != 0 )
      return 1LL;
LABEL_74:
    if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
    {
      KeyboardInputRoutingPolicy = GetKeyboardInputRoutingPolicy();
      v48 = 1;
      if ( KeyboardInputRoutingPolicy != 1 )
        goto LABEL_81;
    }
    else
    {
      if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL))
        && (unsigned int)GetKeyboardInputRoutingPolicy() != 1 )
      {
LABEL_81:
        if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
        {
          PostPendingMouseMove(v21, v49, v50);
          v59 = v21;
          v58 = 0LL;
          v57 = 0LL;
          v54 = 0;
          v53 = 0;
          if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                               (unsigned int)&v59,
                               (unsigned int)&v58,
                               (unsigned int)&v57,
                               a15,
                               (__int64)v38,
                               (__int64)&v54,
                               (__int64)&v53) )
            PostInputMessage((struct tagQ *)v21, 0LL, a15, v55, v56, a12, 0LL, a14, 0, v38, a13, 0LL, v54, v53, v57);
        }
        else if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL)) )
        {
          PostPendingMouseMove(gpqForeground, v51, v52);
          v59 = 0LL;
          v58 = gpqForeground;
          v57 = 0LL;
          v53 = 0;
          v54 = 0;
          if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                               (unsigned int)&v58,
                               (unsigned int)&v59,
                               (unsigned int)&v57,
                               a15,
                               (__int64)a11,
                               (__int64)&v53,
                               (__int64)&v54) )
            PostInputMessage(gpqForeground, 0LL, a15, v55, v56, a12, 0LL, a14, 0, a11, a13, 0LL, v53, v54, v57);
        }
        return 0LL;
      }
      v48 = (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL)) == 0;
    }
    CKeyboardProcessor::ForwardInputToISM(v17 != 0, v30, a8, a10, a13, a12, v48, a14, a16);
    goto LABEL_81;
  }
  if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
  {
    if ( (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
      CKeyboardProcessor::ForwardInputToISM(v62 != 0, v30, a8, a10, a13, a12, 1, a14, a16);
    v33 = (__int64)v21;
    *(_QWORD *)(v22 + 40) = (unsigned __int16)(*(_WORD *)(v22 + 40) + 1) | ((unsigned __int16)v32 << 16);
  }
  else
  {
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL))
      || (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
    {
      v37 = IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL));
      CKeyboardProcessor::ForwardInputToISM(v62 != 0, v30, a8, a10, a13, a12, v37 == 0, a14, a16);
    }
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104LL)) )
      return 0LL;
    *(_QWORD *)(v22 + 40) = (unsigned __int16)(*(_WORD *)(v22 + 40) + 1) | ((unsigned __int16)v32 << 16);
    v33 = gpqForeground;
  }
  WakeSomeone(v33, 0LL, a15, (struct tagQMSG *)v22);
  return 0LL;
}
