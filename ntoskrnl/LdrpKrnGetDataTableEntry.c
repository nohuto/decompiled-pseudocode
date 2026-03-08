/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x14035CF08
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14035D07C (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetImageSize @ 0x14035D8E8 (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x1407EB0A8 (LdrpResGetMappingSize.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

PVOID *__fastcall LdrpKrnGetDataTableEntry(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *v3; // rbx
  PVOID *v4; // rdx
  PVOID v5; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = (PVOID *)PsLoadedModuleList;
  if ( PsLoadedModuleList )
  {
    while ( v4 != &PsLoadedModuleList )
    {
      v5 = v4[6];
      if ( a1 >= (unsigned __int64)v5 && a1 < (unsigned __int64)v5 + *((unsigned int *)v4 + 16) )
      {
        v3 = v4;
        break;
      }
      v4 = (PVOID *)*v4;
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
