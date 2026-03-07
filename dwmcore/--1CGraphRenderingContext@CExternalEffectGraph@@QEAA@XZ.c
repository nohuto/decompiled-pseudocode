void __fastcall CExternalEffectGraph::CGraphRenderingContext::~CGraphRenderingContext(
        CExternalEffectGraph::CGraphRenderingContext *this,
        __int64 a2)
{
  unsigned __int64 v3; // r8
  CExternalEffectGraph::CGraphRenderingContext *v4; // rcx

  if ( *((_DWORD *)this + 9) != -1 )
    CDrawingContext::PopLayer(*(CDrawingContext **)this);
  v3 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3);
  if ( v3 )
    detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 6,
      a2,
      v3);
  v4 = (CExternalEffectGraph::CGraphRenderingContext *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v4 == (CExternalEffectGraph::CGraphRenderingContext *)((char *)this + 72) )
    v4 = 0LL;
  operator delete(v4);
}
