/*
 * XREFs of ?ShouldSnapToPixels@CSurfaceBrush@@UEBA_NXZ @ 0x180106D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSurfaceBrush::ShouldSnapToPixels(CSurfaceBrush *this)
{
  return *((_BYTE *)this + 168);
}
