bool __fastcall CEffectBrush::IsOpaqueRect(CEffectBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  bool result; // al
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4

  result = 0;
  if ( *((_BYTE *)this + 168) )
  {
    width = a2->width;
    height = a2->height;
    *(_QWORD *)&a3->left = 0LL;
    result = 1;
    a3->right = width;
    a3->bottom = height;
  }
  return result;
}
