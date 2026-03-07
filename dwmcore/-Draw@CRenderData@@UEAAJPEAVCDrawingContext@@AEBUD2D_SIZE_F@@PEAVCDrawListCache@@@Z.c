__int64 __fastcall CRenderData::Draw(
        CRenderData *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return CRenderData::Draw((char *)this - 328, ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL), 0LL, a4);
}
