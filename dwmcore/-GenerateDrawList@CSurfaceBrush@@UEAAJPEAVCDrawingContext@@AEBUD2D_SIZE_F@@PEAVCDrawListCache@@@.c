__int64 __fastcall CSurfaceBrush::GenerateDrawList(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(**((_QWORD **)this + 14) + 96LL))(
           *((_QWORD *)this + 14),
           this,
           a2,
           a3,
           a4);
}
