__int64 __fastcall xxxClientCallDelegateThread(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 *v4; // rcx
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+40h] [rbp-48h] BYREF
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+5Ch] [rbp-2Ch]
  __int64 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+70h] [rbp-18h]
  __int64 v12; // [rsp+74h] [rbp-14h]
  int v13; // [rsp+7Ch] [rbp-Ch]
  __int64 v14; // [rsp+90h] [rbp+8h] BYREF
  int v15; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+A0h] [rbp+18h] BYREF

  v16 = 0LL;
  v15 = 0;
  v8 = 0;
  v13 = 0;
  v6[0] = a1;
  v6[1] = a3;
  v6[2] = *(_QWORD *)a2;
  v7 = *(_DWORD *)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 24);
  v11 = *(_DWORD *)(a2 + 32);
  v12 = *(_QWORD *)(a2 + 36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  EtwTraceBeginCallback(50LL);
  v3 = KeUserModeCallback(50LL, v6, 64LL, &v16, &v15);
  EtwTraceEndCallback(50LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  if ( v3 < 0 || v15 != 24 )
    return 0LL;
  v4 = (__int64 *)v16;
  if ( v16 + 8 < v16 || v16 + 8 > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  result = *v4;
  v14 = *v4;
  return result;
}
