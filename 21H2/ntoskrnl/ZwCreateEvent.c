/*
 * XREFs of ZwCreateEvent @ 0x14041C060
 * Callers:
 *     DifZwCreateEventWrapper @ 0x14061E550 (DifZwCreateEventWrapper.c)
 *     IoCreateNotificationEvent @ 0x1406EAB50 (IoCreateNotificationEvent.c)
 *     CmpCreateEvent @ 0x14071489C (CmpCreateEvent.c)
 *     PiDrvDbCreateNode @ 0x1408268AC (PiDrvDbCreateNode.c)
 *     MiCreateMemoryEvent @ 0x14082BE90 (MiCreateMemoryEvent.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14082EA28 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     SepInitializationPhase1 @ 0x140847FF0 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x14084ED68 (DbgkpCreateNotificationEvent.c)
 *     PfpCreateEvent @ 0x14085075C (PfpCreateEvent.c)
 *     SmCreateEvent @ 0x1408615B8 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1408624E8 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x140936240 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x1409AC388 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x140A047F0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A05110 (CMFSystemThreadRoutine.c)
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
