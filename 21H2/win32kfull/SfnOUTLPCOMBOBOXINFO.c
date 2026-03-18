/*
 * XREFs of SfnOUTLPCOMBOBOXINFO @ 0x1C00EB400
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

__int64 __fastcall SfnOUTLPCOMBOBOXINFO(
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
  __int128 v29; // xmm3
  _BYTE v31[4]; // [rsp+30h] [rbp-138h] BYREF
  _DWORD v32[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-120h] BYREF
  __int128 v34; // [rsp+58h] [rbp-110h]
  __int64 v35; // [rsp+68h] [rbp-100h]
  __int64 v36; // [rsp+70h] [rbp-F8h]
  __int128 v37; // [rsp+98h] [rbp-D0h]
  __int128 v38; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-B0h]
  __int64 v40; // [rsp+C0h] [rbp-A8h] BYREF
  int v41; // [rsp+C8h] [rbp-A0h]
  int v42; // [rsp+CCh] [rbp-9Ch]
  __int64 v43; // [rsp+D0h] [rbp-98h]
  __int128 v44; // [rsp+D8h] [rbp-90h]
  __int128 v45; // [rsp+E8h] [rbp-80h]
  __int128 v46; // [rsp+F8h] [rbp-70h]
  __int128 v47; // [rsp+108h] [rbp-60h]
  __int64 v48; // [rsp+118h] [rbp-50h]
  __int64 v49; // [rsp+120h] [rbp-48h]

  v33 = 0LL;
  v32[0] = 0;
  v38 = 0LL;
  v39 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v42 = 0;
  v40 = v14;
  v41 = a2;
  v43 = a3;
  v44 = *a4;
  v45 = a4[1];
  v46 = a4[2];
  v47 = a4[3];
  v48 = a5;
  v49 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v38);
  v15 = *(_QWORD *)(v13 + 480);
  v37 = *(_OWORD *)(v15 + 64);
  v34 = v37;
  v35 = *(_QWORD *)(v15 + 80);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v31);
  EtwTraceBeginCallback(104LL);
  v18 = KeUserModeCallback(104LL, &v40, 104LL, &v33, v32);
  EtwTraceEndCallback(104LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v31);
  ThreadUnlock1(v20, v19, v21);
  v22 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v22 + 64) = v37;
  *(_QWORD *)(v22 + 80) = v35;
  if ( v18 >= 0 && v32[0] == 24 )
  {
    v23 = (__int64 *)v33;
    if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v36 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int128 **)(v25 + 96) != a4 )
    {
      v26 = *(__int128 **)(v33 + 16);
      if ( v26 + 4 < v26 || (unsigned __int64)(v26 + 4) > MmUserProbeAddress )
        v26 = (__int128 *)MmUserProbeAddress;
      v27 = v26[1];
      v28 = v26[2];
      v29 = v26[3];
      *a4 = *v26;
      a4[1] = v27;
      a4[2] = v28;
      a4[3] = v29;
      return v24;
    }
  }
  return 0LL;
}
