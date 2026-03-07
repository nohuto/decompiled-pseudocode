bool __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, CMILMatrix *a2, float *a3)
{
  return CDxHandleBitmapRealization::GetTransform(a1 - *(int *)(a1 - 4) - 48, a2, a3);
}
