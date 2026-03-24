/*
 * XREFs of NtUserGetQueueStatus @ 0x1C00D5C70
 * Callers:
 *     <none>
 * Callees:
 *     xxxDrainQueueCompletions @ 0x1C00D5E04 (xxxDrainQueueCompletions.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserGetQueueStatus(__int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *ThreadWin32Thread; // rax
  tagObjLock *v9; // r14
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // r15
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned __int16 v14; // r12
  __int16 v15; // bp
  __int64 v16; // rax
  unsigned int v17; // ebx
  int v18; // edi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v24; // rcx
  __int64 CurrentThreadProcess; // rax

  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v4)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v24),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = (_QWORD *)*ThreadWin32Thread;
  }
  v9 = (tagObjLock *)(v3 + 49);
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v3 + 49 == (_QWORD *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 328LL);
  v12 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v12);
  tagDomLock::LockShared(DomainLockRef);
  tagObjLock::LockExclusive((tagObjLock *)(v3 + 49));
  if ( v3[183] && (a1 & 8) != 0 )
    xxxDrainQueueCompletions(1LL);
  v13 = v3[56];
  v14 = a1 & 0x5DFF;
  v15 = *(_WORD *)(v13 + 4);
  *(_WORD *)(v13 + 4) = v15 & ~v14;
  v16 = v3[56];
  v17 = *(unsigned __int16 *)(v16 + 8);
  v18 = *(unsigned __int16 *)(v16 + 6);
  v19 = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(v19);
  tagObjLock::UnLockExclusive(v9);
  tagDomLock::UnLockShared(DomainLockRef);
  UserSessionSwitchLeaveCrit(v20);
  return (unsigned __int16)(v14 & v15) | ((v14 & (v18 | v17)) << 16);
}
