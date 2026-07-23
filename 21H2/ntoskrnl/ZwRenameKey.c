/*
 * XREFs of ZwRenameKey @ 0x1403FD400
 * Callers:
 *     CmpDoReDoRenameKey @ 0x140882200 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
