__int64 __fastcall xxxClientRimDevCallback(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+38h] [rbp-40h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+4Ch] [rbp-2Ch]
  int v15; // [rsp+50h] [rbp-28h]
  __int16 v16; // [rsp+54h] [rbp-24h]
  __int16 v17; // [rsp+56h] [rbp-22h]
  __int64 v18; // [rsp+58h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp-18h]
  int v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v21 = 0LL;
  v20 = 0;
  v12[0] = a4;
  v12[1] = a5;
  v13 = a1;
  v14 = a2;
  v15 = a3;
  v16 = a6;
  v17 = a7;
  v18 = a8;
  v19 = a9;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a6);
  EtwTraceBeginCallback(118LL);
  v9 = KeUserModeCallback(118LL, v12, 48LL, &v21, &v20);
  EtwTraceEndCallback(118LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a6);
  if ( v9 < 0 || v20 != 24 )
    return 0LL;
  v10 = (__int64 *)v21;
  if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  result = *v10;
  a5 = *v10;
  return result;
}
