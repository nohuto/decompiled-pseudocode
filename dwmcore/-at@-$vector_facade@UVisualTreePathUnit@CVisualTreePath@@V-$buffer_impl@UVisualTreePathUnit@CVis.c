__int64 __fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::at(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( a2 >= (a1[1] - *a1) >> 4 )
  {
    std::_Xout_of_range("index too big");
    __debugbreak();
  }
  return v2 + 16 * a2;
}
