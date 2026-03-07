char __fastcall UmfdAllocation::UpdateKernelmodeAllocation(char *a1, char *a2)
{
  char *v2; // rsi
  char *v4; // rdi
  __int64 v6; // r14
  void *v7; // rbx
  NSInstrumentation::CPointerHashTable *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  const void *v11; // rdx
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 - 28;
  v4 = a2 - 28;
  if ( a1 - 28 == a2 - 28 )
  {
    UmfdAllocation::ReleaseKernelmodeAllocation(a2);
    return 1;
  }
  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 40);
  v12 = *(void **)(v6 + 8);
  v7 = v12;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  if ( *((_DWORD *)v2 + 1) == *((_DWORD *)v4 + 1) && *((_DWORD *)v2 + 6) == *((_DWORD *)v4 + 6) && *(_DWORD *)v4 <= 1u )
  {
    v8 = *(NSInstrumentation::CPointerHashTable **)v6;
    if ( *(_QWORD *)v6 )
    {
      v9 = *((_QWORD *)v2 + 2);
      if ( v9 )
      {
        v12 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(v8, v9, &v12);
      }
      v10 = *((_QWORD *)v4 + 2);
      if ( v10 )
      {
        v12 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(*(NSInstrumentation::CPointerHashTable **)v6, v10, &v12);
      }
    }
    *((_QWORD *)v2 + 1) = *((_QWORD *)v4 + 1);
    v11 = (const void *)*((_QWORD *)v4 + 2);
    *((_QWORD *)v2 + 2) = v11;
    if ( NSInstrumentation::CPointerHashTable::Insert(*(NSInstrumentation::CPointerHashTable **)v6, v11, a1) )
    {
      EngFreeMem(v4);
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      return 1;
    }
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v12);
  }
  return 0;
}
