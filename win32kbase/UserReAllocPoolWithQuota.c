void *__fastcall UserReAllocPoolWithQuota(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        size_t Size,
        unsigned __int64 a3,
        unsigned int a4)
{
  size_t v4; // rbx
  void *QuotaZInit; // rax
  void *v8; // rsi

  v4 = a3;
  QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(a1, Size, a3, a4);
  v8 = QuotaZInit;
  if ( QuotaZInit )
  {
    if ( Size <= v4 )
      v4 = Size;
    memmove(QuotaZInit, a1, v4);
    if ( a1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a1);
  }
  return v8;
}
