/*
 * XREFs of NtModifyBootEntry @ 0x1409FF330
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1409FD220 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtModifyBootEntry(const void *a1)
{
  if ( dword_140C31AF0 == 2 )
    return ExpSetBootEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
