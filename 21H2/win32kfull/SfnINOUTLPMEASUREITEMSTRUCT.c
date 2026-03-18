/*
 * XREFs of SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C0226C80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINOUTLPMEASUREITEMSTRUCT(
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
  _BYTE v29[4]; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v30[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-100h] BYREF
  __int128 v32; // [rsp+58h] [rbp-F0h]
  __int64 v33; // [rsp+68h] [rbp-E0h]
  __int64 v34; // [rsp+70h] [rbp-D8h]
  __int128 v35; // [rsp+98h] [rbp-B0h]
  __int128 v36; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-90h]
  __int64 v38; // [rsp+C0h] [rbp-88h] BYREF
  int v39; // [rsp+C8h] [rbp-80h]
  int v40; // [rsp+CCh] [rbp-7Ch]
  __int64 v41; // [rsp+D0h] [rbp-78h]
  __int128 v42; // [rsp+D8h] [rbp-70h]
  __int128 v43; // [rsp+E8h] [rbp-60h]
  __int64 v44; // [rsp+F8h] [rbp-50h]
  __int64 v45; // [rsp+100h] [rbp-48h]

  v31 = 0LL;
  v30[0] = 0;
  v36 = 0LL;
  v37 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
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
  *((_DWORD *)a4 + 5) = 0;
  v42 = *a4;
  v43 = a4[1];
  v44 = a5;
  v45 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v36);
  v15 = *(_QWORD *)(v13 + 480);
  v35 = *(_OWORD *)(v15 + 64);
  v32 = v35;
  v33 = *(_QWORD *)(v15 + 80);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v29);
  EtwTraceBeginCallback(16LL);
  v18 = KeUserModeCallback(16LL, &v38, 72LL, &v31, v30);
  EtwTraceEndCallback(16LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v29);
  ThreadUnlock1(v20, v19, v21);
  v22 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v22 + 64) = v35;
  *(_QWORD *)(v22 + 80) = v33;
  if ( v18 >= 0 && v30[0] == 24 )
  {
    v23 = (__int64 *)v31;
    if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v34 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int128 **)(v25 + 96) != a4 )
    {
      v26 = *(__int128 **)(v31 + 16);
      if ( v26 + 2 < v26 || (unsigned __int64)(v26 + 2) > MmUserProbeAddress )
        v26 = (__int128 *)MmUserProbeAddress;
      v27 = v26[1];
      *a4 = *v26;
      a4[1] = v27;
      return v24;
    }
  }
  return 0LL;
}
