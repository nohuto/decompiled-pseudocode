/*
 * XREFs of NtModifyDriverEntry @ 0x1409FC460
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1409FAB20 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtModifyDriverEntry(const void *a1)
{
  if ( dword_140C316F0 == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
