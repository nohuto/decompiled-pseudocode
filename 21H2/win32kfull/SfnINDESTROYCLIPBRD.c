/*
 * XREFs of SfnINDESTROYCLIPBRD @ 0x1C015D290
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

__int64 __fastcall SfnINDESTROYCLIPBRD(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 result; // rax
  __int64 v22; // [rsp+58h] [rbp-C0h]
  _QWORD v23[3]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+78h] [rbp-A0h] BYREF
  int v25; // [rsp+80h] [rbp-98h]
  int v26; // [rsp+84h] [rbp-94h]
  __int64 v27; // [rsp+88h] [rbp-90h]
  __int64 v28; // [rsp+90h] [rbp-88h]
  __int64 v29; // [rsp+98h] [rbp-80h]
  __int64 v30; // [rsp+A0h] [rbp-78h]
  __int64 v31; // [rsp+A8h] [rbp-70h]
  __int128 v32; // [rsp+C8h] [rbp-50h]
  char v33; // [rsp+120h] [rbp+8h] BYREF
  char v34; // [rsp+128h] [rbp+10h] BYREF
  int v35; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v36; // [rsp+138h] [rbp+20h] BYREF

  v36 = 0LL;
  v35 = 0;
  v23[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v26 = 0;
  v24 = v12;
  v25 = a2;
  v27 = a3;
  v28 = a4;
  v29 = a5;
  v30 = a6;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v23[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v23;
  v23[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v14 = *(_QWORD *)(v11 + 480);
  v32 = *(_OWORD *)(v14 + 64);
  v22 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v15;
  if ( a1 )
    v16 = *(_QWORD *)(a1[5] + 224);
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v16;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v33);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  EtwTraceBeginCallback(25LL);
  v17 = KeUserModeCallback(25LL, &v24, 48LL, &v36, &v35);
  EtwTraceEndCallback(25LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v33);
  ThreadUnlock1(v18);
  v19 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v19 + 64) = v32;
  *(_QWORD *)(v19 + 80) = v22;
  if ( v17 < 0 || v35 != 24 )
    return 0LL;
  v20 = (__int64 *)v36;
  if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
    v20 = (__int64 *)MmUserProbeAddress;
  result = *v20;
  v31 = *v20;
  return result;
}
