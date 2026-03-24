/*
 * XREFs of ZwCreateEvent @ 0x1403FACA0
 * Callers:
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     CmpCreateEvent @ 0x140671E70 (CmpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x14078D5F0 (IoCreateNotificationEvent.c)
 *     SepInitializationPhase1 @ 0x14079D378 (SepInitializationPhase1.c)
 *     MiCreateMemoryEvent @ 0x1407A0800 (MiCreateMemoryEvent.c)
 *     PiDrvDbCreateNode @ 0x1407A39CC (PiDrvDbCreateNode.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407AC1F4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfpCreateEvent @ 0x1407BFE50 (PfpCreateEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x1407CA510 (DbgkpCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x1407D1830 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407D23B8 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x140893A10 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x140906650 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x140958AB0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409593D0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, *(_QWORD *)&DesiredAccess);
}
