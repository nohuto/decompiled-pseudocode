/*
 * XREFs of ZwOpenPartition @ 0x14041CC80
 * Callers:
 *     IopLiveDumpOpenVMMemoryPartition @ 0x140559F78 (IopLiveDumpOpenVMMemoryPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
