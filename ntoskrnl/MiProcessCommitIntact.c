/*
 * XREFs of MiProcessCommitIntact @ 0x1402FDBAC
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140269620 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x14061A624 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140615D8C (MiIsVadEligibleForCommitRelease.c)
 */

__int64 __fastcall MiProcessCommitIntact(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  _KPROCESS *Process; // rcx
  char v7; // al
  unsigned __int64 *v8; // rcx
  __int64 **Address; // rax
  __int64 v11; // rdx

  v5 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = HIBYTE(Process[1].IdealProcessor[31]);
  v8 = &Process[1].ActiveProcessors.StaticBitmap[26];
  if ( (v7 & 0x60) == 0x60 && *(_QWORD *)(MiGetSharedVm(v8, a2, a3, a4) + 32) && a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1LL);
    Address = MiLocateAddress(a1);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
      v5 = 0;
    LOBYTE(v11) = 17;
    MiUnlockVadTree(1LL, v11);
  }
  return v5;
}
