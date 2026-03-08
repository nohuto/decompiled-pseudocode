/*
 * XREFs of MmMarkPhysicalMemoryAsGood @ 0x14062A140
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlinkBadPages @ 0x1406288F4 (MiUnlinkBadPages.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsGood(_DWORD *a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  if ( (*a1 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v4 = *(_QWORD *)a1 >> 12;
  v5 = v4 + (*(_QWORD *)a2 >> 12);
  if ( v4 >= v5 )
    return 3221225711LL;
  *(_QWORD *)a2 = MiUnlinkBadPages(v4, v5) << 12;
  return 0LL;
}
