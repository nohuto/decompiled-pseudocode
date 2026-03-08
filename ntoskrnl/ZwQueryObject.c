/*
 * XREFs of ZwQueryObject @ 0x140412510
 * Callers:
 *     DifZwQueryObjectWrapper @ 0x1405F2FC0 (DifZwQueryObjectWrapper.c)
 *     CmpNameFromAttributes @ 0x1406BD314 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x140732E68 (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x14085E3CC (_RegRtlQueryKeyPathName.c)
 *     EtwpObjectTypeRundown @ 0x1409EC610 (EtwpObjectTypeRundown.c)
 *     CmpCmdRenameHive @ 0x140A0ED14 (CmpCmdRenameHive.c)
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
