void __fastcall CVisualTree::RemoveTreeClient(CVisualTree *this, struct IVisualTreeClient *a2)
{
  __int64 *v4; // rcx
  struct IVisualTreeClient **i; // rdx

  v4 = (__int64 *)((char *)this + 4536);
  for ( i = (struct IVisualTreeClient **)*v4; i != *((struct IVisualTreeClient ***)this + 568); ++i )
  {
    if ( *i == a2 )
    {
      detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
        v4,
        ((__int64)i - *v4) >> 3,
        1LL);
      *((_BYTE *)this + 4712) = 1;
      return;
    }
  }
}
