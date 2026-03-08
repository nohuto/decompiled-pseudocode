/*
 * XREFs of ?MapOutputRectToInputRects@CMesh2DEffect@@UEBAJPEBUtagRECT@@PEAU2@I@Z @ 0x1802BBB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::MapOutputRectToInputRects(
        CMesh2DEffect *this,
        const struct tagRECT *a2,
        struct tagRECT *a3,
        int a4)
{
  if ( a4 != 1 )
    return 2147942487LL;
  a3->left = 0x80000000;
  a3->top = 0x80000000;
  a3->right = 0x7FFFFFFF;
  a3->bottom = 0x7FFFFFFF;
  return 0LL;
}
