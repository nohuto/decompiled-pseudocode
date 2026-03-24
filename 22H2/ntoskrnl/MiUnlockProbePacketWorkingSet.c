/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x14030F220
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 *     MiProbeLeafPteAccess @ 0x14020B6B0 (MiProbeLeafPteAccess.c)
 *     MmProbeAndLockSelectedPages @ 0x14030EB80 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockComplete @ 0x14030EDF0 (MiProbeAndLockComplete.c)
 *     MmStoreProbeAndLockPages @ 0x14030EE40 (MmStoreProbeAndLockPages.c)
 *     MiFaultInProbeAddress @ 0x14030F0A8 (MiFaultInProbeAddress.c)
 *     MiSplitReducedCommitClonePage @ 0x140530CD4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 96), v1);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 96), *(_BYTE *)(a1 + 68));
}
