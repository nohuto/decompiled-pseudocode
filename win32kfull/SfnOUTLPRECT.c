/*
 * XREFs of SfnOUTLPRECT @ 0x1C0013970
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall SfnOUTLPRECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int128 v16; // xmm6
  __int64 v17; // xmm7_8
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  _OWORD *v28; // rcx
  __int64 v30; // [rsp+60h] [rbp-B8h] BYREF
  int v31; // [rsp+68h] [rbp-B0h]
  int v32; // [rsp+6Ch] [rbp-ACh]
  __int64 v33; // [rsp+70h] [rbp-A8h]
  __int64 v34; // [rsp+78h] [rbp-A0h]
  __int64 v35; // [rsp+80h] [rbp-98h]
  __int64 v36; // [rsp+88h] [rbp-90h]
  __int128 v37; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-58h]
  int v39; // [rsp+120h] [rbp+8h] BYREF
  char v40; // [rsp+128h] [rbp+10h] BYREF
  unsigned __int64 v41; // [rsp+130h] [rbp+18h] BYREF

  v41 = 0LL;
  v39 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v12 = PtiCurrentShared();
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v32 = 0;
  v30 = v14;
  v31 = a2;
  v33 = a3;
  v34 = a5;
  v35 = a6;
  ThreadLock(a1, &v37);
  v15 = *((_QWORD *)v13 + 60);
  v16 = *(_OWORD *)(v15 + 64);
  v17 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v14;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v19;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  EtwTraceBeginCallback(34LL);
  v20 = KeUserModeCallback(34LL, &v30, 40LL, &v41, &v39);
  EtwTraceEndCallback(34LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  ThreadUnlock1(v22, v21, v23);
  v24 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v24 + 64) = v16;
  *(_QWORD *)(v24 + 80) = v17;
  if ( v20 >= 0 && v39 == 24 )
  {
    v25 = (__int64 *)v41;
    if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v36 = *v25;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v26;
    v27 = *((_QWORD *)PtiCurrentShared() + 64);
    if ( !v27 || (*(_DWORD *)(v27 + 84) & 1) == 0 || *(_OWORD **)(v27 + 96) != a4 )
    {
      v28 = *(_OWORD **)(v41 + 16);
      if ( v28 + 1 < v28 || (unsigned __int64)(v28 + 1) > MmUserProbeAddress )
        v28 = (_OWORD *)MmUserProbeAddress;
      *a4 = *v28;
      return v26;
    }
  }
  return 0LL;
}
