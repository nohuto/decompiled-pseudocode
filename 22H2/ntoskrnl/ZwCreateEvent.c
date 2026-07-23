/*
 * XREFs of ZwCreateEvent @ 0x1403FA320
 * Callers:
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     CmpCreateEvent @ 0x1406EAC60 (CmpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x14078D4F0 (IoCreateNotificationEvent.c)
 *     SepInitializationPhase1 @ 0x14079D7A8 (SepInitializationPhase1.c)
 *     MiCreateMemoryEvent @ 0x1407A0C30 (MiCreateMemoryEvent.c)
 *     PiDrvDbCreateNode @ 0x1407A3DFC (PiDrvDbCreateNode.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407AC634 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfpCreateEvent @ 0x1407C0610 (PfpCreateEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x1407CA430 (DbgkpCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x1407D1750 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407D22D8 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x140893A60 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x1409066A0 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x140958B00 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140959420 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
