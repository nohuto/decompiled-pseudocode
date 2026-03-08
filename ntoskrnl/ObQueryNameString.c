/*
 * XREFs of ObQueryNameString @ 0x14071EA00
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402F3E44 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 *     IopGetFileVolumeNameInformation @ 0x1403C16A0 (IopGetFileVolumeNameInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B5FAC (SeSetLearningModeObjectInformation.c)
 *     SmKmEtwAppendObjectName @ 0x1405C8DF4 (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x140A9B740 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140AA3140 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x140AD9B50 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
