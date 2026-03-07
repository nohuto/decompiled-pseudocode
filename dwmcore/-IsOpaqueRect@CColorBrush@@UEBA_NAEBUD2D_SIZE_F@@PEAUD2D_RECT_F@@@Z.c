bool __fastcall CColorBrush::IsOpaqueRect(CColorBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  FLOAT width; // xmm0_4
  bool result; // al
  FLOAT height; // xmm1_4

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 25) - 1.0) & _xmm) >= 0.0000011920929 )
    return 0;
  width = a2->width;
  result = 1;
  height = a2->height;
  a3->left = 0.0;
  a3->top = 0.0;
  a3->right = width;
  a3->bottom = height;
  return result;
}
