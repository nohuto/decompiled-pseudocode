/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x140370050
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036F9F0 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x140380A94 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14050E770 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x1406B2710 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14072F6CC (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
