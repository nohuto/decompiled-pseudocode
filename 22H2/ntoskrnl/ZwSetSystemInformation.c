/*
 * XREFs of ZwSetSystemInformation @ 0x1403FCFA0
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x14059E120 (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x14092A3D4 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x14092A4D0 (SmStoreDelete.c)
 *     SmStoreResize @ 0x14092A6A8 (SmStoreResize.c)
 *     IoShutdownSystem @ 0x1409AAF18 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140A7179C (KitpInitAitSampleRate.c)
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
