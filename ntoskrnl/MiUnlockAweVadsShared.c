/*
 * XREFs of MiUnlockAweVadsShared @ 0x14064989C
 * Callers:
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     MiFreePhysicalPages @ 0x140647F94 (MiFreePhysicalPages.c)
 *     MiLockAweVadsShared @ 0x140648AC4 (MiLockAweVadsShared.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A3FC10 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140A3FEC0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x1402623C0 (ExReleaseAutoExpandPushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockAweVadsShared(__int64 a1, ULONG_PTR a2)
{
  _QWORD *v3; // rax

  LOBYTE(v3) = ExReleaseAutoExpandPushLockShared(a2, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v3 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v3 != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
