__int64 __fastcall SfnINLPUAHDRAWMENU(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rax
  __int128 v17; // xmm6
  __int64 v18; // xmm7_8
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rbx
  __int64 v29; // [rsp+50h] [rbp-E8h] BYREF
  int v30; // [rsp+58h] [rbp-E0h]
  int v31; // [rsp+5Ch] [rbp-DCh]
  __int64 v32; // [rsp+60h] [rbp-D8h]
  _BYTE v33[24]; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+80h] [rbp-B8h]
  __int64 v35; // [rsp+88h] [rbp-B0h]
  __int128 v36; // [rsp+90h] [rbp-A8h]
  __int64 v37; // [rsp+A0h] [rbp-98h]
  __int64 v38; // [rsp+A8h] [rbp-90h]
  __int128 v39; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-60h]
  int v41; // [rsp+140h] [rbp+8h] BYREF
  char v42; // [rsp+148h] [rbp+10h] BYREF
  unsigned __int64 v43; // [rsp+150h] [rbp+18h] BYREF
  __int64 v44; // [rsp+158h] [rbp+20h]

  v43 = 0LL;
  v41 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v12 = PtiCurrentShared((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v31 = 0;
  memset(v33, 0, sizeof(v33));
  v44 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 8));
  if ( v15 )
  {
    v44 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v15;
  }
  v29 = v14;
  v30 = a2 & 0x1FFFF;
  v32 = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)v33 = *(_OWORD *)a4;
  *(_QWORD *)&v33[16] = *(_QWORD *)(a4 + 16);
  v34 = a5;
  v35 = a6;
  ThreadLock(a1, &v39);
  v16 = *((_QWORD *)v13 + 60);
  v17 = *(_OWORD *)(v16 + 64);
  v36 = v17;
  v18 = *(_QWORD *)(v16 + 80);
  v37 = v18;
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v20;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(106LL);
  v21 = KeUserModeCallback(106LL, &v29, 64LL, &v43, &v41);
  EtwTraceEndCallback(106LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ThreadUnlock1(v23, v22, v24);
  v25 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v25 + 64) = v17;
  *(_QWORD *)(v25 + 80) = v18;
  if ( v21 < 0 || v41 != 24 )
    return 0LL;
  v26 = (__int64 *)v43;
  if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v38 = *v26;
  if ( v15 )
  {
    _ReleaseDC(v15);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 8) = v44;
  }
  return v27;
}
