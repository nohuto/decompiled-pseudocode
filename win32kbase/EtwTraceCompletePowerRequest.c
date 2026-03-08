/*
 * XREFs of EtwTraceCompletePowerRequest @ 0x1C00B561C
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C00B3AC0 (xxxUserPowerCalloutWorker.c)
 *     QueuePowerRequest @ 0x1C00B7EA0 (QueuePowerRequest.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C0159CA0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00EE6B4 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceCompletePowerRequest(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &CompletedPowerRequest, a3, a1, a2);
  return result;
}
