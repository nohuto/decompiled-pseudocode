/*
 * XREFs of MiCreateSystemPageTableTail @ 0x1402EB3A0
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 */

__int64 __fastcall MiCreateSystemPageTableTail(__int64 a1)
{
  MiFlushTbList(*(_QWORD *)(a1 + 168) + 144LL);
  return 0LL;
}
