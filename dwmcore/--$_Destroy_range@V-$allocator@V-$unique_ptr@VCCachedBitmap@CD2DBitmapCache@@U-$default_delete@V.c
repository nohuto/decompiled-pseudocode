void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>(
        CD2DBitmapCache::CCachedBitmap **a1,
        CD2DBitmapCache::CCachedBitmap **a2)
{
  CD2DBitmapCache::CCachedBitmap **v3; // rbx
  CD2DBitmapCache::CCachedBitmap *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(*v3);
        operator delete(v4, 0x10uLL);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
