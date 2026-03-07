__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  const struct tagWND *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 *v26; // rbx
  _BYTE v28[4]; // [rsp+30h] [rbp-138h] BYREF
  _DWORD v29[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-120h] BYREF
  __int64 v31; // [rsp+58h] [rbp-110h]
  __int128 v32; // [rsp+60h] [rbp-108h]
  __int64 v33; // [rsp+70h] [rbp-F8h]
  __int128 v34; // [rsp+90h] [rbp-D8h]
  __int128 v35; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-B8h]
  __int64 v37; // [rsp+C0h] [rbp-A8h] BYREF
  int v38; // [rsp+C8h] [rbp-A0h]
  __int64 v39; // [rsp+D0h] [rbp-98h]
  __int128 v40; // [rsp+D8h] [rbp-90h]
  __int128 v41; // [rsp+E8h] [rbp-80h]
  __int128 v42; // [rsp+F8h] [rbp-70h]
  __int128 v43; // [rsp+108h] [rbp-60h]
  __int64 v44; // [rsp+118h] [rbp-50h]
  __int64 v45; // [rsp+120h] [rbp-48h]
  __int64 v46; // [rsp+128h] [rbp-40h]

  v10 = 0LL;
  v30 = 0LL;
  v29[0] = 0;
  v31 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v11 = PtiCurrentShared((__int64)a1);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  memset_0(&v37, 0, 0x70uLL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v16 + 672), 4u) )
    return v10;
  v37 = v13;
  v38 = a2;
  v39 = a3;
  *((_DWORD *)a4 + 17) = 0;
  v40 = *a4;
  v41 = a4[1];
  v42 = a4[2];
  v43 = a4[3];
  v44 = *((_QWORD *)a4 + 8);
  v45 = a5;
  v46 = a6;
  v17 = WindowFromDC(*(__int64 **)a4);
  *(_QWORD *)&v40 = _GetDC(v17);
  ThreadLock(a1, &v35);
  v18 = *((_QWORD *)v12 + 60);
  v34 = *(_OWORD *)(v18 + 64);
  v32 = v34;
  v33 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
  v19 = 0LL;
  if ( a1 )
    v19 = *a1;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v20;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v28);
  EtwTraceBeginCallback(23LL);
  v21 = KeUserModeCallback(23LL, &v37, 112LL, &v30, v29);
  EtwTraceEndCallback(23LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v28);
  ThreadUnlock1(v23, v22, v24);
  v25 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v25 + 64) = v34;
  *(_QWORD *)(v25 + 80) = v33;
  if ( v21 >= 0 && v29[0] == 24 )
  {
    v26 = (__int64 *)v30;
    if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v10 = *v26;
    v31 = v10;
    _ReleaseDC(v40);
    return v10;
  }
  return 0LL;
}
