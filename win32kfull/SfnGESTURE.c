__int64 __fastcall SfnGESTURE(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  _DWORD v23[6]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+58h] [rbp-B0h]
  __int64 v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  int v28; // [rsp+78h] [rbp-90h]
  int v29; // [rsp+7Ch] [rbp-8Ch]
  __int64 v30; // [rsp+80h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  __int128 v35; // [rsp+C0h] [rbp-48h]
  __int128 v36; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-28h]
  char v38; // [rsp+110h] [rbp+8h] BYREF

  v24 = 0LL;
  v23[0] = 0;
  v36 = 0LL;
  v37 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v10 = PtiCurrentShared((__int64)a1);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 59);
  else
    v12 = 0LL;
  v29 = 0;
  if ( !HMValidateHandle(a4, 0x15u) )
    return 0LL;
  v27 = v12;
  v28 = a2;
  v30 = a3;
  v31 = a4;
  v32 = a5;
  v33 = a6;
  ThreadLock(a1, &v36);
  v13 = *((_QWORD *)v11 + 60);
  v35 = *(_OWORD *)(v13 + 64);
  v25 = v35;
  v26 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v12;
  v14 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 64LL) = v14;
  v15 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 80LL) = v15;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(113LL);
  v16 = KeUserModeCallback(113LL, &v27, 48LL, &v24, v23);
  EtwTraceEndCallback(113LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ThreadUnlock1(v18, v17, v19);
  v20 = *((_QWORD *)v11 + 60);
  *(_OWORD *)(v20 + 64) = v35;
  *(_QWORD *)(v20 + 80) = v26;
  if ( v16 < 0 || v23[0] != 24 )
    return 0LL;
  v21 = (__int64 *)v24;
  if ( v24 + 8 < v24 || v24 + 8 > MmUserProbeAddress )
    v21 = (__int64 *)MmUserProbeAddress;
  result = *v21;
  v34 = *v21;
  return result;
}
