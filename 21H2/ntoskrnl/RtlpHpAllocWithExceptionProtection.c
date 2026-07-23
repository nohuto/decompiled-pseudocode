/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x14058687C
 * Callers:
 *     RtlAllocateHeap @ 0x140223770 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1402237C8 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x140593684 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
