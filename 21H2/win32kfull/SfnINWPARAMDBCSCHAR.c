/*
 * XREFs of SfnINWPARAMDBCSCHAR @ 0x1C0160040
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C012DA10 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall SfnINWPARAMDBCSCHAR(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 result; // rax
  unsigned __int64 v22; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v23; // [rsp+50h] [rbp-C8h]
  __int64 v24; // [rsp+60h] [rbp-B8h]
  __int64 v25; // [rsp+68h] [rbp-B0h] BYREF
  unsigned int v26; // [rsp+70h] [rbp-A8h]
  int v27; // [rsp+74h] [rbp-A4h]
  __int64 v28; // [rsp+78h] [rbp-A0h]
  __int64 v29; // [rsp+80h] [rbp-98h]
  __int64 v30; // [rsp+88h] [rbp-90h]
  __int64 v31; // [rsp+90h] [rbp-88h]
  int v32; // [rsp+98h] [rbp-80h]
  int v33; // [rsp+9Ch] [rbp-7Ch]
  _QWORD v34[7]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v35; // [rsp+D8h] [rbp-40h]
  char v36; // [rsp+120h] [rbp+8h] BYREF
  char v37; // [rsp+128h] [rbp+10h] BYREF
  __int64 v38; // [rsp+130h] [rbp+18h] BYREF
  int v39; // [rsp+138h] [rbp+20h] BYREF

  v38 = a3;
  v22 = 0LL;
  v39 = 0;
  v34[2] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v27 = 0;
  v33 = 0;
  v25 = v12;
  v26 = a2;
  v32 = a7 & 1;
  if ( (a7 & 1) != 0 )
    RtlWCSMessageWParamCharToMB(a2, (WCHAR *)&v38);
  v28 = v38;
  v29 = a4;
  v30 = a5;
  v31 = a6;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v34[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v34;
  v34[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v14 = *(_QWORD *)(v11 + 480);
  v35 = *(_OWORD *)(v14 + 64);
  v23 = v35;
  v24 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v15;
  if ( a1 )
    v16 = *(_QWORD *)(a1[5] + 224);
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v16;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(95LL);
  v17 = KeUserModeCallback(95LL, &v25, 56LL, &v22, &v39);
  EtwTraceEndCallback(95LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36);
  ThreadUnlock1(v18);
  v19 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v19 + 64) = v35;
  *(_QWORD *)(v19 + 80) = v24;
  if ( v17 < 0 || v39 != 24 )
    return 0LL;
  v20 = (__int64 *)v22;
  if ( v22 + 8 < v22 || v22 + 8 > MmUserProbeAddress )
    v20 = (__int64 *)MmUserProbeAddress;
  result = *v20;
  v34[3] = *v20;
  return result;
}
