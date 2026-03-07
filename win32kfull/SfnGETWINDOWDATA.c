__int64 __fastcall SfnGETWINDOWDATA(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ebx
  ULONG64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+4Ch] [rbp-3Ch]
  __int64 v17; // [rsp+50h] [rbp-38h]
  __int64 v18; // [rsp+58h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp-28h]
  __int64 v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+90h] [rbp+8h] BYREF
  char v22; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+A0h] [rbp+18h] BYREF

  v23 = 0LL;
  v21 = 0;
  PtiCurrentShared((__int64)a1);
  v16 = 0;
  if ( a1 )
    v9 = *a1;
  else
    v9 = 0LL;
  v14 = v9;
  v15 = a2;
  v17 = a3;
  v18 = a4;
  v19 = a5;
  if ( (*(_BYTE *)(a1[5] + 18) & 8) != 0 )
    v10 = *(_QWORD *)(gpsi + 424LL);
  else
    v10 = *(_QWORD *)(gpsi + 616LL);
  v20 = v10;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  EtwTraceBeginCallback(125LL);
  v11 = KeUserModeCallback(125LL, &v14, 48LL, &v23, &v21);
  EtwTraceEndCallback(125LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  if ( v11 < 0 || v21 != 24 )
    return 0LL;
  v12 = v23;
  if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  return *(_QWORD *)v12;
}
