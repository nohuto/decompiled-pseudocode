_QWORD *__fastcall std::_Uninitialized_move<std::unique_ptr<CD2DBitmapCache::CCachedBitmap> *,std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v5; // r8

  while ( a1 != a2 )
  {
    v5 = *a1;
    *a1 = 0LL;
    *a3++ = v5;
    ++a1;
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>(a3, a3);
  return a3;
}
