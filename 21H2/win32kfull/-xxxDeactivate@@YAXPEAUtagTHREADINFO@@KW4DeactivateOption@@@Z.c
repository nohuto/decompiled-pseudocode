/*
 * XREFs of ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0031A40
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     xxxFocusSetInputContext @ 0x1C0034A7C (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C003501C (zzzInputFocusLostWindowEvent.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003A730 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ??0?$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ @ 0x1C003AE7C (--0-$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C003C920 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     LockW32Thread @ 0x1C003DA6C (LockW32Thread.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxDeactivate(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r13d
  char v4; // bl
  int v6; // r12d
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // [rsp+28h] [rbp-49h] BYREF
  __int64 v26; // [rsp+30h] [rbp-41h]
  __int128 v27; // [rsp+38h] [rbp-39h] BYREF
  __int64 v28; // [rsp+48h] [rbp-29h]
  __int128 v29; // [rsp+50h] [rbp-21h] BYREF
  __int64 v30; // [rsp+60h] [rbp-11h]
  __int128 v31; // [rsp+68h] [rbp-9h] BYREF
  __int64 v32; // [rsp+78h] [rbp+7h]
  __int128 v33; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v34; // [rsp+90h] [rbp+1Fh]

  v30 = 0LL;
  v28 = 0LL;
  v3 = a2;
  v34 = 0LL;
  v32 = 0LL;
  v4 = a3;
  v29 = 0LL;
  v6 = 0;
  v27 = 0LL;
  result = *(_QWORD *)(a1 + 432);
  v33 = 0LL;
  v31 = 0LL;
  if ( !*(_QWORD *)(result + 120) )
    return result;
  if ( a1 != gptiCurrent )
    LockW32Thread(a1, &v33);
  v8 = *(_DWORD *)(a1 + 488);
  if ( (v8 & 0x200) == 0 )
  {
    v6 = 1;
    *(_DWORD *)(a1 + 488) = v8 | 0x200;
  }
  v9 = *(_QWORD *)(a1 + 432);
  v10 = *(_QWORD *)(v9 + 104);
  if ( v10 )
  {
    *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v29;
    *((_QWORD *)&v29 + 1) = v10;
    HMLockObject(v10);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 104LL), 31LL, 0LL, 0LL);
    ThreadUnlock1(v23);
    SetWakeBit(a1, 2LL);
    v9 = *(_QWORD *)(a1 + 432);
  }
  v11 = *(_QWORD *)(v9 + 120);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 16);
    LockW32Thread(v12, &v31);
    *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v27;
    *((_QWORD *)&v27 + 1) = v11;
    HMLockObject(v11);
    v13 = (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 0x20) << 16;
    if ( (a3 & 1) == 0 && !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v11) )
    {
      ThreadUnlock1(v14);
      result = PopAndFreeW32ThreadLock(&v31);
      goto LABEL_28;
    }
    xxxSendMessage(v11, 6LL, v13, 0LL);
    v15 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v15 + 120) == v11 )
    {
      v26 = *(_QWORD *)(v15 + 120);
      v25 = v15 + 128;
      HMAssignmentLock(&v25);
      CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>(&v25);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 432) + 120LL);
    }
    SetOrClrWF(0LL, v11, 64LL, 1LL);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x25u, *(_QWORD *)v11);
    ThreadUnlock1(v16);
    v17 = *(_DWORD *)(v12 + 488) & 1;
    v18 = v12;
    if ( v17 )
      v18 = 0LL;
    v25 = v18;
    PopAndFreeW32ThreadLock(&v31);
    v19 = v17 == 0;
    v20 = 0LL;
    v4 = a3;
    if ( v19 )
      v20 = v12;
    v3 = a2;
  }
  else
  {
    v11 = -1LL;
    v25 = a1;
    v20 = a1;
  }
  if ( v20 )
  {
    v26 = v3;
    xxxSendActivateAppMessage((const struct tagAAS *)&v25);
  }
  result = *(_QWORD *)(a1 + 432);
  if ( *(_QWORD *)(result + 120) != v11 )
    goto LABEL_21;
  *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v27;
  *((_QWORD *)&v27 + 1) = v11;
  HMLockObject(v11);
  if ( (v4 & 1) != 0 || (unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v11) )
  {
    xxxSendMessage(v11, 6LL, 0LL, 0LL);
    ThreadUnlock1(v24);
    result = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(result + 120) == v11 )
    {
      v26 = *(_QWORD *)(result + 120);
      v25 = result + 128;
      HMAssignmentLock(&v25);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 432) + 120LL);
      result = *(_QWORD *)(a1 + 432);
    }
LABEL_21:
    if ( !*(_QWORD *)(result + 112) )
      goto LABEL_28;
    result = HMAssignmentUnlock(result + 112);
    v21 = result;
    if ( !result )
      goto LABEL_28;
    *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v27;
    *((_QWORD *)&v27 + 1) = result;
    HMLockObject(result);
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
      zzzInputFocusLostWindowEvent(v21, 8LL);
    xxxSendMessage(v21, 8LL, 0LL, 0LL);
    v22 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v21, 0LL, 0LL);
  }
  result = ThreadUnlock1(v22);
LABEL_28:
  if ( v6 )
    *(_DWORD *)(a1 + 488) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return PopAndFreeW32ThreadLock(&v33);
  return result;
}
