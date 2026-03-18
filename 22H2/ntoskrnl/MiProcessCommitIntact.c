/*
 * XREFs of MiProcessCommitIntact @ 0x140369168
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140236C30 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CAD4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiLocateAddress @ 0x140217260 (MiLocateAddress.c)
 *     MiGetSharedVm @ 0x140286D54 (MiGetSharedVm.c)
 *     MiUnlockVadTree @ 0x140287758 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028A7A0 (MiLockVadTree.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14061823C (MiIsVadEligibleForCommitRelease.c)
 */

__int64 __fastcall MiProcessCommitIntact(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  _KPROCESS *Process; // rcx
  char v4; // al
  __int64 v5; // rcx
  __int64 **Address; // rax

  v2 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = HIBYTE(Process[1].IdealProcessor[31]);
  v5 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  if ( (v4 & 0x60) == 0x60 && *((_QWORD *)MiGetSharedVm(v5) + 4) && a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1);
    Address = MiLocateAddress(a1);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
      v2 = 0;
    MiUnlockVadTree(1, 0x11u);
  }
  return v2;
}
