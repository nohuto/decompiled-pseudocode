void __fastcall CRenderTargetManager::EndTargetEnumeration(CRenderTargetManager *this)
{
  struct CRenderTarget **v2; // rbp
  struct CRenderTarget **i; // rbx

  *((_BYTE *)this + 576) = 0;
  v2 = (struct CRenderTarget **)*((_QWORD *)this + 8);
  for ( i = (struct CRenderTarget **)*((_QWORD *)this + 7); i != v2; ++i )
    CRenderTargetManager::RemoveRenderTarget(this, *i);
  std::vector<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>::clear((char *)this + 56);
}
