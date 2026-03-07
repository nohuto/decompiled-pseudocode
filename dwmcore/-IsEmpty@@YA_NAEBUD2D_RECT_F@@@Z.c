bool __fastcall IsEmpty(const struct D2D_RECT_F *a1)
{
  return a1->right <= a1->left || a1->bottom <= a1->top;
}
