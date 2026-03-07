__int64 __fastcall DataProviderManager::RegisterDataProvider(
        DataProviderManager *this,
        struct BamoDataProviderRegistrarStub *a2,
        struct BamoDataProviderProxy *a3)
{
  __int64 v5; // rax
  unsigned __int64 **v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 **i; // rbp
  unsigned __int64 *v10; // rsi
  DataSourceProxy *DataSourceProxy; // rax
  int v12; // eax
  const char *v13; // r9
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 Unique; // [rsp+60h] [rbp+8h] BYREF
  struct BamoDataProviderProxy *v18; // [rsp+68h] [rbp+10h] BYREF

  *((_QWORD *)a3 + 9) = this;
  v18 = a3;
  Unique = DataProviderHelper::GetUniqueId<BamoDataProviderProxy>(a3);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::emplace<unsigned __int64,DataProviderProxy * &>(
    (char *)this + 40,
    v15,
    &Unique,
    &v18);
  if ( v15[8] )
  {
    v5 = DataProviderHelper::GetUniqueId<BamoDataProviderProxy>(a3);
    v6 = (unsigned __int64 **)*((_QWORD *)this + 13);
    v7 = v5;
    for ( i = (unsigned __int64 **)*((_QWORD *)this + 14); v6 != i; ++v6 )
    {
      v10 = *v6;
      if ( (*v6)[8] == v7 )
      {
        DataSourceProxy = DataProviderManager::GetDataSourceProxy(this, v7, v10[9]);
        if ( DataSourceProxy )
        {
          v12 = DataSourceProxy::RegisterReader(DataSourceProxy, (struct CDataSourceReader *)v10);
          if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -2147024891 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xEE,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
              v13);
          *((_BYTE *)*v6 + 80) &= ~2u;
        }
      }
    }
    DataProviderManager::RemoveProcessedReadersFromReadyList(this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x800700B7LL);
    return 2147942583LL;
  }
}
