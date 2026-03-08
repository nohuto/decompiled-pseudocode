/*
 * XREFs of MiLockAwePagesShared @ 0x140648A68
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A3FC10 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140A3FEC0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x1402621D0 (ExAcquireAutoExpandPushLockShared.c)
 */

ULONG_PTR __fastcall MiLockAwePagesShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockShared(a1 + 64, 0LL);
}
