void __fastcall DataSourceProxy::~DataSourceProxy(DataSourceProxy *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rbx
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &DataSourceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataSourceProxy::`vftable'{for `IDataSourceProxy'};
  v2 = (_QWORD *)*((_QWORD *)this + 26);
  for ( i = (_QWORD *)*((_QWORD *)this + 25); i != v2; ++i )
  {
    v4 = *(_QWORD *)(*i + 16LL);
    if ( v4 )
    {
      *(_QWORD *)(v4 + 64) = 0LL;
      *(_QWORD *)(v4 + 72) = 0LL;
      *(_BYTE *)(v4 + 80) &= ~1u;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
  }
  v5 = (void *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 26) = v5;
  *((_QWORD *)this + 24) = 0LL;
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 27) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 160);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 128);
  std::_Deallocate<16,0>(
    *((void **)this + 11),
    (*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  std::_List_node<CBaseExpression *,void *>::_Free_non_head<std::allocator<std::_List_node<CBaseExpression *,void *>>>(
    v6,
    *((_QWORD ***)this + 9));
  std::_Deallocate<16,0>(*((void **)this + 9), 0x18uLL);
  wil::com_ptr_t<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,wil::err_returncode_policy>((__int64 *)this + 7);
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
}
