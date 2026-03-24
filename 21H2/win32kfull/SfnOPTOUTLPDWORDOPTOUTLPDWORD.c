/*
 * XREFs of SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C0153BB0
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

__int64 __fastcall SfnOPTOUTLPDWORDOPTOUTLPDWORD(
        __int64 *a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
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
  _DWORD *v24; // rdx
  _DWORD *v25; // rdx
  __int64 v27; // [rsp+68h] [rbp-B0h]
  __int64 v28; // [rsp+70h] [rbp-A8h] BYREF
  int v29; // [rsp+78h] [rbp-A0h]
  int v30; // [rsp+7Ch] [rbp-9Ch]
  __int64 v31; // [rsp+80h] [rbp-98h]
  __int64 v32; // [rsp+88h] [rbp-90h]
  _QWORD v33[8]; // [rsp+90h] [rbp-88h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-48h]
  char v35; // [rsp+120h] [rbp+8h] BYREF
  char v36; // [rsp+128h] [rbp+10h] BYREF
  int v37; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v38; // [rsp+138h] [rbp+20h] BYREF

  v38 = 0LL;
  v37 = 0;
  v33[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v30 = 0;
  v28 = v14;
  v29 = a2;
  v31 = a5;
  v32 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v33[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v33;
  v33[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v34 = *(_OWORD *)(v16 + 64);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v35);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(31LL);
  v19 = KeUserModeCallback(31LL, &v28, 32LL, &v38, &v37);
  EtwTraceEndCallback(31LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v35);
  ThreadUnlock1(v20);
  v21 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v21 + 64) = v34;
  *(_QWORD *)(v21 + 80) = v27;
  if ( v19 < 0 || v37 != 24 )
    return 0LL;
  v22 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v22 = (__int64 *)MmUserProbeAddress;
  v23 = *v22;
  v33[3] = *v22;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    if ( a3 )
    {
      v24 = *(_DWORD **)(v38 + 16);
      if ( (unsigned __int64)v24 >= MmUserProbeAddress )
        v24 = (_DWORD *)MmUserProbeAddress;
      *a3 = *v24;
    }
    if ( a4 )
    {
      v25 = (_DWORD *)(*(_QWORD *)(v38 + 16) + 4LL);
      if ( (unsigned __int64)v25 >= MmUserProbeAddress )
        v25 = (_DWORD *)MmUserProbeAddress;
      *a4 = *v25;
    }
  }
  return v23;
}
