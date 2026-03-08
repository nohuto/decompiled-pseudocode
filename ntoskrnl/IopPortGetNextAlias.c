/*
 * XREFs of IopPortGetNextAlias @ 0x14081F944
 * Callers:
 *     IopPortAddAllocation @ 0x14081F360 (IopPortAddAllocation.c)
 *     IopPortBacktrackAllocation @ 0x140957150 (IopPortBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

char __fastcall IopPortGetNextAlias(char a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax

  if ( (a1 & 4) != 0 )
  {
    v4 = 1024LL;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return 0;
    v4 = 4096LL;
  }
  if ( (unsigned __int64)(v4 + a2) > 0xFFFF )
    return 0;
  *a3 = v4 + a2;
  return 1;
}
