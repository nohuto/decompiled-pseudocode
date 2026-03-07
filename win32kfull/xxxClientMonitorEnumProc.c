__int64 __fastcall xxxClientMonitorEnumProc(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 result; // rax
  _BYTE v8[4]; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v10[0] = 0LL;
  v9 = 0;
  v11[0] = a1;
  v11[1] = a2;
  v12 = *a3;
  v13 = a4;
  v14 = a5;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v8);
  EtwTraceBeginCallback(87LL);
  v5 = KeUserModeCallback(87LL, v11, 48LL, v10, &v9);
  EtwTraceEndCallback(87LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v8);
  if ( v5 < 0 || v9 != 24 )
    return 0LL;
  v6 = (__int64 *)v10[0];
  if ( (unsigned __int64)(v10[0] + 8LL) < v10[0] || v10[0] + 8LL > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  result = *v6;
  v10[1] = *v6;
  return result;
}
