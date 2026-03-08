/*
 * XREFs of RtlCreateHashTableEx @ 0x1403C1A20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateHashTable @ 0x1402B8550 (RtlpCreateHashTable.c)
 */

char __fastcall RtlCreateHashTableEx(__int64 *a1, unsigned int a2, int a3, int a4)
{
  return RtlpCreateHashTable(a1, a2, a3, a4);
}
