/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x14041DDE0
 * Callers:
 *     DifZwOpenSymbolicLinkObjectWrapper @ 0x140622870 (DifZwOpenSymbolicLinkObjectWrapper.c)
 *     IopQueryRegistryKeySystemPath @ 0x14067AFB0 (IopQueryRegistryKeySystemPath.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SiTranslateSymbolicLink @ 0x1406BB4A0 (SiTranslateSymbolicLink.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
 *     BiTranslateSymbolicLink @ 0x140803050 (BiTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x140811120 (IoDeleteSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x1409375D0 (IoIsValidNameGraftingBuffer.c)
 *     PiDrvDbUnregisterNode @ 0x14095E00C (PiDrvDbUnregisterNode.c)
 *     ExpTranslateSymbolicLink @ 0x1409FEF6C (ExpTranslateSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x140A228D0 (SiOpenArcNameObject.c)
 *     IopStoreSystemPartitionInformation @ 0x140B0E88C (IopStoreSystemPartitionInformation.c)
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
