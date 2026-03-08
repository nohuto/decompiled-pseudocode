/*
 * XREFs of InsertReadyQueue @ 0x1C00057E4
 * Callers:
 *     RestartContext @ 0x1C00512E8 (RestartContext.c)
 *     RestartCtxtPassive @ 0x1C0051490 (RestartCtxtPassive.c)
 *     DequeueAndReadyContext @ 0x1C00548A4 (DequeueAndReadyContext.c)
 * Callees:
 *     OSQueueWorkItem @ 0x1C004774C (OSQueueWorkItem.c)
 *     AMLIDebugger @ 0x1C004D630 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     LogSchedEvent @ 0x1C004E3AC (LogSchedEvent.c)
 *     RunContext @ 0x1C0053F34 (RunContext.c)
 *     AsyncCallBack @ 0x1C00543D8 (AsyncCallBack.c)
 */

__int64 __fastcall InsertReadyQueue(char *Entry, char a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // r9
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // eax
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx

  v2 = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v5 = *((_QWORD *)Entry + 13);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 32);
  else
    v6 = *((_QWORD *)Entry + 9);
  LogSchedEvent(1229869905, (_DWORD)Entry, (_DWORD)Entry, v6, *((_QWORD *)Entry + 15));
  v7 = *((_DWORD *)Entry + 16);
  if ( (v7 & 1) != 0 )
  {
    *((_DWORD *)Entry + 16) = v7 & 0xFFFFFFFE;
    if ( !KeCancelTimer((PKTIMER)Entry + 3) )
      *((_DWORD *)Entry + 16) |= 2u;
  }
  v8 = *((_DWORD *)Entry + 16);
  *((_DWORD *)Entry + 16) = v8 | 8;
  if ( (v8 & 2) == 0 && (v8 & 0x90) != 0x10 )
  {
    if ( a2 )
    {
      KeReleaseSpinLock(&SpinLock, NewIrql);
      AsyncCallBack(Entry, 32771LL);
      NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
      return v2;
    }
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( (gReadyQueue & 8) == 0 )
        return (unsigned int)RunContext(Entry);
    }
    else
    {
      if ( (v8 & 0x80u) != 0 && *((struct _KTHREAD **)Entry + 51) == KeGetCurrentThread() )
      {
        v9 = *((_QWORD *)Entry + 13);
        if ( v9 )
          v10 = *(_QWORD *)(v9 + 32);
        else
          v10 = *((_QWORD *)Entry + 9);
        LogSchedEvent(1313166164, (_DWORD)Entry, (_DWORD)Entry, v10, *((_QWORD *)Entry + 15));
        return (unsigned int)RunContext(Entry);
      }
      if ( (__int64 *)RunningContextListHead == &RunningContextListHead && (gReadyQueue & 8) == 0 )
      {
        v11 = *((_QWORD *)Entry + 13);
        if ( v11 )
          v12 = *(_QWORD *)(v11 + 32);
        else
          v12 = *((_QWORD *)Entry + 9);
        LogSchedEvent(1163280716, (_DWORD)Entry, (_DWORD)Entry, v12, *((_QWORD *)Entry + 15));
        v2 = RunContext(Entry);
        if ( (__int64 *)qword_1C0070038 != &qword_1C0070038 && (gReadyQueue & 2) == 0 )
        {
          LogSchedEvent(1263092555, 0, v2, 0, 0LL);
          gReadyQueue |= 2u;
          OSQueueWorkItem(&qword_1C0070058);
        }
        return v2;
      }
    }
    v13 = *((_QWORD *)Entry + 13);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 32);
    else
      v14 = *((_QWORD *)Entry + 9);
    LogSchedEvent(1363367000, (_DWORD)Entry, (_DWORD)Entry, v14, *((_QWORD *)Entry + 15));
    v15 = *((_DWORD *)Entry + 16);
    if ( (v15 & 0x40) == 0 )
    {
      v16 = Entry + 32;
      *((_DWORD *)Entry + 16) = v15 | 0x40;
      v17 = (_QWORD *)qword_1C0070040;
      if ( *(__int64 **)qword_1C0070040 != &qword_1C0070038 )
        __fastfail(3u);
      *v16 = &qword_1C0070038;
      *((_QWORD *)Entry + 5) = v17;
      *v17 = v16;
      qword_1C0070040 = (__int64)(Entry + 32);
    }
    *((_DWORD *)Entry + 16) |= 0x20u;
    return 32772;
  }
  return v2;
}
