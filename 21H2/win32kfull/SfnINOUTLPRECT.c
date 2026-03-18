/*
 * XREFs of SfnINOUTLPRECT @ 0x1C010A910
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

__int64 __fastcall SfnINOUTLPRECT(
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
  _BYTE v30[4]; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-100h] BYREF
  __int128 v33; // [rsp+58h] [rbp-F0h]
  __int64 v34; // [rsp+68h] [rbp-E0h]
  __int64 v35; // [rsp+70h] [rbp-D8h]
  __int128 v36; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-A0h]
  __int128 v38; // [rsp+B0h] [rbp-98h]
  __int64 v39; // [rsp+C0h] [rbp-88h] BYREF
  int v40; // [rsp+C8h] [rbp-80h]
  int v41; // [rsp+CCh] [rbp-7Ch]
  __int64 v42; // [rsp+D0h] [rbp-78h]
  __int128 v43; // [rsp+D8h] [rbp-70h]
  __int64 v44; // [rsp+E8h] [rbp-60h]
  __int64 v45; // [rsp+F0h] [rbp-58h]

  v32 = 0LL;
  v31[0] = 0;
  v36 = 0LL;
  v37 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v41 = 0;
  v39 = v14;
  v40 = a2;
  v42 = a3;
  v43 = *a4;
  v44 = a5;
  v45 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v36);
  v15 = *(_QWORD *)(v13 + 480);
  v16 = *(_OWORD *)(v15 + 64);
  v33 = v16;
  v17 = *(_QWORD *)(v15 + 80);
  v34 = v17;
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v30);
  EtwTraceBeginCallback(20LL);
  v20 = KeUserModeCallback(20LL, &v39, 56LL, &v32, v31);
  EtwTraceEndCallback(20LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v30);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v24 + 64) = v16;
  *(_QWORD *)(v24 + 80) = v17;
  if ( v20 >= 0 && v31[0] == 24 )
  {
    v25 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v35 = *v25;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v26;
    v27 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
    if ( !v27 || (*(_DWORD *)(v27 + 84) & 1) == 0 || *(__int128 **)(v27 + 96) != a4 )
    {
      v28 = *(__int128 **)(v32 + 16);
      if ( v28 + 1 < v28 || (unsigned __int64)(v28 + 1) > MmUserProbeAddress )
        v28 = (__int128 *)MmUserProbeAddress;
      v38 = *v28;
      *a4 = v38;
      return v26;
    }
  }
  return 0LL;
}
