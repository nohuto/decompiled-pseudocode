/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C022E4B0
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

__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int128 v17; // xmm6
  __int64 v18; // xmm7_8
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rcx
  ULONG64 v24; // rcx
  char v26; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v27[3]; // [rsp+31h] [rbp-F7h] BYREF
  _DWORD v28[5]; // [rsp+34h] [rbp-F4h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-D8h]
  _QWORD v31[3]; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+78h] [rbp-B0h]
  __int64 v33; // [rsp+88h] [rbp-A0h]
  __int64 v34; // [rsp+A8h] [rbp-80h] BYREF
  int v35; // [rsp+B0h] [rbp-78h]
  int v36; // [rsp+B4h] [rbp-74h]
  __int64 v37; // [rsp+B8h] [rbp-70h]
  __int128 v38; // [rsp+C0h] [rbp-68h]
  __int64 v39; // [rsp+D0h] [rbp-58h]
  __int64 v40; // [rsp+D8h] [rbp-50h]

  v29 = 0LL;
  v28[0] = 0;
  v30 = 0LL;
  v31[2] = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v36 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
  {
    v34 = v13;
    v35 = a2;
    v37 = a3;
    v38 = *a4;
    v39 = a5;
    v40 = a6;
    v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v31[0] = *(_QWORD *)(v15 + 416);
    *(_QWORD *)(v15 + 416) = v31;
    v31[1] = a1;
    if ( a1 )
      HMLockObject(a1);
    v16 = *(_QWORD *)(v12 + 480);
    v17 = *(_OWORD *)(v16 + 64);
    v32 = v17;
    v18 = *(_QWORD *)(v16 + 80);
    v33 = v18;
    *(_QWORD *)(v16 + 72) = v13;
    if ( a1 )
      v19 = *a1;
    else
      v19 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v19;
    if ( a1 )
      v20 = *(_QWORD *)(a1[5] + 224);
    else
      v20 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v20;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
    EtwTraceBeginCallback(24LL);
    v21 = KeUserModeCallback(24LL, &v34, 56LL, &v29, v28);
    EtwTraceEndCallback(24LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27);
    ThreadUnlock1(v22);
    v23 = *(_QWORD *)(v12 + 480);
    *(_OWORD *)(v23 + 64) = v17;
    *(_QWORD *)(v23 + 80) = v18;
    if ( v21 < 0 || v28[0] != 24 )
      return 0LL;
    v24 = v29;
    if ( v29 + 8 < v29 || v29 + 8 > MmUserProbeAddress )
      v24 = MmUserProbeAddress;
    return *(_QWORD *)v24;
  }
  return v30;
}
