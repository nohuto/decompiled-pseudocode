/*
 * XREFs of IoGetActivityIdThread @ 0x14026EEA0
 * Callers:
 *     PnpInsertEventInQueue @ 0x140634C88 (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x14065E0D0 (IopMountVolume.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9B60 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
