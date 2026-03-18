/*
 * XREFs of ObQueryNameString @ 0x14075B880
 * Callers:
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035F2C4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopGetFileVolumeNameInformation @ 0x1403C6F60 (IopGetFileVolumeNameInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B845C (SeSetLearningModeObjectInformation.c)
 *     SmKmEtwAppendObjectName @ 0x1405CB2A4 (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x140A9E880 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140AA6370 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x140ADDB50 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14075BD04 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
