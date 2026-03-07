__int64 __fastcall CRedirectedVisualContent::Draw(
        CRedirectedVisualContent *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CDrawingContext::DrawSubVisualTree(a2, *((_QWORD *)this - 7), (char *)this - 48, 0LL);
  return 0LL;
}
