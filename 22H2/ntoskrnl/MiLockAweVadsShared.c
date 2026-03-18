/*
 * XREFs of MiLockAweVadsShared @ 0x14064B0E0
 * Callers:
 *     MiFreePhysicalPages @ 0x14064A5B0 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14064B414 (MiProtectAweRegion.c)
 *     NtMapUserPhysicalPages @ 0x140A428F0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140A42BA0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x1402308C0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiUnlockAweVadsShared @ 0x14064BEB8 (MiUnlockAweVadsShared.c)
 *     MiCopyOnWriteCheckConditions @ 0x140666E90 (MiCopyOnWriteCheckConditions.c)
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
