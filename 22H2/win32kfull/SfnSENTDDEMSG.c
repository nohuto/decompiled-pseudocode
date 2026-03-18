/*
 * XREFs of SfnSENTDDEMSG @ 0x1C020EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01FB134 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall SfnSENTDDEMSG(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  int v9; // esi
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r14
  __int64 v13; // rdi
  signed int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int128 v19; // xmm6
  __int64 v20; // xmm7_8
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 result; // rax
  unsigned __int64 v32; // [rsp+40h] [rbp-118h] BYREF
  __int64 v33; // [rsp+50h] [rbp-108h] BYREF
  int v34; // [rsp+58h] [rbp-100h]
  int v35; // [rsp+5Ch] [rbp-FCh]
  __int64 v36; // [rsp+60h] [rbp-F8h]
  __int64 v37; // [rsp+68h] [rbp-F0h]
  __int128 v38; // [rsp+70h] [rbp-E8h]
  __int64 v39; // [rsp+80h] [rbp-D8h] BYREF
  signed int v40; // [rsp+88h] [rbp-D0h]
  int v41; // [rsp+8Ch] [rbp-CCh]
  __int64 v42; // [rsp+90h] [rbp-C8h]
  __int64 v43; // [rsp+98h] [rbp-C0h]
  __int64 v44; // [rsp+A0h] [rbp-B8h]
  __int64 v45; // [rsp+A8h] [rbp-B0h]
  BOOL v46; // [rsp+B0h] [rbp-A8h]
  int v47; // [rsp+B4h] [rbp-A4h]
  __int128 v48; // [rsp+B8h] [rbp-A0h]
  __int64 v49; // [rsp+C8h] [rbp-90h]
  __int64 v50; // [rsp+D0h] [rbp-88h]
  __int128 v51; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+100h] [rbp-58h]
  int v53; // [rsp+160h] [rbp+8h] BYREF
  char v54; // [rsp+168h] [rbp+10h] BYREF

  v9 = a2;
  v35 = 0;
  v38 = 0LL;
  v32 = 0LL;
  v53 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v11 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  v41 = 0;
  v47 = 0;
  v14 = v9 & 0xBFFFFFFF;
  ThreadLock(a1, &v51);
  v18 = *((_QWORD *)v12 + 60);
  v19 = *(_OWORD *)(v18 + 64);
  v48 = v19;
  v20 = *(_QWORD *)(v18 + 80);
  v49 = v20;
  *(_QWORD *)(v18 + 72) = v13;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224);
  else
    v22 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v22;
  if ( v14 >= 0 )
  {
    v39 = v13;
    v40 = v14;
    v42 = a3;
    v43 = a4;
  }
  else
  {
    if ( a1 )
      v33 = *a1;
    else
      v33 = 0LL;
    v34 = v14 & 0x7FFFFFFF;
    v36 = a3;
    v37 = a4;
    xxxDDETrackGetMessageHook(&v33);
    v39 = _HMObjectFromHandle(v33) - *((_QWORD *)v12 + 59);
    v40 = v34;
    v42 = v36;
    v43 = v37;
  }
  v44 = a5;
  v45 = a6;
  v46 = (a7 & 1) == 0;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)&v54,
    v15,
    v16,
    v17);
  EtwTraceBeginCallback(38LL);
  v23 = KeUserModeCallback(38LL, &v39, 56LL, &v32, &v53);
  EtwTraceEndCallback(38LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54, v24, v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v29 + 64) = v19;
  *(_QWORD *)(v29 + 80) = v20;
  if ( v23 < 0 || v53 != 24 )
    return 0LL;
  v30 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  result = *v30;
  v50 = *v30;
  return result;
}
