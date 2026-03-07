void __fastcall DataProviderManager::CheckAndRegisterReadyReaders(
        DataProviderManager *this,
        struct BamoDataProviderProxy *a2,
        struct BamoDataSourceProxy *a3)
{
  __int64 Unique; // rbp
  __int64 v6; // rax
  struct CDataSourceReader **v7; // rbx
  __int64 v8; // r14
  struct CDataSourceReader **i; // rsi
  struct CDataSourceReader *v10; // rdx
  int v11; // eax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Unique = DataProviderHelper::GetUniqueId<BamoDataProviderProxy>((__int64)a2);
  v6 = DataProviderHelper::GetUniqueId<BamoDataSourceProxy>((__int64)a3);
  v7 = (struct CDataSourceReader **)*((_QWORD *)this + 13);
  v8 = v6;
  for ( i = (struct CDataSourceReader **)*((_QWORD *)this + 14); v7 != i; ++v7 )
  {
    v10 = *v7;
    if ( *((_QWORD *)*v7 + 8) == Unique && *((_QWORD *)v10 + 9) == v8 )
    {
      v11 = DataSourceProxy::RegisterReader(a3, v10);
      if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -2147024891 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          527LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
          v12);
      *((_BYTE *)*v7 + 80) &= ~2u;
    }
  }
  DataProviderManager::RemoveProcessedReadersFromReadyList(this);
}
