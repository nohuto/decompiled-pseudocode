/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x140791A20
 * Callers:
 *     PopDiagInitialize @ 0x140A40148 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1407622D0 (EtwRegister.c)
 *     PopSleepstudyInitialize @ 0x140A400B0 (PopSleepstudyInitialize.c)
 */

__int64 PopDiagSleepStudyInitialize()
{
  NTSTATUS v0; // ebx

  if ( PopDiagSleepStudyHandleRegistered )
  {
    v0 = -1073740008;
  }
  else
  {
    v0 = EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &PopDiagSleepStudyHandle);
    if ( v0 >= 0 )
      PopDiagSleepStudyHandleRegistered = 1;
  }
  PopSleepstudyInitialize();
  return (unsigned int)v0;
}
