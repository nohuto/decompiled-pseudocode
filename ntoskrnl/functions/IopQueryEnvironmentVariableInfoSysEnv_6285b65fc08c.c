__int64 __fastcall IopQueryEnvironmentVariableInfoSysEnv(
        struct _FILE_OBJECT *a1,
        struct _DEVICE_OBJECT *a2,
        int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v7; // edx
  int v9; // [rsp+50h] [rbp-48h] BYREF
  __int128 v10; // [rsp+58h] [rbp-40h] BYREF
  __int64 v11; // [rsp+68h] [rbp-30h]

  v9 = a3;
  v10 = 0LL;
  v11 = 0LL;
  v7 = IopIssueSystemEnvironmentRequest(0x520010u, 1u, a1, a2, &v9, 4u, &v10, 0x18u, 0LL);
  if ( v7 >= 0 )
  {
    if ( a4 )
      *a4 = v10;
    if ( a5 )
      *a5 = *((_QWORD *)&v10 + 1);
    if ( a6 )
      *a6 = v11;
  }
  return (unsigned int)v7;
}
