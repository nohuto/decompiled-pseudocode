/*
 * XREFs of SfnINOUTDRAG @ 0x1C02268E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall SfnINOUTDRAG(
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
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int128 *v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v30; // [rsp+58h] [rbp-E0h]
  __int128 v31; // [rsp+88h] [rbp-B0h]
  __int128 v32; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-90h]
  __int64 v34; // [rsp+B0h] [rbp-88h] BYREF
  int v35; // [rsp+B8h] [rbp-80h]
  int v36; // [rsp+BCh] [rbp-7Ch]
  __int64 v37; // [rsp+C0h] [rbp-78h]
  __int64 v38; // [rsp+C8h] [rbp-70h]
  __int64 v39; // [rsp+D0h] [rbp-68h]
  __int128 v40; // [rsp+D8h] [rbp-60h]
  __int128 v41; // [rsp+E8h] [rbp-50h]
  __int128 v42; // [rsp+F8h] [rbp-40h]
  int v43; // [rsp+140h] [rbp+8h] BYREF
  char v44; // [rsp+148h] [rbp+10h] BYREF
  unsigned __int64 v45; // [rsp+150h] [rbp+18h] BYREF

  v45 = 0LL;
  v43 = 0;
  v32 = 0LL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v36 = 0;
  v34 = v14;
  v35 = a2;
  v37 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 11) = 0;
  v40 = *a4;
  v41 = a4[1];
  v42 = a4[2];
  v38 = a5;
  v39 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v32);
  v15 = *(_QWORD *)(v13 + 480);
  v31 = *(_OWORD *)(v15 + 64);
  v30 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v14;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v17;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  EtwTraceBeginCallback(5LL);
  v18 = KeUserModeCallback(5LL, &v34, 88LL, &v45, &v43);
  EtwTraceEndCallback(5LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  ThreadUnlock1(v20, v19, v21);
  v22 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v22 + 64) = v31;
  *(_QWORD *)(v22 + 80) = v30;
  if ( v18 >= 0 && v43 == 24 )
  {
    v23 = (__int64 *)v45;
    if ( v45 + 8 < v45 || v45 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int128 **)(v25 + 96) != a4 )
    {
      v26 = *(__int128 **)(v45 + 16);
      if ( v26 + 3 < v26 || (unsigned __int64)(v26 + 3) > MmUserProbeAddress )
        v26 = (__int128 *)MmUserProbeAddress;
      v27 = v26[1];
      v28 = v26[2];
      *a4 = *v26;
      a4[1] = v27;
      a4[2] = v28;
      return v24;
    }
  }
  return 0LL;
}
