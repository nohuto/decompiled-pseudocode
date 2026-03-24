/*
 * XREFs of SfnOUTLPRECT @ 0x1C0150560
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnOUTLPRECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
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
  __int128 v17; // xmm6
  __int64 v18; // xmm7_8
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int128 *v27; // rcx
  __int64 v29; // [rsp+48h] [rbp-F0h] BYREF
  int v30; // [rsp+50h] [rbp-E8h]
  int v31; // [rsp+54h] [rbp-E4h]
  __int64 v32; // [rsp+58h] [rbp-E0h]
  __int64 v33; // [rsp+60h] [rbp-D8h]
  __int64 v34; // [rsp+68h] [rbp-D0h]
  _QWORD v35[3]; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+88h] [rbp-B0h]
  __int64 v37; // [rsp+98h] [rbp-A0h]
  __int64 v38; // [rsp+A0h] [rbp-98h]
  __int128 v39; // [rsp+C8h] [rbp-70h]
  char v40; // [rsp+140h] [rbp+8h] BYREF
  char v41; // [rsp+148h] [rbp+10h] BYREF
  int v42; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v43; // [rsp+158h] [rbp+20h] BYREF

  v43 = 0LL;
  v42 = 0;
  v35[2] = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v31 = 0;
  v29 = v14;
  v30 = a2;
  v32 = a3;
  v33 = a5;
  v34 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v35[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v35;
  v35[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v17 = *(_OWORD *)(v16 + 64);
  v36 = v17;
  v18 = *(_QWORD *)(v16 + 80);
  v37 = v18;
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(34LL);
  v21 = KeUserModeCallback(34LL, &v29, 40LL, &v43, &v42);
  EtwTraceEndCallback(34LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40);
  ThreadUnlock1(v22);
  v23 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v23 + 64) = v17;
  *(_QWORD *)(v23 + 80) = v18;
  if ( v21 >= 0 && v42 == 24 )
  {
    v24 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v38 = *v24;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(_OWORD **)(v26 + 96) != a4 )
    {
      v27 = *(__int128 **)(v43 + 16);
      if ( v27 + 1 < v27 || (unsigned __int64)(v27 + 1) > MmUserProbeAddress )
        v27 = (__int128 *)MmUserProbeAddress;
      v39 = *v27;
      *a4 = v39;
      return v25;
    }
  }
  return 0LL;
}
