/*
 * XREFs of ZwSetSystemInformation @ 0x14041EE00
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x1405FBC00 (SmKmStoreTerminateWorker.c)
 *     DifZwSetSystemInformationWrapper @ 0x140627B90 (DifZwSetSystemInformationWrapper.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x1409D4754 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1409D4850 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1409D4A38 (SmStoreResize.c)
 *     IoShutdownSystem @ 0x140A651B8 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140B2DD94 (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
