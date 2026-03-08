/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x1402E0344
 * Callers:
 *     MiProbeAndLockPacket @ 0x140268C30 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x140269620 (MiProbeLeafPteAccess.c)
 *     MiFaultInProbeAddress @ 0x1402E021C (MiFaultInProbeAddress.c)
 *     MmProbeAndLockSelectedPages @ 0x1403CF7D0 (MmProbeAndLockSelectedPages.c)
 *     MiSplitReducedCommitClonePage @ 0x14061A624 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 */

char __fastcall MiLockProbePacketWorkingSet(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax

  *(_DWORD *)(a1 + 72) &= 0xFFFFFFCF;
  LOBYTE(v3) = MiLockWorkingSetShared(*(_QWORD *)(a1 + 104));
  v2 = *(_DWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 76) = v3;
  LOBYTE(v3) = v2 & 0xF;
  if ( (v2 & 0xF) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(v3 + 1264) )
      *(_DWORD *)(a1 + 72) = v2 | 0x10;
  }
  return v3;
}
