/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@QEAA@XZ @ 0x1C015DF38
 * Callers:
 *     ??0SURFREFDC@@QEAA@XZ @ 0x1C0289314 (--0SURFREFDC@@QEAA@XZ.c)
 * Callees:
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<SURFREFDC>::UnexpectedThreadTerminationHandler<SURFREFDC>(
        _OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(a1, a1, UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
