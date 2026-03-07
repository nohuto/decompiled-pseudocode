__int64 __fastcall fnHkINLPMOUSEHOOKSTRUCTEX(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, int *a6)
{
  int v10; // ebx
  __int64 *v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // rcx
  _BYTE v15[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v16; // [rsp+34h] [rbp-A4h] BYREF
  _QWORD v17[5]; // [rsp+38h] [rbp-A0h] BYREF
  int v18; // [rsp+60h] [rbp-78h] BYREF
  __int64 v19; // [rsp+68h] [rbp-70h]
  __int64 v20; // [rsp+70h] [rbp-68h]
  __int64 v21; // [rsp+78h] [rbp-60h]
  int v22; // [rsp+80h] [rbp-58h]
  __int128 v23; // [rsp+88h] [rbp-50h]
  __int128 v24; // [rsp+98h] [rbp-40h]
  __int64 v25; // [rsp+A8h] [rbp-30h]

  v17[0] = 0LL;
  v16 = 0;
  memset_0(&v18, 0, 0x50uLL);
  v18 = a1;
  v19 = a2;
  *((_DWORD *)a3 + 5) = 0;
  *((_DWORD *)a3 + 9) = 0;
  v23 = *a3;
  v24 = a3[1];
  v25 = *((_QWORD *)a3 + 4);
  v20 = a4;
  v21 = a5;
  v22 = *a6;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v15);
  EtwTraceBeginCallback(44LL);
  v10 = KeUserModeCallback(44LL, &v18, 80LL, v17, &v16);
  EtwTraceEndCallback(44LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v15);
  if ( v10 < 0 || v16 != 24 )
    return 0LL;
  v11 = (__int64 *)v17[0];
  if ( (unsigned __int64)(v17[0] + 8LL) < v17[0] || v17[0] + 8LL > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  v12 = *v11;
  v17[1] = *v11;
  v13 = *(_DWORD **)(v17[0] + 16LL);
  if ( v13 + 1 < v13 || (unsigned __int64)(v13 + 1) > MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *a6 ^= ((unsigned __int8)*v13 ^ (unsigned __int8)*a6) & 0x10;
  return v12;
}
