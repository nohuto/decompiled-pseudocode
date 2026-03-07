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
