void __fastcall COverlayContext::~COverlayContext(COverlayContext **this)
{
  CResource *v2; // rcx
  COverlayContext *v3; // rcx
  COverlayContext *v4; // rcx
  COverlayContext *v5; // rcx

  COverlayContext::Reset((COverlayContext *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 1406));
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 1397));
  CDirectFlipInfo::~CDirectFlipInfo((CDirectFlipInfo *)(this + 1380));
  v2 = this[1379];
  if ( v2 )
    CResource::InternalRelease(v2);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 913);
  v3 = this[913];
  this[913] = 0LL;
  if ( v3 == (COverlayContext *)(this + 916) )
    v3 = 0LL;
  operator delete(v3);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 462);
  v4 = this[462];
  this[462] = 0LL;
  if ( v4 == (COverlayContext *)(this + 465) )
    v4 = 0LL;
  operator delete(v4);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 11);
  v5 = this[11];
  this[11] = 0LL;
  if ( v5 == (COverlayContext *)(this + 14) )
    v5 = 0LL;
  operator delete(v5);
}
