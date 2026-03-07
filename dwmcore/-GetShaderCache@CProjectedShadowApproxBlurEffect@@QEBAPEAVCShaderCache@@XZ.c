struct CShaderCache *__fastcall CProjectedShadowApproxBlurEffect::GetShaderCache(
        CProjectedShadowApproxBlurEffect *this)
{
  struct CShaderCache *result; // rax
  CShaderCache *v2; // rcx

  result = CProjectedShadowApproxBlurEffect::s_spShaderCache;
  if ( !CProjectedShadowApproxBlurEffect::s_spShaderCache )
  {
    result = (struct CShaderCache *)operator new(0x20uLL);
    if ( result )
    {
      *(_QWORD *)result = 0LL;
      *((_QWORD *)result + 1) = 0LL;
      *((_DWORD *)result + 4) = 0;
      *((_QWORD *)result + 3) = result;
    }
    v2 = CProjectedShadowApproxBlurEffect::s_spShaderCache;
    CProjectedShadowApproxBlurEffect::s_spShaderCache = result;
    if ( v2 )
    {
      CShaderCache::`scalar deleting destructor'(v2);
      return CProjectedShadowApproxBlurEffect::s_spShaderCache;
    }
  }
  return result;
}
