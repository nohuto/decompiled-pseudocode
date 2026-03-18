/*
 * XREFs of xxxClientCallLocalMouseHooks @ 0x1C0211678
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCallLocalMouseHooks(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 result; // rax
  _BYTE v9[4]; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v12[3]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+80h] [rbp-18h]

  v11[0] = 0LL;
  v10 = 0;
  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  LODWORD(v12[0]) = a1;
  *(_OWORD *)((char *)v12 + 8) = *(_OWORD *)a2;
  *(_OWORD *)((char *)&v12[1] + 8) = *(_OWORD *)(a2 + 16);
  *((_QWORD *)&v12[2] + 1) = *(_QWORD *)(a2 + 32);
  LODWORD(v13) = a3;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v9, a2, a3, a4);
  EtwTraceBeginCallback(120LL);
  v4 = KeUserModeCallback(120LL, v12, 56LL, v11, &v10);
  EtwTraceEndCallback(120LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v9, v5, v6);
  if ( v4 < 0 || v10 != 24 )
    return 0LL;
  v7 = (__int64 *)v11[0];
  if ( (unsigned __int64)(v11[0] + 8LL) < v11[0] || v11[0] + 8LL > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  result = *v7;
  v11[1] = *v7;
  return result;
}
