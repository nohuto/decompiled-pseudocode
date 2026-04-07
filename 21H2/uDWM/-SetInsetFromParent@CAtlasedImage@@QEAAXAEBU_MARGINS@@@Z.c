/*
 * XREFs of ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800147CC
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800012A0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x1800273D0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x18009B240 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180013BA0 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x18001598C (--8@YA_NAEBU_MARGINS@@0@Z.c)
 */

void __fastcall CAtlasedImage::SetInsetFromParent(CAtlasedImage *this, const struct _MARGINS *a2)
{
  _OWORD *v2; // rdx
  _OWORD *v3; // rcx
  CAtlasedImage *v4; // r9

  if ( !(unsigned __int8)operator==((char *)this + 32, a2) )
  {
    *v3 = *v2;
    CAtlasedImage::SetDirtyFlags(v4, 1, 0x1000u);
  }
}
