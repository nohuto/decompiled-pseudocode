/*
 * XREFs of ZwRenameKey @ 0x1404152F0
 * Callers:
 *     DifZwRenameKeyWrapper @ 0x1405F3C00 (DifZwRenameKeyWrapper.c)
 *     CmpDoReDoRenameKey @ 0x140A27D14 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, NewName);
}
