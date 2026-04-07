/*
 * XREFs of ?Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x180040980
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Opacity(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  float v2; // xmm0_4

  v2 = *((float *)a2 + 5);
  if ( v2 != *((float *)this + 184) )
  {
    *((float *)this + 184) = v2;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
