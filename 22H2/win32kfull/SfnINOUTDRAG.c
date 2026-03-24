/*
 * XREFs of SfnINOUTDRAG @ 0x1C022C6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnINOUTDRAG(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int128 *v25; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v29; // [rsp+58h] [rbp-F0h]
  _QWORD v30[8]; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-A8h]
  __int64 v32; // [rsp+B0h] [rbp-98h] BYREF
  int v33; // [rsp+B8h] [rbp-90h]
  int v34; // [rsp+BCh] [rbp-8Ch]
  __int64 v35; // [rsp+C0h] [rbp-88h]
  __int64 v36; // [rsp+C8h] [rbp-80h]
  __int64 v37; // [rsp+D0h] [rbp-78h]
  __int128 v38; // [rsp+D8h] [rbp-70h]
  __int128 v39; // [rsp+E8h] [rbp-60h]
  __int128 v40; // [rsp+F8h] [rbp-50h]
  char v41; // [rsp+150h] [rbp+8h] BYREF
  char v42; // [rsp+158h] [rbp+10h] BYREF
  int v43; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int64 v44; // [rsp+168h] [rbp+20h] BYREF

  v44 = 0LL;
  v43 = 0;
  v30[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v34 = 0;
  v32 = v14;
  v33 = a2;
  v35 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 11) = 0;
  v38 = *a4;
  v39 = a4[1];
  v40 = a4[2];
  v36 = a5;
  v37 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v30[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v30;
  v30[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v31 = *(_OWORD *)(v16 + 64);
  v29 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v41);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(5LL);
  v19 = KeUserModeCallback(5LL, &v32, 88LL, &v44, &v43);
  EtwTraceEndCallback(5LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v41);
  ThreadUnlock1(v20);
  v21 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v21 + 64) = v31;
  *(_QWORD *)(v21 + 80) = v29;
  if ( v19 >= 0 && v43 == 24 )
  {
    v22 = (__int64 *)v44;
    if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
      v22 = (__int64 *)MmUserProbeAddress;
    v23 = *v22;
    v30[3] = *v22;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(__int128 **)(v24 + 96) != a4 )
    {
      v25 = *(__int128 **)(v44 + 16);
      if ( v25 + 3 < v25 || (unsigned __int64)(v25 + 3) > MmUserProbeAddress )
        v25 = (__int128 *)MmUserProbeAddress;
      v26 = v25[1];
      v27 = v25[2];
      *a4 = *v25;
      a4[1] = v26;
      a4[2] = v27;
      return v23;
    }
  }
  return 0LL;
}
