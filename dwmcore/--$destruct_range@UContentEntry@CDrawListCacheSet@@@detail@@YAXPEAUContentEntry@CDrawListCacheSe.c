/*
 * XREFs of ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1800FBB80
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18003F168 (-ensure_extra_capacity@-$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_p.c)
 * Callees:
 *     ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x1800FBBB8 (--_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z.c)
 */

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
