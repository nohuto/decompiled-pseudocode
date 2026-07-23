/*
 * XREFs of ZwSetSystemInformation @ 0x1403FDB00
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x14059E410 (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x14092A4E4 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x14092A5E0 (SmStoreDelete.c)
 *     SmStoreResize @ 0x14092A7B8 (SmStoreResize.c)
 *     IoShutdownSystem @ 0x1409ABD08 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140A7279C (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
