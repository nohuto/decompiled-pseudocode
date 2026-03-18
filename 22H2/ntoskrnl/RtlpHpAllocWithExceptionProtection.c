/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x1405A9E1C
 * Callers:
 *     RtlAllocateHeap @ 0x14034C4E0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x14034C538 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1405B4A44 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
