/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x1403FB240
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1406770FC (SeGetTokenDeviceMap.c)
 *     IopProcessSetInterfaceState @ 0x14074557C (IopProcessSetInterfaceState.c)
 *     IoCreateSymbolicLink @ 0x14076D2F0 (IoCreateSymbolicLink.c)
 *     ObpInitializeRootNamespace @ 0x1407A0DC0 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407A1228 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140893B10 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906B10 (PspSiloInitializeSystemRootSymlink.c)
 *     CmpInitializeDriverStores @ 0x140A5831C (CmpInitializeDriverStores.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6DEEC (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LinkTarget)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
