/*
 * XREFs of xxxClientCallDitThread @ 0x1C00771C8
 * Callers:
 *     ClientCallDitThread @ 0x1C00773E0 (ClientCallDitThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCallDitThread(__int64 a1, __int128 *a2, __int128 *a3)
{
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int128 *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  __int128 v14; // xmm6
  _BYTE v16[4]; // [rsp+30h] [rbp-128h] BYREF
  int v17; // [rsp+34h] [rbp-124h] BYREF
  _QWORD v18[5]; // [rsp+38h] [rbp-120h] BYREF
  __int64 v19; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v20; // [rsp+68h] [rbp-F0h]
  __int128 v21; // [rsp+78h] [rbp-E0h]
  __int128 v22; // [rsp+88h] [rbp-D0h]
  __int128 v23; // [rsp+98h] [rbp-C0h]
  __int128 v24; // [rsp+A8h] [rbp-B0h]
  __int128 v25; // [rsp+B8h] [rbp-A0h]
  __int128 v26; // [rsp+C8h] [rbp-90h]
  __int128 v27; // [rsp+D8h] [rbp-80h]
  __int128 v28; // [rsp+E8h] [rbp-70h]
  __int128 v29; // [rsp+F8h] [rbp-60h]
  __int128 v30; // [rsp+108h] [rbp-50h]
  __int128 v31; // [rsp+118h] [rbp-40h]

  v18[0] = 0LL;
  v17 = 0;
  v19 = a1;
  v20 = *a2;
  v21 = a2[1];
  v22 = a2[2];
  v23 = a2[3];
  v24 = a2[4];
  v25 = *a3;
  v26 = a3[1];
  v27 = a3[2];
  v28 = a3[3];
  v29 = a3[4];
  v30 = a3[5];
  v31 = a3[6];
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v16);
  EtwTraceBeginCallback(56LL);
  v4 = KeUserModeCallback(56LL, &v19, 200LL, v18, &v17);
  EtwTraceEndCallback(56LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v16);
  if ( v4 < 0 || v17 != 24 )
    return 0LL;
  v5 = (__int64 *)v18[0];
  if ( (unsigned __int64)(v18[0] + 8LL) < v18[0] || v18[0] + 8LL > MmUserProbeAddress )
    v5 = (__int64 *)MmUserProbeAddress;
  v6 = *v5;
  v18[1] = *v5;
  v7 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 84) & 1) != 0 && *(__int128 **)(v7 + 96) == a3 )
      return 0LL;
  }
  v8 = *(__int128 **)(v18[0] + 16LL);
  if ( v8 + 7 < v8 || (unsigned __int64)(v8 + 7) > MmUserProbeAddress )
    v8 = (__int128 *)MmUserProbeAddress;
  v9 = v8[1];
  v10 = v8[2];
  v11 = v8[3];
  v12 = v8[4];
  v13 = v8[5];
  v14 = v8[6];
  *a3 = *v8;
  a3[1] = v9;
  a3[2] = v10;
  a3[3] = v11;
  a3[4] = v12;
  a3[5] = v13;
  a3[6] = v14;
  return (unsigned int)v6;
}
