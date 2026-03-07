__int64 __fastcall DataProviderManager::UnregisterReaderForDataSource(
        DataProviderManager *this,
        __int64 a2,
        unsigned __int64 a3,
        struct CDataSourceReader *a4)
{
  struct BamoDataSourceProxy *DataSourceProxy; // rax
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  DataSourceProxy = DataProviderManager::GetDataSourceProxy(this, a2, a3);
  if ( !DataSourceProxy )
  {
    v6 = -2147467259;
    v7 = 398LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = DataSourceProxy::UnregisterReader(DataSourceProxy, a4);
  if ( v6 < 0 )
  {
    v7 = 402LL;
    goto LABEL_3;
  }
  return 0LL;
}
