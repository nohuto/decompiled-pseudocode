/*
 * XREFs of PopIntSteerSetTimeUnparkTrigger @ 0x1403B1800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopIntSteerSetTimeUnparkTrigger(__int64 a1, unsigned int *a2, int a3)
{
  if ( a3 != 4 )
    return 3221225485LL;
  PpmIntSteerTriggerMax = *a2;
  return 0LL;
}
