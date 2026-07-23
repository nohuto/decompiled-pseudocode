/*
 * XREFs of ZwQueryObject @ 0x1403F9C20
 * Callers:
 *     CmpAddToHiveFileList @ 0x1406A1CFC (CmpAddToHiveFileList.c)
 *     CmpNameFromAttributes @ 0x1406E80BC (CmpNameFromAttributes.c)
 *     _RegRtlQueryKeyPathName @ 0x1407D1F88 (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x140876B2C (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x14093E1F4 (EtwpObjectTypeRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
