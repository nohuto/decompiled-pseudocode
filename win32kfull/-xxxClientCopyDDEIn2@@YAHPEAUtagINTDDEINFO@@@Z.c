/*
 * XREFs of ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C02080D4
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C0214454 (xxxClientCopyDDEIn1.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEIn2(struct tagINTDDEINFO *a1)
{
  int v1; // ebx
  __int64 *v2; // rcx
  __int64 result; // rax
  _BYTE v4[4]; // [rsp+30h] [rbp-88h] BYREF
  int v5; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v6[3]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v7[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v8; // [rsp+90h] [rbp-28h]

  v6[0] = 0LL;
  v5 = 0;
  v7[0] = *(_OWORD *)a1;
  v7[1] = *((_OWORD *)a1 + 1);
  v7[2] = *((_OWORD *)a1 + 2);
  v7[3] = *((_OWORD *)a1 + 3);
  v8 = *((_QWORD *)a1 + 8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v4);
  EtwTraceBeginCallback(61LL);
  v1 = KeUserModeCallback(61LL, v7, 72LL, v6, &v5);
  EtwTraceEndCallback(61LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v4);
  if ( v1 < 0 || v5 != 24 )
    return 0LL;
  v2 = (__int64 *)v6[0];
  if ( (unsigned __int64)(v6[0] + 8LL) < v6[0] || v6[0] + 8LL > MmUserProbeAddress )
    v2 = (__int64 *)MmUserProbeAddress;
  result = *v2;
  v6[1] = *v2;
  return result;
}
