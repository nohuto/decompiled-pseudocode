/*
 * XREFs of MiProbeAndLockComplete @ 0x14030EDF0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x14030EB80 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14030F220 (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x140530794 (MiAddMdlTracker.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, int a2)
{
  struct _MDL *v4; // rbx

  MiUnlockProbePacketWorkingSet(a1);
  v4 = *(struct _MDL **)(a1 + 56);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)v4);
  if ( a2 < 0 )
  {
    MmUnlockPages(v4);
    ++dword_140C4E7A0;
  }
  return (unsigned int)a2;
}
