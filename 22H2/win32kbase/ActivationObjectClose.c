/*
 * XREFs of ActivationObjectClose @ 0x1C0128228
 * Callers:
 *     ActivationObjectCallout @ 0x1C00B203C (ActivationObjectCallout.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ActivationObjectClose(__int64 a1)
{
  if ( ObGetObjectType(*(_QWORD *)(a1 + 8)) != ExActivationObjectType )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 574);
  return 0LL;
}
