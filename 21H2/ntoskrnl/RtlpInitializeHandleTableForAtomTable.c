/*
 * XREFs of RtlpInitializeHandleTableForAtomTable @ 0x140622DBC
 * Callers:
 *     RtlCreateAtomTableEx @ 0x1402522D0 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExCreateHandleTable @ 0x140622DE8 (ExCreateHandleTable.c)
 */

bool __fastcall RtlpInitializeHandleTableForAtomTable(__int64 a1)
{
  __int64 HandleTable; // rax

  HandleTable = ExCreateHandleTable(0LL, 0LL);
  *(_QWORD *)(a1 + 16) = HandleTable;
  return HandleTable != 0;
}
