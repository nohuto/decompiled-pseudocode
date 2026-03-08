/*
 * XREFs of ZwSetSystemInformation @ 0x140415A30
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x1405C9740 (SmKmStoreTerminateWorker.c)
 *     DifZwSetSystemInformationWrapper @ 0x1405F53F0 (DifZwSetSystemInformationWrapper.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x1409D4C2C (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1409D4D34 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1409D4F20 (SmStoreResize.c)
 *     IoShutdownSystem @ 0x140A96AB4 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140B6EF0C (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
