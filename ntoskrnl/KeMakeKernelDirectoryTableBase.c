/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x1402A6248
 * Callers:
 *     KiInSwapProcesses @ 0x1402C0180 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x1403D1884 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
