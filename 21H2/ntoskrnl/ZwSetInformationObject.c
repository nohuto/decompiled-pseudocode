/*
 * XREFs of ZwSetInformationObject @ 0x1403FB100
 * Callers:
 *     CmpCmdHiveClose @ 0x1405E0548 (CmpCmdHiveClose.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpFlushBackupHive @ 0x1408710A0 (CmpFlushBackupHive.c)
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
