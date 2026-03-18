/*
 * XREFs of EtwTraceCompletePowerRequest @ 0x1C007C790
 * Callers:
 *     QueuePowerRequest @ 0x1C007C340 (QueuePowerRequest.c)
 *     xxxUserPowerCalloutWorker @ 0x1C007C540 (xxxUserPowerCalloutWorker.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C0146AA0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C015051C (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceCompletePowerRequest(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &CompletedPowerRequest, a3, a1, a2);
  return result;
}
