/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1403FCF80
 * Callers:
 *     SiTranslateSymbolicLink @ 0x1406A4F0C (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x14077AEC0 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x140782BBC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140894DF0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x140952BBC (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, LinkTarget);
}
