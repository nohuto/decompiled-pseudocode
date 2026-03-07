void __fastcall CPreComputeContext::~CPreComputeContext(void **this)
{
  CDepthSortedVisualCollection *v2; // rcx
  void *v3; // rcx
  bool v4; // zf

  operator delete(this[241]);
  v2 = (CDepthSortedVisualCollection *)this[232];
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CDepthSortedVisualCollection>>(v2);
    std::_Deallocate<16,0>(this[232], 8 * (((_BYTE *)this[234] - (_BYTE *)this[232]) >> 3));
    this[232] = 0LL;
    this[233] = 0LL;
    this[234] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 228);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 224);
  operator delete(this[222]);
  CLightStack::~CLightStack((CLightStack *)(this + 190));
  operator delete(this[188]);
  operator delete(this[184]);
  operator delete(this[180]);
  operator delete(this[176]);
  detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear(this);
  v3 = *this;
  v4 = *this == this + 3;
  *this = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
}
