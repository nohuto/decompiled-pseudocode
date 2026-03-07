struct tagSIZE __fastcall DpiInternal::CalcDpiOverride(
        DpiInternal *this,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3)
{
  LONG cx; // ebx
  LONG cy; // edi
  const struct tagSIZE *v6; // r8
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-29h] BYREF
  __int64 v9; // [rsp+68h] [rbp+Fh]
  int v10; // [rsp+70h] [rbp+17h]
  __int128 v11; // [rsp+78h] [rbp+1Fh]
  __int128 v12; // [rsp+88h] [rbp+2Fh]
  __int64 v13; // [rsp+98h] [rbp+3Fh]
  __int64 v14; // [rsp+C8h] [rbp+6Fh] BYREF
  int v15; // [rsp+D0h] [rbp+77h] BYREF
  struct tagSIZE v16; // [rsp+D8h] [rbp+7Fh] BYREF

  cx = a2->cx;
  cy = a2->cy;
  LODWORD(v14) = 0;
  v15 = 0;
  QueryTable.QueryRoutine = 0LL;
  v9 = 0LL;
  v10 = 0;
  QueryTable.Name = L"UserPreferenceWidth";
  QueryTable.EntryContext = &v14;
  QueryTable.DefaultData = &v15;
  v13 = 0LL;
  QueryTable.Flags = 292;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultLength = 4;
  v11 = 0LL;
  v12 = 0LL;
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Control Panel\\Theme",
         &QueryTable,
         0LL,
         0LL) >= 0 )
  {
    cx = v14;
    cy = (unsigned int)(*((_DWORD *)this + 1) * v14) / *(_DWORD *)this;
  }
  if ( !cx || !cy )
    return 0LL;
  v16.cx = cx;
  v16.cy = cy;
  return DpiInternal::CalcDpi(this, &v16, v6);
}
