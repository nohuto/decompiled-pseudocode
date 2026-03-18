/*
 * XREFs of ZwRenameKey @ 0x14041E6E0
 * Callers:
 *     DifZwRenameKeyWrapper @ 0x1406262F0 (DifZwRenameKeyWrapper.c)
 *     CmpDoReDoRenameKey @ 0x140925CC0 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, NewName);
}
