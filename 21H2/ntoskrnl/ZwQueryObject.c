/*
 * XREFs of ZwQueryObject @ 0x1403FA5A0
 * Callers:
 *     CmpNameFromAttributes @ 0x14066F2CC (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x1406BF09C (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x1407D2068 (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x140876ADC (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x14093E1A4 (EtwpObjectTypeRundown.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&ObjectInformationClass);
}
