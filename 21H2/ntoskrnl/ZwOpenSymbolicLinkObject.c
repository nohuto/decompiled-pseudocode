/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1403FCB40
 * Callers:
 *     SiTranslateSymbolicLink @ 0x140602B3C (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140603544 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopQueryRegistryKeySystemPath @ 0x1407411A0 (IopQueryRegistryKeySystemPath.c)
 *     IopProcessSetInterfaceState @ 0x14074929C (IopProcessSetInterfaceState.c)
 *     IoDeleteSymbolicLink @ 0x140772470 (IoDeleteSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x14077B188 (SiOpenArcNameObject.c)
 *     BiTranslateSymbolicLink @ 0x140782D7C (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140894F50 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x140952D8C (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x140A625B8 (IopStoreSystemPartitionInformation.c)
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
