/*
 * XREFs of ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DB90C
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00A898C (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00A25A8 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C00A80EC (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00A8748 (zzzInputFocusLostWindowEvent.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00C9AD0 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     UnlockCaptureWindow @ 0x1C0102730 (UnlockCaptureWindow.c)
 */

void __fastcall CancelInputState(struct tagTHREADINFO *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // edi
  struct tagWND *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  tagQ *v10; // rcx
  struct tagWND *v11; // rdi
  struct tagWND *v12; // rdi
  struct tagWND **v13; // rcx
  PETHREAD *v14; // [rsp+30h] [rbp-30h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+3Ch] [rbp-24h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  char v19; // [rsp+88h] [rbp+28h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v19);
  if ( !a2 )
  {
    v12 = *(struct tagWND **)(*((_QWORD *)a1 + 54) + 120LL);
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v12;
    if ( v12 )
      HMLockObject(v12);
    QueueNotifyTransformableMessage(v12, 0x86u, 0LL, 0LL, 0, 0);
    QueueNotifyTransformableMessage(
      v12,
      6u,
      (unsigned __int64)(*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 0x20) << 16,
      0LL,
      0,
      0);
    v13 = (struct tagWND **)(*((_QWORD *)a1 + 54) + 120LL);
    if ( v12 == *v13 )
      HMAssignmentUnlock(v13);
    v14 = (PETHREAD *)*((_QWORD *)v12 + 2);
    ThreadId = (unsigned int)PsGetThreadId(*v14);
    v16 = 2;
    xxxSendActivateAppMessage((const struct tagAAS *)&v14);
    goto LABEL_21;
  }
  v6 = a2 - 1;
  if ( !v6 )
  {
    v11 = *(struct tagWND **)(*((_QWORD *)a1 + 54) + 112LL);
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v11;
    if ( v11 )
      HMLockObject(v11);
    QueueNotifyTransformableMessage(v11, 8u, 0LL, 0LL, 0, 0);
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v11, 0, 1);
    v10 = (tagQ *)*((_QWORD *)a1 + 54);
    if ( v11 == *((struct tagWND **)v10 + 14) )
    {
      tagQ::UnlockFocusWnd(v10);
      if ( v11 )
      {
        v10 = (tagQ *)gpqForeground;
        if ( *((_QWORD *)a1 + 54) == gpqForeground )
          zzzInputFocusLostWindowEvent(0LL, 5u);
      }
    }
    goto LABEL_21;
  }
  if ( v6 == 1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 54) + 388LL) &= ~0x100000u;
    v7 = *(struct tagWND **)(*((_QWORD *)a1 + 54) + 104LL);
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v7;
    if ( v7 )
      HMLockObject(v7);
    QueueNotifyTransformableMessage(v7, 0x1Fu, 0LL, 0LL, 0, 0);
    v10 = (tagQ *)*((_QWORD *)a1 + 54);
    if ( v7 == *((struct tagWND **)v10 + 13) )
      UnlockCaptureWindow((__int64)v10);
LABEL_21:
    ThreadUnlock1(v10, v8, v9);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v19, v4, v5);
}
