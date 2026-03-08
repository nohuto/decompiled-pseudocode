/*
 * XREFs of SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C00136D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall SfnOPTOUTLPDWORDOPTOUTLPDWORD(
        __int64 *a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
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
  __int64 v24; // r8
  _DWORD *v25; // rdx
  _DWORD *v26; // rdx
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  int v30; // [rsp+78h] [rbp-90h]
  int v31; // [rsp+7Ch] [rbp-8Ch]
  __int64 v32; // [rsp+80h] [rbp-88h]
  __int64 v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  __int128 v35; // [rsp+B8h] [rbp-50h]
  __int128 v36; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-30h]
  int v38; // [rsp+110h] [rbp+8h] BYREF
  char v39; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v40; // [rsp+120h] [rbp+18h] BYREF

  v40 = 0LL;
  v38 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v12 = PtiCurrentShared();
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v31 = 0;
  v29 = v14;
  v30 = a2;
  v32 = a5;
  v33 = a6;
  ThreadLock(a1, &v36);
  v15 = *((_QWORD *)v13 + 60);
  v35 = *(_OWORD *)(v15 + 64);
  v28 = *(_QWORD *)(v15 + 80);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(31LL);
  v18 = KeUserModeCallback(31LL, &v29, 32LL, &v40, &v38);
  EtwTraceEndCallback(31LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ThreadUnlock1(v20, v19, v21);
  v22 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v22 + 64) = v35;
  *(_QWORD *)(v22 + 80) = v28;
  if ( v18 < 0 || v38 != 24 )
    return 0LL;
  v23 = (__int64 *)v40;
  if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
    v23 = (__int64 *)MmUserProbeAddress;
  v24 = *v23;
  v34 = *v23;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    if ( a3 )
    {
      v25 = *(_DWORD **)(v40 + 16);
      if ( (unsigned __int64)v25 >= MmUserProbeAddress )
        v25 = (_DWORD *)MmUserProbeAddress;
      *a3 = *v25;
    }
    if ( a4 )
    {
      v26 = (_DWORD *)(*(_QWORD *)(v40 + 16) + 4LL);
      if ( (unsigned __int64)v26 >= MmUserProbeAddress )
        v26 = (_DWORD *)MmUserProbeAddress;
      *a4 = *v26;
    }
  }
  return v24;
}
