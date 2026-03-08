/*
 * XREFs of TransformIvSpatialInputRect @ 0x1C01CCA44
 * Callers:
 *     EditionTransformIvTouchInput @ 0x1C01CCAC0 (EditionTransformIvTouchInput.c)
 * Callees:
 *     TransformIvSpatialInputPoint @ 0x1C01CC9EC (TransformIvSpatialInputPoint.c)
 */

__int64 __fastcall TransformIvSpatialInputRect(__int64 a1, __int128 *a2, _OWORD *a3, __int64 *a4)
{
  __int64 *v4; // rbx

  v4 = a4 + 1;
  *(_OWORD *)a4 = *a3;
  TransformIvSpatialInputPoint(a1, a2, *a4, (__int64)a4);
  return TransformIvSpatialInputPoint(a1, a2, *v4, (__int64)v4);
}
