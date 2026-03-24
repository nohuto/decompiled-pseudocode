/*
 * XREFs of NtModifyBootEntry @ 0x140954130
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x140951150 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtModifyBootEntry(const void *a1)
{
  if ( dword_140C197B0 == 2 )
    return ExpSetBootEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
