__int64 __fastcall SfnINWPARAMCHAR(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // r14
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
  __int64 v31; // [rsp+90h] [rbp-78h]
  __int128 v32; // [rsp+B0h] [rbp-58h]
  __int128 v33; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-38h]
  __int64 v35; // [rsp+110h] [rbp+8h] BYREF
  int v36; // [rsp+118h] [rbp+10h] BYREF
  __int64 v37; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v38; // [rsp+128h] [rbp+20h] BYREF

  v37 = a3;
  v38 = 0LL;
  v36 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v10 = PtiCurrentShared((__int64)a1);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 59);
  else
    v12 = 0LL;
  v26 = 0;
  v24 = v12;
  v25 = a2;
  if ( (a7 & 1) != 0 )
  {
    if ( a2 == 47 || a2 == 288 )
    {
      v35 = (unsigned __int16)v37;
      RtlWCSMessageWParamCharToMB(a2, &v35);
      v37 = (WORD1(v37) << 16) | (unsigned __int16)v35;
    }
    else
    {
      RtlWCSMessageWParamCharToMB(a2, &v37);
    }
  }
  v27 = v37;
  v28 = a4;
  v29 = a5;
  v30 = a6;
  ThreadLock(a1, &v33);
  v13 = *((_QWORD *)v11 + 60);
  v32 = *(_OWORD *)(v13 + 64);
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
  EtwTraceBeginCallback(2LL);
  v16 = KeUserModeCallback(2LL, &v24, 48LL, &v38, &v36);
  EtwTraceEndCallback(2LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7);
  ThreadUnlock1(v18, v17, v19);
  v20 = *((_QWORD *)v11 + 60);
  *(_OWORD *)(v20 + 64) = v32;
  *(_QWORD *)(v20 + 80) = v23;
  if ( v16 < 0 || v36 != 24 )
    return 0LL;
  v21 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v21 = (__int64 *)MmUserProbeAddress;
  result = *v21;
  v31 = *v21;
  return result;
}
