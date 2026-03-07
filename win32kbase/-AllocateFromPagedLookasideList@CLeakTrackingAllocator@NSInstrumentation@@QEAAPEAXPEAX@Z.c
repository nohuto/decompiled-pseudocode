_QWORD *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  NSInstrumentation *v2; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v3; // rbx
  _QWORD *result; // rax
  _QWORD *v6; // rsi
  void *v7; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = (NSInstrumentation *)(a2 + 16);
  v3 = gpLeakTrackingAllocator;
  if ( a2[5] )
  {
    v6 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v2, a2);
    if ( v6 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v3,
                              v6,
                              (unsigned __int8)a2[4],
                              BackTrace) )
        return v6 + 2;
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
      NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a2 + 16), v6, v7);
    }
    return 0LL;
  }
  if ( (*(_DWORD *)gpLeakTrackingAllocator & 0xFFFFFFFD) != 0 )
  {
    v6 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v2, a2);
    if ( v6 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *((NSInstrumentation::CPointerHashTable **)v3 + 1),
        (const void *)*(unsigned int *)a2);
      *v6 = *(unsigned int *)a2;
      return v6 + 2;
    }
    return 0LL;
  }
  result = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v2, a2);
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
  return result;
}
