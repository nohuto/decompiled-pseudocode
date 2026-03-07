__int64 __fastcall RunContext(_QWORD *Entry)
{
  char v1; // bp
  _QWORD *v2; // rdi
  _QWORD *v4; // rax
  char v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // esi
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  _QWORD **v14; // r14
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rcx

  v1 = 0;
  v2 = Entry + 49;
  if ( (_QWORD *)*v2 == v2 )
  {
    v4 = (_QWORD *)qword_1C006E888;
    if ( *(__int64 **)qword_1C006E888 != &RunningContextListHead )
      goto LABEL_54;
    *v2 = &RunningContextListHead;
    v5 = 0;
    Entry[50] = v4;
    *v4 = v2;
    qword_1C006E888 = (__int64)(Entry + 49);
  }
  else
  {
    v5 = 1;
  }
  Entry[51] = KeGetCurrentThread();
  v6 = *((unsigned int *)Entry + 16);
  if ( (v6 & 0x200) != 0 )
  {
    gReadyQueue |= 0x200u;
    v6 = *((unsigned int *)Entry + 16);
  }
  v7 = Entry[13];
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 32);
  else
    v8 = Entry[9];
  LogSchedEvent(1381322307, (__int64)Entry, (__int64)Entry, v8, v6);
  do
  {
    v9 = 0;
    *((_DWORD *)Entry + 16) = Entry[8] & 0xFFFFFFE7 | 0x10;
    KeReleaseSpinLock(&SpinLock, NewIrql);
    do
    {
      if ( !Entry[52] )
        break;
      if ( (gDebugger & 0x1000) != 0 )
      {
        ConPrintf("\nProcess AML Debugger Request.\n");
        _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
        AMLIDebugger();
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(Entry[52] + 24LL))(Entry, Entry[52], v9);
      v9 = v10;
      if ( v10 == 32772 )
        break;
    }
    while ( v10 != 0x8000 );
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v11 = *((_DWORD *)Entry + 16);
    if ( (v11 & 0x80u) == 0 || v9 != 0x8000 )
    {
      v11 &= ~0x10u;
      *((_DWORD *)Entry + 16) = v11;
    }
  }
  while ( (v11 & 8) != 0 );
  if ( v9 == 32772 )
  {
    *((_DWORD *)Entry + 16) = v11 | 0x20;
  }
  else if ( v9 == 0x8000 )
  {
    if ( !Entry[13] )
      *((_DWORD *)Entry + 16) = v11 & 0xFFFFFF7F;
    v9 = 0;
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, NewIrql);
    if ( !v9 )
    {
      v12 = Entry[22];
      if ( v12 )
        v9 = DupObjData(gpheapGlobal, v12, (__int64)(Entry + 16));
    }
    v13 = *((_DWORD *)Entry + 16);
    if ( (v13 & 0x20) != 0 )
    {
      AsyncCallBack(Entry, v9);
      v13 = *((_DWORD *)Entry + 16);
      if ( (v13 & 0x100) != 0 )
        v9 = 32772;
    }
    if ( (v13 & 0x200) != 0 )
      gReadyQueue &= ~0x200u;
    v14 = (_QWORD **)(Entry + 6);
    while ( 1 )
    {
      v15 = *v14;
      if ( *v14 == v14 )
        break;
      if ( *((_DWORD *)v15 - 6) == 1 )
      {
        ReleaseASLMutex(Entry, *(v15 - 1), 0LL);
      }
      else
      {
        if ( (_QWORD **)v15[1] != v14 )
          goto LABEL_54;
        v16 = (_QWORD *)*v15;
        if ( *(_QWORD **)(*v15 + 8LL) != v15 )
          goto LABEL_54;
        *v14 = v16;
        v16[1] = v14;
        HeapFree((__int64)(v15 - 3));
      }
    }
    v1 = 1;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  }
  if ( !v5 )
  {
    v17 = (_QWORD *)*v2;
    if ( *(_QWORD **)(*v2 + 8LL) == v2 )
    {
      v18 = (_QWORD *)v2[1];
      if ( (_QWORD *)*v18 == v2 )
      {
        *v18 = v17;
        v17[1] = v18;
        Entry[51] = 0LL;
        v2[1] = v2;
        *v2 = v2;
        goto LABEL_47;
      }
    }
LABEL_54:
    __fastfail(3u);
  }
LABEL_47:
  if ( v1 )
    FreeContext((char *)Entry);
  if ( (gReadyQueue & 4) != 0 && glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
  {
    gReadyQueue = gReadyQueue & 0xFFFFFFF3 | 8;
    if ( (__int64 *)qword_1C0070080 != &qword_1C0070080 )
    {
      InvokePauseCallbacks();
      LogSchedEvent(1346454338, 0LL, (__int64)Entry, (int)v9, 0LL);
    }
  }
  LogSchedEvent(1381322273, 0LL, (__int64)Entry, (int)v9, 0LL);
  return v9;
}
