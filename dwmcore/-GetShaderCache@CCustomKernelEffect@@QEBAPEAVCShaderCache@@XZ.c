/*
 * XREFs of ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1800D2148
 * Callers:
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x1800D1CC8 (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x18001BE58 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 */

struct CShaderCache *__fastcall CCustomKernelEffect::GetShaderCache(CCustomKernelEffect *this)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rbx
  _QWORD *v4; // rax
  CShaderCache *v5; // rcx

  v1 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  if ( v1 > 8 )
    v1 = 0LL;
  v2 = (unsigned int)v1;
  if ( !CCustomKernelEffect::s_rgspCache[v1] )
  {
    v4 = operator new(0x20uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      *((_DWORD *)v4 + 4) = 0;
      v4[3] = v4;
    }
    else
    {
      v4 = 0LL;
    }
    v5 = (CShaderCache *)CCustomKernelEffect::s_rgspCache[v2];
    CCustomKernelEffect::s_rgspCache[v2] = v4;
    if ( v5 )
      CShaderCache::`scalar deleting destructor'(v5);
  }
  return (struct CShaderCache *)CCustomKernelEffect::s_rgspCache[v2];
}
