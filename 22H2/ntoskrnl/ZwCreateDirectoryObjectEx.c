/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1403FAF20
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1407A0DC0 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x1407A0F74 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407A1228 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140980520 (ObCreateSiloRootDirectory.c)
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
