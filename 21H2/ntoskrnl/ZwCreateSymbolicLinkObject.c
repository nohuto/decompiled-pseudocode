/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x14041D000
 * Callers:
 *     DifZwCreateSymbolicLinkObjectWrapper @ 0x14061EF90 (DifZwCreateSymbolicLinkObjectWrapper.c)
 *     SeGetTokenDeviceMap @ 0x14069CC40 (SeGetTokenDeviceMap.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
 *     PiDrvDbRegisterNode @ 0x14082666C (PiDrvDbRegisterNode.c)
 *     ObpInitializeRootNamespace @ 0x14082C020 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14082C49C (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140936300 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AC86C (PspSiloInitializeSystemRootSymlink.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B286CC (PiCreateDriverDataDirectoryRoot.c)
 *     CmpInitializeDriverStores @ 0x140B2B730 (CmpInitializeDriverStores.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSymbolicLinkObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
