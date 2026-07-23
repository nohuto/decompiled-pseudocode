/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1403FD160
 * Callers:
 *     SiTranslateSymbolicLink @ 0x140602B3C (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x14077B080 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x140782D7C (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140894F50 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x140952D8C (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
