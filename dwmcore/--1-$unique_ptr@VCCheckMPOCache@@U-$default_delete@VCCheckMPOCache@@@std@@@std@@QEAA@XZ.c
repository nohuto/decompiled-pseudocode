void __fastcall std::unique_ptr<CCheckMPOCache>::~unique_ptr<CCheckMPOCache>(void **a1)
{
  char *v1; // rbx

  v1 = (char *)*a1;
  if ( *a1 )
  {
    detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::~vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>(v1 + 8);
    operator delete(v1);
  }
}
