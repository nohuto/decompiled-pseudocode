/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C020C580
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     _WindowFromDC @ 0x1C01BDF48 (_WindowFromDC.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r13d
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  const struct tagWND *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 *v31; // rbx
  _BYTE v33[4]; // [rsp+30h] [rbp-138h] BYREF
  _DWORD v34[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-120h] BYREF
  __int64 v36; // [rsp+58h] [rbp-110h]
  __int128 v37; // [rsp+60h] [rbp-108h]
  __int64 v38; // [rsp+70h] [rbp-F8h]
  __int128 v39; // [rsp+90h] [rbp-D8h]
  __int128 v40; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-B8h]
  __int64 v42; // [rsp+C0h] [rbp-A8h] BYREF
  int v43; // [rsp+C8h] [rbp-A0h]
  __int64 v44; // [rsp+D0h] [rbp-98h]
  __int128 v45; // [rsp+D8h] [rbp-90h]
  __int128 v46; // [rsp+E8h] [rbp-80h]
  __int128 v47; // [rsp+F8h] [rbp-70h]
  __int128 v48; // [rsp+108h] [rbp-60h]
  __int64 v49; // [rsp+118h] [rbp-50h]
  __int64 v50; // [rsp+120h] [rbp-48h]
  __int64 v51; // [rsp+128h] [rbp-40h]

  v8 = a2;
  v10 = 0LL;
  v35 = 0LL;
  v34[0] = 0;
  v36 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v11 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  memset_0(&v42, 0, 0x70uLL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v16 + 672), 4u) )
    return v10;
  v42 = v13;
  v43 = v8;
  v44 = a3;
  *(_DWORD *)(a4 + 68) = 0;
  v45 = *(_OWORD *)a4;
  v46 = *(_OWORD *)(a4 + 16);
  v47 = *(_OWORD *)(a4 + 32);
  v48 = *(_OWORD *)(a4 + 48);
  v49 = *(_QWORD *)(a4 + 64);
  v50 = a5;
  v51 = a6;
  v17 = WindowFromDC(*(__int64 **)a4);
  *(_QWORD *)&v45 = _GetDC(v17);
  ThreadLock(a1, &v40);
  v21 = *((_QWORD *)v12 + 60);
  v39 = *(_OWORD *)(v21 + 64);
  v37 = v39;
  v38 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v13;
  v22 = 0LL;
  if ( a1 )
    v22 = *a1;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224);
  else
    v23 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v23;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v33,
    v18,
    v19,
    v20);
  EtwTraceBeginCallback(23LL);
  v24 = KeUserModeCallback(23LL, &v42, 112LL, &v35, v34);
  EtwTraceEndCallback(23LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v33, v25, v26);
  ThreadUnlock1(v28, v27, v29);
  v30 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v30 + 64) = v39;
  *(_QWORD *)(v30 + 80) = v38;
  if ( v24 >= 0 && v34[0] == 24 )
  {
    v31 = (__int64 *)v35;
    if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
      v31 = (__int64 *)MmUserProbeAddress;
    v10 = *v31;
    v36 = v10;
    _ReleaseDC(v45);
    return v10;
  }
  return 0LL;
}
