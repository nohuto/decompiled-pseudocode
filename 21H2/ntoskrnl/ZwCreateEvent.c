/*
 * XREFs of ZwCreateEvent @ 0x1403FAE80
 * Callers:
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     CmpCreateEvent @ 0x1406A3EE0 (CmpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x14078D7B0 (IoCreateNotificationEvent.c)
 *     SepInitializationPhase1 @ 0x14079D578 (SepInitializationPhase1.c)
 *     MiCreateMemoryEvent @ 0x1407A0A00 (MiCreateMemoryEvent.c)
 *     PiDrvDbCreateNode @ 0x1407A3BCC (PiDrvDbCreateNode.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407AC3F4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfpCreateEvent @ 0x1407C036C (PfpCreateEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x1407CA830 (DbgkpCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x1407D19A0 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407D2528 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x140893B70 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x1409067B0 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x140958C80 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409595A0 (CMFSystemThreadRoutine.c)
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
