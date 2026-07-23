/*
 * XREFs of VfCheckNxPoolType @ 0x1405A09F0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1409C8D64 (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
