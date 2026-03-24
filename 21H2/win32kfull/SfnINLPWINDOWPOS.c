/*
 * XREFs of SfnINLPWINDOWPOS @ 0x1C0052000
 * Callers:
 *     <none>
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C005231C (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall SfnINLPWINDOWPOS(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  struct _KTHREAD *v18; // r12
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rcx
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v35; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // [rsp+58h] [rbp-E0h]
  _QWORD v42[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+80h] [rbp-B8h] BYREF
  int v44; // [rsp+88h] [rbp-B0h]
  int v45; // [rsp+8Ch] [rbp-ACh]
  __int64 v46; // [rsp+90h] [rbp-A8h]
  __int128 v47; // [rsp+98h] [rbp-A0h]
  __int128 v48; // [rsp+A8h] [rbp-90h]
  __int64 v49; // [rsp+B8h] [rbp-80h]
  __int64 v50; // [rsp+C0h] [rbp-78h]
  __int64 v51; // [rsp+C8h] [rbp-70h]
  __int64 v52; // [rsp+D0h] [rbp-68h]
  __int128 v53; // [rsp+F0h] [rbp-48h]
  bool v54; // [rsp+140h] [rbp+8h]
  char v55; // [rsp+148h] [rbp+10h] BYREF
  int v56; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v57; // [rsp+158h] [rbp+20h] BYREF

  v45 = 0;
  v57 = 0LL;
  v56 = 0;
  v42[2] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v35),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(v11 + 472);
  else
    v17 = 0LL;
  v45 = 0;
  v43 = v17;
  v44 = a2;
  v46 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v47 = *a4;
  v48 = a4[1];
  v49 = *((_QWORD *)a4 + 4);
  v50 = a5;
  v51 = a6;
  v18 = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v16)
    || (v37 = PsGetCurrentProcess(v21, v20, v22),
        v38 = PsGetProcessSessionIdEx(v37),
        v40 = PsGetCurrentThreadProcess(v39),
        v38 == (unsigned int)PsGetProcessSessionIdEx(v40)) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(v18);
    if ( v23 )
      v19 = *v23;
  }
  v42[0] = *(_QWORD *)(v19 + 416);
  *(_QWORD *)(v19 + 416) = v42;
  v42[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v24 = *(_QWORD *)(v11 + 480);
  v53 = *(_OWORD *)(v24 + 64);
  v41 = *(_QWORD *)(v24 + 80);
  *(_QWORD *)(v24 + 72) = v17;
  if ( a1 )
    v25 = *a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v25;
  if ( a1 )
    v26 = *(_QWORD *)(a1[5] + 224);
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v26;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v55);
  v54 = (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() != 0;
  UserSessionSwitchLeaveCrit(v27);
  EtwTraceBeginCallback(17LL);
  v28 = KeUserModeCallback(17LL, &v43, 80LL, &v57, &v56);
  EtwTraceEndCallback(17LL);
  if ( v54 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v55);
  ThreadUnlock1(v29);
  v30 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v30 + 64) = v53;
  *(_QWORD *)(v30 + 80) = v41;
  if ( v28 < 0 || v56 != 24 )
    return 0LL;
  v31 = (__int64 *)v57;
  if ( v57 + 8 < v57 || v57 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  result = *v31;
  v52 = *v31;
  return result;
}
