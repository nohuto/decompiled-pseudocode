/*
 * XREFs of SfnOUTDWORDINDWORD @ 0x1C022EA00
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnOUTDWORDINDWORD(
        __int64 *a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
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
  __int64 v26; // [rsp+68h] [rbp-C0h]
  _QWORD v27[3]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+88h] [rbp-A0h] BYREF
  int v29; // [rsp+90h] [rbp-98h]
  __int64 v30; // [rsp+94h] [rbp-94h]
  int v31; // [rsp+9Ch] [rbp-8Ch]
  __int64 v32; // [rsp+A0h] [rbp-88h]
  __int64 v33; // [rsp+A8h] [rbp-80h]
  __int64 v34; // [rsp+B0h] [rbp-78h]
  __int64 v35; // [rsp+B8h] [rbp-70h]
  __int128 v36; // [rsp+E0h] [rbp-48h]
  char v37; // [rsp+130h] [rbp+8h] BYREF
  char v38; // [rsp+138h] [rbp+10h] BYREF
  int v39; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int64 v40; // [rsp+148h] [rbp+20h] BYREF

  v40 = 0LL;
  v39 = 0;
  v27[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v28 = v14;
  v29 = a2;
  v32 = a4;
  v33 = a5;
  v34 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v27[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v27;
  v27[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v36 = *(_OWORD *)(v16 + 64);
  v26 = *(_QWORD *)(v16 + 80);
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
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v37);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(33LL);
  v19 = KeUserModeCallback(33LL, &v28, 48LL, &v40, &v39);
  EtwTraceEndCallback(33LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v37);
  ThreadUnlock1(v20);
  v21 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v21 + 64) = v36;
  *(_QWORD *)(v21 + 80) = v26;
  if ( v19 < 0 || v39 != 24 )
    return 0LL;
  v22 = (__int64 *)v40;
  if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
    v22 = (__int64 *)MmUserProbeAddress;
  v23 = *v22;
  v35 = *v22;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v24 = *(_DWORD **)(v40 + 16);
    if ( (unsigned __int64)v24 >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *a3 = *v24;
  }
  return v23;
}
