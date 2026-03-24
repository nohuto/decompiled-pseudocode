/*
 * XREFs of ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E00E0
 * Callers:
 *     zzzAttachToQueue @ 0x1C0011EF4 (zzzAttachToQueue.c)
 * Callees:
 *     xxxFocusSetInputContext @ 0x1C0034A7C (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C003501C (zzzInputFocusLostWindowEvent.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C003C920 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F59B8 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     UnlockCaptureWindow @ 0x1C010B2B0 (UnlockCaptureWindow.c)
 */

void __fastcall CancelInputState(struct tagTHREADINFO *a1, int a2)
{
  int v4; // edi
  struct tagWND *v5; // rdi
  struct tagWND **v6; // rcx
  struct tagWND *v7; // rdi
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  PETHREAD *v10; // [rsp+30h] [rbp-30h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-28h]
  int v12; // [rsp+3Ch] [rbp-24h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  char v15; // [rsp+90h] [rbp+30h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  if ( !a2 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 120LL);
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v8;
    if ( v8 )
      HMLockObject(v8);
    QueueNotifyTransformableMessage((struct tagWND *)v8, 0x86u, 0LL, 0LL, 0, 0);
    QueueNotifyTransformableMessage(
      (struct tagWND *)v8,
      6u,
      (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v8 + 40) + 31LL) & 0x20) << 16,
      0LL,
      0,
      0);
    v9 = (_QWORD *)(*((_QWORD *)a1 + 54) + 120LL);
    if ( v8 == *v9 )
      HMAssignmentUnlock(v9);
    v10 = *(PETHREAD **)(v8 + 16);
    ThreadId = (unsigned int)PsGetThreadId(*v10);
    v12 = 2;
    xxxSendActivateAppMessage((const struct tagAAS *)&v10);
    goto LABEL_21;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v7 = *(struct tagWND **)(*((_QWORD *)a1 + 54) + 112LL);
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v7;
    if ( v7 )
      HMLockObject(v7);
    QueueNotifyTransformableMessage(v7, 8u, 0LL, 0LL, 0, 0);
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext((__int64 *)v7, 0, 1);
    v6 = (struct tagWND **)(*((_QWORD *)a1 + 54) + 112LL);
    if ( v7 == *v6 )
    {
      HMAssignmentUnlock(v6);
      if ( v7 )
      {
        v6 = (struct tagWND **)gpqForeground;
        if ( *((_QWORD *)a1 + 54) == gpqForeground )
          zzzInputFocusLostWindowEvent(0LL);
      }
    }
    goto LABEL_21;
  }
  if ( v4 == 1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 54) + 388LL) &= ~0x100000u;
    v5 = *(struct tagWND **)(*((_QWORD *)a1 + 54) + 104LL);
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v5;
    if ( v5 )
      HMLockObject(v5);
    QueueNotifyTransformableMessage(v5, 0x1Fu, 0LL, 0LL, 0, 0);
    v6 = (struct tagWND **)*((_QWORD *)a1 + 54);
    if ( v5 == v6[13] )
      UnlockCaptureWindow((__int64)v6);
LABEL_21:
    ThreadUnlock1(v6);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
}
