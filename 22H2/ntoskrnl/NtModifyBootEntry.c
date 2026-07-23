/*
 * XREFs of NtModifyBootEntry @ 0x140954130
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x140951150 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_140C197B0 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
