/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x1406498DC
 * Callers:
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x140A2BE10 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x140A3E64C (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140A3EA20 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140A3F408 (MiRemoveUserPhysicalPagesView.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14023A620 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  _QWORD *v2; // rax

  LOBYTE(v2) = ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL) + 392LL, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
