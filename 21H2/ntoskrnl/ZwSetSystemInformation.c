/*
 * XREFs of ZwSetSystemInformation @ 0x1403FD920
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x14059E1E0 (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x14092A384 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x14092A480 (SmStoreDelete.c)
 *     SmStoreResize @ 0x14092A658 (SmStoreResize.c)
 *     IoShutdownSystem @ 0x1409AADD8 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140A7179C (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
