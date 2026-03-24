/*
 * XREFs of _DrainThreadCoreMessagingCompletions @ 0x1C0053E10
 * Callers:
 *     NtUserCallNoParam @ 0x1C0053D80 (NtUserCallNoParam.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0054060 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall DrainThreadCoreMessagingCompletions(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  tagObjLock *v8; // rbp
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // r15
  unsigned int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  struct _KTHREAD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  int v19; // edi
  unsigned int v20; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v24; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v26; // rax
  int v27; // edi
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // [rsp+28h] [rbp-70h]
  _OWORD v31[2]; // [rsp+40h] [rbp-58h] BYREF
  int v32; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v24),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v8 = (tagObjLock *)(v3 + 392);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v3 + 392 == gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 328LL);
  v11 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v11);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v3 + 392));
  if ( *(_QWORD *)(v3 + 1464) )
  {
    v13 = 0LL;
    v14 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v12)
      || (v26 = PsGetCurrentProcess(v16, v15, v17),
          v27 = PsGetProcessSessionIdEx(v26),
          v29 = PsGetCurrentThreadProcess(v28),
          v27 == (unsigned int)PsGetProcessSessionIdEx(v29)) )
    {
      v18 = (_QWORD *)PsGetThreadWin32Thread(v14);
      if ( v18 )
        v13 = (_QWORD *)*v18;
    }
    v32 = 0;
    memset(v31, 0, sizeof(v31));
    v33 = 0LL;
    v19 = 0;
    ZwSetIoCompletionEx(v13[178], v13[182], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v30) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v13[178], v31, 1LL, &v32, &v33, v30) )
        break;
      if ( DWORD2(v31[0]) == 1 )
      {
        v19 = 1;
      }
      else
      {
        if ( DWORD2(v31[0]) || !v13[183] )
          break;
        xxxHandleCoreMessagingQueueCompletion(v13, v31, 0LL);
      }
    }
    if ( v19 )
      ZwAssociateWaitCompletionPacket(v13[181], v13[178], v13[180], 0LL, 1LL, 0, 0LL, 0LL);
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  v20 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v20);
  tagObjLock::UnLockExclusive(v8);
  tagDomLock::UnLockShared(DomainLockRef);
  return v2;
}
