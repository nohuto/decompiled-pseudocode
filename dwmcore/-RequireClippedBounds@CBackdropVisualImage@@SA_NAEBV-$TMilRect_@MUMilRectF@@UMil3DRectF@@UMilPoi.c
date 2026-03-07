bool __fastcall CBackdropVisualImage::RequireClippedBounds(float *a1)
{
  CComposition *v1; // rcx
  float *v2; // r8
  float MinSupportedMax2DTextureSize; // xmm1_4
  bool result; // al

  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a1)
        || (MinSupportedMax2DTextureSize = (float)(int)CComposition::GetMinSupportedMax2DTextureSize(v1),
            (float)(v2[2] - *v2) > MinSupportedMax2DTextureSize)
        || (float)(v2[3] - v2[1]) > MinSupportedMax2DTextureSize;
  return result;
}
