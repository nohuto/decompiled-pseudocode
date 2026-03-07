__int64 __fastcall CRenderData::AddOcclusionInformation(
        CRenderData *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3,
        __int64 a4)
{
  return CRenderData::Draw((char *)this - 328, a2, 2LL, a4);
}
