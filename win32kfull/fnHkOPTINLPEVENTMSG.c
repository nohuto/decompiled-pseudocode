__int64 __fastcall fnHkOPTINLPEVENTMSG(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  bool v10; // zf
  int v11; // eax
  int v12; // ebx
  __int64 *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  ULONG64 v16; // rcx
  __int64 v17; // xmm0_8
  int v19; // [rsp+50h] [rbp-68h] BYREF
  __int64 v20; // [rsp+58h] [rbp-60h]
  BOOL v21; // [rsp+60h] [rbp-58h]
  __int64 v22; // [rsp+68h] [rbp-50h]
  __int64 v23; // [rsp+70h] [rbp-48h]
  __int128 v24; // [rsp+78h] [rbp-40h]
  __int64 v25; // [rsp+88h] [rbp-30h]
  int v26; // [rsp+90h] [rbp-28h]
  char v27; // [rsp+C0h] [rbp+8h] BYREF
  int v28; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v29; // [rsp+D0h] [rbp+18h] BYREF

  v29 = 0LL;
  v28 = 0;
  memset_0(&v19, 0, 0x48uLL);
  v19 = a1;
  v20 = a2;
  v21 = a3 != 0LL;
  if ( a3 )
  {
    v24 = *a3;
    v25 = *((_QWORD *)a3 + 2);
  }
  v22 = a4;
  v23 = a5;
  v26 = 0;
  if ( a2 )
  {
    v9 = HMValidateHandle(a2, 5u);
    if ( v9 )
    {
      v10 = (*(_BYTE *)(v9 + 64) & 4) == 0;
      v11 = v26;
      if ( !v10 )
        v11 = 1;
      v26 = v11;
    }
  }
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  EtwTraceBeginCallback(49LL);
  v12 = KeUserModeCallback(49LL, &v19, 72LL, &v29, &v28);
  EtwTraceEndCallback(49LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  if ( v12 >= 0 && v28 == 24 )
  {
    v13 = (__int64 *)v29;
    if ( v29 + 8 < v29 || v29 + 8 > MmUserProbeAddress )
      v13 = (__int64 *)MmUserProbeAddress;
    v14 = *v13;
    if ( !a3 )
      return v14;
    v15 = *((_QWORD *)PtiCurrentShared((__int64)v13) + 64);
    if ( !v15 || (*(_DWORD *)(v15 + 84) & 1) == 0 || *(__int128 **)(v15 + 96) != a3 )
    {
      v16 = *(_QWORD *)(v29 + 16);
      if ( v16 + 24 < v16 || v16 + 24 > MmUserProbeAddress )
        v16 = MmUserProbeAddress;
      v17 = *(_QWORD *)(v16 + 16);
      *a3 = *(_OWORD *)v16;
      *((_QWORD *)a3 + 2) = v17;
      return v14;
    }
  }
  return -1LL;
}
