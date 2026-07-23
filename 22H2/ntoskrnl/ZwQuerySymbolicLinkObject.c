/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1403FC600
 * Callers:
 *     SiTranslateSymbolicLink @ 0x140687FDC (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x14077ADC0 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x140782ABC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140894E40 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x140952C0C (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
