/*
 * XREFs of NtDuplicateCompositionInputSink @ 0x1C0270AC0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0274614 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall NtDuplicateCompositionInputSink(__int64 a1, __int64 a2)
{
  MicrosoftTelemetryAssertTriggeredMsgKM("API is being deprecated. Caller should switch to DuplicateHandle", a2);
  return 3221225659LL;
}
