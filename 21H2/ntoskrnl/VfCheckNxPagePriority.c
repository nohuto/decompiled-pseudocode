/*
 * XREFs of VfCheckNxPagePriority @ 0x1405A09B0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x1409C8C14 (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
