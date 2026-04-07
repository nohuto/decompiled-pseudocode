/*
 * XREFs of ?GetChopStop@CAnimatedTransitionVisual@@UEAAJPEAN@Z @ 0x1800A7A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetChopStop(CAnimatedTransitionVisual *this, double *a2)
{
  if ( !*((_BYTE *)this + 1008) )
    return 2147943568LL;
  *a2 = *((double *)this + 125);
  return 0LL;
}
