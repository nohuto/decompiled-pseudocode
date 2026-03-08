/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x1402E038C
 * Callers:
 *     MiProbeAndLockPacket @ 0x140268C30 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x140269620 (MiProbeLeafPteAccess.c)
 *     MiFaultInProbeAddress @ 0x1402E021C (MiFaultInProbeAddress.c)
 *     MmProbeAndLockSelectedPages @ 0x1403CF7D0 (MmProbeAndLockSelectedPages.c)
 *     MiSplitReducedCommitClonePage @ 0x14061A624 (MiSplitReducedCommitClonePage.c)
 *     MmStoreProbeAndLockPages @ 0x14065ACBC (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 104), v1);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 104), *(_BYTE *)(a1 + 76));
}
