/*
 * XREFs of SfnINOUTDRAG @ 0x1C020D760
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall SfnINOUTDRAG(
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
  __int128 *v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v30; // [rsp+58h] [rbp-E0h]
  __int128 v31; // [rsp+88h] [rbp-B0h]
  __int128 v32; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-90h]
  __int64 v34; // [rsp+B0h] [rbp-88h] BYREF
  int v35; // [rsp+B8h] [rbp-80h]
  __int64 v36; // [rsp+C0h] [rbp-78h]
  __int64 v37; // [rsp+C8h] [rbp-70h]
  __int64 v38; // [rsp+D0h] [rbp-68h]
  __int128 v39; // [rsp+D8h] [rbp-60h]
  __int128 v40; // [rsp+E8h] [rbp-50h]
  __int128 v41; // [rsp+F8h] [rbp-40h]
  int v42; // [rsp+140h] [rbp+8h] BYREF
  char v43; // [rsp+148h] [rbp+10h] BYREF
  unsigned __int64 v44; // [rsp+150h] [rbp+18h] BYREF

  v44 = 0LL;
  v42 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v12 = PtiCurrentShared((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v34, 0, 0x58uLL);
  v34 = v14;
  v35 = a2;
  v36 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 11) = 0;
  v39 = *a4;
  v40 = a4[1];
  v41 = a4[2];
  v37 = a5;
  v38 = a6;
  ThreadLock(a1, &v32);
  v15 = *((_QWORD *)v13 + 60);
  v31 = *(_OWORD *)(v15 + 64);
  v30 = *(_QWORD *)(v15 + 80);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(5LL);
  v18 = KeUserModeCallback(5LL, &v34, 88LL, &v44, &v42);
  EtwTraceEndCallback(5LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ThreadUnlock1(v20, v19, v21);
  v22 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v22 + 64) = v31;
  *(_QWORD *)(v22 + 80) = v30;
  if ( v18 >= 0 && v42 == 24 )
  {
    v23 = (__int64 *)v44;
    if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = *((_QWORD *)PtiCurrentShared((__int64)v23) + 64);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int128 **)(v25 + 96) != a4 )
    {
      v26 = *(__int128 **)(v44 + 16);
      if ( v26 + 3 < v26 || (unsigned __int64)(v26 + 3) > MmUserProbeAddress )
        v26 = (__int128 *)MmUserProbeAddress;
      v27 = v26[1];
      v28 = v26[2];
      *a4 = *v26;
      a4[1] = v27;
      a4[2] = v28;
      return v24;
    }
  }
  return 0LL;
}
