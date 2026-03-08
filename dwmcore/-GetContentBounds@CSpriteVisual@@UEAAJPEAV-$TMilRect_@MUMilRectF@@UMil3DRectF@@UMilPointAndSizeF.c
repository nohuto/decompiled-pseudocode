/*
 * XREFs of ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800453F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045610 (-GetContentBounds@CVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x18012F6FA (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
 */

__int64 __fastcall CSpriteVisual::GetContentBounds(CSpriteVisual *this, float *a2)
{
  int ContentBounds; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  struct CDropShadow *DropShadow; // rax
  struct CDropShadow *v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  ContentBounds = CVisual::GetContentBounds();
  v6 = ContentBounds;
  if ( ContentBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, ContentBounds, 0xC7u, 0LL);
  }
  else if ( (**((_DWORD **)this + 29) & 0x10000) != 0 )
  {
    v12 = 0LL;
    DropShadow = CSpriteVisual::GetDropShadow(this);
    v9 = (struct CDropShadow *)((char *)DropShadow + *(int *)(*((_QWORD *)DropShadow + 8) + 8LL) + 64);
    v10 = (**(__int64 (__fastcall ***)(struct CDropShadow *, char *, __int128 *))v9)(v9, (char *)this + 140, &v12);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xCDu, 0LL);
    else
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, (float *)&v12);
  }
  return v6;
}
