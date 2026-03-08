/*
 * XREFs of ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1802B669C
 * Callers:
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802670E0 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x18001BE58 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 */

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
