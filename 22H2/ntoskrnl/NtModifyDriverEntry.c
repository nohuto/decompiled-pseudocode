/*
 * XREFs of NtModifyDriverEntry @ 0x140954160
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x140951944 (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtModifyDriverEntry(const void *a1)
{
  if ( dword_140C197B0 == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
