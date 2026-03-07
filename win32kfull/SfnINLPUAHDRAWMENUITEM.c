__int64 __fastcall SfnINLPUAHDRAWMENUITEM(
        __int64 *a1,
        int a2,
        __int64 a3,
        HDC *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r14
  __int64 v13; // rsi
  HDC v14; // r12
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rdi
  _BYTE v28[4]; // [rsp+30h] [rbp-188h] BYREF
  int v29; // [rsp+34h] [rbp-184h] BYREF
  int v30; // [rsp+38h] [rbp-180h]
  unsigned __int64 v31; // [rsp+50h] [rbp-168h] BYREF
  __int128 v32; // [rsp+60h] [rbp-158h]
  __int64 v33; // [rsp+70h] [rbp-148h]
  __int64 v34; // [rsp+78h] [rbp-140h]
  __int128 v35; // [rsp+98h] [rbp-120h]
  __int128 v36; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-100h]
  __int64 v38; // [rsp+C0h] [rbp-F8h] BYREF
  int v39; // [rsp+C8h] [rbp-F0h]
  __int64 v40; // [rsp+D0h] [rbp-E8h]
  __int128 v41; // [rsp+D8h] [rbp-E0h]
  __int128 v42; // [rsp+E8h] [rbp-D0h]
  __int128 v43; // [rsp+F8h] [rbp-C0h]
  __int128 v44; // [rsp+108h] [rbp-B0h]
  __int128 v45; // [rsp+118h] [rbp-A0h]
  __int128 v46; // [rsp+128h] [rbp-90h]
  __int128 v47; // [rsp+138h] [rbp-80h]
  __int128 v48; // [rsp+148h] [rbp-70h]
  __int128 v49; // [rsp+158h] [rbp-60h]
  __int64 v50; // [rsp+168h] [rbp-50h]
  __int64 v51; // [rsp+170h] [rbp-48h]

  v30 = a2;
  v31 = 0LL;
  v29 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v11 = PtiCurrentShared((__int64)a1);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  memset_0(&v38, 0, 0xB8uLL);
  v14 = 0LL;
  v15 = ServerFixupMenuDC(a4[4]);
  v16 = v15;
  if ( v15 )
  {
    v14 = a4[4];
    a4[4] = (HDC)v15;
    a4[9] = (HDC)v15;
  }
  v38 = v13;
  v39 = v30;
  v40 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 21) = 0;
  v41 = *(_OWORD *)a4;
  v42 = *((_OWORD *)a4 + 1);
  v43 = *((_OWORD *)a4 + 2);
  v44 = *((_OWORD *)a4 + 3);
  v45 = *((_OWORD *)a4 + 4);
  v46 = *((_OWORD *)a4 + 5);
  v47 = *((_OWORD *)a4 + 6);
  v48 = *((_OWORD *)a4 + 7);
  v49 = *((_OWORD *)a4 + 8);
  v50 = a5;
  v51 = a6;
  ThreadLock(a1, &v36);
  v17 = *((_QWORD *)v12 + 60);
  v35 = *(_OWORD *)(v17 + 64);
  v32 = v35;
  v33 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v19;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v28);
  EtwTraceBeginCallback(107LL);
  v20 = KeUserModeCallback(107LL, &v38, 184LL, &v31, &v29);
  EtwTraceEndCallback(107LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v28);
  ThreadUnlock1(v22, v21, v23);
  v24 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v24 + 64) = v35;
  *(_QWORD *)(v24 + 80) = v33;
  if ( v20 < 0 || v29 != 24 )
    return 0LL;
  v25 = (__int64 *)v31;
  if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  v26 = *v25;
  v34 = *v25;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      a4[4] = v14;
      a4[9] = v14;
    }
  }
  return v26;
}
