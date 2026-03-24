/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C0115430
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTNOTIFY(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6)
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
  char v22; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v23[3]; // [rsp+31h] [rbp-127h] BYREF
  _DWORD v24[5]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-110h] BYREF
  __int128 v26; // [rsp+58h] [rbp-100h]
  __int64 v27; // [rsp+68h] [rbp-F0h]
  _QWORD v28[7]; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-B0h]
  __int64 v30; // [rsp+C0h] [rbp-98h] BYREF
  int v31; // [rsp+C8h] [rbp-90h]
  int v32; // [rsp+CCh] [rbp-8Ch]
  __int64 v33; // [rsp+D0h] [rbp-88h]
  __int128 v34; // [rsp+D8h] [rbp-80h]
  __int128 v35; // [rsp+E8h] [rbp-70h]
  __int128 v36; // [rsp+F8h] [rbp-60h]
  __int64 v37; // [rsp+108h] [rbp-50h]
  __int64 v38; // [rsp+110h] [rbp-48h]
  __int64 v39; // [rsp+118h] [rbp-40h]

  v25 = 0LL;
  v24[0] = 0;
  v28[2] = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v32 = 0;
  v30 = v12;
  v31 = a2 & 0x1FFFF;
  v33 = a3;
  *((_DWORD *)a4 + 3) = 0;
  v34 = *a4;
  v35 = a4[1];
  v36 = a4[2];
  v37 = *((_QWORD *)a4 + 6);
  v38 = a5;
  v39 = a6;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v28[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v28;
  v28[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v14 = *(_QWORD *)(v11 + 480);
  v29 = *(_OWORD *)(v14 + 64);
  v26 = v29;
  v27 = *(_QWORD *)(v14 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v23);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  EtwTraceBeginCallback(54LL);
  v17 = KeUserModeCallback(54LL, &v30, 96LL, &v25, v24);
  EtwTraceEndCallback(54LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v23);
  ThreadUnlock1(v18);
  v19 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v19 + 64) = v29;
  *(_QWORD *)(v19 + 80) = v27;
  if ( v17 < 0 || v24[0] != 24 )
    return 0LL;
  v20 = (__int64 *)v25;
  if ( v25 + 8 < v25 || v25 + 8 > MmUserProbeAddress )
    v20 = (__int64 *)MmUserProbeAddress;
  result = *v20;
  v28[3] = *v20;
  return result;
}
