/*
 * XREFs of iscntrl @ 0x18008D090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iscntrl(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180166150[v1] & 0x20;
}
