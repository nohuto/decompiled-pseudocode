__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int128 v18; // xmm6
  __int64 v19; // xmm7_8
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 *v27; // rbx
  _BYTE v29[4]; // [rsp+30h] [rbp-108h] BYREF
  _DWORD v30[5]; // [rsp+34h] [rbp-104h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-E0h]
  __int128 v33; // [rsp+60h] [rbp-D8h]
  __int64 v34; // [rsp+70h] [rbp-C8h]
  __int128 v35; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-98h]
  __int64 v37; // [rsp+A8h] [rbp-90h] BYREF
  int v38; // [rsp+B0h] [rbp-88h]
  int v39; // [rsp+B4h] [rbp-84h]
  __int64 v40; // [rsp+B8h] [rbp-80h]
  __int128 v41; // [rsp+C0h] [rbp-78h]
  __int64 v42; // [rsp+D0h] [rbp-68h]
  __int64 v43; // [rsp+D8h] [rbp-60h]

  v10 = 0LL;
  v31 = 0LL;
  v30[0] = 0;
  v32 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v11 = PtiCurrentShared((__int64)a1);
  v13 = v11;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v14 = 0LL;
  v39 = 0;
  v41 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(v16 + 672), 4u) )
  {
    v37 = v14;
    v38 = a2;
    v40 = a3;
    v41 = *a4;
    v42 = a5;
    v43 = a6;
    ThreadLock(a1, &v35);
    v17 = *((_QWORD *)v13 + 60);
    v18 = *(_OWORD *)(v17 + 64);
    v33 = v18;
    v19 = *(_QWORD *)(v17 + 80);
    v34 = v19;
    *(_QWORD *)(v17 + 72) = v14;
    v20 = 0LL;
    if ( a1 )
      v20 = *a1;
    *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v20;
    if ( a1 )
      v21 = *(_QWORD *)(a1[5] + 224);
    else
      v21 = 0LL;
    *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v21;
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v29);
    EtwTraceBeginCallback(24LL);
    v22 = KeUserModeCallback(24LL, &v37, 56LL, &v31, v30);
    EtwTraceEndCallback(24LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v29);
    ThreadUnlock1(v24, v23, v25);
    v26 = *((_QWORD *)v13 + 60);
    *(_OWORD *)(v26 + 64) = v18;
    *(_QWORD *)(v26 + 80) = v19;
    if ( v22 < 0 || v30[0] != 24 )
      return 0LL;
    v27 = (__int64 *)v31;
    if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
      v27 = (__int64 *)MmUserProbeAddress;
    v10 = *v27;
    v32 = v10;
  }
  return v10;
}
