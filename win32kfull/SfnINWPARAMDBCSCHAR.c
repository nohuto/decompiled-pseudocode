__int64 __fastcall SfnINWPARAMDBCSCHAR(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
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
  __int64 *v21; // rcx
  __int64 result; // rax
  __int64 v23; // [rsp+58h] [rbp-B0h]
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v25; // [rsp+68h] [rbp-A0h]
  int v26; // [rsp+6Ch] [rbp-9Ch]
  __int64 v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  __int64 v30; // [rsp+88h] [rbp-80h]
  int v31; // [rsp+90h] [rbp-78h]
  int v32; // [rsp+94h] [rbp-74h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  __int128 v34; // [rsp+B8h] [rbp-50h]
  __int128 v35; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v37; // [rsp+110h] [rbp+8h] BYREF
  int v38; // [rsp+118h] [rbp+10h] BYREF
  __int64 v39; // [rsp+120h] [rbp+18h] BYREF

  v39 = a3;
  v37 = 0LL;
  v38 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v10 = PtiCurrentShared((__int64)a1);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 59);
  else
    v12 = 0LL;
  v26 = 0;
  v32 = 0;
  v24 = v12;
  v25 = a2;
  v31 = a7 & 1;
  if ( (a7 & 1) != 0 )
    RtlWCSMessageWParamCharToMB(a2, &v39);
  v27 = v39;
  v28 = a4;
  v29 = a5;
  v30 = a6;
  ThreadLock(a1, &v35);
  v13 = *((_QWORD *)v11 + 60);
  v34 = *(_OWORD *)(v13 + 64);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7);
  EtwTraceBeginCallback(95LL);
  v16 = KeUserModeCallback(95LL, &v24, 56LL, &v37, &v38);
  EtwTraceEndCallback(95LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7);
  ThreadUnlock1(v18, v17, v19);
  v20 = *((_QWORD *)v11 + 60);
  *(_OWORD *)(v20 + 64) = v34;
  *(_QWORD *)(v20 + 80) = v23;
  if ( v16 < 0 || v38 != 24 )
    return 0LL;
  v21 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v21 = (__int64 *)MmUserProbeAddress;
  result = *v21;
  v33 = *v21;
  return result;
}
