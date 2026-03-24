/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x1C00F2D10
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0054060 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserGetQueueStatusReadonly(unsigned __int16 a1)
{
  __int64 v2; // rbp
  tagObjLock *v3; // r14
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // r12
  unsigned int v6; // eax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD **ThreadWin32Thread; // rax
  int v14; // edi
  unsigned int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v21; // rcx
  __int64 CurrentThreadProcess; // rax
  int v23; // [rsp+28h] [rbp-70h]
  _OWORD v24[2]; // [rsp+40h] [rbp-58h] BYREF
  int v25; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+10h] BYREF

  v2 = EnterSharedCrit(0LL, 1LL);
  v3 = (tagObjLock *)(v2 + 392);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v2 + 392 == gObjDummyLock )
  {
    v25 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 328LL);
  }
  v6 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v6);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive(v3);
  if ( *(_QWORD *)(v2 + 1464) && (a1 & 8) != 0 )
  {
    v8 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v7)
      || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v21),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v8 = *ThreadWin32Thread;
    }
    v25 = 0;
    memset(v24, 0, sizeof(v24));
    v26 = 0LL;
    v14 = 0;
    ZwSetIoCompletionEx(v8[178], v8[182], 0LL, 2LL, 0, 0LL);
    while ( 1 )
    {
      LOBYTE(v23) = 0;
      if ( (unsigned int)ZwRemoveIoCompletionEx(v8[178], v24, 1LL, &v25, &v26, v23) )
        break;
      if ( DWORD2(v24[0]) == 1 )
      {
        v14 = 1;
      }
      else
      {
        if ( DWORD2(v24[0]) || !v8[183] )
          break;
        xxxHandleCoreMessagingQueueCompletion((__int64)v8, (ULONG64 *)v24, 1);
      }
    }
    if ( v14 )
      ZwAssociateWaitCompletionPacket(v8[181], v8[178], v8[180], 0LL, 1LL, 0, 0LL, 0LL);
  }
  v15 = (a1 | (a1 << 16)) & (*(unsigned __int16 *)(*(_QWORD *)(v2 + 448) + 4LL) | (*(unsigned __int16 *)(*(_QWORD *)(v2 + 448) + 6LL) << 16));
  v16 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v16);
  tagObjLock::UnLockExclusive(v3);
  tagDomLock::UnLockShared(DomainLockRef);
  UserSessionSwitchLeaveCrit(v17);
  return v15;
}
