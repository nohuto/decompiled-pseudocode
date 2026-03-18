/*
 * XREFs of MiUnlockBootPageSections @ 0x140B6276C
 * Callers:
 *     MiInitSystem @ 0x140B47C18 (MiInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     MiLockPagableSections @ 0x140B62918 (MiLockPagableSections.c)
 */

_QWORD *MiUnlockBootPageSections()
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  int v2; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v2 = *((_DWORD *)i + 26);
    if ( (v2 & 0x400000) != 0 )
    {
      *((_DWORD *)i + 26) = v2 & 0xFFBFFFFF;
      MiLockPagableSections(i, 0LL);
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
