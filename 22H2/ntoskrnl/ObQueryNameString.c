/*
 * XREFs of ObQueryNameString @ 0x14070FAD0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x140345990 (SeSetLearningModeObjectInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14034C324 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopGetFileVolumeNameInformation @ 0x14035F7C8 (IopGetFileVolumeNameInformation.c)
 *     IoDeleteDevice @ 0x140360200 (IoDeleteDevice.c)
 *     SmKmEtwAppendObjectName @ 0x14059DB88 (SmKmEtwAppendObjectName.c)
 *     PiControlGetDeviceStack @ 0x140730018 (PiControlGetDeviceStack.c)
 *     EtwpObjectHandleEnumCallback @ 0x14093DF40 (EtwpObjectHandleEnumCallback.c)
 *     IopCaptureObjectName @ 0x140997938 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140997F90 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409E3AF8 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14070FFB0 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
