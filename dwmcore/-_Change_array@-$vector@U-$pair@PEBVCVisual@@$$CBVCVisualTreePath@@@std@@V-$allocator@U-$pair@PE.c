__int64 __fastcall std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Change_array(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v6, a1[1]);
    result = std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  *a1 = a2;
  a1[1] = a2 + (a3 << 6);
  a1[2] = a2 + (a4 << 6);
  return result;
}
