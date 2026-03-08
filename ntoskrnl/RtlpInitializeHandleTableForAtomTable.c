/*
 * XREFs of RtlpInitializeHandleTableForAtomTable @ 0x1407DCAAC
 * Callers:
 *     RtlCreateAtomTableEx @ 0x140355EB0 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExCreateHandleTable @ 0x140706274 (ExCreateHandleTable.c)
 */

bool __fastcall RtlpInitializeHandleTableForAtomTable(__int64 a1)
{
  __int64 HandleTable; // rax

  HandleTable = ExCreateHandleTable(0LL, 0LL);
  *(_QWORD *)(a1 + 16) = HandleTable;
  return HandleTable != 0;
}
