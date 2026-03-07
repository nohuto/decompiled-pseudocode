__int64 __fastcall ComputeAdjacencyOverlap(const struct tagRECT *a1, const struct tagRECT *a2)
{
  LONG left; // r9d
  unsigned int v3; // r8d
  LONG right; // r11d
  LONG v5; // r10d
  LONG v6; // r8d
  LONG top; // r10d
  LONG bottom; // ebx
  LONG v9; // edi
  LONG v10; // esi
  LONG v11; // r8d

  left = a1->left;
  v3 = 0;
  right = a2->right;
  if ( a1->left < right && (v5 = a1->right, v5 > a2->left) && (a1->top == a2->bottom || a1->bottom == a2->top) )
  {
    v6 = a1->right;
    if ( left <= a2->left )
      left = a2->left;
    if ( v5 >= right )
      v6 = a2->right;
    return (unsigned int)(v6 - left);
  }
  else
  {
    top = a1->top;
    bottom = a2->bottom;
    if ( top < bottom )
    {
      v9 = a1->bottom;
      v10 = a2->top;
      if ( v9 > v10 && (left == right || a1->right == a2->left) )
      {
        v11 = a1->bottom;
        if ( top <= v10 )
          top = a2->top;
        if ( v9 >= bottom )
          v11 = a2->bottom;
        return (unsigned int)(v11 - top);
      }
    }
  }
  return v3;
}
