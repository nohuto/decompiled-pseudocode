/*
 * XREFs of NtAddBootEntry @ 0x1409FE8F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1409FD220 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtAddBootEntry(const void *a1, unsigned __int64 a2)
{
  if ( dword_140C31AF0 == 2 )
    return ExpSetBootEntry(1, a1, a2);
  else
    return 3221225474LL;
}
