/*
 * XREFs of xxxClientGetDDEHookData @ 0x1C022C620
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C0217FF8 (xxxDDETrackPostHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  _QWORD v17[10]; // [rsp+60h] [rbp-68h] BYREF

  v16[0] = 0LL;
  v15 = 0;
  memset(v17, 0, 0x48uLL);
  v17[1] = a2;
  LODWORD(v17[0]) = a1;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v14);
  EtwTraceBeginCallback(71LL);
  LODWORD(a2) = KeUserModeCallback(71LL, v17, 72LL, v16, &v15);
  EtwTraceEndCallback(71LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v14);
  if ( (int)a2 < 0 || v15 != 24 )
    return 0LL;
  v6 = (__int64 *)v16[0];
  if ( (unsigned __int64)(v16[0] + 8LL) < v16[0] || v16[0] + 8LL > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  v7 = *v6;
  v16[1] = *v6;
  v8 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
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
