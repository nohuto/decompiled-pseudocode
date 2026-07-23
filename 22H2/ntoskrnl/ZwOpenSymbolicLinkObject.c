/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1403FBFE0
 * Callers:
 *     SiTranslateSymbolicLink @ 0x140687FDC (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F79AC (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopQueryRegistryKeySystemPath @ 0x14073D480 (IopQueryRegistryKeySystemPath.c)
 *     IopProcessSetInterfaceState @ 0x14074557C (IopProcessSetInterfaceState.c)
 *     IoDeleteSymbolicLink @ 0x140771F70 (IoDeleteSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x14077AEC8 (SiOpenArcNameObject.c)
 *     BiTranslateSymbolicLink @ 0x140782ABC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140894E40 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x140952C0C (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x140A615B8 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
