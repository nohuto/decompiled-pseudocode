/*
 * XREFs of DrvUniformSpaceToPixelSpacePoint @ 0x1C0062810
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x1C006283C (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 */

__int64 __fastcall DrvUniformSpaceToPixelSpacePoint(int *a1, int *a2)
{
  return TransformPointWithUniformSpaceMapping(*((struct _MDEV **)gpDispInfo + 2), a1, a2, 1);
}
