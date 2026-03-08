/*
 * XREFs of fnHkINLPCHARHOOKSTRUCT @ 0x1C00D72A8
 * Callers:
 *     xxxCallCtfHook @ 0x1C00D6FB4 (xxxCallCtfHook.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall fnHkINLPCHARHOOKSTRUCT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v8; // ebx
  __int64 *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int128 *v12; // rcx
  __int128 v13; // xmm1
  int v15; // [rsp+50h] [rbp-68h] BYREF
  __int64 v16; // [rsp+58h] [rbp-60h]
  __int64 v17; // [rsp+60h] [rbp-58h]
  __int64 v18; // [rsp+68h] [rbp-50h]
  __int128 v19; // [rsp+70h] [rbp-48h]
  __int128 v20; // [rsp+80h] [rbp-38h]
  int v21; // [rsp+90h] [rbp-28h]
  char v22; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+C8h] [rbp+10h] BYREF
  int v24; // [rsp+D8h] [rbp+20h] BYREF
  int v25; // [rsp+DCh] [rbp+24h]

  v25 = HIDWORD(a4);
  v23 = 0LL;
  v24 = 0;
  memset_0(&v15, 0, 0x48uLL);
  v15 = a1;
  v16 = a2;
  v19 = *a3;
  v20 = a3[1];
  v21 = 0;
  v17 = 0LL;
  v18 = a5;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  EtwTraceBeginCallback(130LL);
  v8 = KeUserModeCallback(130LL, &v15, 72LL, &v23, &v24);
  EtwTraceEndCallback(130LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  if ( v8 < 0 || v24 != 24 )
    return 0LL;
  v9 = (__int64 *)v23;
  if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  v10 = *v9;
  v11 = *((_QWORD *)PtiCurrentShared((__int64)v9) + 64);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 84) & 1) != 0 && *(__int128 **)(v11 + 96) == a3 )
      return 0LL;
  }
  v12 = *(__int128 **)(v23 + 16);
  if ( v12 + 2 < v12 || (unsigned __int64)(v12 + 2) > MmUserProbeAddress )
    v12 = (__int128 *)MmUserProbeAddress;
  v13 = v12[1];
  *a3 = *v12;
  a3[1] = v13;
  return v10;
}
