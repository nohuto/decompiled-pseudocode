bool __fastcall bClipSrcDstRects(
        struct _RECTL *const a1,
        struct _RECTL *const a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  LONG top; // r10d
  LONG v6; // eax
  LONG v9; // eax
  struct _POINTL v11; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v12; // [rsp+28h] [rbp-18h] BYREF

  top = a3->top;
  v6 = a4->left - a3->left;
  v12.left = a3->left;
  v11.x = v6;
  v9 = a4->top - top;
  v12.top = top;
  v11.y = v9;
  v12.right = a3->right;
  v12.bottom = a3->bottom;
  ERECTL::operator*=(&v12.left, &a1->left);
  ERECTL::bOffsetAdd((ERECTL *)&v12, &v11, 0);
  ERECTL::operator*=(&v12.left, &a2->left);
  *a4 = v12;
  ERECTL::bOffsetSubtract((ERECTL *)&v12, &v11, 0);
  *a3 = v12;
  return !IsRectEmptyInl(&v12);
}
