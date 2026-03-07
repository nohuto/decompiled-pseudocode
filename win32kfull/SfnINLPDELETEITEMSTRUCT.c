__int64 __fastcall SfnINLPDELETEITEMSTRUCT(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  ULONG64 v21; // rcx
  __int64 v23; // [rsp+58h] [rbp-D0h]
  __int128 v24; // [rsp+80h] [rbp-A8h]
  __int128 v25; // [rsp+90h] [rbp-98h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-88h]
  __int64 v27; // [rsp+B0h] [rbp-78h] BYREF
  int v28; // [rsp+B8h] [rbp-70h]
  __int64 v29; // [rsp+C0h] [rbp-68h]
  __int128 v30; // [rsp+C8h] [rbp-60h]
  __int128 v31; // [rsp+D8h] [rbp-50h]
  __int64 v32; // [rsp+E8h] [rbp-40h]
  __int64 v33; // [rsp+F0h] [rbp-38h]
  int v34; // [rsp+130h] [rbp+8h] BYREF
  char v35; // [rsp+138h] [rbp+10h] BYREF
  unsigned __int64 v36; // [rsp+140h] [rbp+18h] BYREF

  v36 = 0LL;
  v34 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v10 = PtiCurrentShared((__int64)a1);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 59);
  else
    v12 = 0LL;
  memset_0(&v27, 0, 0x48uLL);
  v27 = v12;
  v28 = a2;
  v29 = a3;
  *((_DWORD *)a4 + 3) = 0;
  v30 = *a4;
  v31 = a4[1];
  v32 = a5;
  v33 = a6;
  ThreadLock(a1, &v25);
  v13 = *((_QWORD *)v11 + 60);
  v24 = *(_OWORD *)(v13 + 64);
  v23 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v12;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 64LL) = v14;
  if ( a1 )
    v15 = *(_QWORD *)(a1[5] + 224);
  else
    v15 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 80LL) = v15;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(11LL);
  v16 = KeUserModeCallback(11LL, &v27, 72LL, &v36, &v34);
  EtwTraceEndCallback(11LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ThreadUnlock1(v18, v17, v19);
  v20 = *((_QWORD *)v11 + 60);
  *(_OWORD *)(v20 + 64) = v24;
  *(_QWORD *)(v20 + 80) = v23;
  if ( v16 < 0 || v34 != 24 )
    return 0LL;
  v21 = v36;
  if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
    v21 = MmUserProbeAddress;
  return *(_QWORD *)v21;
}
