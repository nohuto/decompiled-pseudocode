/*
 * XREFs of SfnINLPUAHDRAWMENU @ 0x1C0106290
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
 */

__int64 __fastcall SfnINLPUAHDRAWMENU(
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
  __int64 v12; // rsi
  __int64 v13; // rdi
  HDC v14; // r13
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rbx
  unsigned __int64 v27; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v28; // [rsp+50h] [rbp-D8h]
  __int64 v29; // [rsp+60h] [rbp-C8h]
  _QWORD v30[3]; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+80h] [rbp-A8h] BYREF
  int v32; // [rsp+88h] [rbp-A0h]
  int v33; // [rsp+8Ch] [rbp-9Ch]
  __int64 v34; // [rsp+90h] [rbp-98h]
  __int128 v35; // [rsp+98h] [rbp-90h]
  HDC v36; // [rsp+A8h] [rbp-80h]
  __int64 v37; // [rsp+B0h] [rbp-78h]
  __int64 v38; // [rsp+B8h] [rbp-70h]
  __int64 v39; // [rsp+C0h] [rbp-68h]
  __int128 v40; // [rsp+E0h] [rbp-48h]
  char v41; // [rsp+130h] [rbp+8h] BYREF
  char v42; // [rsp+138h] [rbp+10h] BYREF
  __int64 v43; // [rsp+140h] [rbp+18h]
  int v44; // [rsp+148h] [rbp+20h] BYREF

  v43 = a3;
  v27 = 0LL;
  v44 = 0;
  v30[2] = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v33 = 0;
  v14 = 0LL;
  v15 = ServerFixupMenuDC(a4[1]);
  v16 = v15;
  if ( v15 )
  {
    v14 = a4[1];
    a4[1] = (HDC)v15;
  }
  v31 = v13;
  v32 = a2 & 0x1FFFF;
  v34 = v43;
  *((_DWORD *)a4 + 5) = 0;
  v35 = *(_OWORD *)a4;
  v36 = a4[2];
  v37 = a5;
  v38 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v30[0] = *(_QWORD *)(v17 + 416);
  *(_QWORD *)(v17 + 416) = v30;
  v30[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v18 = *(_QWORD *)(v12 + 480);
  v40 = *(_OWORD *)(v18 + 64);
  v28 = v40;
  v29 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v41);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(106LL);
  v21 = KeUserModeCallback(106LL, &v31, 64LL, &v27, &v44);
  EtwTraceEndCallback(106LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v41);
  ThreadUnlock1(v22);
  v23 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v23 + 64) = v40;
  *(_QWORD *)(v23 + 80) = v29;
  if ( v21 < 0 || v44 != 24 )
    return 0LL;
  v24 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  v25 = *v24;
  v39 = *v24;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      a4[1] = v14;
  }
  return v25;
}
