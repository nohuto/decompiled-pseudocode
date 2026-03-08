/*
 * XREFs of MiCancelPhase0Locking @ 0x140729E84
 * Callers:
 *     MmPageEntireDriver @ 0x140729DE0 (MmPageEntireDriver.c)
 *     MmResetDriverPaging @ 0x14072A050 (MmResetDriverPaging.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MiLockPagableSections @ 0x140B5F628 (MiLockPagableSections.c)
 */

char __fastcall MiCancelPhase0Locking(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  char result; // al

  if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
    {
      MiLockPagableSections(a1, 0LL);
      *(_DWORD *)(a1 + 104) &= ~0x400000u;
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
