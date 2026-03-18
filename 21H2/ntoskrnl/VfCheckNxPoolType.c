/*
 * XREFs of VfCheckNxPoolType @ 0x1405FE080
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x140A82F58 (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
