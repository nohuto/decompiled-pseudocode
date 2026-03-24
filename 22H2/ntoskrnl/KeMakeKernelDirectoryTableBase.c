/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x1403558E0
 * Callers:
 *     KiInSwapProcesses @ 0x140249EA8 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x140387ED8 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1406FDDB4 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
