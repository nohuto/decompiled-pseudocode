/*
 * XREFs of IovIsDisabledWithoutReboot @ 0x14055D188
 * Callers:
 *     VfPacketCreateAndLock @ 0x140ADA00C (VfPacketCreateAndLock.c)
 *     VfPacketFree @ 0x140ADA104 (VfPacketFree.c)
 * Callees:
 *     <none>
 */

bool IovIsDisabledWithoutReboot()
{
  return IovpDisabledWithoutReboot != 0;
}
