/*
 * XREFs of ?MapInvalidRect@CMesh2DEffect@@UEBAJIUtagRECT@@PEAU2@@Z @ 0x1802BBB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::MapInvalidRect(CMesh2DEffect *this, int a2, struct tagRECT *a3, struct tagRECT *a4)
{
  if ( a2 )
    return 2147942487LL;
  a4->left = 0x80000000;
  a4->top = 0x80000000;
  a4->right = 0x7FFFFFFF;
  a4->bottom = 0x7FFFFFFF;
  return 0LL;
}
