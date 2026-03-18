/*
 * XREFs of TransformIvSpatialInputRect @ 0x1C01EFE30
 * Callers:
 *     EditionTransformIvTouchInput @ 0x1C01EFEC0 (EditionTransformIvTouchInput.c)
 * Callees:
 *     TransformIvSpatialInputPoint @ 0x1C01EFD78 (TransformIvSpatialInputPoint.c)
 */

void __fastcall TransformIvSpatialInputRect(__int64 a1, __int128 *a2, _OWORD *a3, __int64 *a4)
{
  __int64 *v4; // rbx

  v4 = a4 + 1;
  *(_OWORD *)a4 = *a3;
  TransformIvSpatialInputPoint(a1, a2, *a4, (__int64)a4);
  TransformIvSpatialInputPoint(a1, a2, *v4, (__int64)v4);
}
