void __fastcall detail::expandable_buffer_base<CCheckMPOCache::PlaneInfo,6>::~expandable_buffer_base<CCheckMPOCache::PlaneInfo,6>(
        void **a1)
{
  void *v1; // rdx
  bool v2; // zf

  v1 = *a1;
  v2 = *a1 == a1 + 3;
  *a1 = 0LL;
  if ( v2 )
    v1 = 0LL;
  operator delete(v1);
}
