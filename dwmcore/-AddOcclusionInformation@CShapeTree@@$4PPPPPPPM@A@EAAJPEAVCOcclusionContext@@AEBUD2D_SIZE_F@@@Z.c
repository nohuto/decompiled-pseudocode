__int64 __fastcall CShapeTree::AddOcclusionInformation(
        __int64 a1,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CDropShadow::AddOcclusionInformation((CDropShadow *)(a1 - *(int *)(a1 - 4)), a2, a3);
}
