/*
 * XREFs of MiUnmapViewSubsections @ 0x14029CAF0
 * Callers:
 *     MiDeleteVad @ 0x1406FA4D0 (MiDeleteVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsections @ 0x14029F910 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x14029FAA0 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B424 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiUnmapViewSubsections(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  BOOL v6; // ebp
  __int64 v7; // rdx
  KIRQL v8; // r15
  __int64 result; // rax

  v3 = 0LL;
  v4 = 0LL;
  v6 = *(_QWORD *)(a1 + 64) != 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
    v3 = MiDecrementSubsections(a2);
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  if ( v3 )
    v4 = *(_QWORD *)(qword_140C674C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  LOBYTE(v7) = v8;
  result = MiCheckControlArea(a1, v7);
  if ( v3 )
    return MiReturnCrossPartitionSectionCharges(v4, v6, v3);
  return result;
}
