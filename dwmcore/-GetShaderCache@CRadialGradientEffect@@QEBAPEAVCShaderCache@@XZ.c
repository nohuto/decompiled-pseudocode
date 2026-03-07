struct CShaderCache *__fastcall CRadialGradientEffect::GetShaderCache(CRadialGradientEffect *this)
{
  struct CShaderCache *result; // rax
  CShaderCache *v2; // rcx
  CShaderCache *v3; // rcx

  if ( *((_BYTE *)this + 60) )
  {
    result = CRadialGradientEffect::s_spCenteredShaderCache;
    if ( !CRadialGradientEffect::s_spCenteredShaderCache )
    {
      result = (struct CShaderCache *)operator new(0x20uLL);
      if ( result )
      {
        *(_QWORD *)result = 0LL;
        *((_QWORD *)result + 1) = 0LL;
        *((_DWORD *)result + 4) = 0;
        *((_QWORD *)result + 3) = result;
      }
      v2 = CRadialGradientEffect::s_spCenteredShaderCache;
      CRadialGradientEffect::s_spCenteredShaderCache = result;
      if ( v2 )
      {
        CShaderCache::`scalar deleting destructor'(v2);
        return CRadialGradientEffect::s_spCenteredShaderCache;
      }
    }
  }
  else
  {
    result = CRadialGradientEffect::s_spNonCenteredShaderCache;
    if ( !CRadialGradientEffect::s_spNonCenteredShaderCache )
    {
      result = (struct CShaderCache *)operator new(0x20uLL);
      if ( result )
      {
        *(_QWORD *)result = 0LL;
        *((_QWORD *)result + 1) = 0LL;
        *((_DWORD *)result + 4) = 0;
        *((_QWORD *)result + 3) = result;
      }
      v3 = CRadialGradientEffect::s_spNonCenteredShaderCache;
      CRadialGradientEffect::s_spNonCenteredShaderCache = result;
      if ( v3 )
      {
        CShaderCache::`scalar deleting destructor'(v3);
        return CRadialGradientEffect::s_spNonCenteredShaderCache;
      }
    }
  }
  return result;
}
