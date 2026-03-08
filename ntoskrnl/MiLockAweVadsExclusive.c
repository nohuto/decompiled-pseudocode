/*
 * XREFs of MiLockAweVadsExclusive @ 0x140648A8C
 * Callers:
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x140A2BE10 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x140A3E64C (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140A3EA20 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140A3F408 (MiRemoveUserPhysicalPagesView.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14023A860 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 392, 0LL);
}
