/*
 * XREFs of ZwCreateEvent @ 0x18009DDE0
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800494AC (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x180063980 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180065000 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     _LdrpInitialize @ 0x180075C8C (_LdrpInitialize.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007D454 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007E3D0 (EtwpRegisterTpNotificationOnce.c)
 *     LdrpCreateLoaderEvents @ 0x18007EB10 (LdrpCreateLoaderEvents.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CEB60 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D5A40 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D5FD0 (RtlpProcessReflectionStartup.c)
 *     WerpCreateCompletionEvent @ 0x1800DD8B0 (WerpCreateCompletionEvent.c)
 *     RtlCreateUmsCompletionList @ 0x1800F6D90 (RtlCreateUmsCompletionList.c)
 *     RtlpCtContextInit @ 0x1801023E4 (RtlpCtContextInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  NTSTATUS result; // eax

  result = 72;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
