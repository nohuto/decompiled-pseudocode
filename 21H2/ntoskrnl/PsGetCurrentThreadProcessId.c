/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x14029E930
 * Callers:
 *     SeAuditHandleCreation @ 0x14060FF18 (SeAuditHandleCreation.c)
 *     PiDqIrpQueryCreate @ 0x14062413C (PiDqIrpQueryCreate.c)
 *     EtwpNotifyGuid @ 0x1406B8AE4 (EtwpNotifyGuid.c)
 *     PiUEventHandleRegistration @ 0x1406B9390 (PiUEventHandleRegistration.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 *     CmpCreateKeyBody @ 0x140713A70 (CmpCreateKeyBody.c)
 *     HalpSetSystemInformation @ 0x1407335A0 (HalpSetSystemInformation.c)
 *     EtwpRegisterSecurityProvider @ 0x1407D53D0 (EtwpRegisterSecurityProvider.c)
 *     PoShutdownBugCheck @ 0x1408E7720 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x140933DD4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1409340BC (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x14093F578 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
