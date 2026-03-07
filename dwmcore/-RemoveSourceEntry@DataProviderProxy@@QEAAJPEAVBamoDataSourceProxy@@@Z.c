__int64 __fastcall DataProviderProxy::RemoveSourceEntry(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  __int64 v3; // rbx
  unsigned __int8 *v4; // rdx
  _QWORD *v6; // rdx
  _QWORD *v7; // rsi
  _QWORD *i; // rdi
  _QWORD *j; // rax
  size_t v10; // rbx
  __int64 v11; // rdx
  char *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 Unique; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  Unique = DataProviderHelper::GetUniqueId<BamoDataSourceProxy>((__int64)a2);
  v3 = Unique;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find<void>(
    (_QWORD *)this + 10,
    &v15,
    (const unsigned __int8 *)&Unique);
  v4 = (unsigned __int8 *)v15;
  if ( v15 == *((_QWORD *)this + 11) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderproxy.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v15 + 24) + 192LL) = 0LL;
    std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Unchecked_erase(
      (__int64)this + 80,
      v4);
    v6 = (_QWORD *)*((_QWORD *)this + 19);
    v7 = (_QWORD *)((char *)this + 144);
    for ( i = (_QWORD *)*((_QWORD *)this + 18); i != v6 && v3 != *i; ++i )
      ;
    if ( i != v6 )
    {
      for ( j = i + 1; j != v6; ++j )
      {
        if ( v3 != *j )
          *i++ = *j;
      }
      if ( i != v6 )
      {
        v10 = *((_QWORD *)this + 19) - (_QWORD)v6;
        memmove_0(i, v6, v10);
        *((_QWORD *)this + 19) = (char *)i + v10;
      }
    }
    v11 = *((_QWORD *)this + 19);
    if ( v11 != *((_QWORD *)this + 20) )
    {
      v12 = (char *)this + 144;
      if ( *v7 == v11 )
        std::vector<CDataSourceReader *>::_Tidy((__int64)v12);
      else
        std::vector<unsigned __int64>::_Reallocate_exactly(v12, (v11 - *v7) >> 3);
    }
    return 0LL;
  }
}
