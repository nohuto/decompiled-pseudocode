/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x14041E420
 * Callers:
 *     DifZwQuerySymbolicLinkObjectWrapper @ 0x140625AB0 (DifZwQuerySymbolicLinkObjectWrapper.c)
 *     SiTranslateSymbolicLink @ 0x1406BB4A0 (SiTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140803050 (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x1409375D0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1409FEF6C (ExpTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x140A22520 (SiGetBiosSystemDisk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, LinkTarget);
}
