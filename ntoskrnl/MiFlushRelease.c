/*
 * XREFs of MiFlushRelease @ 0x140334AC0
 * Callers:
 *     MmTrimSection @ 0x14029FF98 (MmTrimSection.c)
 *     MmFlushSection @ 0x140333F20 (MmFlushSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x140633BC0 (MiFreeOverlappedFlushEntry.c)
 *     MmFlushVirtualMemory @ 0x14075ED38 (MmFlushVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsections @ 0x140334B70 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdx
  KIRQL v9; // r14
  __int64 v10; // rdi
  __int64 result; // rax

  v6 = 0LL;
  v7 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
  {
    v10 = MiDecrementSubsections(a2);
    v6 = MiDecrementSubsections(a3) + v10;
  }
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v8) = v9;
  result = MiCheckControlArea(a1, v8);
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v7, 1LL, v6);
  return result;
}
