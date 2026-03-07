void *__fastcall detail::destruct_range<CDrawListCacheSet::ContentEntry>(
        CDrawListCacheSet::ContentEntry *this,
        CDrawListCacheSet::ContentEntry *a2)
{
  CDrawListCacheSet::ContentEntry *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CDrawListCacheSet::ContentEntry::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (CDrawListCacheSet::ContentEntry *)((char *)v3 + 24);
    }
    while ( v3 != a2 );
  }
  return result;
}
