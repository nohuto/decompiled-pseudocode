/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1402D2070
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     CmpCreateKeyBody @ 0x140649DB0 (CmpCreateKeyBody.c)
 *     SeAuditHandleCreation @ 0x140694128 (SeAuditHandleCreation.c)
 *     PiDqIrpQueryCreate @ 0x1406A7E9C (PiDqIrpQueryCreate.c)
 *     EtwpNotifyGuid @ 0x1407150A4 (EtwpNotifyGuid.c)
 *     PiUEventHandleRegistration @ 0x140715950 (PiUEventHandleRegistration.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     HalpSetSystemInformation @ 0x140733730 (HalpSetSystemInformation.c)
 *     EtwpRegisterSecurityProvider @ 0x1407D5180 (EtwpRegisterSecurityProvider.c)
 *     PoShutdownBugCheck @ 0x1408E7610 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x140933C54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140933F3C (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3F8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
