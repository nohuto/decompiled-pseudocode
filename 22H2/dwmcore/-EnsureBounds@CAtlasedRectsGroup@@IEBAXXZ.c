/*
 * XREFs of ?EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ @ 0x1800C9E60
 * Callers:
 *     ?GetBounds@CAtlasedRectsGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C9E28 (-GetBounds@CAtlasedRectsGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006C310 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C9EF8 (-GetBounds@CAtlasedRectsMesh@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

void __fastcall CAtlasedRectsGroup::EnsureBounds(CAtlasedRectsGroup *this)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 104) )
  {
    *((_DWORD *)this + 25) = 0;
    v2 = 0LL;
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 23) = 0;
    for ( *((_DWORD *)this + 22) = 0; (unsigned int)v2 < *((_DWORD *)this + 18); v2 = (unsigned int)(v2 + 1) )
    {
      v3 = *((_QWORD *)this + 10);
      v4 = 0LL;
      CAtlasedRectsMesh::GetBounds(*(_QWORD *)(v3 + 8 * v2), &v4);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 22, (float *)&v4);
    }
    *((_BYTE *)this + 104) = 0;
  }
}
