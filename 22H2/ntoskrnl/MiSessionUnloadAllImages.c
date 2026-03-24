/*
 * XREFs of MiSessionUnloadAllImages @ 0x1407784DC
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140778220 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiSessionLookupImage @ 0x140328A98 (MiSessionLookupImage.c)
 *     MmReleaseLoadLock @ 0x1406FE9E0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406FEA40 (MmAcquireLoadLock.c)
 *     MmUnloadSystemImage @ 0x140771E10 (MmUnloadSystemImage.c)
 */

_QWORD *MiSessionUnloadAllImages()
{
  struct _KTHREAD *Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  struct _KTHREAD *v4; // rax
  unsigned __int64 v5; // rsi

  Lock = MmAcquireLoadLock();
  v1 = (PVOID *)PsLoadedModuleList;
  v2 = (__int64)Lock;
  while ( v1 != &PsLoadedModuleList )
  {
    v5 = (unsigned __int64)v1[6];
    if ( (unsigned int)MiGetSystemRegionType(v5) == 1 && MiSessionLookupImage(v5) )
    {
      MmReleaseLoadLock(v2);
      MmUnloadSystemImage((__int64)v1, v3);
      v4 = MmAcquireLoadLock();
      v1 = (PVOID *)PsLoadedModuleList;
      v2 = (__int64)v4;
    }
    else
    {
      v1 = (PVOID *)*v1;
    }
  }
  return MmReleaseLoadLock(v2);
}
