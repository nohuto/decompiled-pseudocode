/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1402AF870
 * Callers:
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     NtTraceControl @ 0x140725C40 (NtTraceControl.c)
 *     CmpCreateKeyBody @ 0x14072F7D0 (CmpCreateKeyBody.c)
 *     PiUEventHandleRegistration @ 0x14077FBAC (PiUEventHandleRegistration.c)
 *     EtwpNotifyGuid @ 0x14077FEF8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140780210 (EtwpEnableGuid.c)
 *     SeAuditHandleCreation @ 0x1407DCE08 (SeAuditHandleCreation.c)
 *     PiDqIrpQueryCreate @ 0x1407F97F8 (PiDqIrpQueryCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14081B5CC (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140967AB0 (PiSwQueuedCreateInfoCreate.c)
 *     PoShutdownBugCheck @ 0x140989660 (PoShutdownBugCheck.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E7580 (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpRegisterPrivateSession @ 0x1409EC90C (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
