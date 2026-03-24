/*
 * XREFs of SfnNCDESTROY @ 0x1C0051AB0
 * Callers:
 *     <none>
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C005227C (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall SfnNCDESTROY(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
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
  int v28; // esi
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
  __int64 v41; // [rsp+58h] [rbp-C0h]
  __int64 v42; // [rsp+60h] [rbp-B8h] BYREF
  int v43; // [rsp+68h] [rbp-B0h]
  int v44; // [rsp+6Ch] [rbp-ACh]
  __int64 v45; // [rsp+70h] [rbp-A8h]
  __int64 v46; // [rsp+78h] [rbp-A0h]
  __int64 v47; // [rsp+80h] [rbp-98h]
  __int64 v48; // [rsp+88h] [rbp-90h]
  _QWORD v49[7]; // [rsp+90h] [rbp-88h] BYREF
  __int128 v50; // [rsp+C8h] [rbp-50h]
  bool v51; // [rsp+120h] [rbp+8h]
  char v52; // [rsp+128h] [rbp+10h] BYREF
  int v53; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v54; // [rsp+138h] [rbp+20h] BYREF

  v44 = 0;
  v54 = 0LL;
  v53 = 0;
  v49[2] = 0LL;
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
  v44 = 0;
  v42 = v17;
  v43 = a2;
  v45 = a3;
  v46 = a4;
  v47 = a5;
  v48 = a6;
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
  v49[0] = *(_QWORD *)(v19 + 416);
  *(_QWORD *)(v19 + 416) = v49;
  v49[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v24 = *(_QWORD *)(v11 + 480);
  v50 = *(_OWORD *)(v24 + 64);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v52);
  v51 = (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() != 0;
  UserSessionSwitchLeaveCrit(v27);
  EtwTraceBeginCallback(3LL);
  v28 = KeUserModeCallback(3LL, &v42, 48LL, &v54, &v53);
  EtwTraceEndCallback(3LL);
  if ( v51 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v52);
  if ( a1 )
    *(_QWORD *)(a1[5] + 224) = 0LL;
  ThreadUnlock1(v29);
  v30 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v30 + 64) = v50;
  *(_QWORD *)(v30 + 80) = v41;
  if ( v28 < 0 || v53 != 24 )
    return 0LL;
  v31 = (__int64 *)v54;
  if ( v54 + 8 < v54 || v54 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  result = *v31;
  v49[3] = *v31;
  return result;
}
