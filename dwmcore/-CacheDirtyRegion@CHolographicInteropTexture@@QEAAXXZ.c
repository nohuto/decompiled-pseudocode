void __fastcall CHolographicInteropTexture::CacheDirtyRegion(CHolographicInteropTexture *this)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rbp
  __int64 v4; // r14
  _OWORD *v5; // rbx
  __int64 v6; // r8
  unsigned int v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 14);
  if ( !v2 || *(_BYTE *)(v2 + 4420) )
  {
    *((_BYTE *)this + 240) = 1;
  }
  else
  {
    CDirtyRegion::GetDirtyRects(v2, (gsl::details *)v7);
    if ( v7[0] )
    {
      v3 = 0LL;
      v4 = v7[0];
      do
      {
        v5 = (_OWORD *)gsl::span<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const,-1>::operator[](
                         (gsl::details *)v7,
                         v3++);
        *(_OWORD *)detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::reserve_region(
                     (__int64 *)this + 15,
                     (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 4,
                     v6) = *v5;
        --v4;
      }
      while ( v4 );
    }
    *((_QWORD *)this + 14) = 0LL;
  }
}
