void *__fastcall detail::destruct_range<CBlurredBackdropCache::CachedBlur>(
        CBlurredBackdropCache::CachedBlur *this,
        CBlurredBackdropCache::CachedBlur *a2)
{
  CBlurredBackdropCache::CachedBlur *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CBlurredBackdropCache::CachedBlur::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (CBlurredBackdropCache::CachedBlur *)((char *)v3 + 136);
    }
    while ( v3 != a2 );
  }
  return result;
}
