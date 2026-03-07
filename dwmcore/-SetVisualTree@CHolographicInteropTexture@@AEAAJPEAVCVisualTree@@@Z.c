__int64 __fastcall CHolographicInteropTexture::SetVisualTree(CHolographicInteropTexture *this, struct CVisualTree *a2)
{
  _QWORD *v2; // rsi

  v2 = (_QWORD *)((char *)this + 96);
  if ( a2 != *((struct CVisualTree **)this + 12) )
  {
    CHolographicInteropTexture::ReleaseVisualTree(this);
    if ( a2 )
    {
      *(_QWORD *)detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   (struct CVisualTree *)((char *)a2 + 4536),
                   (__int64)(*((_QWORD *)a2 + 568) - *((_QWORD *)a2 + 567)) >> 3) = ((unsigned __int64)this + 64) & -(__int64)(this != 0LL);
      *((_BYTE *)a2 + 4712) = 1;
      *v2 = a2;
      (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 8LL))(a2);
    }
  }
  return 0LL;
}
