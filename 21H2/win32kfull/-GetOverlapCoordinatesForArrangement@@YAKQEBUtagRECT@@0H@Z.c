/*
 * XREFs of ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C020AF40
 * Callers:
 *     ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C020BF34 (-PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C020C65C (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020EB18 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOverlapCoordinatesForArrangement(
        const struct tagRECT *const a1,
        const struct tagRECT *const a2,
        int a3)
{
  int v4; // r11d
  unsigned int v5; // r8d
  __int64 result; // rax

  if ( a3 && a1->left > a2->left || a3 && a1->top > a2->top )
    return 0LL;
  v4 = (a1->left == a2->left) | 2;
  if ( a1->top != a2->top )
    v4 = a1->left == a2->left;
  if ( a3 && a1->right < a2->right )
    return 0LL;
  v5 = v4 | 4;
  if ( a1->right != a2->right )
    v5 = v4;
  if ( a3 && a1->bottom < a2->bottom )
    return 0LL;
  result = v5 | 8;
  if ( a1->bottom != a2->bottom )
    return v5;
  return result;
}
