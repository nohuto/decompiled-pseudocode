/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x140413BD0
 * Callers:
 *     DifZwCreateSymbolicLinkObjectWrapper @ 0x1405ECAA0 (DifZwCreateSymbolicLinkObjectWrapper.c)
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x14075D880 (SeGetTokenDeviceMap.c)
 *     ObpInitializeRootNamespace @ 0x1408093C4 (ObpInitializeRootNamespace.c)
 *     PiDrvDbRegisterNode @ 0x14081C38C (PiDrvDbRegisterNode.c)
 *     ObpCreateDosDevicesDirectory @ 0x140855150 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140944330 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AA7BC (PspSiloInitializeSystemRootSymlink.c)
 *     CmpInitializeDriverStores @ 0x140B52CE0 (CmpInitializeDriverStores.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B68F88 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSymbolicLinkObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
