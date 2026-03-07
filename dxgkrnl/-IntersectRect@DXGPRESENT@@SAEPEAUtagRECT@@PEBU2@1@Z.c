bool __fastcall DXGPRESENT::IntersectRect(struct tagRECT *a1, const struct tagRECT *a2, const struct tagRECT *a3)
{
  LONG left; // r10d
  LONG right; // r9d
  LONG top; // edx
  LONG bottom; // ecx

  left = a2->left;
  if ( a2->left <= a3->left )
    left = a3->left;
  a1->left = left;
  right = a2->right;
  if ( right >= a3->right )
    right = a3->right;
  a1->right = right;
  if ( left >= right )
    return 0;
  top = a2->top;
  if ( top <= a3->top )
    top = a3->top;
  a1->top = top;
  bottom = a2->bottom;
  if ( bottom >= a3->bottom )
    bottom = a3->bottom;
  a1->bottom = bottom;
  return top < bottom;
}
