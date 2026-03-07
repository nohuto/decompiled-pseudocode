void __fastcall UmfdAllocation::ReleaseKernelmodeAllocation(char *a1)
{
  char *v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbx
  NSInstrumentation::CPointerHashTable *v5; // rcx
  unsigned __int64 v6; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 - 28;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 40);
  v3 = *(_QWORD *)(v2 + 8);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  if ( (*(_DWORD *)v1)-- == 1 )
  {
    v5 = *(NSInstrumentation::CPointerHashTable **)v2;
    if ( *(_QWORD *)v2 )
    {
      v6 = *((_QWORD *)v1 + 2);
      if ( v6 )
      {
        v7 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(v5, v6, &v7);
      }
    }
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
    EngFreeMem(v1);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
}
