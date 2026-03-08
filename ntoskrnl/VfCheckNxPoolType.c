/*
 * XREFs of VfCheckNxPoolType @ 0x1405CBF90
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x140AC08F0 (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
