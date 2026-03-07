CExcludeVisualReference **__fastcall std::_Uninitialized_move<std::unique_ptr<CExcludeVisualReference> *,std::allocator<std::unique_ptr<CExcludeVisualReference>>>(
        CExcludeVisualReference **a1,
        CExcludeVisualReference **a2,
        CExcludeVisualReference **a3)
{
  CExcludeVisualReference *v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<CExcludeVisualReference>>>(a3, a3);
  return a3;
}
