/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1C0227730
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall SfnINOUTNEXTMENU(
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
  ULONG64 v26; // rcx
  __int64 v27; // xmm0_8
  __int64 v29; // [rsp+58h] [rbp-C0h]
  __int64 v30; // [rsp+60h] [rbp-B8h] BYREF
  int v31; // [rsp+68h] [rbp-B0h]
  int v32; // [rsp+6Ch] [rbp-ACh]
  __int64 v33; // [rsp+70h] [rbp-A8h]
  __int128 v34; // [rsp+78h] [rbp-A0h]
  __int64 v35; // [rsp+88h] [rbp-90h]
  __int64 v36; // [rsp+90h] [rbp-88h]
  __int64 v37; // [rsp+98h] [rbp-80h]
  __int64 v38; // [rsp+A0h] [rbp-78h]
  __int128 v39; // [rsp+C8h] [rbp-50h]
  __int128 v40; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-30h]
  int v42; // [rsp+120h] [rbp+8h] BYREF
  char v43; // [rsp+128h] [rbp+10h] BYREF
  unsigned __int64 v44; // [rsp+130h] [rbp+18h] BYREF

  v44 = 0LL;
  v42 = 0;
  v40 = 0LL;
  v41 = 0LL;
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
  v36 = a5;
  v37 = a6;
  v34 = *a4;
  v35 = *((_QWORD *)a4 + 2);
  ThreadLock((__int64)a1, (__int64 *)&v40);
  v15 = *(_QWORD *)(v13 + 480);
  v39 = *(_OWORD *)(v15 + 64);
  v29 = *(_QWORD *)(v15 + 80);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(30LL);
  v18 = KeUserModeCallback(30LL, &v30, 64LL, &v44, &v42);
  EtwTraceEndCallback(30LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ThreadUnlock1(v20, v19, v21);
  v22 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v22 + 64) = v39;
  *(_QWORD *)(v22 + 80) = v29;
  if ( v18 >= 0 && v42 == 24 )
  {
    v23 = (__int64 *)v44;
    if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v38 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int128 **)(v25 + 96) != a4 )
    {
      v26 = *(_QWORD *)(v44 + 16);
      if ( v26 + 24 < v26 || v26 + 24 > MmUserProbeAddress )
        v26 = MmUserProbeAddress;
      v27 = *(_QWORD *)(v26 + 16);
      *a4 = *(_OWORD *)v26;
      *((_QWORD *)a4 + 2) = v27;
      return v24;
    }
  }
  return 0LL;
}
