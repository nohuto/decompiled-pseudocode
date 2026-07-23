/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x180089A20
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 */

char LdrFlushAlternateResourceModules()
{
  unsigned int i; // ebx
  char *v1; // rdi
  __int64 v2; // rdx
  void *v3; // rdx
  void *v4; // rcx

  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v1 = (char *)AlternateResourceModules + 64 * (unsigned __int64)i;
      v2 = *((_QWORD *)v1 + 4);
      if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v3 = (void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( *((_DWORD *)v1 + 14) == -1073741799 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
        else
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
        *((_QWORD *)v1 + 4) = 0LL;
        v4 = (void *)*((_QWORD *)v1 + 5);
        if ( v4 )
        {
          NtClose(v4);
          *((_QWORD *)v1 + 5) = 0LL;
        }
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
    AlternateResourceModules = 0LL;
    AlternateResourceModuleCount = 0;
    AltResMemBlockCount = 0;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
