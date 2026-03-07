__int64 __fastcall CDrawingContext::StrokeShapeWithColor(
        CDrawingContext *this,
        const struct CShape *a2,
        const struct _D3DCOLORVALUE *a3,
        float a4,
        struct ID2D1StrokeStyle1 *a5)
{
  struct ID2D1Brush *v7; // rbx

  v7 = *(struct ID2D1Brush **)(*((_QWORD *)this + 5) + 328LL);
  (*(void (__fastcall **)(struct ID2D1Brush *, const struct _D3DCOLORVALUE *))(*(_QWORD *)v7 + 64LL))(v7, a3);
  return CDrawingContext::StrokeShapeWithBrush(this, a2, v7, a4, a5);
}
