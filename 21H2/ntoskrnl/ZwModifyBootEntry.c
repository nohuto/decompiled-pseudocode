/*
 * XREFs of ZwModifyBootEntry @ 0x1403FC840
 * Callers:
 *     BiModifyBootEntry @ 0x1409729D0 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
