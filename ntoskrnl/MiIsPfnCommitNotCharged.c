/*
 * XREFs of MiIsPfnCommitNotCharged @ 0x140286190
 * Callers:
 *     MiWriteCompletePfn @ 0x140212B10 (MiWriteCompletePfn.c)
 *     MiUnlockImageSection @ 0x140225A90 (MiUnlockImageSection.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiCheckProtoPtePageState @ 0x140283EB0 (MiCheckProtoPtePageState.c)
 *     MiCanBatchHardFaultPages @ 0x140284A30 (MiCanBatchHardFaultPages.c)
 *     MiChargeForLockedPage @ 0x140287410 (MiChargeForLockedPage.c)
 *     MiHardFaultPageRelease @ 0x140287C78 (MiHardFaultPageRelease.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnCommitNotCharged(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > 0xFFFFF6BFFFFFFF78uLL || v1 < 0xFFFFF68000000000uLL )
    return 0LL;
  else
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
}
