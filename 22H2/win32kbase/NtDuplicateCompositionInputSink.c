/*
 * XREFs of NtDuplicateCompositionInputSink @ 0x1C0231C00
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0235934 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall NtDuplicateCompositionInputSink(__int64 a1, __int64 a2)
{
  MicrosoftTelemetryAssertTriggeredMsgKM("API is being deprecated. Caller should switch to DuplicateHandle", a2);
  return 3221225659LL;
}
