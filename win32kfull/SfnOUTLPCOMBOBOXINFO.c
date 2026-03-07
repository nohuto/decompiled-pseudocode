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
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int128 *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v26; // xmm3
  _BYTE v28[4]; // [rsp+30h] [rbp-138h] BYREF
  _DWORD v29[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-120h] BYREF
  __int128 v31; // [rsp+58h] [rbp-110h]
  __int64 v32; // [rsp+68h] [rbp-100h]
  __int64 v33; // [rsp+70h] [rbp-F8h]
  __int128 v34; // [rsp+98h] [rbp-D0h]
  __int128 v35; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-B0h]
  __int64 v37; // [rsp+C0h] [rbp-A8h] BYREF
  int v38; // [rsp+C8h] [rbp-A0h]
  __int64 v39; // [rsp+D0h] [rbp-98h]
  __int128 v40; // [rsp+D8h] [rbp-90h]
  __int128 v41; // [rsp+E8h] [rbp-80h]
  __int128 v42; // [rsp+F8h] [rbp-70h]
  __int128 v43; // [rsp+108h] [rbp-60h]
  __int64 v44; // [rsp+118h] [rbp-50h]
  __int64 v45; // [rsp+120h] [rbp-48h]

  v30 = 0LL;
  v29[0] = 0;
  v35 = 0LL;
  v36 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v12 = PtiCurrentShared();
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v37, 0, 0x68uLL);
  v37 = v14;
  v38 = a2;
  v39 = a3;
  v40 = *a4;
  v41 = a4[1];
  v42 = a4[2];
  v43 = a4[3];
  v44 = a5;
  v45 = a6;
  ThreadLock(a1, &v35);
  v15 = *((_QWORD *)v13 + 60);
  v34 = *(_OWORD *)(v15 + 64);
  v31 = v34;
  v32 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v14;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v17;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v28);
  EtwTraceBeginCallback(104LL);
  v18 = KeUserModeCallback(104LL, &v37, 104LL, &v30, v29);
  EtwTraceEndCallback(104LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v28);
  ThreadUnlock1();
  v19 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v19 + 64) = v34;
  *(_QWORD *)(v19 + 80) = v32;
  if ( v18 >= 0 && v29[0] == 24 )
  {
    v20 = (__int64 *)v30;
    if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
      v20 = (__int64 *)MmUserProbeAddress;
    v21 = *v20;
    v33 = *v20;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v21;
    v22 = *((_QWORD *)PtiCurrentShared() + 64);
    if ( !v22 || (*(_DWORD *)(v22 + 84) & 1) == 0 || *(__int128 **)(v22 + 96) != a4 )
    {
      v23 = *(__int128 **)(v30 + 16);
      if ( v23 + 4 < v23 || (unsigned __int64)(v23 + 4) > MmUserProbeAddress )
        v23 = (__int128 *)MmUserProbeAddress;
      v24 = v23[1];
      v25 = v23[2];
      v26 = v23[3];
      *a4 = *v23;
      a4[1] = v24;
      a4[2] = v25;
      a4[3] = v26;
      return v21;
    }
  }
  return 0LL;
}
