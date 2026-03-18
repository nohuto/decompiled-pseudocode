/*
 * XREFs of IoGetActivityIdThread @ 0x14031E470
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035F2C4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 *     PnpInsertEventInQueue @ 0x140786840 (PnpInsertEventInQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1408577F0 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
