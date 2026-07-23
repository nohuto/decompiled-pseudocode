/*
 * XREFs of ZwModifyBootEntry @ 0x1403FBCE0
 * Callers:
 *     BiModifyBootEntry @ 0x140972840 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
