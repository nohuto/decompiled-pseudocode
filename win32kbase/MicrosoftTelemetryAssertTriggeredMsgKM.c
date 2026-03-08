/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0274614
 * Callers:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x1C00AB948 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEA.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0270AC0 (NtDuplicateCompositionInputSink.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C008C178 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredMsgKM(__int64 a1)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 0, 0LL, -1, -1, a1);
}
