__int64 __fastcall CColorBrush::HitTest(
        __int64 a1,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  return CCompositionSkyBoxBrush::HitTest((CCompositionSkyBoxBrush *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}
