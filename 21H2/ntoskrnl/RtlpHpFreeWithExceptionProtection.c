/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1405868F0
 * Callers:
 *     RtlFreeHeap @ 0x140223680 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1402236E4 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x140593684 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
