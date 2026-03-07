CD2DBitmapCache::CCachedBitmap ***__fastcall std::vector<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>::erase(
        __int64 a1,
        CD2DBitmapCache::CCachedBitmap ***a2,
        CD2DBitmapCache::CCachedBitmap **a3)
{
  CD2DBitmapCache::CCachedBitmap **v3; // r12
  CD2DBitmapCache::CCachedBitmap **v4; // rdi
  CD2DBitmapCache::CCachedBitmap **v8; // rsi
  CD2DBitmapCache::CCachedBitmap *v9; // rax
  CD2DBitmapCache::CCachedBitmap *v10; // r15
  __int64 v11; // rax
  void *v12; // rdi
  CD2DBitmapCache::CCachedBitmap ***result; // rax

  v3 = *(CD2DBitmapCache::CCachedBitmap ***)(a1 + 8);
  v4 = a3 + 1;
  if ( a3 + 1 != v3 )
  {
    v8 = a3;
    do
    {
      if ( v8 != v4 )
      {
        v9 = *v4;
        *v4 = 0LL;
        v10 = *v8;
        *v8 = v9;
        if ( v10 )
        {
          CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(v10);
          operator delete(v10);
        }
      }
      ++v4;
      ++v8;
    }
    while ( v4 != v3 );
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(void **)(v11 - 8);
  if ( v12 )
  {
    CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(*(CD2DBitmapCache::CCachedBitmap **)(v11 - 8));
    operator delete(v12);
  }
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
