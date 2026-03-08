/*
 * XREFs of ?EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ @ 0x1800E87FC
 * Callers:
 *     ?GetBounds@CAtlasedRectsGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E87C4 (-GetBounds@CAtlasedRectsGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E889C (-GetBounds@CAtlasedRectsMesh@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CAtlasedRectsGroup::EnsureBounds(CAtlasedRectsGroup *this)
{
  __int64 *v2; // rbp
  __int64 *i; // rsi
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 120) )
  {
    *((_DWORD *)this + 29) = 0;
    *((_DWORD *)this + 28) = 0;
    *((_DWORD *)this + 27) = 0;
    *((_DWORD *)this + 26) = 0;
    v2 = (__int64 *)*((_QWORD *)this + 11);
    for ( i = (__int64 *)*((_QWORD *)this + 10); i != v2; ++i )
    {
      v4 = *i;
      v5 = 0LL;
      CAtlasedRectsMesh::GetBounds(v4, &v5);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 26, (float *)&v5);
    }
    *((_BYTE *)this + 120) = 0;
  }
}
