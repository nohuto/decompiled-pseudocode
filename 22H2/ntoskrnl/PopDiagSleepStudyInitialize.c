/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x140822B74
 * Callers:
 *     PopDiagInitialize @ 0x140B38B18 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14078DD90 (EtwRegister.c)
 */

NTSTATUS PopDiagSleepStudyInitialize()
{
  NTSTATUS result; // eax

  if ( PopDiagSleepStudyHandleRegistered )
    return -1073740008;
  result = EtwRegister(
             &SLEEPSTUDY_ETW_PROVIDER,
             PopDiagTraceControlCallback,
             &PopDiagSleepStudyHandle,
             &PopDiagSleepStudyHandle);
  if ( result >= 0 )
    PopDiagSleepStudyHandleRegistered = 1;
  return result;
}
