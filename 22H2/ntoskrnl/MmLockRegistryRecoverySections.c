/*
 * XREFs of MmLockRegistryRecoverySections @ 0x14061A8F8
 * Callers:
 *     CmInitSystem2 @ 0x140B3CD68 (CmInitSystem2.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiSnapDriverRange @ 0x1407037A8 (MiSnapDriverRange.c)
 *     MmAcquireLoadLock @ 0x140704660 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407049E0 (MmReleaseLoadLock.c)
 */

__int64 MmLockRegistryRecoverySections()
{
  __int64 Lock; // rdi
  PVOID *i; // rbx
  int v2; // esi
  unsigned __int64 v4; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  Lock = MmAcquireLoadLock();
  --*(_WORD *)(Lock + 484);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)i[6]) != 1 )
    {
      v2 = 0;
      do
      {
        v2 = MiSnapDriverRange((_DWORD)i, v2, 128, 0, (__int64)&v4, (__int64)&v5);
        if ( v4 )
          MiLockCode((__int64)i, v4, v5, 2);
      }
      while ( v2 );
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread(Lock);
  return MmReleaseLoadLock(Lock);
}
