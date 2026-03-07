__int64 __fastcall COcclusionContext::CheckTransformAllowsOcclusion(
        COcclusionContext *this,
        const struct CMILMatrix *a2,
        bool *a3)
{
  *a3 = CMILMatrix::Is2DAxisAlignedPreserving(a2);
  return 0LL;
}
