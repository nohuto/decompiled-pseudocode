/*
 * XREFs of ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x180245048
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800101E4 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsCloseColorF(const struct _D3DCOLORVALUE *a1, const struct _D3DCOLORVALUE *a2)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->a - a2->a) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->r - a2->r) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->g - a2->g) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->b - a2->b) & _xmm) <= 0.0000011920929;
}
