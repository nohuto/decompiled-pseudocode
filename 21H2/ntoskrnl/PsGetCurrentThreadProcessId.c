/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1402ED5E0
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 *     PiDqIrpQueryCreate @ 0x14062F0BC (PiDqIrpQueryCreate.c)
 *     SeAuditHandleCreation @ 0x1406B0F68 (SeAuditHandleCreation.c)
 *     EtwpNotifyGuid @ 0x1406E1804 (EtwpNotifyGuid.c)
 *     PiUEventHandleRegistration @ 0x1406E20B0 (PiUEventHandleRegistration.c)
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 *     HalpSetSystemInformation @ 0x1407333E0 (HalpSetSystemInformation.c)
 *     EtwpRegisterSecurityProvider @ 0x1407D5260 (EtwpRegisterSecurityProvider.c)
 *     PoShutdownBugCheck @ 0x1408E75C0 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x140933C04 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140933EEC (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3A8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
