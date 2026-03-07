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
