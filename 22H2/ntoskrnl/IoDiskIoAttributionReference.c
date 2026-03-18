/*
 * XREFs of IoDiskIoAttributionReference @ 0x140463418
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     IoDiskIoAttributionAllocate @ 0x1407D8AB8 (IoDiskIoAttributionAllocate.c)
 *     PspAllocatePartition @ 0x14085A080 (PspAllocatePartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoDiskIoAttributionReference(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
