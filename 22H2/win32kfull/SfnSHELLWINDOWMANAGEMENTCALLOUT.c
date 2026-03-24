/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1C0119BE0
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

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTCALLOUT(
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
  __int128 *v25; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  char v30; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v31[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v32[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-120h] BYREF
  __int128 v34; // [rsp+58h] [rbp-110h]
  __int64 v35; // [rsp+68h] [rbp-100h]
  _QWORD v36[8]; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-B8h]
  __int64 v38; // [rsp+C0h] [rbp-A8h] BYREF
  int v39; // [rsp+C8h] [rbp-A0h]
  int v40; // [rsp+CCh] [rbp-9Ch]
  __int64 v41; // [rsp+D0h] [rbp-98h]
  __int128 v42; // [rsp+D8h] [rbp-90h]
  __int128 v43; // [rsp+E8h] [rbp-80h]
  __int128 v44; // [rsp+F8h] [rbp-70h]
  __int128 v45; // [rsp+108h] [rbp-60h]
  __int64 v46; // [rsp+118h] [rbp-50h]
  __int64 v47; // [rsp+120h] [rbp-48h]

  v33 = 0LL;
  v32[0] = 0;
  v36[2] = 0LL;
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
  v39 = a2 & 0x1FFFF;
  v41 = a3;
  v42 = *a4;
  v43 = a4[1];
  v44 = a4[2];
  v45 = a4[3];
  v46 = a5;
  v47 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v36[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v36;
  v36[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v37 = *(_OWORD *)(v16 + 64);
  v34 = v37;
  v35 = *(_QWORD *)(v16 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  EtwTraceBeginCallback(53LL);
  v19 = KeUserModeCallback(53LL, &v38, 104LL, &v33, v32);
  EtwTraceEndCallback(53LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31);
  ThreadUnlock1(v20);
  v21 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v21 + 64) = v37;
  *(_QWORD *)(v21 + 80) = v35;
  if ( v19 >= 0 && v32[0] == 24 )
  {
    v22 = (__int64 *)v33;
    if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
      v22 = (__int64 *)MmUserProbeAddress;
    v23 = *v22;
    v36[3] = *v22;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(__int128 **)(v24 + 96) != a4 )
    {
      v25 = *(__int128 **)(v33 + 16);
      if ( v25 + 4 < v25 || (unsigned __int64)(v25 + 4) > MmUserProbeAddress )
        v25 = (__int128 *)MmUserProbeAddress;
      v26 = v25[1];
      v27 = v25[2];
      v28 = v25[3];
      *a4 = *v25;
      a4[1] = v26;
      a4[2] = v27;
      a4[3] = v28;
      return v23;
    }
  }
  return 0LL;
}
