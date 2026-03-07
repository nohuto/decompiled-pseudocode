__int64 __fastcall xxxClientGetDDEFlags(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h]

  v10 = 0LL;
  v8 = 0;
  v7 = 0;
  v5 = a1;
  v6 = a2;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(70LL);
  v2 = KeUserModeCallback(70LL, &v5, 16LL, &v10, &v8);
  EtwTraceEndCallback(70LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  if ( v2 < 0 || v8 != 24 )
    return 0LL;
  v3 = (__int64 *)v10;
  if ( v10 + 8 < v10 || v10 + 8 > MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  result = *v3;
  v11 = *v3;
  return result;
}
