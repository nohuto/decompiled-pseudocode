/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C0123F90
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

__int64 __fastcall SfnOUTLPTITLEBARINFOEX(
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
  ULONG64 v25; // rdx
  char v27; // [rsp+30h] [rbp-218h] BYREF
  _BYTE v28[3]; // [rsp+31h] [rbp-217h] BYREF
  _DWORD v29[5]; // [rsp+34h] [rbp-214h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-200h] BYREF
  __int128 v31; // [rsp+58h] [rbp-1F0h]
  __int64 v32; // [rsp+68h] [rbp-1E0h]
  _QWORD v33[8]; // [rsp+70h] [rbp-1D8h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-198h]
  __int128 v35; // [rsp+C0h] [rbp-188h]
  __int128 v36; // [rsp+D0h] [rbp-178h]
  __int128 v37; // [rsp+E0h] [rbp-168h]
  __int128 v38; // [rsp+F0h] [rbp-158h]
  __int128 v39; // [rsp+100h] [rbp-148h]
  __int128 v40; // [rsp+110h] [rbp-138h]
  __int128 v41; // [rsp+120h] [rbp-128h]
  __int128 v42; // [rsp+130h] [rbp-118h]
  __int64 v43; // [rsp+140h] [rbp-108h]
  int v44; // [rsp+148h] [rbp-100h]
  __int64 v45; // [rsp+150h] [rbp-F8h] BYREF
  int v46; // [rsp+158h] [rbp-F0h]
  int v47; // [rsp+15Ch] [rbp-ECh]
  __int64 v48; // [rsp+160h] [rbp-E8h]
  __int128 v49; // [rsp+168h] [rbp-E0h]
  __int128 v50; // [rsp+178h] [rbp-D0h]
  __int128 v51; // [rsp+188h] [rbp-C0h]
  __int128 v52; // [rsp+198h] [rbp-B0h]
  __int128 v53; // [rsp+1A8h] [rbp-A0h]
  __int128 v54; // [rsp+1B8h] [rbp-90h]
  __int128 v55; // [rsp+1C8h] [rbp-80h]
  __int128 v56; // [rsp+1D8h] [rbp-70h]
  __int64 v57; // [rsp+1E8h] [rbp-60h]
  int v58; // [rsp+1F0h] [rbp-58h]
  int v59; // [rsp+1F4h] [rbp-54h]
  __int64 v60; // [rsp+1F8h] [rbp-50h]
  __int64 v61; // [rsp+200h] [rbp-48h]

  v30 = 0LL;
  v29[0] = 0;
  v33[2] = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v47 = 0;
  v59 = 0;
  v45 = v14;
  v46 = a2;
  v48 = a3;
  v49 = *a4;
  v50 = a4[1];
  v51 = a4[2];
  v52 = a4[3];
  v53 = a4[4];
  v54 = a4[5];
  v55 = a4[6];
  v56 = a4[7];
  v57 = *((_QWORD *)a4 + 16);
  v58 = *((_DWORD *)a4 + 34);
  v60 = a5;
  v61 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v33[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v33;
  v33[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v34 = *(_OWORD *)(v16 + 64);
  v31 = v34;
  v32 = *(_QWORD *)(v16 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v28);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  EtwTraceBeginCallback(111LL);
  v19 = KeUserModeCallback(111LL, &v45, 184LL, &v30, v29);
  EtwTraceEndCallback(111LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v28);
  ThreadUnlock1(v20);
  v21 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v21 + 64) = v34;
  *(_QWORD *)(v21 + 80) = v32;
  if ( v19 >= 0 && v29[0] == 24 )
  {
    v22 = (__int64 *)v30;
    if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
      v22 = (__int64 *)MmUserProbeAddress;
    v23 = *v22;
    v33[3] = *v22;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(__int128 **)(v24 + 96) != a4 )
    {
      v25 = *(_QWORD *)(v30 + 16);
      if ( v25 + 140 < v25 || v25 + 140 > MmUserProbeAddress )
        v25 = MmUserProbeAddress;
      v35 = *(_OWORD *)v25;
      v36 = *(_OWORD *)(v25 + 16);
      v37 = *(_OWORD *)(v25 + 32);
      v38 = *(_OWORD *)(v25 + 48);
      v39 = *(_OWORD *)(v25 + 64);
      v40 = *(_OWORD *)(v25 + 80);
      v41 = *(_OWORD *)(v25 + 96);
      v42 = *(_OWORD *)(v25 + 112);
      v43 = *(_QWORD *)(v25 + 128);
      v44 = *(_DWORD *)(v25 + 136);
      *a4 = v35;
      a4[1] = v36;
      a4[2] = v37;
      a4[3] = v38;
      a4[4] = v39;
      a4[5] = v40;
      a4[6] = v41;
      a4[7] = v42;
      *((_QWORD *)a4 + 16) = v43;
      *((_DWORD *)a4 + 34) = v44;
      return v23;
    }
  }
  return 0LL;
}
