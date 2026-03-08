/*
 * XREFs of UserReAllocPoolWithQuota @ 0x1C00C4890
 * Callers:
 *     FastGetProfileKeysW @ 0x1C015D0F0 (FastGetProfileKeysW.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

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
