/*
 * XREFs of SfnINOUTLPSCROLLINFO @ 0x1C020DE90
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

__int64 __fastcall SfnINOUTLPSCROLLINFO(
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
  __int64 v27; // xmm0_8
  int v28; // eax
  _BYTE v30[4]; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-100h] BYREF
  __int128 v33; // [rsp+58h] [rbp-F0h]
  __int64 v34; // [rsp+68h] [rbp-E0h]
  __int64 v35; // [rsp+70h] [rbp-D8h]
  __int128 v36; // [rsp+98h] [rbp-B0h]
  __int128 v37; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-90h]
  __int64 v39; // [rsp+C0h] [rbp-88h] BYREF
  int v40; // [rsp+C8h] [rbp-80h]
  __int64 v41; // [rsp+D0h] [rbp-78h]
  __int128 v42; // [rsp+D8h] [rbp-70h]
  __int64 v43; // [rsp+E8h] [rbp-60h]
  int v44; // [rsp+F0h] [rbp-58h]
  __int64 v45; // [rsp+F8h] [rbp-50h]
  __int64 v46; // [rsp+100h] [rbp-48h]

  v32 = 0LL;
  v31[0] = 0;
  v37 = 0LL;
  v38 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v12 = PtiCurrentShared((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v39, 0, 0x48uLL);
  v39 = v14;
  v40 = a2;
  v41 = a3;
  v42 = *a4;
  v43 = *((_QWORD *)a4 + 2);
  v44 = *((_DWORD *)a4 + 6);
  v45 = a5;
  v46 = a6;
  ThreadLock(a1, &v37);
  v15 = *((_QWORD *)v13 + 60);
  v36 = *(_OWORD *)(v15 + 64);
  v33 = v36;
  v34 = *(_QWORD *)(v15 + 80);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v30);
  EtwTraceBeginCallback(19LL);
  v18 = KeUserModeCallback(19LL, &v39, 72LL, &v32, v31);
  EtwTraceEndCallback(19LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v30);
  ThreadUnlock1(v20, v19, v21);
  v22 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v22 + 64) = v36;
  *(_QWORD *)(v22 + 80) = v34;
  if ( v18 >= 0 && v31[0] == 24 )
  {
    v23 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v35 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = *((_QWORD *)PtiCurrentShared((__int64)v23) + 64);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int128 **)(v25 + 96) != a4 )
    {
      v26 = *(_QWORD *)(v32 + 16);
      if ( v26 + 28 < v26 || v26 + 28 > MmUserProbeAddress )
        v26 = MmUserProbeAddress;
      v27 = *(_QWORD *)(v26 + 16);
      v28 = *(_DWORD *)(v26 + 24);
      *a4 = *(_OWORD *)v26;
      *((_QWORD *)a4 + 2) = v27;
      *((_DWORD *)a4 + 6) = v28;
      return v24;
    }
  }
  return 0LL;
}
