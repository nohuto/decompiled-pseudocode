char __fastcall DataProviderManager::TryNotify(
        DataProviderManager *a1,
        struct CResource *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  struct BamoDataSourceProxy *DataSourceProxy; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  DataSourceProxy = DataProviderManager::GetDataSourceProxy(a1, a3, a4);
  if ( DataSourceProxy )
  {
    LOBYTE(DataSourceProxy) = DataSourceProxy::DoesResourceHaveAccess(DataSourceProxy, a2);
    if ( (_BYTE)DataSourceProxy )
    {
      std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::find<void>(
        (_QWORD *)a1 + 5,
        v10,
        (const unsigned __int8 *)&v11);
      LOBYTE(DataSourceProxy) = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10[0] + 24LL) + 8LL)
                                                                                             + 64LL))(
                                  *(_QWORD *)(v10[0] + 24LL) + 8LL,
                                  a4,
                                  a5);
    }
  }
  return (char)DataSourceProxy;
}
