/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1405866C0
 * Callers:
 *     RtlFreeHeap @ 0x1402A6240 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1402A62A4 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x140593454 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
