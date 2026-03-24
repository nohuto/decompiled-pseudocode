/*
 * XREFs of VfCheckNxPagePriority @ 0x1405A06C0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x1409C7C24 (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
