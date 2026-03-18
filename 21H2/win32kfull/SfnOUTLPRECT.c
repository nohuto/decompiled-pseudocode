/*
 * XREFs of SfnOUTLPRECT @ 0x1C014D180
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall SfnOUTLPRECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int128 v16; // xmm6
  __int64 v17; // xmm7_8
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int128 *v28; // rcx
  __int64 v30; // [rsp+48h] [rbp-E0h] BYREF
  int v31; // [rsp+50h] [rbp-D8h]
  int v32; // [rsp+54h] [rbp-D4h]
  __int64 v33; // [rsp+58h] [rbp-D0h]
  __int64 v34; // [rsp+60h] [rbp-C8h]
  __int64 v35; // [rsp+68h] [rbp-C0h]
  __int128 v36; // [rsp+70h] [rbp-B8h]
  __int64 v37; // [rsp+80h] [rbp-A8h]
  __int64 v38; // [rsp+88h] [rbp-A0h]
  __int128 v39; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-68h]
  __int128 v41; // [rsp+C8h] [rbp-60h]
  int v42; // [rsp+130h] [rbp+8h] BYREF
  char v43; // [rsp+138h] [rbp+10h] BYREF
  unsigned __int64 v44; // [rsp+140h] [rbp+18h] BYREF

  v44 = 0LL;
  v42 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v32 = 0;
  v30 = v14;
  v31 = a2;
  v33 = a3;
  v34 = a5;
  v35 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v39);
  v15 = *(_QWORD *)(v13 + 480);
  v16 = *(_OWORD *)(v15 + 64);
  v36 = v16;
  v17 = *(_QWORD *)(v15 + 80);
  v37 = v17;
  *(_QWORD *)(v15 + 72) = v14;
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(34LL);
  v20 = KeUserModeCallback(34LL, &v30, 40LL, &v44, &v42);
  EtwTraceEndCallback(34LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v24 + 64) = v16;
  *(_QWORD *)(v24 + 80) = v17;
  if ( v20 >= 0 && v42 == 24 )
  {
    v25 = (__int64 *)v44;
    if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v38 = *v25;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v26;
    v27 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
    if ( !v27 || (*(_DWORD *)(v27 + 84) & 1) == 0 || *(_OWORD **)(v27 + 96) != a4 )
    {
      v28 = *(__int128 **)(v44 + 16);
      if ( v28 + 1 < v28 || (unsigned __int64)(v28 + 1) > MmUserProbeAddress )
        v28 = (__int128 *)MmUserProbeAddress;
      v41 = *v28;
      *a4 = v41;
      return v26;
    }
  }
  return 0LL;
}
