void __fastcall CGradientBrush::~CGradientBrush(struct CResource **this)
{
  struct CResource **v2; // rsi
  struct CResource **i; // rdi
  struct CResource *v4; // rcx
  struct CResource *v5; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[27]);
  v2 = (struct CResource **)this[22];
  for ( i = (struct CResource **)this[21]; i != v2; ++i )
    CResource::UnRegisterNotifierInternal((CResource *)this, *i);
  v4 = this[24];
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 4 * ((this[26] - v4) >> 2));
    this[24] = 0LL;
    this[25] = 0LL;
    this[26] = 0LL;
  }
  v5 = this[21];
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (this[23] - v5) & 0xFFFFFFFFFFFFFFF8uLL);
    this[21] = 0LL;
    this[22] = 0LL;
    this[23] = 0LL;
  }
  CGradientSource::~CGradientSource((CGradientSource *)(this + 11));
  CBrush::~CBrush((CBrush *)this);
}
