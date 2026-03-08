/*
 * XREFs of ZwCreateEvent @ 0x140412C10
 * Callers:
 *     CmSiCreateEvent @ 0x1402440C8 (CmSiCreateEvent.c)
 *     DifZwCreateEventWrapper @ 0x1405EC0A0 (DifZwCreateEventWrapper.c)
 *     CmpCreateEvent @ 0x1406BC374 (CmpCreateEvent.c)
 *     IoCreateNotificationEvent @ 0x14079A640 (IoCreateNotificationEvent.c)
 *     NtCopyFileChunk @ 0x1407DEE00 (NtCopyFileChunk.c)
 *     MiCreateMemoryEvent @ 0x140809804 (MiCreateMemoryEvent.c)
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14081B254 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbCreateNode @ 0x14081C92C (PiDrvDbCreateNode.c)
 *     PfpCreateEvent @ 0x1408458E4 (PfpCreateEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x140857EAC (DbgkpCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x14085DB18 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x14085E644 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x140860570 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x1409AA2D8 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x1409FF53C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409FFE80 (CMFSystemThreadRoutine.c)
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
