__int64 __fastcall SfnOUTDWORDINDWORD(
        __int64 *a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // r8
  _DWORD *v25; // rdx
  __int64 v27; // [rsp+68h] [rbp-B0h]
  __int64 v28; // [rsp+70h] [rbp-A8h] BYREF
  int v29; // [rsp+78h] [rbp-A0h]
  __int64 v30; // [rsp+7Ch] [rbp-9Ch]
  int v31; // [rsp+84h] [rbp-94h]
  __int64 v32; // [rsp+88h] [rbp-90h]
  __int64 v33; // [rsp+90h] [rbp-88h]
  __int64 v34; // [rsp+98h] [rbp-80h]
  __int64 v35; // [rsp+A0h] [rbp-78h]
  __int128 v36; // [rsp+C8h] [rbp-50h]
  __int128 v37; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-30h]
  int v39; // [rsp+120h] [rbp+8h] BYREF
  char v40; // [rsp+128h] [rbp+10h] BYREF
  unsigned __int64 v41; // [rsp+130h] [rbp+18h] BYREF

  v41 = 0LL;
  v39 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v12 = PtiCurrentShared((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v28 = v14;
  v29 = a2;
  v32 = a4;
  v33 = a5;
  v34 = a6;
  ThreadLock(a1, &v37);
  v15 = *((_QWORD *)v13 + 60);
  v36 = *(_OWORD *)(v15 + 64);
  v27 = *(_QWORD *)(v15 + 80);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  EtwTraceBeginCallback(33LL);
  v18 = KeUserModeCallback(33LL, &v28, 48LL, &v41, &v39);
  EtwTraceEndCallback(33LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  ThreadUnlock1(v20, v19, v21);
  v22 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v22 + 64) = v36;
  *(_QWORD *)(v22 + 80) = v27;
  if ( v18 < 0 || v39 != 24 )
    return 0LL;
  v23 = (__int64 *)v41;
  if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
    v23 = (__int64 *)MmUserProbeAddress;
  v24 = *v23;
  v35 = *v23;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v25 = *(_DWORD **)(v41 + 16);
    if ( (unsigned __int64)v25 >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    *a3 = *v25;
  }
  return v24;
}
