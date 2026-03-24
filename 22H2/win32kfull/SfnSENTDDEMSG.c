/*
 * XREFs of SfnSENTDDEMSG @ 0x1C022FC80
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021C734 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall SfnSENTDDEMSG(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rdi
  signed int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 result; // rax
  _DWORD v24[6]; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-100h] BYREF
  __int128 v26; // [rsp+58h] [rbp-F0h] BYREF
  __int128 v27; // [rsp+68h] [rbp-E0h]
  __int128 v28; // [rsp+78h] [rbp-D0h]
  __int64 v29; // [rsp+88h] [rbp-C0h] BYREF
  signed int v30; // [rsp+90h] [rbp-B8h]
  int v31; // [rsp+94h] [rbp-B4h]
  __int128 v32; // [rsp+98h] [rbp-B0h]
  __int64 v33; // [rsp+A8h] [rbp-A0h]
  __int64 v34; // [rsp+B0h] [rbp-98h]
  BOOL v35; // [rsp+B8h] [rbp-90h]
  int v36; // [rsp+BCh] [rbp-8Ch]
  __int128 v37; // [rsp+C0h] [rbp-88h]
  __int64 v38; // [rsp+D0h] [rbp-78h]
  _QWORD v39[7]; // [rsp+D8h] [rbp-70h] BYREF
  __int128 v40; // [rsp+110h] [rbp-38h]
  char v41; // [rsp+150h] [rbp+8h] BYREF
  char v42; // [rsp+158h] [rbp+10h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v24[0] = 0;
  v39[2] = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v31 = 0;
  v36 = 0;
  v14 = a2 & 0xBFFFFFFF;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v39[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v39;
  v39[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v12 + 480);
  v40 = *(_OWORD *)(v16 + 64);
  v37 = v40;
  v38 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v13;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v18;
  if ( v14 >= 0 )
  {
    v29 = v13;
    v30 = v14;
    *(_QWORD *)&v32 = a3;
    *((_QWORD *)&v32 + 1) = a4;
  }
  else
  {
    if ( a1 )
      *(_QWORD *)&v26 = *a1;
    DWORD2(v26) = v14 & 0x7FFFFFFF;
    *(_QWORD *)&v27 = a3;
    *((_QWORD *)&v27 + 1) = a4;
    xxxDDETrackGetMessageHook((__int64)&v26);
    v29 = _HMObjectFromHandle(v26) - *(_QWORD *)(v12 + 472);
    v30 = DWORD2(v26);
    v32 = v27;
  }
  v33 = a5;
  v34 = a6;
  v35 = (a7 & 1) == 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v41);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(38LL);
  v19 = KeUserModeCallback(38LL, &v29, 56LL, &v25, v24);
  EtwTraceEndCallback(38LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v41);
  ThreadUnlock1(v20);
  v21 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v21 + 64) = v40;
  *(_QWORD *)(v21 + 80) = v38;
  if ( v19 < 0 || v24[0] != 24 )
    return 0LL;
  v22 = (__int64 *)v25;
  if ( v25 + 8 < v25 || v25 + 8 > MmUserProbeAddress )
    v22 = (__int64 *)MmUserProbeAddress;
  result = *v22;
  v39[3] = *v22;
  return result;
}
