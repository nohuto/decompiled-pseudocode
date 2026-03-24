/*
 * XREFs of SfnINLPCOMPAREITEMSTRUCT @ 0x1C022A790
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

__int64 __fastcall SfnINLPCOMPAREITEMSTRUCT(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 result; // rax
  __int64 v22; // [rsp+58h] [rbp-F0h]
  _QWORD v23[7]; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v24; // [rsp+98h] [rbp-B0h]
  __int64 v25; // [rsp+B0h] [rbp-98h] BYREF
  int v26; // [rsp+B8h] [rbp-90h]
  int v27; // [rsp+BCh] [rbp-8Ch]
  __int64 v28; // [rsp+C0h] [rbp-88h]
  __int128 v29; // [rsp+C8h] [rbp-80h]
  __int128 v30; // [rsp+D8h] [rbp-70h]
  __int128 v31; // [rsp+E8h] [rbp-60h]
  __int64 v32; // [rsp+F8h] [rbp-50h]
  __int64 v33; // [rsp+100h] [rbp-48h]
  __int64 v34; // [rsp+108h] [rbp-40h]
  char v35; // [rsp+150h] [rbp+8h] BYREF
  char v36; // [rsp+158h] [rbp+10h] BYREF
  int v37; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int64 v38; // [rsp+168h] [rbp+20h] BYREF

  v38 = 0LL;
  v37 = 0;
  v23[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v27 = 0;
  v25 = v12;
  v26 = a2;
  v28 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 9) = 0;
  *((_DWORD *)a4 + 13) = 0;
  v29 = *a4;
  v30 = a4[1];
  v31 = a4[2];
  v32 = *((_QWORD *)a4 + 6);
  v33 = a5;
  v34 = a6;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v23[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v23;
  v23[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v14 = *(_QWORD *)(v11 + 480);
  v24 = *(_OWORD *)(v14 + 64);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v35);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(9LL);
  v17 = KeUserModeCallback(9LL, &v25, 96LL, &v38, &v37);
  EtwTraceEndCallback(9LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v35);
  ThreadUnlock1(v18);
  v19 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v19 + 64) = v24;
  *(_QWORD *)(v19 + 80) = v22;
  if ( v17 < 0 || v37 != 24 )
    return 0LL;
  v20 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v20 = (__int64 *)MmUserProbeAddress;
  result = *v20;
  v23[3] = *v20;
  return result;
}
