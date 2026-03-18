/*
 * XREFs of ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C004AD48
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 * Callees:
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C004BB10 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     LockW32Thread @ 0x1C0061F84 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C0066A48 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0066CF0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     PostIAMShellHookMessage @ 0x1C00D34E8 (PostIAMShellHookMessage.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A930 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

struct tagWND *__fastcall xxxDeactivate(__int64 a1, int a2, char a3)
{
  __int64 v4; // rcx
  int v5; // r12d
  struct tagWND *result; // rax
  int v8; // r13d
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  int v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  tagQ *v31; // rcx
  struct tagWND *v32; // rdi
  __int128 v33; // [rsp+28h] [rbp-59h] BYREF
  __int64 v34; // [rsp+38h] [rbp-49h]
  __int128 v35; // [rsp+40h] [rbp-41h] BYREF
  char *v36; // [rsp+58h] [rbp-29h] BYREF
  __int64 v37; // [rsp+60h] [rbp-21h]
  __int128 v38; // [rsp+68h] [rbp-19h] BYREF
  __int64 v39; // [rsp+78h] [rbp-9h]
  __int128 v40; // [rsp+80h] [rbp-1h] BYREF
  __int64 v41; // [rsp+90h] [rbp+Fh]
  __int128 v42; // [rsp+98h] [rbp+17h] BYREF
  __int64 v43; // [rsp+A8h] [rbp+27h]

  v39 = 0LL;
  v34 = 0LL;
  v4 = *(_QWORD *)(a1 + 432);
  v5 = a2;
  v43 = 0LL;
  v41 = 0LL;
  result = (struct tagWND *)gptiCurrent;
  v8 = 0;
  v38 = 0LL;
  v33 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  if ( !*(_QWORD *)(v4 + 128) )
    return result;
  if ( a1 != gptiCurrent )
  {
    LockW32Thread(a1, &v42);
    v4 = *(_QWORD *)(a1 + 432);
  }
  v9 = *(_DWORD *)(a1 + 488);
  if ( (v9 & 0x200) == 0 )
  {
    v8 = 1;
    *(_DWORD *)(a1 + 488) = v9 | 0x200;
  }
  v10 = *(_QWORD *)(v4 + 112);
  if ( v10 )
  {
    *(_QWORD *)&v38 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v38;
    *((_QWORD *)&v38 + 1) = v10;
    HMLockObject(v10);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 112LL), 31LL, 0LL, 0LL);
    ThreadUnlock1(v12, v11, v13);
    SetWakeBit(a1, 2LL);
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 128LL);
  if ( !v14 )
  {
    v14 = -1LL;
    *(_QWORD *)&v35 = a1;
    v17 = a3 & 1;
    v15 = a1;
    goto LABEL_18;
  }
  v15 = *(_QWORD *)(v14 + 16);
  LockW32Thread(v15, &v40);
  *(_QWORD *)&v33 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v33;
  *((_QWORD *)&v33 + 1) = v14;
  HMLockObject(v14);
  v16 = (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v14 + 40) + 31LL) & 0x20) << 16;
  v17 = a3 & 1;
  if ( v17 || (unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v14) )
  {
    xxxSendMessage(v14, 6LL, v16, 0LL);
    v21 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v21 + 128) == v14 )
    {
      v37 = *(_QWORD *)(v21 + 128);
      v36 = (char *)(v21 + 136);
      HMAssignmentLock(&v36, 0LL);
      tagQ::SetActiveWindow(*(tagQ **)(a1 + 432), 0LL);
    }
    SetOrClrWF(0LL, v14, 64LL, 1LL);
    PostIAMShellHookMessage(37LL, *(_QWORD *)v14);
    ThreadUnlock1(v23, v22, v24);
    if ( (*(_BYTE *)(v15 + 488) & 1) != 0 )
      v15 = 0LL;
    *(_QWORD *)&v35 = v15;
    PopAndFreeW32ThreadLock(&v40);
    v5 = a2;
LABEL_18:
    if ( v15 )
    {
      HIDWORD(v35) &= 0xFFFFFFFC;
      DWORD2(v35) = v5;
      xxxSendActivateAppMessage((const struct tagAAS *)&v35);
    }
    result = *(struct tagWND **)(a1 + 432);
    if ( *((_QWORD *)result + 16) == v14 )
    {
      *(_QWORD *)&v33 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v33;
      *((_QWORD *)&v33 + 1) = v14;
      HMLockObject(v14);
      if ( !v17 && !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v14) )
      {
LABEL_33:
        result = (struct tagWND *)ThreadUnlock1(v26, v25, v27);
        goto LABEL_34;
      }
      xxxSendMessage(v14, 6LL, 0LL, 0LL);
      ThreadUnlock1(v29, v28, v30);
      result = *(struct tagWND **)(a1 + 432);
      if ( *((_QWORD *)result + 16) == v14 )
      {
        v37 = *((_QWORD *)result + 16);
        v36 = (char *)result + 136;
        HMAssignmentLock(&v36, 0LL);
        result = tagQ::SetActiveWindow(*(tagQ **)(a1 + 432), 0LL);
      }
    }
    v31 = *(tagQ **)(a1 + 432);
    if ( !*((_QWORD *)v31 + 15) )
      goto LABEL_34;
    result = tagQ::UnlockFocusWnd(v31);
    v32 = result;
    if ( !result )
      goto LABEL_34;
    *(_QWORD *)&v33 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v33;
    *((_QWORD *)&v33 + 1) = result;
    HMLockObject(result);
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
      zzzInputFocusLostWindowEventImpl(v32, gpqForeground, 8LL);
    xxxSendMessage(v32, 8LL, 0LL, 0LL);
    v26 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v32, 0, 0);
    goto LABEL_33;
  }
  ThreadUnlock1(v19, v18, v20);
  result = (struct tagWND *)PopAndFreeW32ThreadLock(&v40);
LABEL_34:
  if ( v8 )
    *(_DWORD *)(a1 + 488) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return (struct tagWND *)PopAndFreeW32ThreadLock(&v42);
  return result;
}
