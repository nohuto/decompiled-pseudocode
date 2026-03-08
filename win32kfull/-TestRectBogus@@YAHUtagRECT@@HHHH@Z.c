/*
 * XREFs of ?TestRectBogus@@YAHUtagRECT@@HHHH@Z @ 0x1C01A7408
 * Callers:
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01A70F0 (-IsRectBogus@@YAHHHHH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TestRectBogus(struct tagRECT *a1, LONG a2, LONG a3, int a4, int a5)
{
  LONG left; // ebx
  LONG top; // ecx
  int v9; // r9d

  left = a1->left;
  if ( a2 <= a1->left )
  {
    top = a1->top;
    if ( a3 <= top && a4 >= a1->right - left && a5 >= a1->bottom - top )
      return 0LL;
  }
  v9 = a1->right - a4;
  return (int)abs32(a2 - (v9 + left) / 2) <= 8 && (int)abs32(a3 - (a1->bottom + a1->top - a5) / 2) <= 8
      || a2 == left
      || a3 == a1->top
      || a2 == v9
      || a3 == a1->bottom - a5;
}
