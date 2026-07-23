/*
 * XREFs of ZwQueryObject @ 0x1403FA780
 * Callers:
 *     CmpAddToHiveFileList @ 0x14061E11C (CmpAddToHiveFileList.c)
 *     CmpNameFromAttributes @ 0x1406657AC (CmpNameFromAttributes.c)
 *     _RegRtlQueryKeyPathName @ 0x1407D21D8 (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x140876C3C (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x14093E374 (EtwpObjectTypeRundown.c)
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
