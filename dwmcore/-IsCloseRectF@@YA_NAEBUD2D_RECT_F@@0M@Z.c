bool __fastcall IsCloseRectF(const struct D2D_RECT_F *a1, const struct D2D_RECT_F *a2, float a3)
{
  return a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->top - a2->top) & _xmm)
      && a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->left - a2->left) & _xmm)
      && a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->right - a2->right) & _xmm)
      && a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->bottom - a2->bottom) & _xmm);
}
