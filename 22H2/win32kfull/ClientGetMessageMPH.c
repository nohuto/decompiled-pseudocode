/*
 * XREFs of ClientGetMessageMPH @ 0x1C00542B8
 * Callers:
 *     NtUserGetMessage @ 0x1C0055090 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C00554C0 (NtUserPeekMessage.c)
 *     xxxInternalGetMessage @ 0x1C00D9C60 (xxxInternalGetMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  _OWORD *v6; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *ThreadWin32Thread; // rax
  char v13; // bl
  char v14; // bl
  __int64 v15; // rcx
  bool v16; // di
  int v17; // r12d
  __int64 v18; // rcx
  struct _KTHREAD *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v34; // rcx
  __int64 CurrentThreadProcess; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v38; // rax
  int v39; // edi
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // eax
  tagDomLock *v43; // rax
  __int64 v44; // [rsp+48h] [rbp-40h] BYREF
  int v45; // [rsp+50h] [rbp-38h]
  int v46; // [rsp+54h] [rbp-34h]
  int v47; // [rsp+58h] [rbp-30h]
  int v48; // [rsp+5Ch] [rbp-2Ch]
  unsigned __int64 v49; // [rsp+98h] [rbp+10h] BYREF
  int v50; // [rsp+A0h] [rbp+18h] BYREF

  v6 = a1;
  v49 = 0LL;
  v50 = 0;
  v44 = a2;
  v45 = a3;
  v46 = a4;
  v47 = a5;
  v48 = a6;
  if ( gdwInAtomicOperation )
  {
    a1 = (_OWORD *)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v34),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  LOBYTE(a5) = *(_BYTE *)(v8 + 1480);
  v13 = a5;
  *(_BYTE *)(v8 + 1480) = 0;
  v14 = v13 & 1;
  if ( v14 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v8 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v16 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v15);
  EtwTraceBeginCallback(73LL);
  v17 = KeUserModeCallback(73LL, &v44, 24LL, &v49, &v50);
  EtwTraceEndCallback(73LL);
  if ( v16 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v18)
    || (v38 = PsGetCurrentProcess(v22, v21, v23),
        v39 = PsGetProcessSessionIdEx(v38),
        v41 = PsGetCurrentThreadProcess(v40),
        v39 == (unsigned int)PsGetProcessSessionIdEx(v41)) )
  {
    v24 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v24 )
      v20 = *v24;
  }
  if ( v14 )
  {
    v42 = DLT_THREADINFO::getDLT();
    v43 = (tagDomLock *)GetDomainLockRef(v42);
    tagDomLock::LockShared(v43);
    tagObjLock::LockExclusive((tagObjLock *)(v20 + 392));
  }
  *(_BYTE *)(v20 + 1480) = a5;
  if ( v17 < 0 || v50 != 24 )
    return 0LL;
  v25 = (__int64 *)v49;
  if ( v49 + 8 < v49 || v49 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  v26 = *v25;
  v27 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v27 )
  {
    if ( (*(_DWORD *)(v27 + 84) & 1) != 0 && *(_OWORD **)(v27 + 96) == v6 )
      return 0LL;
  }
  v28 = *(_OWORD **)(v49 + 16);
  if ( v28 + 3 < v28 || (unsigned __int64)(v28 + 3) > MmUserProbeAddress )
    v28 = (_OWORD *)MmUserProbeAddress;
  v29 = v28[1];
  v30 = v28[2];
  *v6 = *v28;
  v6[1] = v29;
  v6[2] = v30;
  return (unsigned int)v26;
}
