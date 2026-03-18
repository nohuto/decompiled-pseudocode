/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C0227AA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     _WindowFromDC @ 0x1C00EE034 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 CurrentProcessWin32Process; // rax
  const struct tagWND *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rcx
  _BYTE v26[4]; // [rsp+30h] [rbp-138h] BYREF
  _DWORD v27[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-120h] BYREF
  __int64 v29; // [rsp+50h] [rbp-118h]
  __int128 v30; // [rsp+60h] [rbp-108h]
  __int64 v31; // [rsp+70h] [rbp-F8h]
  __int128 v32; // [rsp+90h] [rbp-D8h]
  __int128 v33; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-B8h]
  __int64 v35; // [rsp+C0h] [rbp-A8h] BYREF
  int v36; // [rsp+C8h] [rbp-A0h]
  int v37; // [rsp+CCh] [rbp-9Ch]
  __int64 v38; // [rsp+D0h] [rbp-98h]
  __int128 v39; // [rsp+D8h] [rbp-90h]
  __int128 v40; // [rsp+E8h] [rbp-80h]
  __int128 v41; // [rsp+F8h] [rbp-70h]
  __int128 v42; // [rsp+108h] [rbp-60h]
  __int64 v43; // [rsp+118h] [rbp-50h]
  __int64 v44; // [rsp+120h] [rbp-48h]
  __int64 v45; // [rsp+128h] [rbp-40h]

  v28 = 0LL;
  v27[0] = 0;
  v29 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v37 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
    return v29;
  v35 = v13;
  v36 = a2;
  v38 = a3;
  *((_DWORD *)a4 + 17) = 0;
  v39 = *a4;
  v40 = a4[1];
  v41 = a4[2];
  v42 = a4[3];
  v43 = *((_QWORD *)a4 + 8);
  v44 = a5;
  v45 = a6;
  v15 = WindowFromDC(*(HDC *)a4);
  *(_QWORD *)&v39 = _GetDC(v15);
  ThreadLock((__int64)a1, (__int64 *)&v33);
  v16 = *(_QWORD *)(v12 + 480);
  v32 = *(_OWORD *)(v16 + 64);
  v30 = v32;
  v31 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v13;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v18;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v26);
  EtwTraceBeginCallback(23LL);
  v19 = KeUserModeCallback(23LL, &v35, 112LL, &v28, v27);
  EtwTraceEndCallback(23LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v26);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v23 + 64) = v32;
  *(_QWORD *)(v23 + 80) = v31;
  if ( v19 >= 0 && v27[0] == 24 )
  {
    v24 = (__int64 *)v28;
    if ( v28 + 8 < v28 || v28 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v29 = *v24;
    _ReleaseDC(v39);
    return v29;
  }
  return 0LL;
}
