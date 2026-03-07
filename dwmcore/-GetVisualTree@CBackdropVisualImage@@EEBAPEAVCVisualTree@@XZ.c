struct CVisualTree *__fastcall CBackdropVisualImage::GetVisualTree(CVisual **this)
{
  struct CVisualTree *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  CVisual::GetVisualTree(this[18], &v2, 0);
  return v2;
}
