/*
 * XREFs of KiSetThreadState @ 0x1403439D0
 * Callers:
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 * Callees:
 *     <none>
 */

void __fastcall KiSetThreadState(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 388) = a2;
}
