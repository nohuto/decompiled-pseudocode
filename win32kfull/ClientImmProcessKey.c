__int64 __fastcall ClientImmProcessKey(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+38h] [rbp-30h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  __int64 v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+58h] [rbp-10h]
  int v13; // [rsp+5Ch] [rbp-Ch]
  unsigned __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h]
  int v16; // [rsp+80h] [rbp+18h] BYREF

  v14 = 0LL;
  v16 = 0;
  v10 = 0;
  v13 = 0;
  v8[0] = a1;
  v8[1] = a2;
  v9 = a3;
  v11 = a4;
  v12 = a5;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(93LL);
  v5 = KeUserModeCallback(93LL, v8, 40LL, &v14, &v16);
  EtwTraceEndCallback(93LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  if ( v5 < 0 || v16 != 24 )
    return 0LL;
  v6 = (__int64 *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  result = *v6;
  v15 = *v6;
  return result;
}
