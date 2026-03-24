/*
 * XREFs of SfnINOUTLPRECT @ 0x1C0119C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINOUTLPRECT(
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
  char v29; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-100h] BYREF
  _QWORD v33[3]; // [rsp+58h] [rbp-F0h] BYREF
  __int128 v34; // [rsp+70h] [rbp-D8h]
  __int64 v35; // [rsp+80h] [rbp-C8h]
  __int64 v36; // [rsp+88h] [rbp-C0h]
  __int128 v37; // [rsp+B0h] [rbp-98h]
  __int64 v38; // [rsp+C0h] [rbp-88h] BYREF
  int v39; // [rsp+C8h] [rbp-80h]
  int v40; // [rsp+CCh] [rbp-7Ch]
  __int64 v41; // [rsp+D0h] [rbp-78h]
  __int128 v42; // [rsp+D8h] [rbp-70h]
  __int64 v43; // [rsp+E8h] [rbp-60h]
  __int64 v44; // [rsp+F0h] [rbp-58h]

  v32 = 0LL;
  v31[0] = 0;
  v33[2] = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v40 = 0;
  v38 = v14;
  v39 = a2;
  v41 = a3;
  v42 = *a4;
  v43 = a5;
  v44 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v33[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v33;
  v33[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v17 = *(_OWORD *)(v16 + 64);
  v34 = v17;
  v18 = *(_QWORD *)(v16 + 80);
  v35 = v18;
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(20LL);
  v21 = KeUserModeCallback(20LL, &v38, 56LL, &v32, v31);
  EtwTraceEndCallback(20LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  ThreadUnlock1(v22);
  v23 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v23 + 64) = v17;
  *(_QWORD *)(v23 + 80) = v18;
  if ( v21 >= 0 && v31[0] == 24 )
  {
    v24 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v36 = *v24;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(__int128 **)(v26 + 96) != a4 )
    {
      v27 = *(__int128 **)(v32 + 16);
      if ( v27 + 1 < v27 || (unsigned __int64)(v27 + 1) > MmUserProbeAddress )
        v27 = (__int128 *)MmUserProbeAddress;
      v37 = *v27;
      *a4 = v37;
      return v25;
    }
  }
  return 0LL;
}
