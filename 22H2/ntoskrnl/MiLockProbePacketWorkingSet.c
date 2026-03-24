/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x14030F1D8
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 *     MiProbeLeafPteAccess @ 0x14020B6B0 (MiProbeLeafPteAccess.c)
 *     MmProbeAndLockSelectedPages @ 0x14030EB80 (MmProbeAndLockSelectedPages.c)
 *     MiFaultInProbeAddress @ 0x14030F0A8 (MiFaultInProbeAddress.c)
 *     MiSplitReducedCommitClonePage @ 0x140530CD4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 */

char __fastcall MiLockProbePacketWorkingSet(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v5; // ecx
  __int64 v6; // rax

  *(_DWORD *)(a1 + 64) &= 0xFFFFFFCF;
  LOBYTE(v6) = MiLockWorkingSetShared(*(_QWORD *)(a1 + 96), a2, a3, a4);
  v5 = *(_DWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 68) = v6;
  LOBYTE(v6) = v5 & 0xF;
  if ( (v5 & 0xF) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 80);
    if ( *(_QWORD *)(v6 + 1264) )
      *(_DWORD *)(a1 + 64) = v5 | 0x10;
  }
  return v6;
}
