/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1402A7BC0
 * Callers:
 *     SeAuditHandleCreation @ 0x1406CE5F8 (SeAuditHandleCreation.c)
 *     EtwpNotifyGuid @ 0x1406EF64C (EtwpNotifyGuid.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PiDqIrpQueryCreate @ 0x1407768EC (PiDqIrpQueryCreate.c)
 *     PiUEventHandleRegistration @ 0x14078D764 (PiUEventHandleRegistration.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     EtwpRegisterSecurityProvider @ 0x140865050 (EtwpRegisterSecurityProvider.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1409539A8 (PiSwQueuedCreateInfoCreate.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E448C (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpRegisterPrivateSession @ 0x1409EBDD0 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
