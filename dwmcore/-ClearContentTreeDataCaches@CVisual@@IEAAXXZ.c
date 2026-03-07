void __fastcall CVisual::ClearContentTreeDataCaches(CVisual *this)
{
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  unsigned int i; // eax
  _QWORD ***v8; // rdi
  _QWORD **v9; // rdi
  _QWORD *j; // rbx

  v2 = (__int64 *)((char *)this + 352);
  v3 = 0xAAAAAAAAAAAAAAABuLL * ((v2[1] - *v2) >> 3);
  if ( v3 )
    detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
      v2,
      0LL,
      v3);
  v4 = *((_QWORD *)this + 29);
  if ( *(int *)v4 < 0 )
  {
    v5 = *(unsigned int *)(v4 + 4);
    v6 = (_BYTE *)(v4 + 8);
    for ( i = 0; i < (unsigned int)v5; ++v6 )
    {
      if ( *v6 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v5 )
      v8 = 0LL;
    else
      v8 = (_QWORD ***)(v5 + 15 + v4 + 8LL * i - (((_BYTE)v5 + 15) & 7));
    v9 = *v8;
    if ( v9 )
    {
      for ( j = *v9; j != v9; j = (_QWORD *)*j )
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(j - 43);
    }
  }
}
