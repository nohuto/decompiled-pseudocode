/*
 * XREFs of ZwSetSystemInformation @ 0x14041DDC0
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x1405CBBF0 (SmKmStoreTerminateWorker.c)
 *     DifZwSetSystemInformationWrapper @ 0x1405F78A0 (DifZwSetSystemInformationWrapper.c)
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x1409D7ACC (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1409D7BD4 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1409D7DC0 (SmStoreResize.c)
 *     IoShutdownSystem @ 0x140A99BF4 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140B731F4 (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
