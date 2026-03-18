/*
 * XREFs of MiGetNextPageTableTail @ 0x140357EB0
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 */

__int64 __fastcall MiGetNextPageTableTail(__int64 a1)
{
  int *v1; // rcx

  v1 = *(int **)(a1 + 16);
  if ( v1 )
    MiFlushTbList(v1);
  return 0LL;
}
