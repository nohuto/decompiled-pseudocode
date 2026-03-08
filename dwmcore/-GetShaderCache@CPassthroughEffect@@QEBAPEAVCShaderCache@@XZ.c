/*
 * XREFs of ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1800D1A4C
 * Callers:
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x1800D18B4 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x18001BE58 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 */

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
