/*
 * XREFs of SfnINOUTLPPOINT5 @ 0x1C0103DD0
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

__int64 __fastcall SfnINOUTLPPOINT5(
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
  __int128 v26; // xmm3
  __int64 v27; // xmm0_8
  char v29; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-100h] BYREF
  __int128 v33; // [rsp+58h] [rbp-F0h]
  __int64 v34; // [rsp+68h] [rbp-E0h]
  _QWORD v35[8]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-98h]
  __int64 v37; // [rsp+C0h] [rbp-88h] BYREF
  int v38; // [rsp+C8h] [rbp-80h]
  int v39; // [rsp+CCh] [rbp-7Ch]
  __int64 v40; // [rsp+D0h] [rbp-78h]
  __int128 v41; // [rsp+D8h] [rbp-70h]
  __int128 v42; // [rsp+E8h] [rbp-60h]
  __int64 v43; // [rsp+F8h] [rbp-50h]
  __int64 v44; // [rsp+100h] [rbp-48h]
  __int64 v45; // [rsp+108h] [rbp-40h]

  v32 = 0LL;
  v31[0] = 0;
  v35[2] = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v39 = 0;
  v37 = v14;
  v38 = a2;
  v40 = a3;
  v41 = *a4;
  v42 = a4[1];
  v43 = *((_QWORD *)a4 + 4);
  v44 = a5;
  v45 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v35[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v35;
  v35[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v36 = *(_OWORD *)(v16 + 64);
  v33 = v36;
  v34 = *(_QWORD *)(v16 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(18LL);
  v19 = KeUserModeCallback(18LL, &v37, 80LL, &v32, v31);
  EtwTraceEndCallback(18LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30);
  ThreadUnlock1(v20);
  v21 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v21 + 64) = v36;
  *(_QWORD *)(v21 + 80) = v34;
  if ( v19 < 0 || v31[0] != 24 )
    return 0LL;
  v22 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
    v22 = (__int64 *)MmUserProbeAddress;
  v23 = *v22;
  v35[3] = *v22;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v23;
  v24 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(__int128 **)(v24 + 96) != a4 )
  {
    v25 = *(_QWORD *)(v32 + 16);
    if ( v25 + 40 < v25 || v25 + 40 > MmUserProbeAddress )
      v25 = MmUserProbeAddress;
    v26 = *(_OWORD *)(v25 + 16);
    v27 = *(_QWORD *)(v25 + 32);
    *a4 = *(_OWORD *)v25;
    a4[1] = v26;
    *((_QWORD *)a4 + 4) = v27;
    return v23;
  }
  return 0LL;
}
