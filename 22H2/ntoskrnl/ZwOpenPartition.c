/*
 * XREFs of ZwOpenPartition @ 0x1403FBF00
 * Callers:
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140897960 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenPartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
