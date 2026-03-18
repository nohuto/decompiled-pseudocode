/*
 * XREFs of xxxClientGetDDEHookData @ 0x1C02128F8
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C01FB334 (xxxDDETrackPostHook.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  ULONG64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rcx
  ULONG64 v17; // rcx
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  __int64 v20; // xmm0_8
  _BYTE v22[4]; // [rsp+30h] [rbp-98h] BYREF
  int v23; // [rsp+34h] [rbp-94h] BYREF
  _QWORD v24[5]; // [rsp+38h] [rbp-90h] BYREF
  int v25; // [rsp+60h] [rbp-68h] BYREF
  __int64 v26; // [rsp+68h] [rbp-60h]

  v24[0] = 0LL;
  v23 = 0;
  memset_0(&v25, 0, 0x48uLL);
  v26 = a2;
  v25 = a1;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v22, v6, v7, v8);
  EtwTraceBeginCallback(71LL);
  LODWORD(a2) = KeUserModeCallback(71LL, &v25, 72LL, v24, &v23);
  EtwTraceEndCallback(71LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v22, v9, v10);
  if ( (int)a2 < 0 || v23 != 24 )
    return 0LL;
  v13 = (__int64 *)v24[0];
  v14 = v24[0] + 8LL;
  if ( (unsigned __int64)(v24[0] + 8LL) < v24[0] || v14 > MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  v15 = *v13;
  v24[1] = *v13;
  v16 = *((_QWORD *)PtiCurrentShared((__int64)v13, v14, v11, v12) + 64);
  if ( v16 )
  {
    if ( (*(_DWORD *)(v16 + 84) & 1) != 0 && *(_QWORD *)(v16 + 96) == a3 )
      return 0LL;
  }
  v17 = *(_QWORD *)(v24[0] + 16LL);
  if ( v17 + 56 < v17 || v17 + 56 > MmUserProbeAddress )
    v17 = MmUserProbeAddress;
  v18 = *(_OWORD *)(v17 + 16);
  v19 = *(_OWORD *)(v17 + 32);
  v20 = *(_QWORD *)(v17 + 48);
  *(_OWORD *)a3 = *(_OWORD *)v17;
  *(_OWORD *)(a3 + 16) = v18;
  *(_OWORD *)(a3 + 32) = v19;
  *(_QWORD *)(a3 + 48) = v20;
  return (unsigned int)v15;
}
