/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x1402FDD5C
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403D0950 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14056025C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CD670 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14096AF78 (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
