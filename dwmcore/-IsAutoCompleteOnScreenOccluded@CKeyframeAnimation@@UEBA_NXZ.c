/*
 * XREFs of ?IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ @ 0x180106960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsAutoCompleteOnScreenOccluded(CKeyframeAnimation *this)
{
  return (*((_BYTE *)this + 581) & 0x10) != 0;
}
