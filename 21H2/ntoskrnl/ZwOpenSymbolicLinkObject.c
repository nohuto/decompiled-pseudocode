/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1403FC960
 * Callers:
 *     SiTranslateSymbolicLink @ 0x1406A4F0C (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406A5914 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopQueryRegistryKeySystemPath @ 0x140740FE0 (IopQueryRegistryKeySystemPath.c)
 *     IopProcessSetInterfaceState @ 0x1407490DC (IopProcessSetInterfaceState.c)
 *     IoDeleteSymbolicLink @ 0x1407722B0 (IoDeleteSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x14077AFC8 (SiOpenArcNameObject.c)
 *     BiTranslateSymbolicLink @ 0x140782BBC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140894DF0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x140952BBC (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x140A615B8 (IopStoreSystemPartitionInformation.c)
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
