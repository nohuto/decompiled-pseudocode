/*
 * XREFs of ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C028F8D8
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C028EC08 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 *     ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C028F150 (-bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lCalculateTriangleArea(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  __int64 v4; // r8
  __int64 result; // rax

  v4 = (a1->x - a3->x) * (__int64)(a2->y - a3->y) - (a2->x - a3->x) * (__int64)(a1->y - a3->y);
  if ( !v4 )
    return 0LL;
  if ( v4 <= 0 )
    return 0xFFFFFFFFLL;
  result = 1LL;
  if ( a4 )
    *((_QWORD *)a4 + 15) = v4;
  return result;
}
