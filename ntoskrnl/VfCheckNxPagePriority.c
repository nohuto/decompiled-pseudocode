/*
 * XREFs of VfCheckNxPagePriority @ 0x1405CBF50
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x140AC07A0 (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
