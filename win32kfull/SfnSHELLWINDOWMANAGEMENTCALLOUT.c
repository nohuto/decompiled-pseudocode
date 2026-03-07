__int64 __fastcall SfnSHELLWINDOWMANAGEMENTCALLOUT(
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  ULONG64 v26; // rcx
  __int128 v27; // xmm3
  __int128 v28; // xmm4
  __int128 v29; // xmm5
  __int128 v30; // xmm6
  __int128 v31; // xmm7
  __int64 v32; // xmm0_8
  _BYTE v34[4]; // [rsp+30h] [rbp-178h] BYREF
  _DWORD v35[5]; // [rsp+34h] [rbp-174h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-160h] BYREF
  __int128 v37; // [rsp+58h] [rbp-150h]
  __int64 v38; // [rsp+68h] [rbp-140h]
  __int64 v39; // [rsp+70h] [rbp-138h]
  __int128 v40; // [rsp+98h] [rbp-110h]
  __int128 v41; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-F0h]
  __int64 v43; // [rsp+C0h] [rbp-E8h] BYREF
  int v44; // [rsp+C8h] [rbp-E0h]
  __int64 v45; // [rsp+D0h] [rbp-D8h]
  __int128 v46; // [rsp+D8h] [rbp-D0h]
  __int128 v47; // [rsp+E8h] [rbp-C0h]
  __int128 v48; // [rsp+F8h] [rbp-B0h]
  __int128 v49; // [rsp+108h] [rbp-A0h]
  __int128 v50; // [rsp+118h] [rbp-90h]
  __int128 v51; // [rsp+128h] [rbp-80h]
  __int64 v52; // [rsp+138h] [rbp-70h]
  __int64 v53; // [rsp+140h] [rbp-68h]
  __int64 v54; // [rsp+148h] [rbp-60h]

  v36 = 0LL;
  v35[0] = 0;
  v41 = 0LL;
  v42 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v12 = PtiCurrentShared((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v43, 0, 0x90uLL);
  v43 = v14;
  v44 = a2 & 0x1FFFF;
  v45 = a3;
  v46 = *a4;
  v47 = a4[1];
  v48 = a4[2];
  v49 = a4[3];
  v50 = a4[4];
  v51 = a4[5];
  v52 = *((_QWORD *)a4 + 12);
  v53 = a5;
  v54 = a6;
  ThreadLock(a1, &v41);
  v15 = *((_QWORD *)v13 + 60);
  v40 = *(_OWORD *)(v15 + 64);
  v37 = v40;
  v38 = *(_QWORD *)(v15 + 80);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
  EtwTraceBeginCallback(53LL);
  v18 = KeUserModeCallback(53LL, &v43, 144LL, &v36, v35);
  EtwTraceEndCallback(53LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
  ThreadUnlock1(v20, v19, v21);
  v22 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v22 + 64) = v40;
  *(_QWORD *)(v22 + 80) = v38;
  if ( v18 >= 0 && v35[0] == 24 )
  {
    v23 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v39 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = *((_QWORD *)PtiCurrentShared((__int64)v23) + 64);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int128 **)(v25 + 96) != a4 )
    {
      v26 = *(_QWORD *)(v36 + 16);
      if ( v26 + 104 < v26 || v26 + 104 > MmUserProbeAddress )
        v26 = MmUserProbeAddress;
      v27 = *(_OWORD *)(v26 + 16);
      v28 = *(_OWORD *)(v26 + 32);
      v29 = *(_OWORD *)(v26 + 48);
      v30 = *(_OWORD *)(v26 + 64);
      v31 = *(_OWORD *)(v26 + 80);
      v32 = *(_QWORD *)(v26 + 96);
      *a4 = *(_OWORD *)v26;
      a4[1] = v27;
      a4[2] = v28;
      a4[3] = v29;
      a4[4] = v30;
      a4[5] = v31;
      *((_QWORD *)a4 + 12) = v32;
      return v24;
    }
  }
  return 0LL;
}
