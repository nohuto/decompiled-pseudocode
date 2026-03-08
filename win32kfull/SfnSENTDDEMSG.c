/*
 * XREFs of SfnSENTDDEMSG @ 0x1C0211BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01FD7B8 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall SfnSENTDDEMSG(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r14
  __int64 v13; // rdi
  signed int v14; // esi
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
  __int64 result; // rax
  unsigned __int64 v27; // [rsp+40h] [rbp-118h] BYREF
  __int64 v28; // [rsp+50h] [rbp-108h] BYREF
  int v29; // [rsp+58h] [rbp-100h]
  int v30; // [rsp+5Ch] [rbp-FCh]
  __int64 v31; // [rsp+60h] [rbp-F8h]
  __int64 v32; // [rsp+68h] [rbp-F0h]
  __int128 v33; // [rsp+70h] [rbp-E8h]
  __int64 v34; // [rsp+80h] [rbp-D8h] BYREF
  signed int v35; // [rsp+88h] [rbp-D0h]
  int v36; // [rsp+8Ch] [rbp-CCh]
  __int64 v37; // [rsp+90h] [rbp-C8h]
  __int64 v38; // [rsp+98h] [rbp-C0h]
  __int64 v39; // [rsp+A0h] [rbp-B8h]
  __int64 v40; // [rsp+A8h] [rbp-B0h]
  BOOL v41; // [rsp+B0h] [rbp-A8h]
  int v42; // [rsp+B4h] [rbp-A4h]
  __int128 v43; // [rsp+B8h] [rbp-A0h]
  __int64 v44; // [rsp+C8h] [rbp-90h]
  __int64 v45; // [rsp+D0h] [rbp-88h]
  __int128 v46; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v47; // [rsp+100h] [rbp-58h]
  int v48; // [rsp+160h] [rbp+8h] BYREF
  char v49; // [rsp+168h] [rbp+10h] BYREF

  v30 = 0;
  v33 = 0LL;
  v27 = 0LL;
  v48 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v11 = PtiCurrentShared((__int64)a1);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  v36 = 0;
  v42 = 0;
  v14 = a2 & 0xBFFFFFFF;
  ThreadLock(a1, &v46);
  v15 = *((_QWORD *)v12 + 60);
  v16 = *(_OWORD *)(v15 + 64);
  v43 = v16;
  v17 = *(_QWORD *)(v15 + 80);
  v44 = v17;
  *(_QWORD *)(v15 + 72) = v13;
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
  if ( v14 >= 0 )
  {
    v34 = v13;
    v35 = v14;
    v37 = a3;
    v38 = a4;
  }
  else
  {
    if ( a1 )
      v28 = *a1;
    else
      v28 = 0LL;
    v29 = v14 & 0x7FFFFFFF;
    v31 = a3;
    v32 = a4;
    xxxDDETrackGetMessageHook(&v28);
    v34 = _HMObjectFromHandle(v28) - *((_QWORD *)v12 + 59);
    v35 = v29;
    v37 = v31;
    v38 = v32;
  }
  v39 = a5;
  v40 = a6;
  v41 = (a7 & 1) == 0;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  EtwTraceBeginCallback(38LL);
  v20 = KeUserModeCallback(38LL, &v34, 56LL, &v27, &v48);
  EtwTraceEndCallback(38LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  ThreadUnlock1(v22, v21, v23);
  v24 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v24 + 64) = v16;
  *(_QWORD *)(v24 + 80) = v17;
  if ( v20 < 0 || v48 != 24 )
    return 0LL;
  v25 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  result = *v25;
  v45 = *v25;
  return result;
}
