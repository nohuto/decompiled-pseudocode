/*
 * XREFs of ZwSetInformationObject @ 0x1403FA5A0
 * Callers:
 *     CmpCmdHiveClose @ 0x14071C1E4 (CmpCmdHiveClose.c)
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpFlushBackupHive @ 0x140870F90 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
