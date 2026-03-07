__int64 __fastcall cSpSubtract(const struct _RECTL *a1, const struct _RECTL *a2, struct _RECTL *a3)
{
  LONG top; // eax
  struct _RECTL *v7; // rbx
  struct _RECTL v9; // [rsp+20h] [rbp-20h] BYREF

  top = a2->top;
  v9.left = 0x80000000;
  v9.top = 0x80000000;
  v9.right = 0x7FFFFFFF;
  v9.bottom = top;
  v7 = a3;
  if ( bIntersect(&v9, a1, a3) )
    ++v7;
  v9.top = a2->top;
  v9.right = a2->left;
  v9.bottom = a2->bottom;
  if ( bIntersect(&v9, a1, v7) )
    ++v7;
  v9.left = a2->right;
  v9.right = 0x7FFFFFFF;
  if ( bIntersect(&v9, a1, v7) )
    ++v7;
  v9.top = a2->bottom;
  v9.left = 0x80000000;
  v9.bottom = 0x7FFFFFFF;
  if ( bIntersect(&v9, a1, v7) )
    ++v7;
  return (unsigned int)(v7 - a3);
}
