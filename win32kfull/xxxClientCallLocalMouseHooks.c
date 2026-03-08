/*
 * XREFs of xxxClientCallLocalMouseHooks @ 0x1C0214240
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCallLocalMouseHooks(int a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 *v4; // rcx
  __int64 result; // rax
  _BYTE v6[4]; // [rsp+30h] [rbp-68h] BYREF
  int v7; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v9[3]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v10; // [rsp+80h] [rbp-18h]

  v8[0] = 0LL;
  v7 = 0;
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  LODWORD(v9[0]) = a1;
  *(_OWORD *)((char *)v9 + 8) = *(_OWORD *)a2;
  *(_OWORD *)((char *)&v9[1] + 8) = *(_OWORD *)(a2 + 16);
  *((_QWORD *)&v9[2] + 1) = *(_QWORD *)(a2 + 32);
  LODWORD(v10) = a3;
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
