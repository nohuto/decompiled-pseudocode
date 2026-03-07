void __fastcall CHitTestContext::~CHitTestContext(void **this)
{
  void *v2; // rcx

  operator delete(this[28]);
  operator delete(this[24]);
  v2 = this[17];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, ((_BYTE *)this[19] - (_BYTE *)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[17] = 0LL;
    this[18] = 0LL;
    this[19] = 0LL;
  }
  operator delete(this[7]);
}
