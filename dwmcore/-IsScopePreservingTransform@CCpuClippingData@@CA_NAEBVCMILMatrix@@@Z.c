char __fastcall CCpuClippingData::IsScopePreservingTransform(const struct CMILMatrix *a1)
{
  float *v1; // r11
  char v2; // bl

  v2 = 0;
  if ( !CMILMatrix::Is3D(a1) )
    return CMILMatrix::IsInvertibleDeterminant((float)(v1[5] * *v1) - (float)(v1[4] * v1[1]));
  return v2;
}
