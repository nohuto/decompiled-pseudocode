/*
 * XREFs of ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C020A85C
 * Callers:
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020EB18 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArrangementStyleFromOverlap(char a1)
{
  int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax

  v2 = 55553;
  if ( (a1 & 3) != 3 )
    v2 = 0;
  if ( (a1 & 9) == 9 )
    v2 = 55553;
  v3 = v2 | 0xD902;
  if ( (a1 & 6) != 6 )
    v3 = v2;
  result = v3 | 0xD902;
  if ( (a1 & 0xC) != 0xC )
    return v3;
  return result;
}
