/*
 * XREFs of ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C009BD38
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C009AC64 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C009BA70 (zzzInputFocusLostWindowEvent.c)
 *     PostIAMShellHookMessage @ 0x1C009C174 (PostIAMShellHookMessage.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C009DAB4 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C009E068 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     LockW32Thread @ 0x1C00A1BCC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
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
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  tagQ *v30; // rcx
  struct tagWND *v31; // rdi
  __int128 v32; // [rsp+28h] [rbp-59h] BYREF
  __int64 v33; // [rsp+38h] [rbp-49h]
  __int128 v34; // [rsp+40h] [rbp-41h] BYREF
  char *v35; // [rsp+58h] [rbp-29h] BYREF
  __int64 v36; // [rsp+60h] [rbp-21h]
  __int128 v37; // [rsp+68h] [rbp-19h] BYREF
  __int64 v38; // [rsp+78h] [rbp-9h]
  __int128 v39; // [rsp+80h] [rbp-1h] BYREF
  __int64 v40; // [rsp+90h] [rbp+Fh]
  __int128 v41; // [rsp+98h] [rbp+17h] BYREF
  __int64 v42; // [rsp+A8h] [rbp+27h]

  v38 = 0LL;
  v33 = 0LL;
  v4 = *(_QWORD *)(a1 + 432);
  v5 = a2;
  v42 = 0LL;
  v40 = 0LL;
  result = (struct tagWND *)gptiCurrent;
  v8 = 0;
  v37 = 0LL;
  v32 = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  v34 = 0LL;
  if ( !*(_QWORD *)(v4 + 128) )
    return result;
  if ( a1 != gptiCurrent )
  {
    LockW32Thread(a1, &v41);
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
    *(_QWORD *)&v37 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v37;
    *((_QWORD *)&v37 + 1) = v10;
    HMLockObject(v10);
    xxxSendMessage(*(struct tagWND **)(*(_QWORD *)(a1 + 432) + 112LL), 0x1Fu);
    ThreadUnlock1(v12, v11, v13);
    SetWakeBit(a1, 2u);
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 128LL);
  if ( !v14 )
  {
    v14 = -1LL;
    *(_QWORD *)&v34 = a1;
    v16 = a3 & 1;
    v15 = a1;
    goto LABEL_18;
  }
  v15 = *(_QWORD *)(v14 + 16);
  LockW32Thread(v15, &v39);
  *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v32;
  *((_QWORD *)&v32 + 1) = v14;
  HMLockObject(v14);
  v16 = a3 & 1;
  if ( v16 || (unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v14) )
  {
    xxxSendMessage((struct tagWND *)v14, 6u);
    v20 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v20 + 128) == v14 )
    {
      v36 = *(_QWORD *)(v20 + 128);
      v35 = (char *)(v20 + 136);
      HMAssignmentLock(&v35, 0LL);
      tagQ::SetActiveWindow(*(tagQ **)(a1 + 432), 0LL);
    }
    SetOrClrWF(0, (__int64 *)v14, 0x40u, 1);
    PostIAMShellHookMessage(37LL, *(_QWORD *)v14);
    ThreadUnlock1(v22, v21, v23);
    if ( (*(_BYTE *)(v15 + 488) & 1) != 0 )
      v15 = 0LL;
    *(_QWORD *)&v34 = v15;
    PopAndFreeW32ThreadLock(&v39);
    v5 = a2;
LABEL_18:
    if ( v15 )
    {
      HIDWORD(v34) &= 0xFFFFFFFC;
      DWORD2(v34) = v5;
      xxxSendActivateAppMessage((const struct tagAAS *)&v34);
    }
    result = *(struct tagWND **)(a1 + 432);
    if ( *((_QWORD *)result + 16) == v14 )
    {
      *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v32;
      *((_QWORD *)&v32 + 1) = v14;
      HMLockObject(v14);
      if ( !v16 && !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v14) )
      {
LABEL_33:
        result = (struct tagWND *)ThreadUnlock1(v25, v24, v26);
        goto LABEL_34;
      }
      xxxSendMessage((struct tagWND *)v14, 6u);
      ThreadUnlock1(v28, v27, v29);
      result = *(struct tagWND **)(a1 + 432);
      if ( *((_QWORD *)result + 16) == v14 )
      {
        v36 = *((_QWORD *)result + 16);
        v35 = (char *)result + 136;
        HMAssignmentLock(&v35, 0LL);
        result = tagQ::SetActiveWindow(*(tagQ **)(a1 + 432), 0LL);
      }
    }
    v30 = *(tagQ **)(a1 + 432);
    if ( !*((_QWORD *)v30 + 15) )
      goto LABEL_34;
    result = tagQ::UnlockFocusWnd(v30);
    v31 = result;
    if ( !result )
      goto LABEL_34;
    *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v32;
    *((_QWORD *)&v32 + 1) = result;
    HMLockObject(result);
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
      zzzInputFocusLostWindowEvent(v31, 8u);
    xxxSendMessage(v31, 8u);
    v25 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v31, 0, 0);
    goto LABEL_33;
  }
  ThreadUnlock1(v18, v17, v19);
  result = (struct tagWND *)PopAndFreeW32ThreadLock(&v39);
LABEL_34:
  if ( v8 )
    *(_DWORD *)(a1 + 488) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return (struct tagWND *)PopAndFreeW32ThreadLock(&v41);
  return result;
}
