char MmFreeBootDriverInitializationCode()
{
  struct _KTHREAD *Lock; // rdi
  PVOID *i; // rbx
  char result; // al

  Lock = MmAcquireLoadLock();
  --Lock->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( ((_DWORD)i[13] & 0x40000000) == 0 )
      MiFreeDriverInitialization((__int64)i);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)Lock);
  result = MmReleaseLoadLock((__int64)Lock);
  byte_140C65576 = 1;
  return result;
}
