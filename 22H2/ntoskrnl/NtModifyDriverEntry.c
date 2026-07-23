/*
 * XREFs of NtModifyDriverEntry @ 0x140954160
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x140951944 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140C197B0 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
