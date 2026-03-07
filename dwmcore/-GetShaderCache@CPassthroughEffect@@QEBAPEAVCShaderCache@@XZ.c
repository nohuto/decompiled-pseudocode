struct CShaderCache *__fastcall CPassthroughEffect::GetShaderCache(CPassthroughEffect *this)
{
  struct CShaderCache *result; // rax
  CShaderCache *v2; // rcx

  result = CPassthroughEffect::s_spShaderCache;
  if ( !CPassthroughEffect::s_spShaderCache )
  {
    result = (struct CShaderCache *)operator new(0x20uLL);
    if ( result )
    {
      *(_QWORD *)result = 0LL;
      *((_QWORD *)result + 1) = 0LL;
      *((_DWORD *)result + 4) = 0;
      *((_QWORD *)result + 3) = result;
    }
    v2 = CPassthroughEffect::s_spShaderCache;
    CPassthroughEffect::s_spShaderCache = result;
    if ( v2 )
    {
      CShaderCache::`scalar deleting destructor'(v2);
      return CPassthroughEffect::s_spShaderCache;
    }
  }
  return result;
}
