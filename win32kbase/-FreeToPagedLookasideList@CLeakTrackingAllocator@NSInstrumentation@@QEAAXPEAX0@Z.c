void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2,
        char *a3)
{
  char *v3; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v4; // rbx
  char *v6; // rdx
  NSInstrumentation::CPointerHashTable *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  v3 = a3;
  v4 = gpLeakTrackingAllocator;
  if ( !a2[5] )
  {
    if ( (*(_DWORD *)gpLeakTrackingAllocator & 0xFFFFFFFD) != 0 )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)gpLeakTrackingAllocator + 1),
        (const void *)*(unsigned int *)a2);
      v3 -= 16;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v4 + 15);
    v6 = v3;
    goto LABEL_5;
  }
  v7 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 11);
  v8 = 0LL;
  if ( NSInstrumentation::CPointerHashTable::Remove(v7, a3 - 16, &v8) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      *((NSInstrumentation::CPrioritizedWriterLock **)v4 + 13),
      (struct NSInstrumentation::CBackTraceStorageUnit *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFF8uLL));
    _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
    v6 = v3 - 16;
LABEL_5:
    NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a2 + 16), v6, a3);
  }
}
