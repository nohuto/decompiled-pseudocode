/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1C020EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall SfnINOUTNEXTMENU(
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
  ULONG64 v28; // rcx
  __int64 v29; // xmm0_8
  __int64 v31; // [rsp+50h] [rbp-E8h] BYREF
  int v32; // [rsp+58h] [rbp-E0h]
  int v33; // [rsp+5Ch] [rbp-DCh]
  __int64 v34; // [rsp+60h] [rbp-D8h]
  _BYTE v35[24]; // [rsp+68h] [rbp-D0h]
  __int64 v36; // [rsp+80h] [rbp-B8h]
  __int64 v37; // [rsp+88h] [rbp-B0h]
  __int128 v38; // [rsp+90h] [rbp-A8h]
  __int64 v39; // [rsp+A0h] [rbp-98h]
  __int64 v40; // [rsp+A8h] [rbp-90h]
  __int128 v41; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-58h]
  int v43; // [rsp+140h] [rbp+8h] BYREF
  char v44; // [rsp+148h] [rbp+10h] BYREF
  unsigned __int64 v45; // [rsp+150h] [rbp+18h] BYREF

  v45 = 0LL;
  v43 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v12 = PtiCurrentShared((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v33 = 0;
  *(_OWORD *)&v35[8] = 0LL;
  v31 = v14;
  v32 = a2;
  v34 = a3;
  v36 = a5;
  v37 = a6;
  *(_OWORD *)v35 = *(_OWORD *)a4;
  *(_QWORD *)&v35[16] = *(_QWORD *)(a4 + 16);
  ThreadLock(a1, &v41);
  v15 = *((_QWORD *)v13 + 60);
  v16 = *(_OWORD *)(v15 + 64);
  v38 = v16;
  v17 = *(_QWORD *)(v15 + 80);
  v39 = v17;
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  EtwTraceBeginCallback(30LL);
  v20 = KeUserModeCallback(30LL, &v31, 64LL, &v45, &v43);
  EtwTraceEndCallback(30LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  ThreadUnlock1(v22, v21, v23);
  v24 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v24 + 64) = v16;
  *(_QWORD *)(v24 + 80) = v17;
  if ( v20 >= 0 && v43 == 24 )
  {
    v25 = (__int64 *)v45;
    if ( v45 + 8 < v45 || v45 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v40 = *v25;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v26;
    v27 = *((_QWORD *)PtiCurrentShared((__int64)v25) + 64);
    if ( !v27 || (*(_DWORD *)(v27 + 84) & 1) == 0 || *(_QWORD *)(v27 + 96) != a4 )
    {
      v28 = *(_QWORD *)(v45 + 16);
      if ( v28 + 24 < v28 || v28 + 24 > MmUserProbeAddress )
        v28 = MmUserProbeAddress;
      v29 = *(_QWORD *)(v28 + 16);
      *(_OWORD *)a4 = *(_OWORD *)v28;
      *(_QWORD *)(a4 + 16) = v29;
      return v26;
    }
  }
  return 0LL;
}
