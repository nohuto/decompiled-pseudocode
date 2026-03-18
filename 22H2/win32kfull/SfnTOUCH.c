/*
 * XREFs of SfnTOUCH @ 0x1C020FC40
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall SfnTOUCH(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 *v26; // rcx
  __int64 result; // rax
  _DWORD v28[6]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+58h] [rbp-B0h]
  __int64 v31; // [rsp+68h] [rbp-A0h]
  __int64 v32; // [rsp+70h] [rbp-98h] BYREF
  int v33; // [rsp+78h] [rbp-90h]
  int v34; // [rsp+7Ch] [rbp-8Ch]
  __int64 v35; // [rsp+80h] [rbp-88h]
  __int64 v36; // [rsp+88h] [rbp-80h]
  __int64 v37; // [rsp+90h] [rbp-78h]
  __int64 v38; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  __int128 v40; // [rsp+C0h] [rbp-48h]
  __int128 v41; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-28h]
  char v43; // [rsp+110h] [rbp+8h] BYREF

  v8 = a2;
  v29 = 0LL;
  v28[0] = 0;
  v41 = 0LL;
  v42 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v10 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 59);
  else
    v12 = 0LL;
  v34 = 0;
  if ( !HMValidateHandle(a4, 0x14u) )
    return 0LL;
  v32 = v12;
  v33 = v8;
  v35 = a3;
  v36 = a4;
  v37 = a5;
  v38 = a6;
  ThreadLock(a1, &v41);
  v16 = *((_QWORD *)v11 + 60);
  v40 = *(_OWORD *)(v16 + 64);
  v30 = v40;
  v31 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v12;
  v17 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 64LL) = v17;
  v18 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 80LL) = v18;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)&v43,
    v13,
    v14,
    v15);
  EtwTraceBeginCallback(112LL);
  v19 = KeUserModeCallback(112LL, &v32, 48LL, &v29, v28);
  EtwTraceEndCallback(112LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43, v20, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *((_QWORD *)v11 + 60);
  *(_OWORD *)(v25 + 64) = v40;
  *(_QWORD *)(v25 + 80) = v31;
  if ( v19 < 0 || v28[0] != 24 )
    return 0LL;
  v26 = (__int64 *)v29;
  if ( v29 + 8 < v29 || v29 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  result = *v26;
  v39 = *v26;
  return result;
}
