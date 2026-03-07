__int64 __fastcall DrvUniformSpaceToPixelSpacePoint(int *a1, int *a2)
{
  return TransformPointWithUniformSpaceMapping(*((struct _MDEV **)gpDispInfo + 2), a1, a2, 1);
}
