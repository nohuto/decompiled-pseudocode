/*
 * XREFs of VfCheckNxPoolType @ 0x1405CE440
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x140AC48F0 (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
