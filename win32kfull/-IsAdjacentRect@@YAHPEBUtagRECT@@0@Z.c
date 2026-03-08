/*
 * XREFs of ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C01BA3F4
 * Callers:
 *     GetInheritedMonitor @ 0x1C00ACC90 (GetInheritedMonitor.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00FB120 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsAdjacentRect(const struct tagRECT *a1, const struct tagRECT *a2)
{
  unsigned int v2; // r8d
  LONG right; // ebx
  char v4; // r11
  LONG top; // edi
  LONG bottom; // esi
  char v7; // r10
  char v8; // r9

  v2 = 0;
  right = a2->right;
  if ( a1->left >= right || (v4 = 1, a1->right <= a2->left) )
    v4 = 0;
  top = a1->top;
  bottom = a2->bottom;
  if ( top >= bottom || (v7 = 1, a1->bottom <= a2->top) )
    v7 = 0;
  if ( a1->left == right || (v8 = 0, a1->right == a2->left) )
    v8 = 1;
  if ( (top == bottom || a1->bottom == a2->top) && v4 || v8 && v7 )
    return 1;
  return v2;
}
