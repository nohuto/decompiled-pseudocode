__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int128 *v10; // rcx
  _BYTE v12[4]; // [rsp+30h] [rbp-78h] BYREF
  int v13; // [rsp+34h] [rbp-74h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v15; // [rsp+58h] [rbp-50h]
  _DWORD v16[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v17; // [rsp+70h] [rbp-38h]
  __int128 v18; // [rsp+78h] [rbp-30h]
  __int64 v19; // [rsp+88h] [rbp-20h]
  __int64 v20; // [rsp+90h] [rbp-18h]

  v14[0] = 0LL;
  v13 = 0;
  v16[1] = 0;
  v16[0] = a1;
  v17 = a2;
  v18 = *a3;
  v19 = a4;
  v20 = a5;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  EtwTraceBeginCallback(48LL);
  v6 = KeUserModeCallback(48LL, v16, 48LL, v14, &v13);
  EtwTraceEndCallback(48LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  if ( v6 < 0 || v13 != 24 )
    return 0LL;
  v7 = (__int64 *)v14[0];
  if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || v14[0] + 8LL > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v8 = *v7;
  v14[1] = *v7;
  v9 = *((_QWORD *)PtiCurrentShared((__int64)v7) + 64);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 84) & 1) != 0 && *(__int128 **)(v9 + 96) == a3 )
      return 0LL;
  }
  v10 = *(__int128 **)(v14[0] + 16LL);
  if ( v10 + 1 < v10 || (unsigned __int64)(v10 + 1) > MmUserProbeAddress )
    v10 = (__int128 *)MmUserProbeAddress;
  v15 = *v10;
  *a3 = v15;
  return v8;
}
