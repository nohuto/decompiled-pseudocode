/*
 * XREFs of ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ @ 0x1800E8980
 * Callers:
 *     ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x1800E8950 (-IsReadyForEvaluation@CExpression@@MEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::IsReadyForEvaluation(CBaseExpression *this)
{
  bool result; // al

  if ( (*((_BYTE *)this + 216) & 2) == 0 )
    return 0;
  result = 1;
  if ( (*((_BYTE *)this + 232) & 1) != 0 )
    return 0;
  return result;
}
