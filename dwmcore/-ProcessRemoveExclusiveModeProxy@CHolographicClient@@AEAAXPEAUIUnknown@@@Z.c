void __fastcall CHolographicClient::ProcessRemoveExclusiveModeProxy(CHolographicClient *this, struct IUnknown *a2)
{
  _QWORD *i; // r8
  void (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  wil::try_com_query_nothrow<IHolographicExclusiveModeManagerProxy,IUnknown * &>(&v5, &v4);
  if ( v5 )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 13); i != *((_QWORD **)this + 14) && *i != v5; ++i )
      ;
    if ( i != *((_QWORD **)this + 14) )
      std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::erase(
        (__int64)this + 104,
        &v6,
        (__int64)i);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 160LL))(*((_QWORD *)this + 3));
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v5);
}
