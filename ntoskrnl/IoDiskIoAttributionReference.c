/*
 * XREFs of IoDiskIoAttributionReference @ 0x14045B478
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     IoDiskIoAttributionAllocate @ 0x1407532F4 (IoDiskIoAttributionAllocate.c)
 *     PspAllocatePartition @ 0x140855B00 (PspAllocatePartition.c)
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
