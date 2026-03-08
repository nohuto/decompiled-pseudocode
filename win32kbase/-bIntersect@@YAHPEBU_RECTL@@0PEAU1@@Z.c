/*
 * XREFs of ?bIntersect@@YAHPEBU_RECTL@@0PEAU1@@Z @ 0x1C00D03E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bIntersect(const struct _RECTL *a1, const struct _RECTL *a2, struct _RECTL *a3)
{
  LONG left; // r10d
  LONG right; // r9d
  LONG top; // edx
  LONG bottom; // ecx

  left = a1->left;
  if ( a1->left <= a2->left )
    left = a2->left;
  a3->left = left;
  right = a1->right;
  if ( right >= a2->right )
    right = a2->right;
  a3->right = right;
  if ( left >= right )
    return 0LL;
  top = a1->top;
  if ( top <= a2->top )
    top = a2->top;
  a3->top = top;
  bottom = a1->bottom;
  if ( bottom >= a2->bottom )
    bottom = a2->bottom;
  a3->bottom = bottom;
  return top < bottom;
}
