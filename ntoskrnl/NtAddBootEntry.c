/*
 * XREFs of NtAddBootEntry @ 0x1409FB9F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1409FA390 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtAddBootEntry(const void *a1, unsigned __int64 a2)
{
  if ( dword_140C316F0 == 2 )
    return ExpSetBootEntry(1, a1, a2);
  else
    return 3221225474LL;
}
