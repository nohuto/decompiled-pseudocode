/*
 * XREFs of MiSessionUnloadAllImages @ 0x14067E8F8
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14067E7A0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiSessionLookupImage @ 0x14036C7B8 (MiSessionLookupImage.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MmUnloadSystemImage @ 0x1407F5FA0 (MmUnloadSystemImage.c)
 */

__int64 MiSessionUnloadAllImages()
{
  __int64 Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rsi

  Lock = MmAcquireLoadLock();
  v1 = (PVOID *)PsLoadedModuleList;
  v2 = Lock;
  while ( v1 != &PsLoadedModuleList )
  {
    v4 = (unsigned __int64)v1[6];
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 && MiSessionLookupImage(v4) )
    {
      MmReleaseLoadLock(v2);
      MmUnloadSystemImage((ULONG_PTR)v1);
      v3 = MmAcquireLoadLock();
      v1 = (PVOID *)PsLoadedModuleList;
      v2 = v3;
    }
    else
    {
      v1 = (PVOID *)*v1;
    }
  }
  return MmReleaseLoadLock(v2);
}
