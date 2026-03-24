/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C0105EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     _ServerFixupMenuDC @ 0x1C0106B80 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
        __int64 *a1,
        int a2,
        __int64 a3,
        HDC *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  _OWORD *v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int128 v31; // xmm5
  __int128 v32; // xmm6
  char v34; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v35[3]; // [rsp+31h] [rbp-187h] BYREF
  _DWORD v36[5]; // [rsp+34h] [rbp-184h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-170h] BYREF
  HDC v38; // [rsp+50h] [rbp-168h]
  __int128 v39; // [rsp+60h] [rbp-158h]
  __int64 v40; // [rsp+70h] [rbp-148h]
  _QWORD v41[8]; // [rsp+78h] [rbp-140h] BYREF
  __int128 v42; // [rsp+B8h] [rbp-100h]
  __int64 v43; // [rsp+D0h] [rbp-E8h] BYREF
  int v44; // [rsp+D8h] [rbp-E0h]
  int v45; // [rsp+DCh] [rbp-DCh]
  __int64 v46; // [rsp+E0h] [rbp-D8h]
  __int128 v47; // [rsp+E8h] [rbp-D0h]
  __int128 v48; // [rsp+F8h] [rbp-C0h]
  __int128 v49; // [rsp+108h] [rbp-B0h]
  __int128 v50; // [rsp+118h] [rbp-A0h]
  __int128 v51; // [rsp+128h] [rbp-90h]
  __int128 v52; // [rsp+138h] [rbp-80h]
  __int128 v53; // [rsp+148h] [rbp-70h]
  __int64 v54; // [rsp+158h] [rbp-60h]
  __int64 v55; // [rsp+160h] [rbp-58h]

  v37 = 0LL;
  v36[0] = 0;
  v41[2] = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v45 = 0;
  v38 = 0LL;
  v15 = ServerFixupMenuDC(a4[5]);
  if ( v15 )
  {
    v38 = a4[5];
    a4[5] = (HDC)v15;
  }
  v43 = v14;
  v44 = a2 & 0x1FFFF;
  v46 = a3;
  v47 = *(_OWORD *)a4;
  v48 = *((_OWORD *)a4 + 1);
  v49 = *((_OWORD *)a4 + 2);
  v50 = *((_OWORD *)a4 + 3);
  v51 = *((_OWORD *)a4 + 4);
  v52 = *((_OWORD *)a4 + 5);
  v53 = *((_OWORD *)a4 + 6);
  DWORD1(v48) = 0;
  DWORD1(v50) = 0;
  v54 = a5;
  v55 = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v41[0] = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = v41;
  v41[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v13 + 480);
  v42 = *(_OWORD *)(v17 + 64);
  v39 = v42;
  v40 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v35);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  EtwTraceBeginCallback(109LL);
  v20 = KeUserModeCallback(109LL, &v43, 152LL, &v37, v36);
  EtwTraceEndCallback(109LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v35);
  ThreadUnlock1(v21);
  v22 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v22 + 64) = v42;
  *(_QWORD *)(v22 + 80) = v40;
  if ( v20 < 0 || v36[0] != 24 )
    return 0LL;
  v23 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v23 = (__int64 *)MmUserProbeAddress;
  v24 = *v23;
  v41[3] = *v23;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_26;
  v25 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v25 )
  {
    if ( (*(_DWORD *)(v25 + 84) & 1) != 0 && *(HDC **)(v25 + 96) == a4 )
      return 0LL;
  }
  v26 = *(_OWORD **)(v37 + 16);
  if ( v26 + 7 < v26 || (unsigned __int64)(v26 + 7) > MmUserProbeAddress )
    v26 = (_OWORD *)MmUserProbeAddress;
  v27 = v26[1];
  v28 = v26[2];
  v29 = v26[3];
  v30 = v26[4];
  v31 = v26[5];
  v32 = v26[6];
  *(_OWORD *)a4 = *v26;
  *((_OWORD *)a4 + 1) = v27;
  *((_OWORD *)a4 + 2) = v28;
  *((_OWORD *)a4 + 3) = v29;
  *((_OWORD *)a4 + 4) = v30;
  *((_OWORD *)a4 + 5) = v31;
  *((_OWORD *)a4 + 6) = v32;
LABEL_26:
  if ( v15 )
  {
    _ReleaseDC(v15);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      a4[5] = v38;
  }
  return v24;
}
