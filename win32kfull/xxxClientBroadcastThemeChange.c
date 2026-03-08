/*
 * XREFs of xxxClientBroadcastThemeChange @ 0x1C00EAF44
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientBroadcastThemeChange(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  _BYTE v5[4]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+34h] [rbp-44h] BYREF
  _QWORD v7[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v8[2]; // [rsp+50h] [rbp-28h] BYREF

  v7[0] = 0LL;
  v6 = 0;
  v8[0] = a1;
  v8[1] = a2;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v5);
  EtwTraceBeginCallback(121LL);
  v2 = KeUserModeCallback(121LL, v8, 16LL, v7, &v6);
  EtwTraceEndCallback(121LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v5);
  if ( v2 < 0 || v6 != 24 )
    return 0LL;
  v3 = (__int64 *)v7[0];
  if ( (unsigned __int64)(v7[0] + 8LL) < v7[0] || v7[0] + 8LL > MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  result = *v3;
  v7[1] = *v3;
  return result;
}
