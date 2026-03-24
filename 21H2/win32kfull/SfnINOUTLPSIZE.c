/*
 * XREFs of SfnINOUTLPSIZE @ 0x1C022D060
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

__int64 __fastcall SfnINOUTLPSIZE(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 *a4,
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
  __int64 *v25; // rcx
  __int64 v27; // [rsp+58h] [rbp-C0h]
  _QWORD v28[3]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+78h] [rbp-A0h] BYREF
  int v30; // [rsp+80h] [rbp-98h]
  int v31; // [rsp+84h] [rbp-94h]
  __int64 v32; // [rsp+88h] [rbp-90h]
  __int64 v33; // [rsp+90h] [rbp-88h]
  __int64 v34; // [rsp+98h] [rbp-80h]
  __int64 v35; // [rsp+A0h] [rbp-78h]
  __int64 v36; // [rsp+A8h] [rbp-70h]
  __int128 v37; // [rsp+D0h] [rbp-48h]
  char v38; // [rsp+120h] [rbp+8h] BYREF
  char v39; // [rsp+128h] [rbp+10h] BYREF
  int v40; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v41; // [rsp+138h] [rbp+20h] BYREF

  v41 = 0LL;
  v40 = 0;
  v28[2] = 0LL;
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
  v33 = *a4;
  v34 = a5;
  v35 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v28[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v28;
  v28[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v37 = *(_OWORD *)(v16 + 64);
  v27 = *(_QWORD *)(v16 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v38);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(126LL);
  v19 = KeUserModeCallback(126LL, &v29, 48LL, &v41, &v40);
  EtwTraceEndCallback(126LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v38);
  ThreadUnlock1(v20);
  v21 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v21 + 64) = v37;
  *(_QWORD *)(v21 + 80) = v27;
  if ( v19 >= 0 && v40 == 24 )
  {
    v22 = (__int64 *)v41;
    if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
      v22 = (__int64 *)MmUserProbeAddress;
    v23 = *v22;
    v36 = *v22;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(__int64 **)(v24 + 96) != a4 )
    {
      v25 = *(__int64 **)(v41 + 16);
      if ( v25 + 1 < v25 || (unsigned __int64)(v25 + 1) > MmUserProbeAddress )
        v25 = (__int64 *)MmUserProbeAddress;
      *a4 = *v25;
      return v23;
    }
  }
  return 0LL;
}
