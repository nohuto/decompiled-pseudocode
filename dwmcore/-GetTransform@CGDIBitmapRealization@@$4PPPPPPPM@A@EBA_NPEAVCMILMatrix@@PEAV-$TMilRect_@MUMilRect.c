char __fastcall CGDIBitmapRealization::GetTransform(__int64 a1, CMILMatrix *a2, float *a3)
{
  return CGDIBitmapRealization::GetTransform(a1 - *(int *)(a1 - 4), a2, a3);
}
