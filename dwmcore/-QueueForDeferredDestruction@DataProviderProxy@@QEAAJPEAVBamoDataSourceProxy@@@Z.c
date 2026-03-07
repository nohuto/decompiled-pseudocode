__int64 __fastcall DataProviderProxy::QueueForDeferredDestruction(
        DataProviderProxy *this,
        struct BamoDataSourceProxy *a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rdx
  __int64 Unique; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  Unique = DataProviderHelper::GetUniqueId<BamoDataSourceProxy>((__int64)a2);
  v3 = Unique;
  if ( *std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find<void>(
          (_QWORD *)this + 10,
          &v7,
          (const unsigned __int8 *)&Unique) != *((_QWORD *)this + 11) )
  {
    v4 = (_BYTE *)*((_QWORD *)this + 19);
    if ( v4 == *((_BYTE **)this + 20) )
    {
      std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 &>((const void **)this + 18, v4, &Unique);
    }
    else
    {
      *(_QWORD *)v4 = v3;
      *((_QWORD *)this + 19) += 8LL;
    }
  }
  return 0LL;
}
