/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x1C0208EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall SfnDWORDOPTINLPMSG(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  ULONG64 v21; // rcx
  __int64 v23; // [rsp+58h] [rbp-E0h]
  __int128 v24; // [rsp+80h] [rbp-B8h]
  __int128 v25; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-98h]
  __int64 v27; // [rsp+B0h] [rbp-88h] BYREF
  int v28; // [rsp+B8h] [rbp-80h]
  __int64 v29; // [rsp+C0h] [rbp-78h]
  BOOL v30; // [rsp+C8h] [rbp-70h]
  __int64 v31; // [rsp+D0h] [rbp-68h]
  __int64 v32; // [rsp+D8h] [rbp-60h]
  __int128 v33; // [rsp+E0h] [rbp-58h]
  __int128 v34; // [rsp+F0h] [rbp-48h]
  __int128 v35; // [rsp+100h] [rbp-38h]
  int v36; // [rsp+140h] [rbp+8h] BYREF
  char v37; // [rsp+148h] [rbp+10h] BYREF
  unsigned __int64 v38; // [rsp+150h] [rbp+18h] BYREF

  v38 = 0LL;
  v36 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v10 = PtiCurrentShared((__int64)a1);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 59);
  else
    v12 = 0LL;
  memset_0(&v27, 0, 0x60uLL);
  v27 = v12;
  v28 = a2;
  v29 = a3;
  if ( a4 )
  {
    *((_DWORD *)a4 + 3) = 0;
    *((_DWORD *)a4 + 11) = 0;
  }
  v30 = a4 != 0LL;
  if ( a4 )
  {
    v33 = *a4;
    v34 = a4[1];
    v35 = a4[2];
  }
  v31 = a5;
  v32 = a6;
  ThreadLock(a1, &v25);
  v13 = *((_QWORD *)v11 + 60);
  v24 = *(_OWORD *)(v13 + 64);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(4LL);
  v16 = KeUserModeCallback(4LL, &v27, 96LL, &v38, &v36);
  EtwTraceEndCallback(4LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ThreadUnlock1(v18, v17, v19);
  v20 = *((_QWORD *)v11 + 60);
  *(_OWORD *)(v20 + 64) = v24;
  *(_QWORD *)(v20 + 80) = v23;
  if ( v16 < 0 || v36 != 24 )
    return 0LL;
  v21 = v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v21 = MmUserProbeAddress;
  return *(_QWORD *)v21;
}
