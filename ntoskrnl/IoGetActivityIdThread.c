/*
 * XREFs of IoGetActivityIdThread @ 0x140203AD0
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402F3E44 (IopAttachDeviceToDeviceStackSafe.c)
 *     PnpInsertEventInQueue @ 0x140688D90 (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1408535C0 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
