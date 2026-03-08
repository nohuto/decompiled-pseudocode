/*
 * XREFs of SANITIZE_EFLAGS @ 0x14040A820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SANITIZE_EFLAGS(int a1, int a2)
{
  if ( a2 )
    return a1 & 0x210DD5 | 0x200;
  else
    return a1 & 0x250FD5;
}
