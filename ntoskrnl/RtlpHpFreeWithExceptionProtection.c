/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1405A7A00
 * Callers:
 *     RtlFreeHeap @ 0x1402E0A90 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1402E0AF4 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1405B276C (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
