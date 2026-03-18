/*
 * XREFs of xxxClientCallLocalMouseHooks @ 0x1C022B818
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCallLocalMouseHooks(int a1, __int128 *a2, int a3)
{
  int v3; // ebx
  __int64 *v4; // rcx
  __int64 result; // rax
  _BYTE v6[4]; // [rsp+30h] [rbp-68h] BYREF
  int v7; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v9[2]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v10; // [rsp+58h] [rbp-40h]
  __int128 v11; // [rsp+68h] [rbp-30h]
  __int64 v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+80h] [rbp-18h]
  int v14; // [rsp+84h] [rbp-14h]

  v8[0] = 0LL;
  v7 = 0;
  v9[1] = 0;
  v14 = 0;
  v9[0] = a1;
  v10 = *a2;
  v11 = a2[1];
  v12 = *((_QWORD *)a2 + 4);
  v13 = a3;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v6);
  EtwTraceBeginCallback(120LL);
  v3 = KeUserModeCallback(120LL, v9, 56LL, v8, &v7);
  EtwTraceEndCallback(120LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v6);
  if ( v3 < 0 || v7 != 24 )
    return 0LL;
  v4 = (__int64 *)v8[0];
  if ( (unsigned __int64)(v8[0] + 8LL) < v8[0] || v8[0] + 8LL > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  result = *v4;
  v8[1] = *v4;
  return result;
}
