void ***__fastcall std::_Uninitialized_move<std::unique_ptr<CRegion> *,std::allocator<std::unique_ptr<CRegion>>>(
        void ***a1,
        void ***a2,
        void ***a3)
{
  void **v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<CRegion>>>(a3, a3);
  return a3;
}
