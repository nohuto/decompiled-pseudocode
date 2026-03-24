/*
 * XREFs of ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18006D978
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006D330 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800C9630 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x18017B354 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z @ 0x18017C1AC (-IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z.c)
 */

char __fastcall COverlayContext::HaveOverlayCandidatesChanged(COverlayContext *this)
{
  char v1; // r14
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned int i; // r15d
  __int64 v7; // rbx
  FastRegion::Internal::CRgnData *v8; // rcx
  const struct FastRegion::Internal::CRgnData *v9; // rdx
  bool IsEqualTo; // al

  v1 = 0;
  if ( *((_BYTE *)this + 11430) )
  {
    v1 = 1;
    *((_BYTE *)this + 11430) = 0;
  }
  v3 = *((_QWORD *)this + 463);
  v4 = *((_QWORD *)this + 12);
  if ( (*((_QWORD *)this + 13) - v4) / 224 != (*((_QWORD *)this + 464) - v3) / 224
    || *((_BYTE *)this + 11426) != *((_BYTE *)this + 11427) )
  {
    return 1;
  }
  for ( i = 0; i < (unsigned int)((*((_QWORD *)this + 13) - v4) / 224); ++i )
  {
    v7 = 224LL * i;
    COverlayContext::ComparePlaneAttributes(
      (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v7 + v4 + 32),
      (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v7 + v3 + 32),
      (bool *)(v7 + v4 + 217),
      (bool *)(v7 + v4 + 218));
    v4 = *((_QWORD *)this + 12);
    if ( *(_BYTE *)(v7 + v4 + 217) )
      return 1;
    v3 = *((_QWORD *)this + 463);
    if ( *(_QWORD *)(v7 + v4 + 16) != *(_QWORD *)(v7 + v3 + 16)
      || *(_QWORD *)(v7 + v4 + 24) != *(_QWORD *)(v7 + v3 + 24)
      || *(_BYTE *)(v7 + v4 + 177) != *(_BYTE *)(v7 + v3 + 177)
      || *(_BYTE *)(v7 + v4 + 178) != *(_BYTE *)(v7 + v3 + 178)
      || *(_BYTE *)(v7 + v4 + 179) != *(_BYTE *)(v7 + v3 + 179)
      || *(_BYTE *)(v7 + v4 + 181) != *(_BYTE *)(v7 + v3 + 181)
      || (unsigned __int8)operator!=(v7 + v4 + 144, v7 + v3 + 144) )
    {
      return 1;
    }
    v8 = **(FastRegion::Internal::CRgnData ***)(v7 + v4 + 160);
    v9 = **(const struct FastRegion::Internal::CRgnData ***)(v7 + v3 + 160);
    if ( *(_DWORD *)v8 )
    {
      if ( !*(_DWORD *)v9 )
        return 1;
      IsEqualTo = FastRegion::Internal::CRgnData::IsEqualTo(v8, v9);
    }
    else
    {
      IsEqualTo = *(_DWORD *)v9 == 0;
    }
    if ( !IsEqualTo )
      return 1;
  }
  return v1;
}
