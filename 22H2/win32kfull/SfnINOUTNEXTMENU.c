/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1C022D2A0
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

__int64 __fastcall SfnINOUTNEXTMENU(
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
  ULONG64 v25; // rcx
  __int64 v26; // xmm0_8
  __int64 v28; // [rsp+58h] [rbp-E0h]
  _QWORD v29[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+80h] [rbp-B8h] BYREF
  int v31; // [rsp+88h] [rbp-B0h]
  int v32; // [rsp+8Ch] [rbp-ACh]
  __int64 v33; // [rsp+90h] [rbp-A8h]
  __int128 v34; // [rsp+98h] [rbp-A0h]
  __int64 v35; // [rsp+A8h] [rbp-90h]
  __int64 v36; // [rsp+B0h] [rbp-88h]
  __int64 v37; // [rsp+B8h] [rbp-80h]
  __int64 v38; // [rsp+C0h] [rbp-78h]
  __int128 v39; // [rsp+E8h] [rbp-50h]
  char v40; // [rsp+140h] [rbp+8h] BYREF
  char v41; // [rsp+148h] [rbp+10h] BYREF
  int v42; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v43; // [rsp+158h] [rbp+20h] BYREF

  v43 = 0LL;
  v42 = 0;
  v29[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v32 = 0;
  v30 = v14;
  v31 = a2;
  v33 = a3;
  v36 = a5;
  v37 = a6;
  v34 = *a4;
  v35 = *((_QWORD *)a4 + 2);
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v29[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v29;
  v29[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v39 = *(_OWORD *)(v16 + 64);
  v28 = *(_QWORD *)(v16 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(30LL);
  v19 = KeUserModeCallback(30LL, &v30, 64LL, &v43, &v42);
  EtwTraceEndCallback(30LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40);
  ThreadUnlock1(v20);
  v21 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v21 + 64) = v39;
  *(_QWORD *)(v21 + 80) = v28;
  if ( v19 >= 0 && v42 == 24 )
  {
    v22 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v22 = (__int64 *)MmUserProbeAddress;
    v23 = *v22;
    v38 = *v22;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(__int128 **)(v24 + 96) != a4 )
    {
      v25 = *(_QWORD *)(v43 + 16);
      if ( v25 + 24 < v25 || v25 + 24 > MmUserProbeAddress )
        v25 = MmUserProbeAddress;
      v26 = *(_QWORD *)(v25 + 16);
      *a4 = *(_OWORD *)v25;
      *((_QWORD *)a4 + 2) = v26;
      return v23;
    }
  }
  return 0LL;
}
