/*
 * XREFs of ZwRenameKey @ 0x1403FC8A0
 * Callers:
 *     CmpDoReDoRenameKey @ 0x1408820F0 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
