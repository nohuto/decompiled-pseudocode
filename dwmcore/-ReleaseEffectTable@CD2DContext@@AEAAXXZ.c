/*
 * XREFs of ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1800D0BF0
 * Callers:
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1800D0AC8 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D0E70 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Effect@@@@YAXAEAPEAUID2D1Effect@@@Z @ 0x1800D0C2C (--$ReleaseInterface@UID2D1Effect@@@@YAXAEAPEAUID2D1Effect@@@Z.c)
 */

void __fastcall CD2DContext::ReleaseEffectTable(CD2DContext *this)
{
  char *v1; // rbx
  __int64 v2; // rdi

  v1 = (char *)this + 216;
  v2 = 8LL;
  do
  {
    ReleaseInterface<ID2D1Effect>(v1);
    v1 += 8;
    --v2;
  }
  while ( v2 );
}
