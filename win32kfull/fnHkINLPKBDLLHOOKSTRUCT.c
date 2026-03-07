__int64 __fastcall fnHkINLPKBDLLHOOKSTRUCT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 result; // rax
  _BYTE v8[4]; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v11[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+58h] [rbp-40h]
  __int64 v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  __int128 v15; // [rsp+70h] [rbp-28h]
  __int64 v16; // [rsp+80h] [rbp-18h]

  v10[0] = 0LL;
  v9 = 0;
  v11[1] = 0;
  v11[0] = a1;
  v12 = a2;
  v15 = *a3;
  v16 = *((_QWORD *)a3 + 2);
  v13 = a4;
  v14 = a5;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v8);
  EtwTraceBeginCallback(45LL);
  v5 = KeUserModeCallback(45LL, v11, 56LL, v10, &v9);
  EtwTraceEndCallback(45LL);
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
