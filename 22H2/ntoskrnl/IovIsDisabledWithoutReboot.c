/*
 * XREFs of IovIsDisabledWithoutReboot @ 0x14055F628
 * Callers:
 *     VfPacketCreateAndLock @ 0x140ADE00C (VfPacketCreateAndLock.c)
 *     VfPacketFree @ 0x140ADE104 (VfPacketFree.c)
 * Callees:
 *     <none>
 */

bool IovIsDisabledWithoutReboot()
{
  return IovpDisabledWithoutReboot != 0;
}
