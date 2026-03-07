void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(
        CCachedVisualImage::CCachedTarget **a1,
        CCachedVisualImage::CCachedTarget **a2)
{
  CCachedVisualImage::CCachedTarget **v3; // rbx
  CCachedVisualImage::CCachedTarget *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        CCachedVisualImage::CCachedTarget::~CCachedTarget(*v3);
        operator delete(v4, 0x40uLL);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
