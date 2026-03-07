__int64 __fastcall DataSourceProxy::RegisterReader(DataSourceProxy *this, struct CDataSourceReader *a2)
{
  _BYTE *v5; // rdx
  DataProviderProxy *v6; // rbx
  unsigned __int64 Unique; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWeakResourceReference *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( DataSourceProxy::DoesResourceHaveAccess(this, a2) )
  {
    v9 = 0LL;
    CWeakReference<CResource>::Create(a2, &v9);
    v5 = (_BYTE *)*((_QWORD *)this + 26);
    if ( v5 == *((_BYTE **)this + 27) )
    {
      std::vector<CWeakReference<CResource> *,std::allocator<CWeakReference<CResource> *>>::_Emplace_reallocate<CWeakReference<CResource> * const &>(
        (const void **)this + 25,
        v5,
        &v9);
    }
    else
    {
      *(_QWORD *)v5 = v9;
      *((_QWORD *)this + 26) += 8LL;
    }
    *((_BYTE *)a2 + 80) |= 1u;
    v6 = (DataProviderProxy *)*((_QWORD *)this + 24);
    Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)this);
    DataProviderProxy::ReaderRegistered(v6, Unique);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x197,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourceproxy.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
}
