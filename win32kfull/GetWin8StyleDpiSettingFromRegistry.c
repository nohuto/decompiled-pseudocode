NTSTATUS __fastcall GetWin8StyleDpiSettingFromRegistry(BOOL *a1)
{
  BOOL v1; // ebx
  NTSTATUS result; // eax
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v5; // [rsp+68h] [rbp+1Fh]
  int v6; // [rsp+70h] [rbp+27h]
  __int128 v7; // [rsp+78h] [rbp+2Fh]
  __int128 v8; // [rsp+88h] [rbp+3Fh]
  __int64 v9; // [rsp+98h] [rbp+4Fh]
  int v10; // [rsp+B0h] [rbp+67h] BYREF
  int v11; // [rsp+B8h] [rbp+6Fh] BYREF

  v1 = 0;
  QueryTable.Flags = 288;
  v11 = 0;
  v10 = 0;
  QueryTable.Name = L"Win8DpiScaling";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = &v10;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultData = &v11;
  QueryTable.DefaultLength = 4;
  v9 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  result = RtlQueryRegistryValues(5u, L"Control Panel\\Desktop", &QueryTable, 0LL, 0LL);
  if ( result >= 0 )
    v1 = v10 != 0;
  *a1 = v1;
  return result;
}
