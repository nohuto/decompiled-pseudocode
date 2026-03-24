/*
 * XREFs of ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x18000C824
 * Callers:
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x18000C700 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x18000C864 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 */

bool __fastcall CProjectedShadow::CanUseFastShadow(CProjectedShadowCaster **this)
{
  return CProjectedShadowCaster::IsRectangular(this[9]) && (float)(*((float *)this + 96) * 0.5) >= *((float *)this + 22);
}
