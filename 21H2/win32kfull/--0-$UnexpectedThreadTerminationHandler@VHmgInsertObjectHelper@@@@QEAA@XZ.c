/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@QEAA@XZ @ 0x1C015D4C0
 * Callers:
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026B168 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 * Callees:
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>(
        _OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      a1,
      a1,
      UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
