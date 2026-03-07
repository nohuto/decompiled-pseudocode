void __fastcall CDrawingContext::~CDrawingContext(void **this)
{
  unsigned int v2; // edx
  CVisualTreePath *v3; // rcx
  CD3DDevice *v4; // rcx

  CDrawingContext::PopAllStacks((CDrawingContext *)this);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 1012));
  v3 = (CVisualTreePath *)this[1010];
  if ( v3 )
    CVisualTreePath::`scalar deleting destructor'(v3, v2);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)(this + 446));
  ClipPlaneIterator::~ClipPlaneIterator((ClipPlaneIterator *)(this + 429));
  operator delete(this[426]);
  operator delete(this[420]);
  operator delete(this[412]);
  operator delete(this[408]);
  CScopedClipStack::~CScopedClipStack((CScopedClipStack *)(this + 112));
  operator delete(this[110]);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 100);
  CLightStack::~CLightStack((CLightStack *)(this + 70));
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 62);
  operator delete(this[60]);
  operator delete(this[56]);
  operator delete(this[52]);
  operator delete(this[48]);
  v4 = (CD3DDevice *)this[5];
  if ( v4 )
    CD3DDevice::Release(v4);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)(this + 4));
}
