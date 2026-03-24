/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C022D690
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C010059C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  char v25; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v26[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v27[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-120h] BYREF
  __int64 v29; // [rsp+50h] [rbp-118h]
  __int128 v30; // [rsp+60h] [rbp-108h]
  __int64 v31; // [rsp+70h] [rbp-F8h]
  _QWORD v32[6]; // [rsp+78h] [rbp-F0h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-C0h]
  __int64 v34; // [rsp+C0h] [rbp-A8h] BYREF
  int v35; // [rsp+C8h] [rbp-A0h]
  int v36; // [rsp+CCh] [rbp-9Ch]
  __int64 v37; // [rsp+D0h] [rbp-98h]
  __int128 v38; // [rsp+D8h] [rbp-90h]
  __int128 v39; // [rsp+E8h] [rbp-80h]
  __int128 v40; // [rsp+F8h] [rbp-70h]
  __int128 v41; // [rsp+108h] [rbp-60h]
  __int64 v42; // [rsp+118h] [rbp-50h]
  __int64 v43; // [rsp+120h] [rbp-48h]
  __int64 v44; // [rsp+128h] [rbp-40h]

  v28 = 0LL;
  v27[0] = 0;
  v29 = 0LL;
  v32[2] = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v36 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
    return v29;
  v34 = v13;
  v35 = a2;
  v37 = a3;
  *((_DWORD *)a4 + 17) = 0;
  v38 = *a4;
  v39 = a4[1];
  v40 = a4[2];
  v41 = a4[3];
  v42 = *((_QWORD *)a4 + 8);
  v43 = a5;
  v44 = a6;
  v15 = WindowFromDC(*(HDC *)a4);
  *(_QWORD *)&v38 = _GetDC(v15);
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v32[0] = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = v32;
  v32[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v12 + 480);
  v33 = *(_OWORD *)(v17 + 64);
  v30 = v33;
  v31 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v26);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  EtwTraceBeginCallback(23LL);
  v20 = KeUserModeCallback(23LL, &v34, 112LL, &v28, v27);
  EtwTraceEndCallback(23LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v26);
  ThreadUnlock1(v21);
  v22 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v22 + 64) = v33;
  *(_QWORD *)(v22 + 80) = v31;
  if ( v20 >= 0 && v27[0] == 24 )
  {
    v23 = (__int64 *)v28;
    if ( v28 + 8 < v28 || v28 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v29 = *v23;
    _ReleaseDC(v38);
    return v29;
  }
  return 0LL;
}
