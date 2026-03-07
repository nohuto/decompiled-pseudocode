__int64 __fastcall CDataSourceReader::ProcessSetLookupId(
        CDataSourceReader *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DATASOURCEREADER_SETLOOKUPID *a3)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // r8
  struct BamoDataSourceProxy *DataSourceProxy; // rax
  __int64 v7; // r8
  const char *v8; // r9
  struct BamoDataSourceProxy *v9; // rsi
  int v10; // eax
  int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 8) = v3;
  v5 = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 9) = v5;
  DataSourceProxy = DataProviderManager::GetDataSourceProxy(
                      *(DataProviderManager **)(*((_QWORD *)this + 2) + 1256LL),
                      v3,
                      v5);
  v9 = DataSourceProxy;
  if ( DataSourceProxy && (v10 = DataSourceProxy::RegisterReader(DataSourceProxy, this), v11 = v10, v10 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v10);
    if ( v11 == -2147024891 )
      return 0LL;
  }
  else
  {
    v11 = 0;
  }
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\datasourcereader.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  if ( !v9 )
    DataProviderManager::AddReaderToReadyList(*(DataProviderManager **)(*((_QWORD *)this + 2) + 1256LL), this, v7, v8);
  return 0LL;
}
