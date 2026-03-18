/*
 * XREFs of SfnINLPDELETEITEMSTRUCT @ 0x1C0208500
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall SfnINLPDELETEITEMSTRUCT(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  ULONG64 v26; // rcx
  __int64 v28; // [rsp+58h] [rbp-D0h]
  __int128 v29; // [rsp+80h] [rbp-A8h]
  __int128 v30; // [rsp+90h] [rbp-98h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-88h]
  __int64 v32; // [rsp+B0h] [rbp-78h] BYREF
  int v33; // [rsp+B8h] [rbp-70h]
  __int64 v34; // [rsp+C0h] [rbp-68h]
  __int128 v35; // [rsp+C8h] [rbp-60h]
  __int128 v36; // [rsp+D8h] [rbp-50h]
  __int64 v37; // [rsp+E8h] [rbp-40h]
  __int64 v38; // [rsp+F0h] [rbp-38h]
  int v39; // [rsp+130h] [rbp+8h] BYREF
  char v40; // [rsp+138h] [rbp+10h] BYREF
  unsigned __int64 v41; // [rsp+140h] [rbp+18h] BYREF

  v8 = a2;
  v41 = 0LL;
  v39 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v10 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 59);
  else
    v12 = 0LL;
  memset_0(&v32, 0, 0x48uLL);
  v32 = v12;
  v33 = v8;
  v34 = a3;
  *(_DWORD *)(a4 + 12) = 0;
  v35 = *(_OWORD *)a4;
  v36 = *(_OWORD *)(a4 + 16);
  v37 = a5;
  v38 = a6;
  ThreadLock(a1, &v30);
  v16 = *((_QWORD *)v11 + 60);
  v29 = *(_OWORD *)(v16 + 64);
  v28 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v12;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 80LL) = v18;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)&v40,
    v13,
    v14,
    v15);
  EtwTraceBeginCallback(11LL);
  v19 = KeUserModeCallback(11LL, &v32, 72LL, &v41, &v39);
  EtwTraceEndCallback(11LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40, v20, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *((_QWORD *)v11 + 60);
  *(_OWORD *)(v25 + 64) = v29;
  *(_QWORD *)(v25 + 80) = v28;
  if ( v19 < 0 || v39 != 24 )
    return 0LL;
  v26 = v41;
  if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
    v26 = MmUserProbeAddress;
  return *(_QWORD *)v26;
}
