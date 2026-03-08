/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x1405A798C
 * Callers:
 *     RtlAllocateHeap @ 0x1402E0B70 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1402E0BC8 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1405B276C (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
