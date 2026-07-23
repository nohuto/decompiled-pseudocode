/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1403FBA80
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1407A0B90 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x1407A0D44 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407A0FF8 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x1409806B0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
