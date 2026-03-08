/*
 * XREFs of gsl::final_action__lambda_b84a1ee213fa572390f758b550ef68e0___::_final_action__lambda_b84a1ee213fa572390f758b550ef68e0___ @ 0x1801CFC90
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801D2240 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall gsl::final_action__lambda_b84a1ee213fa572390f758b550ef68e0___::_final_action__lambda_b84a1ee213fa572390f758b550ef68e0___(
        unsigned int **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    result = **a1;
    a1[1][85] = result;
  }
  return result;
}
