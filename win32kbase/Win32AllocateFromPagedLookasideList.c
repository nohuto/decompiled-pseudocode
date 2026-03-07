char *__fastcall Win32AllocateFromPagedLookasideList(unsigned __int8 *a1, void *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  _QWORD *v3; // rbx
  NSInstrumentation *v5; // rcx
  void *v6; // rax
  _QWORD *v8; // r14
  char *v9; // rbp
  void *v10; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  v3 = 0LL;
  if ( a1[5] )
  {
    v9 = (char *)NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(a1 + 16), a2);
    if ( v9 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v2,
                              v9,
                              a1[4],
                              BackTrace) )
      {
        return v9 + 16;
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a1 + 16), v9, v10);
      }
    }
  }
  else
  {
    v5 = (NSInstrumentation *)(a1 + 16);
    if ( (*(_DWORD *)gpLeakTrackingAllocator & 0xFFFFFFFD) != 0 )
    {
      v8 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v5, a2);
      if ( v8 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
        NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
          *((NSInstrumentation::CPointerHashTable **)v2 + 1),
          (const void *)*(unsigned int *)a1);
        v3 = v8 + 2;
        *v8 = *(unsigned int *)a1;
      }
    }
    else
    {
      v6 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v5, a2);
      if ( v6 )
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
      return (char *)v6;
    }
  }
  return (char *)v3;
}
