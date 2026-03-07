void __fastcall COcclusionContext::~COcclusionContext(void **this)
{
  void **v2; // rdi
  void *v3; // rcx
  bool v4; // zf
  unsigned int v5; // edx
  CVisualTreePath *v6; // rcx

  operator delete(this[190]);
  operator delete(this[186]);
  operator delete(this[182]);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 168));
  v2 = this + 105;
  if ( ((_BYTE *)this[106] - (_BYTE *)this[105]) >> 4 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      v2,
      0LL);
  v3 = *v2;
  v4 = this[105] == this + 108;
  *v2 = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 56);
  CLightStack::~CLightStack((CLightStack *)(this + 26));
  operator delete(this[24]);
  operator delete(this[20]);
  operator delete(this[14]);
  operator delete(this[6]);
  v6 = (CVisualTreePath *)this[2];
  if ( v6 )
    CVisualTreePath::`scalar deleting destructor'(v6, v5);
}
