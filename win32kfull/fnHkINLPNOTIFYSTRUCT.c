__int64 __fastcall fnHkINLPNOTIFYSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int *a6)
{
  int v8; // ebx
  _QWORD *v9; // rcx
  int v11; // [rsp+40h] [rbp-68h] BYREF
  __int64 v12; // [rsp+48h] [rbp-60h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  __int64 v14; // [rsp+58h] [rbp-50h]
  int v15; // [rsp+60h] [rbp-48h]
  __int64 v16; // [rsp+68h] [rbp-40h]
  int v17; // [rsp+70h] [rbp-38h]
  __int64 v18; // [rsp+78h] [rbp-30h]
  __int64 v19; // [rsp+80h] [rbp-28h]
  int v20; // [rsp+88h] [rbp-20h]
  char v21; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+B8h] [rbp+10h] BYREF
  int v23; // [rsp+C8h] [rbp+20h] BYREF
  int v24; // [rsp+CCh] [rbp+24h]

  v24 = HIDWORD(a4);
  v22 = 0LL;
  v23 = 0;
  memset_0(&v11, 0, 0x60uLL);
  v11 = a1;
  v12 = 0LL;
  v16 = *(_QWORD *)(a3 + 32);
  v17 = *(_DWORD *)(a3 + 48);
  v18 = *(int *)(a3 + 40);
  v19 = *(int *)(a3 + 44);
  v20 = *(_DWORD *)(a3 + 52);
  v13 = 0LL;
  v14 = a5;
  v15 = *a6;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  EtwTraceBeginCallback(127LL);
  v8 = KeUserModeCallback(127LL, &v11, 96LL, &v22, &v23);
  EtwTraceEndCallback(127LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  if ( v8 < 0 || v23 != 24 )
    return 0LL;
  v9 = (_QWORD *)v22;
  if ( v22 + 8 < v22 || v22 + 8 > MmUserProbeAddress )
    v9 = (_QWORD *)MmUserProbeAddress;
  return (unsigned int)*v9;
}
