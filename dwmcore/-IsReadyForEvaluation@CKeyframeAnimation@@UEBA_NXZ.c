/*
 * XREFs of ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ @ 0x1800DFFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsReadyForEvaluation(CKeyframeAnimation *this)
{
  bool result; // al

  if ( (*((_BYTE *)this + 216) & 2) == 0 )
    return 0;
  result = 1;
  if ( (*((_BYTE *)this + 232) & 1) != 0 || !*((_QWORD *)this + 49) )
    return 0;
  return result;
}
