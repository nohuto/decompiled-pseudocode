/*
 * XREFs of ??1CExternalEffectGraph@@MEAA@XZ @ 0x1800D12A4
 * Callers:
 *     ??1CBlurRenderingGraph@@EEAA@XZ @ 0x1800D135C (--1CBlurRenderingGraph@@EEAA@XZ.c)
 *     ??_GCExternalEffectGraph@@MEAAPEAXI@Z @ 0x18027F960 (--_GCExternalEffectGraph@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x1800D11C8 (--1CBlurredBackdropCache@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D139C (-clear_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@.c)
 */

void __fastcall CExternalEffectGraph::~CExternalEffectGraph(CExternalEffectGraph *this)
{
  void **v1; // rbx
  void *v3; // rcx
  bool v4; // zf
  unsigned int v5; // edx

  v1 = (void **)((char *)this + 512);
  if ( (__int64)(*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) >> 6 )
    detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::clear_region((char *)this + 512);
  v3 = *v1;
  v4 = *v1 == v1 + 3;
  *v1 = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
  CBlurredBackdropCache::~CBlurredBackdropCache((CExternalEffectGraph *)((char *)this + 216));
  CBrushRenderingGraph::~CBrushRenderingGraph(this, v5);
}
