/*
 * XREFs of ??PDpiInternal@@YA_NAEBUtagSIZE@@0@Z @ 0x1C016FAF8
 * Callers:
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C0172934 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiInternal::operator>=(_DWORD *a1, _DWORD *a2)
{
  return *a1 >= *a2 && a1[1] >= a2[1];
}
