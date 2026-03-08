/*
 * XREFs of xxxClientGetDDEHookData @ 0x1C02154C0
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C01FDCA4 (xxxDDETrackPostHook.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  ULONG64 v9; // rcx
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int64 v12; // xmm0_8
  _BYTE v14[4]; // [rsp+30h] [rbp-98h] BYREF
  int v15; // [rsp+34h] [rbp-94h] BYREF
  _QWORD v16[5]; // [rsp+38h] [rbp-90h] BYREF
  int v17; // [rsp+60h] [rbp-68h] BYREF
  __int64 v18; // [rsp+68h] [rbp-60h]

  v16[0] = 0LL;
  v15 = 0;
  memset_0(&v17, 0, 0x48uLL);
  v18 = a2;
  v17 = a1;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v14);
  EtwTraceBeginCallback(71LL);
  LODWORD(a2) = KeUserModeCallback(71LL, &v17, 72LL, v16, &v15);
  EtwTraceEndCallback(71LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v14);
  if ( (int)a2 < 0 || v15 != 24 )
    return 0LL;
  v6 = (__int64 *)v16[0];
  if ( (unsigned __int64)(v16[0] + 8LL) < v16[0] || v16[0] + 8LL > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  v7 = *v6;
  v16[1] = *v6;
  v8 = *((_QWORD *)PtiCurrentShared((__int64)v6) + 64);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 84) & 1) != 0 && *(_QWORD *)(v8 + 96) == a3 )
      return 0LL;
  }
  v9 = *(_QWORD *)(v16[0] + 16LL);
  if ( v9 + 56 < v9 || v9 + 56 > MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v10 = *(_OWORD *)(v9 + 16);
  v11 = *(_OWORD *)(v9 + 32);
  v12 = *(_QWORD *)(v9 + 48);
  *(_OWORD *)a3 = *(_OWORD *)v9;
  *(_OWORD *)(a3 + 16) = v10;
  *(_OWORD *)(a3 + 32) = v11;
  *(_QWORD *)(a3 + 48) = v12;
  return (unsigned int)v7;
}
