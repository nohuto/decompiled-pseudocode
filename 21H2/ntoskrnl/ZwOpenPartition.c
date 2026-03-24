/*
 * XREFs of ZwOpenPartition @ 0x1403FC880
 * Callers:
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140897910 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
