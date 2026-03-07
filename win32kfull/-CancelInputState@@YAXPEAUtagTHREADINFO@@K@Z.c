void __fastcall CancelInputState(struct tagTHREADINFO *a1, int a2)
{
  int v4; // edi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  tagQ *v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // rdi
  tagQ *v11; // rcx
  PETHREAD *v12; // [rsp+30h] [rbp-30h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+3Ch] [rbp-24h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  char v17; // [rsp+88h] [rbp+28h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
  if ( !a2 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 128LL);
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v10;
    if ( v10 )
      HMLockObject(v10);
    QueueNotifyMessage(v10, 134, 0, 0, 0);
    QueueNotifyMessage(v10, 6, (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 0x20) << 16, 0, 0);
    v11 = (tagQ *)*((_QWORD *)a1 + 54);
    if ( v10 == *((_QWORD *)v11 + 16) )
      tagQ::SetActiveWindow(v11, 0LL);
    v12 = *(PETHREAD **)(v10 + 16);
    ThreadId = (unsigned int)PsGetThreadId(*v12);
    v14 = 2;
    xxxSendActivateAppMessage((const struct tagAAS *)&v12);
    goto LABEL_21;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v9 = *(struct tagWND **)(*((_QWORD *)a1 + 54) + 120LL);
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v9;
    if ( v9 )
      HMLockObject(v9);
    QueueNotifyMessage((_DWORD)v9, 8, 0, 0, 0);
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v9, 0, 1);
    v8 = (tagQ *)*((_QWORD *)a1 + 54);
    if ( v9 == *((struct tagWND **)v8 + 15) )
    {
      tagQ::UnlockFocusWnd(v8);
      if ( v9 )
      {
        v8 = (tagQ *)gpqForeground;
        if ( *((_QWORD *)a1 + 54) == gpqForeground )
          zzzInputFocusLostWindowEvent(0LL, 5u);
      }
    }
    goto LABEL_21;
  }
  if ( v4 == 1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 54) + 396LL) &= ~0x100000u;
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 112LL);
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v5;
    if ( v5 )
      HMLockObject(v5);
    QueueNotifyMessage(v5, 31, 0, 0, 0);
    v8 = (tagQ *)*((_QWORD *)a1 + 54);
    if ( v5 == *((_QWORD *)v8 + 14) )
      UnlockCaptureWindow((__int64)v8);
LABEL_21:
    ThreadUnlock1(v8, v6, v7);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17);
}
