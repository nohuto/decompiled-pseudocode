/*
 * XREFs of fnHkINLPRECT @ 0x1C0210FC8
 * Callers:
 *     xxxHkCallHook @ 0x1C0120850 (xxxHkCallHook.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rcx
  ULONG64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int128 *v15; // rcx
  _BYTE v17[4]; // [rsp+30h] [rbp-78h] BYREF
  int v18; // [rsp+34h] [rbp-74h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v20; // [rsp+58h] [rbp-50h]
  _DWORD v21[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v22; // [rsp+70h] [rbp-38h]
  __int128 v23; // [rsp+78h] [rbp-30h]
  __int64 v24; // [rsp+88h] [rbp-20h]
  __int64 v25; // [rsp+90h] [rbp-18h]

  v19[0] = 0LL;
  v18 = 0;
  v21[1] = 0;
  v21[0] = a1;
  v22 = a2;
  v23 = *a3;
  v24 = a4;
  v25 = a5;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v17,
    a2,
    (__int64)a3,
    a4);
  EtwTraceBeginCallback(48LL);
  v6 = KeUserModeCallback(48LL, v21, 48LL, v19, &v18);
  EtwTraceEndCallback(48LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v17, v7, v8);
  if ( v6 < 0 || v18 != 24 )
    return 0LL;
  v11 = (__int64 *)v19[0];
  v12 = v19[0] + 8LL;
  if ( (unsigned __int64)(v19[0] + 8LL) < v19[0] || v12 > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  v13 = *v11;
  v19[1] = *v11;
  v14 = *((_QWORD *)PtiCurrentShared((__int64)v11, v12, v9, v10) + 64);
  if ( v14 )
  {
    if ( (*(_DWORD *)(v14 + 84) & 1) != 0 && *(__int128 **)(v14 + 96) == a3 )
      return 0LL;
  }
  v15 = *(__int128 **)(v19[0] + 16LL);
  if ( v15 + 1 < v15 || (unsigned __int64)(v15 + 1) > MmUserProbeAddress )
    v15 = (__int128 *)MmUserProbeAddress;
  v20 = *v15;
  *a3 = v20;
  return v13;
}
