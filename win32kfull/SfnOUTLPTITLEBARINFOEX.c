/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C0210DC0
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

__int64 __fastcall SfnOUTLPTITLEBARINFOEX(
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
  ULONG64 v26; // rdx
  _BYTE v28[4]; // [rsp+30h] [rbp-218h] BYREF
  _DWORD v29[5]; // [rsp+34h] [rbp-214h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-200h] BYREF
  __int128 v31; // [rsp+58h] [rbp-1F0h]
  __int64 v32; // [rsp+68h] [rbp-1E0h]
  __int64 v33; // [rsp+70h] [rbp-1D8h]
  __int128 v34; // [rsp+98h] [rbp-1B0h]
  __int128 v35; // [rsp+A8h] [rbp-1A0h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-190h]
  __int128 v37; // [rsp+C0h] [rbp-188h]
  __int128 v38; // [rsp+D0h] [rbp-178h]
  __int128 v39; // [rsp+E0h] [rbp-168h]
  __int128 v40; // [rsp+F0h] [rbp-158h]
  __int128 v41; // [rsp+100h] [rbp-148h]
  __int128 v42; // [rsp+110h] [rbp-138h]
  __int128 v43; // [rsp+120h] [rbp-128h]
  __int128 v44; // [rsp+130h] [rbp-118h]
  __int64 v45; // [rsp+140h] [rbp-108h]
  int v46; // [rsp+148h] [rbp-100h]
  __int64 v47; // [rsp+150h] [rbp-F8h] BYREF
  int v48; // [rsp+158h] [rbp-F0h]
  __int64 v49; // [rsp+160h] [rbp-E8h]
  __int128 v50; // [rsp+168h] [rbp-E0h]
  __int128 v51; // [rsp+178h] [rbp-D0h]
  __int128 v52; // [rsp+188h] [rbp-C0h]
  __int128 v53; // [rsp+198h] [rbp-B0h]
  __int128 v54; // [rsp+1A8h] [rbp-A0h]
  __int128 v55; // [rsp+1B8h] [rbp-90h]
  __int128 v56; // [rsp+1C8h] [rbp-80h]
  __int128 v57; // [rsp+1D8h] [rbp-70h]
  __int64 v58; // [rsp+1E8h] [rbp-60h]
  int v59; // [rsp+1F0h] [rbp-58h]
  __int64 v60; // [rsp+1F8h] [rbp-50h]
  __int64 v61; // [rsp+200h] [rbp-48h]

  v30 = 0LL;
  v29[0] = 0;
  v35 = 0LL;
  v36 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v12 = PtiCurrentShared((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v47, 0, 0xB8uLL);
  v47 = v14;
  v48 = a2;
  v49 = a3;
  v50 = *a4;
  v51 = a4[1];
  v52 = a4[2];
  v53 = a4[3];
  v54 = a4[4];
  v55 = a4[5];
  v56 = a4[6];
  v57 = a4[7];
  v58 = *((_QWORD *)a4 + 16);
  v59 = *((_DWORD *)a4 + 34);
  v60 = a5;
  v61 = a6;
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
  EtwTraceBeginCallback(111LL);
  v18 = KeUserModeCallback(111LL, &v47, 184LL, &v30, v29);
  EtwTraceEndCallback(111LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v28);
  ThreadUnlock1(v20, v19, v21);
  v22 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v22 + 64) = v34;
  *(_QWORD *)(v22 + 80) = v32;
  if ( v18 >= 0 && v29[0] == 24 )
  {
    v23 = (__int64 *)v30;
    if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v33 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = *((_QWORD *)PtiCurrentShared((__int64)v23) + 64);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int128 **)(v25 + 96) != a4 )
    {
      v26 = *(_QWORD *)(v30 + 16);
      if ( v26 + 140 < v26 || v26 + 140 > MmUserProbeAddress )
        v26 = MmUserProbeAddress;
      v37 = *(_OWORD *)v26;
      v38 = *(_OWORD *)(v26 + 16);
      v39 = *(_OWORD *)(v26 + 32);
      v40 = *(_OWORD *)(v26 + 48);
      v41 = *(_OWORD *)(v26 + 64);
      v42 = *(_OWORD *)(v26 + 80);
      v43 = *(_OWORD *)(v26 + 96);
      v44 = *(_OWORD *)(v26 + 112);
      v45 = *(_QWORD *)(v26 + 128);
      v46 = *(_DWORD *)(v26 + 136);
      *a4 = v37;
      a4[1] = v38;
      a4[2] = v39;
      a4[3] = v40;
      a4[4] = v41;
      a4[5] = v42;
      a4[6] = v43;
      a4[7] = v44;
      *((_QWORD *)a4 + 16) = v45;
      *((_DWORD *)a4 + 34) = v46;
      return v24;
    }
  }
  return 0LL;
}
