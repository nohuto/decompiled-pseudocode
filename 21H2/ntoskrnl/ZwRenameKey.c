/*
 * XREFs of ZwRenameKey @ 0x1403FD220
 * Callers:
 *     CmpDoReDoRenameKey @ 0x1408820A0 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, NewName);
}
