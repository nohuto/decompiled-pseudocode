/*
 * XREFs of SfnOUTLPSCROLLBARINFO @ 0x1C02109F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall SfnOUTLPSCROLLBARINFO(
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
  __int64 v29; // xmm0_8
  int v30; // eax
  _BYTE v32[4]; // [rsp+30h] [rbp-138h] BYREF
  _DWORD v33[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-120h] BYREF
  __int128 v35; // [rsp+58h] [rbp-110h]
  __int64 v36; // [rsp+68h] [rbp-100h]
  __int64 v37; // [rsp+70h] [rbp-F8h]
  __int128 v38; // [rsp+98h] [rbp-D0h]
  __int128 v39; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-B0h]
  __int64 v41; // [rsp+C0h] [rbp-A8h] BYREF
  int v42; // [rsp+C8h] [rbp-A0h]
  __int64 v43; // [rsp+D0h] [rbp-98h]
  __int128 v44; // [rsp+D8h] [rbp-90h]
  __int128 v45; // [rsp+E8h] [rbp-80h]
  __int128 v46; // [rsp+F8h] [rbp-70h]
  __int64 v47; // [rsp+108h] [rbp-60h]
  int v48; // [rsp+110h] [rbp-58h]
  __int64 v49; // [rsp+118h] [rbp-50h]
  __int64 v50; // [rsp+120h] [rbp-48h]

  v34 = 0LL;
  v33[0] = 0;
  v39 = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v12 = PtiCurrentShared((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v41, 0, 0x68uLL);
  v41 = v14;
  v42 = a2;
  v43 = a3;
  v44 = *a4;
  v45 = a4[1];
  v46 = a4[2];
  v47 = *((_QWORD *)a4 + 6);
  v48 = *((_DWORD *)a4 + 14);
  v49 = a5;
  v50 = a6;
  ThreadLock(a1, &v39);
  v15 = *((_QWORD *)v13 + 60);
  v38 = *(_OWORD *)(v15 + 64);
  v35 = v38;
  v36 = *(_QWORD *)(v15 + 80);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v32);
  EtwTraceBeginCallback(105LL);
  v18 = KeUserModeCallback(105LL, &v41, 104LL, &v34, v33);
  EtwTraceEndCallback(105LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v32);
  ThreadUnlock1(v20, v19, v21);
  v22 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v22 + 64) = v38;
  *(_QWORD *)(v22 + 80) = v36;
  if ( v18 >= 0 && v33[0] == 24 )
  {
    v23 = (__int64 *)v34;
    if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v37 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = *((_QWORD *)PtiCurrentShared((__int64)v23) + 64);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int128 **)(v25 + 96) != a4 )
    {
      v26 = *(_QWORD *)(v34 + 16);
      if ( v26 + 60 < v26 || v26 + 60 > MmUserProbeAddress )
        v26 = MmUserProbeAddress;
      v27 = *(_OWORD *)(v26 + 16);
      v28 = *(_OWORD *)(v26 + 32);
      v29 = *(_QWORD *)(v26 + 48);
      v30 = *(_DWORD *)(v26 + 56);
      *a4 = *(_OWORD *)v26;
      a4[1] = v27;
      a4[2] = v28;
      *((_QWORD *)a4 + 6) = v29;
      *((_DWORD *)a4 + 14) = v30;
      return v24;
    }
  }
  return 0LL;
}
