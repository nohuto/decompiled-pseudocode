/*
 * XREFs of ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A22D8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     LockW32Thread @ 0x1C007EAAC (LockW32Thread.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C007FC50 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00A25A8 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C00A80EC (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00A8748 (zzzInputFocusLostWindowEvent.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 */

void __fastcall xxxDeactivate(__int64 a1, int a2, char a3)
{
  __int64 v3; // rdi
  int v4; // r15d
  int v7; // r12d
  int v8; // eax
  __int64 v9; // rcx
  ULONG_PTR v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  tagQ *v19; // rcx
  struct tagWND *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int128 v30; // [rsp+28h] [rbp-59h] BYREF
  __int64 v31; // [rsp+38h] [rbp-49h]
  __int128 v32; // [rsp+40h] [rbp-41h] BYREF
  _QWORD *v33; // [rsp+58h] [rbp-29h] BYREF
  __int64 v34; // [rsp+60h] [rbp-21h]
  __int128 v35; // [rsp+68h] [rbp-19h] BYREF
  __int64 v36; // [rsp+78h] [rbp-9h]
  __int128 v37; // [rsp+80h] [rbp-1h] BYREF
  __int64 v38; // [rsp+90h] [rbp+Fh]
  __int128 v39; // [rsp+98h] [rbp+17h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+27h]

  v3 = *(_QWORD *)(a1 + 432);
  v36 = 0LL;
  v31 = 0LL;
  v40 = 0LL;
  v4 = a2;
  v38 = 0LL;
  v35 = 0LL;
  v7 = 0;
  v30 = 0LL;
  v39 = 0LL;
  v37 = 0LL;
  v32 = 0LL;
  if ( !*(_QWORD *)(v3 + 120) )
    return;
  if ( a1 != gptiCurrent )
  {
    LockW32Thread(a1, (__int64)&v39);
    v3 = *(_QWORD *)(a1 + 432);
  }
  v8 = *(_DWORD *)(a1 + 488);
  if ( (v8 & 0x200) == 0 )
  {
    v7 = 1;
    *(_DWORD *)(a1 + 488) = v8 | 0x200;
  }
  v9 = *(_QWORD *)(v3 + 104);
  if ( v9 )
  {
    *(_QWORD *)&v35 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v35;
    *((_QWORD *)&v35 + 1) = v9;
    HMLockObject(v9);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 104LL));
    ThreadUnlock1(v25, v24, v26);
    SetWakeBit(a1, 2LL);
    v3 = *(_QWORD *)(a1 + 432);
  }
  v10 = *(_QWORD *)(v3 + 120);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    LockW32Thread(v11, (__int64)&v37);
    *(_QWORD *)&v30 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v30;
    *((_QWORD *)&v30 + 1) = v10;
    HMLockObject(v10);
    if ( (a3 & 1) == 0 && !anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v10, 0LL) )
    {
      ThreadUnlock1(v13, v12, v14);
      PopAndFreeW32ThreadLock((__int64)&v37);
      goto LABEL_26;
    }
    xxxSendMessage(v10);
    v15 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v15 + 120) == v10 )
    {
      v34 = *(_QWORD *)(v15 + 120);
      v33 = (_QWORD *)(v15 + 128);
      HMAssignmentLock(&v33, 0LL);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 432) + 120LL);
    }
    SetOrClrWF(0, (struct tagWND *)v10, 0x40u, 1);
    PostIAMShellHookMessage(37LL, *(_QWORD *)v10);
    ThreadUnlock1(v17, v16, v18);
    if ( (*(_BYTE *)(v11 + 488) & 1) != 0 )
      v11 = 0LL;
    *(_QWORD *)&v32 = v11;
    PopAndFreeW32ThreadLock((__int64)&v37);
    v4 = a2;
  }
  else
  {
    v10 = -1LL;
    *(_QWORD *)&v32 = a1;
    v11 = a1;
  }
  if ( v11 )
  {
    HIDWORD(v32) &= 0xFFFFFFFC;
    DWORD2(v32) = v4;
    xxxSendActivateAppMessage((const struct tagAAS *)&v32);
  }
  v19 = *(tagQ **)(a1 + 432);
  if ( *((_QWORD *)v19 + 15) != v10 )
    goto LABEL_19;
  *(_QWORD *)&v30 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v30;
  *((_QWORD *)&v30 + 1) = v10;
  HMLockObject(v10);
  if ( (a3 & 1) != 0 || anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v10, 0LL) )
  {
    xxxSendMessage(v10);
    ThreadUnlock1(v28, v27, v29);
    v19 = *(tagQ **)(a1 + 432);
    if ( *((_QWORD *)v19 + 15) == v10 )
    {
      v34 = *((_QWORD *)v19 + 15);
      v33 = (_QWORD *)((char *)v19 + 128);
      HMAssignmentLock(&v33, 0LL);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 432) + 120LL);
      v19 = *(tagQ **)(a1 + 432);
    }
LABEL_19:
    if ( !*((_QWORD *)v19 + 14) )
      goto LABEL_26;
    v20 = tagQ::UnlockFocusWnd(v19);
    if ( !v20 )
      goto LABEL_26;
    *(_QWORD *)&v30 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v30;
    *((_QWORD *)&v30 + 1) = v20;
    HMLockObject(v20);
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
      zzzInputFocusLostWindowEvent(v20, 8LL);
    xxxSendMessage((ULONG_PTR)v20);
    v23 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v20, 0, 0);
  }
  ThreadUnlock1(v23, v21, v22);
LABEL_26:
  if ( v7 )
    *(_DWORD *)(a1 + 488) &= ~0x200u;
  if ( a1 != gptiCurrent )
    PopAndFreeW32ThreadLock((__int64)&v39);
}
