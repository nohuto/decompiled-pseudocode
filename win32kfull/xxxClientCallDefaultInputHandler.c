/*
 * XREFs of xxxClientCallDefaultInputHandler @ 0x1C0213F50
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C0207A6C (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z.c)
 */

__int64 __fastcall xxxClientCallDefaultInputHandler(const struct tagMSG *a1)
{
  const struct tagMSG *v1; // rbx
  __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+38h] [rbp-40h] BYREF
  int v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+44h] [rbp-34h]
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+5Ch] [rbp-1Ch]
  int v11; // [rsp+64h] [rbp-14h]
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  int v13; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+90h] [rbp+18h] BYREF

  v1 = a1;
  v14 = 0LL;
  v13 = 0;
  v6 = 0;
  v11 = 0;
  InputTraceLogging::Delivery::CallDefaultInputHandler(a1);
  v4 = *(_QWORD *)v1;
  v5 = *((_DWORD *)v1 + 2);
  v7 = *((_QWORD *)v1 + 2);
  v8 = *((_QWORD *)v1 + 3);
  v9 = *((_DWORD *)v1 + 8);
  v10 = *(_QWORD *)((char *)v1 + 36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(116LL);
  LODWORD(v1) = KeUserModeCallback(116LL, &v4, 48LL, &v14, &v13);
  EtwTraceEndCallback(116LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  if ( (int)v1 < 0 || v13 != 24 )
    return 0LL;
  v2 = (__int64 *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
    v2 = (__int64 *)MmUserProbeAddress;
  result = *v2;
  v12 = *v2;
  return result;
}
