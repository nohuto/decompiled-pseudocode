void __fastcall CCompositionSurfaceInfo::UnRegisterBitmapNotifier(
        CCompositionSurfaceInfo *this,
        struct ICompositionSurfaceInfoListener *a2)
{
  struct ICompositionSurfaceInfoListener **i; // rdx

  for ( i = (struct ICompositionSurfaceInfoListener **)*((_QWORD *)this + 8);
        i != *((struct ICompositionSurfaceInfoListener ***)this + 9);
        ++i )
  {
    if ( *i == a2 )
    {
      detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 64,
        ((__int64)i - *((_QWORD *)this + 8)) >> 3);
      return;
    }
  }
}
