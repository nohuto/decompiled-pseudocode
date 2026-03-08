/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x140415030
 * Callers:
 *     DifZwQuerySymbolicLinkObjectWrapper @ 0x1405F33E0 (DifZwQuerySymbolicLinkObjectWrapper.c)
 *     SiTranslateSymbolicLink @ 0x14076E918 (SiTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140831298 (BiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x14083F2E8 (ExpTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140945610 (IoIsValidNameGraftingBuffer.c)
 *     SiGetBiosSystemDisk @ 0x140A5D694 (SiGetBiosSystemDisk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, LinkTarget);
}
