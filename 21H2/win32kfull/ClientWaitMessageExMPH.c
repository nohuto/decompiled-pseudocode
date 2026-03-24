/*
 * XREFs of ClientWaitMessageExMPH @ 0x1C00F74C0
 * Callers:
 *     NtUserWaitMessage @ 0x1C00F7450 (NtUserWaitMessage.c)
 *     xxxWaitMessageEx @ 0x1C01E2B58 (xxxWaitMessageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientWaitMessageExMPH(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  bool v9; // di
  int v10; // r15d
  __int64 v11; // rcx
  struct _KTHREAD *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // rax
  ULONG64 v18; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v22; // rcx
  __int64 CurrentThreadProcess; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v26; // rax
  int v27; // edi
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // eax
  tagDomLock *v31; // rax
  char v32; // [rsp+70h] [rbp+8h]
  int v33; // [rsp+78h] [rbp+10h] BYREF
  int v34; // [rsp+80h] [rbp+18h] BYREF
  int v35; // [rsp+84h] [rbp+1Ch]
  unsigned __int64 v36; // [rsp+88h] [rbp+20h] BYREF

  v36 = 0LL;
  v33 = 0;
  v34 = a1;
  v35 = a2;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v22),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v32 = *(_BYTE *)(v3 + 1480);
  *(_BYTE *)(v3 + 1480) = 0;
  if ( (v32 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v3 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v9 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v8);
  EtwTraceBeginCallback(89LL);
  v10 = KeUserModeCallback(89LL, &v34, 8LL, &v36, &v33);
  EtwTraceEndCallback(89LL);
  if ( v9 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v12 = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v11)
    || (v26 = PsGetCurrentProcess(v15, v14, v16),
        v27 = PsGetProcessSessionIdEx(v26),
        v29 = PsGetCurrentThreadProcess(v28),
        v27 == (unsigned int)PsGetProcessSessionIdEx(v29)) )
  {
    v17 = (__int64 *)PsGetThreadWin32Thread(v12);
    if ( v17 )
      v13 = *v17;
  }
  if ( (v32 & 1) != 0 )
  {
    v30 = DLT_THREADINFO::getDLT();
    v31 = (tagDomLock *)GetDomainLockRef(v30);
    tagDomLock::LockShared(v31);
    tagObjLock::LockExclusive((tagObjLock *)(v13 + 392));
  }
  *(_BYTE *)(v13 + 1480) = v32;
  if ( v10 < 0 || v33 != 24 )
    return 0LL;
  v18 = v36;
  if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
    v18 = MmUserProbeAddress;
  return *(_QWORD *)v18;
}
