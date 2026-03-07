__int64 __fastcall CCompositionSurfaceBitmap::AddOcclusionInformation(
        __int64 a1,
        struct COcclusionContext *a2,
        struct D2D_SIZE_F *a3)
{
  return CCompositionSurfaceBitmap::AddOcclusionInformation(
           (CCompositionSurfaceBitmap *)(a1 - *(int *)(a1 - 4)),
           a2,
           a3);
}
