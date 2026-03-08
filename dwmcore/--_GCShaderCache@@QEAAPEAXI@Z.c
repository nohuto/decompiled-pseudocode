/*
 * XREFs of ??_GCShaderCache@@QEAAPEAXI@Z @ 0x18001BE58
 * Callers:
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x180029C04 (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ?EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z @ 0x1800CEFD8 (-EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z.c)
 *     ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1800D1A4C (-GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1800D2148 (-GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ??1?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ @ 0x18010DD50 (--1-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ.c)
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180205DD0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1802B6168 (-GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1802B669C (-GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCShaderCache@@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CShaderCache *__fastcall CShaderCache::`scalar deleting destructor'(CShaderCache *this)
{
  int *v1; // rdi
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rax
  void *v6; // rcx

  v1 = (int *)((char *)this + 16);
  if ( *(_QWORD *)this )
  {
    v3 = 0;
    if ( *v1 > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *((_QWORD *)this + 1);
        if ( *(_QWORD *)(v4 + v5) )
        {
          *(_QWORD *)(v4 + v5) = 0LL;
          CMILRefCountBaseT<IMILRefCount>::InternalRelease();
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *v1 );
    }
    operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 1) = 0LL;
  }
  *v1 = 0;
  operator delete(this, 0x20uLL);
  return this;
}
