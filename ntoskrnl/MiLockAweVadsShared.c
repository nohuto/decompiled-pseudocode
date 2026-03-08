/*
 * XREFs of MiLockAweVadsShared @ 0x140648AC4
 * Callers:
 *     MiFreePhysicalPages @ 0x140647F94 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     NtMapUserPhysicalPages @ 0x140A3FC10 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140A3FEC0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x1402621D0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiUnlockAweVadsShared @ 0x14064989C (MiUnlockAweVadsShared.c)
 *     MiCopyOnWriteCheckConditions @ 0x140664840 (MiCopyOnWriteCheckConditions.c)
 */

ULONG_PTR __fastcall MiLockAweVadsShared(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  ULONG_PTR result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)(v1 + 1680);
  while ( 1 )
  {
    --*(_WORD *)(a1 + 486);
    result = ExAcquireAutoExpandPushLockShared(v3 + 392, 0LL);
    if ( !*(_QWORD *)(v1 + 1248) )
      break;
    MiUnlockAweVadsShared(a1, result);
    MiCopyOnWriteCheckConditions(v1 + 1664, 3221226548LL);
  }
  return result;
}
