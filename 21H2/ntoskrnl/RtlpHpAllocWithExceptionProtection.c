/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x1405E511C
 * Callers:
 *     RtlAllocateHeap @ 0x140371850 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1403718A8 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1405F1AA4 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
