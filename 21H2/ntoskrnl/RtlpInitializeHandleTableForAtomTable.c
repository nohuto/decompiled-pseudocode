/*
 * XREFs of RtlpInitializeHandleTableForAtomTable @ 0x14062CF58
 * Callers:
 *     RtlCreateAtomTableEx @ 0x140264090 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExCreateHandleTable @ 0x14062B4B8 (ExCreateHandleTable.c)
 */

bool __fastcall RtlpInitializeHandleTableForAtomTable(__int64 a1)
{
  _QWORD *HandleTable; // rax

  HandleTable = ExCreateHandleTable(0LL, 0);
  *(_QWORD *)(a1 + 16) = HandleTable;
  return HandleTable != 0LL;
}
