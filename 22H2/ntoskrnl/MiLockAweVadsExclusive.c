/*
 * XREFs of MiLockAweVadsExclusive @ 0x14064B0A8
 * Callers:
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x140A2EB60 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x140A4132C (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140A41700 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140A420E8 (MiRemoveUserPhysicalPagesView.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14022F760 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 392, 0LL);
}
