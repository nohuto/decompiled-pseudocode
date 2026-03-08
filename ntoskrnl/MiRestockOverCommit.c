/*
 * XREFs of MiRestockOverCommit @ 0x140654060
 * Callers:
 *     MiZeroAndReleasePages @ 0x1402776A0 (MiZeroAndReleasePages.c)
 *     MiProbeUnlockPage @ 0x14027C720 (MiProbeUnlockPage.c)
 *     MiCanBatchHardFaultPages @ 0x140284A30 (MiCanBatchHardFaultPages.c)
 *     MiRemoveLockedPageCharge @ 0x140286E00 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiIncreaseCommitLimits @ 0x140392864 (MiIncreaseCommitLimits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRestockOverCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 16440);
  if ( v2 )
  {
    v3 = a2;
    if ( a2 > v2 )
      v3 = *(_QWORD *)(a1 + 16440);
    *(_QWORD *)(a1 + 16440) = v2 - v3;
    a2 -= v3;
  }
  return a2;
}
