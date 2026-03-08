/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x140A147D0
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 304);
}
