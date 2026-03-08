/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1404149D0
 * Callers:
 *     DifZwOpenSymbolicLinkObjectWrapper @ 0x1405F0270 (DifZwOpenSymbolicLinkObjectWrapper.c)
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 *     SiTranslateSymbolicLink @ 0x14076E918 (SiTranslateSymbolicLink.c)
 *     IopQueryRegistryKeySystemPath @ 0x140782C0C (IopQueryRegistryKeySystemPath.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1407DCB7C (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiTranslateSymbolicLink @ 0x140831298 (BiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x14083F2E8 (ExpTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x140871290 (IoDeleteSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140945610 (IoIsValidNameGraftingBuffer.c)
 *     PiDrvDbUnregisterNode @ 0x14096E504 (PiDrvDbUnregisterNode.c)
 *     SiOpenArcNameObject @ 0x140A5DA44 (SiOpenArcNameObject.c)
 *     IopStoreSystemPartitionInformation @ 0x140B56F38 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, *(_QWORD *)&DesiredAccess);
}
