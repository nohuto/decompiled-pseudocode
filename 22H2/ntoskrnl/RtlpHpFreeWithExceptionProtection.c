/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1405A9E90
 * Callers:
 *     RtlFreeHeap @ 0x14034C400 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14034C464 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1405B4A44 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
