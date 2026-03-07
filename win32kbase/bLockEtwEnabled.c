__int64 bLockEtwEnabled()
{
  unsigned int v0; // ebx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+68h] [rbp+1Fh]
  int v4; // [rsp+70h] [rbp+27h]
  __int128 v5; // [rsp+78h] [rbp+2Fh]
  __int128 v6; // [rsp+88h] [rbp+3Fh]
  __int64 v7; // [rsp+98h] [rbp+4Fh]
  int v8; // [rsp+B0h] [rbp+67h] BYREF
  int v9; // [rsp+B8h] [rbp+6Fh] BYREF

  v0 = 0;
  QueryTable.Flags = 288;
  v9 = 0;
  v8 = 0;
  QueryTable.Name = L"LockEtw";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = &v8;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultData = &v9;
  QueryTable.DefaultLength = 4;
  v7 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( RtlQueryRegistryValues(3u, L"GRE_Initialize", &QueryTable, 0LL, 0LL) < 0 )
    return 0LL;
  LOBYTE(v0) = v8 == 1;
  return v0;
}
