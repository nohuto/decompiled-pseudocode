/*
 * XREFs of ?GetChopIndex@CAnimatedTransitionVisual@@UEAAJPEAI@Z @ 0x180042890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetChopIndex(CAnimatedTransitionVisual *this, unsigned int *a2)
{
  if ( !*((_BYTE *)this + 992) && !*((_BYTE *)this + 1008) )
    return 2147943568LL;
  *a2 = *((_DWORD *)this + 245);
  return 0LL;
}
