/*
 * XREFs of SfnINOUTLPWINDOWPOS @ 0x1C00F84A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall SfnINOUTLPWINDOWPOS(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  struct _KTHREAD *v20; // r12
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct _KTHREAD *v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rax
  char v35; // bl
  char v36; // bl
  __int64 v37; // rcx
  bool v38; // di
  int v39; // r12d
  __int64 v40; // rcx
  struct _KTHREAD *v41; // r15
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 *v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  ULONG64 v52; // rcx
  __int128 v53; // xmm3
  __int64 v54; // xmm0_8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v58; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v60; // rax
  int v61; // ebx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v70; // rax
  int v71; // edi
  __int64 v72; // rcx
  __int64 v73; // rax
  unsigned int v74; // eax
  tagDomLock *v75; // rax
  __int128 v76; // [rsp+48h] [rbp-F0h]
  __int64 v77; // [rsp+58h] [rbp-E0h]
  _QWORD v78[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v79; // [rsp+80h] [rbp-B8h] BYREF
  int v80; // [rsp+88h] [rbp-B0h]
  int v81; // [rsp+8Ch] [rbp-ACh]
  __int64 v82; // [rsp+90h] [rbp-A8h]
  __int128 v83; // [rsp+98h] [rbp-A0h]
  __int128 v84; // [rsp+A8h] [rbp-90h]
  __int64 v85; // [rsp+B8h] [rbp-80h]
  __int64 v86; // [rsp+C0h] [rbp-78h]
  __int64 v87; // [rsp+C8h] [rbp-70h]
  __int64 v88; // [rsp+D0h] [rbp-68h]
  int v89; // [rsp+140h] [rbp+8h] BYREF
  char v90; // [rsp+148h] [rbp+10h]
  unsigned __int64 v91; // [rsp+150h] [rbp+18h] BYREF

  v81 = 0;
  v91 = 0LL;
  v89 = 0;
  v78[2] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v58),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v19 = a1[5] - *(_QWORD *)(v13 + 472);
  else
    v19 = 0LL;
  v81 = 0;
  v79 = v19;
  v80 = a2;
  v82 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v83 = *a4;
  v84 = a4[1];
  v85 = *((_QWORD *)a4 + 4);
  v86 = a5;
  v87 = a6;
  v20 = KeGetCurrentThread();
  v21 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v18)
    || (v60 = PsGetCurrentProcess(v23, v22, v24),
        v61 = PsGetProcessSessionIdEx(v60),
        v63 = PsGetCurrentThreadProcess(v62),
        v61 == (unsigned int)PsGetProcessSessionIdEx(v63)) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v20);
    if ( v25 )
      v21 = *v25;
  }
  v78[0] = *(_QWORD *)(v21 + 416);
  *(_QWORD *)(v21 + 416) = v78;
  v78[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v26 = *(_QWORD *)(v13 + 480);
  v76 = *(_OWORD *)(v26 + 64);
  v77 = *(_QWORD *)(v26 + 80);
  *(_QWORD *)(v26 + 72) = v19;
  if ( a1 )
    v27 = *a1;
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v27;
  if ( a1 )
    v28 = *(_QWORD *)(a1[5] + 224);
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v28;
  if ( gdwInAtomicOperation )
  {
    v28 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v29 = KeGetCurrentThread();
  v30 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v28)
    || (v64 = PsGetCurrentProcess(v32, v31, v33),
        v65 = PsGetProcessSessionIdEx(v64),
        v67 = PsGetCurrentThreadProcess(v66),
        v65 == (unsigned int)PsGetProcessSessionIdEx(v67)) )
  {
    v34 = (__int64 *)PsGetThreadWin32Thread(v29);
    if ( v34 )
      v30 = *v34;
  }
  v90 = *(_BYTE *)(v30 + 1480);
  v35 = v90;
  *(_BYTE *)(v30 + 1480) = 0;
  v36 = v35 & 1;
  if ( v36 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v30 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v38 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v37);
  EtwTraceBeginCallback(22LL);
  v39 = KeUserModeCallback(22LL, &v79, 80LL, &v91, &v89);
  EtwTraceEndCallback(22LL);
  if ( v38 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v41 = KeGetCurrentThread();
  v42 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v40)
    || (v70 = PsGetCurrentProcess(v44, v43, v45),
        v71 = PsGetProcessSessionIdEx(v70),
        v73 = PsGetCurrentThreadProcess(v72),
        v71 == (unsigned int)PsGetProcessSessionIdEx(v73)) )
  {
    v46 = (__int64 *)PsGetThreadWin32Thread(v41);
    if ( v46 )
      v42 = *v46;
  }
  if ( v36 )
  {
    v74 = DLT_THREADINFO::getDLT();
    v75 = (tagDomLock *)GetDomainLockRef(v74);
    tagDomLock::LockShared(v75);
    tagObjLock::LockExclusive((tagObjLock *)(v42 + 392));
  }
  *(_BYTE *)(v42 + 1480) = v90;
  ThreadUnlock1(v47);
  v48 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v48 + 64) = v76;
  *(_QWORD *)(v48 + 80) = v77;
  if ( v39 < 0 || v89 != 24 )
    return 0LL;
  v49 = (__int64 *)v91;
  if ( v91 + 8 < v91 || v91 + 8 > MmUserProbeAddress )
    v49 = (__int64 *)MmUserProbeAddress;
  v50 = *v49;
  v88 = *v49;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v50;
  v51 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( !v51 || (*(_DWORD *)(v51 + 84) & 1) == 0 || *(__int128 **)(v51 + 96) != a4 )
  {
    v52 = *(_QWORD *)(v91 + 16);
    if ( v52 + 40 < v52 || v52 + 40 > MmUserProbeAddress )
      v52 = MmUserProbeAddress;
    v53 = *(_OWORD *)(v52 + 16);
    v54 = *(_QWORD *)(v52 + 32);
    *a4 = *(_OWORD *)v52;
    a4[1] = v53;
    *((_QWORD *)a4 + 4) = v54;
    return v50;
  }
  return 0LL;
}
