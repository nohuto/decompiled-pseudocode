/*
 * XREFs of ZwQueryObject @ 0x14041B960
 * Callers:
 *     DifZwQueryObjectWrapper @ 0x140625690 (DifZwQueryObjectWrapper.c)
 *     CmpNameFromAttributes @ 0x14067DB18 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x1406E36C4 (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x1408621F8 (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x14091D570 (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x1409EAA18 (EtwpObjectTypeRundown.c)
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
