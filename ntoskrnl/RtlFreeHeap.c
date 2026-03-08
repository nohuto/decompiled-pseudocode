/*
 * XREFs of RtlFreeHeap @ 0x1402E0A90
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1402E0BC8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1402E0AF4 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x1405A7A00 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 */

BOOLEAN __stdcall RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( !BaseAddress )
    return 1;
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return RtlpHpFreeWithExceptionProtection(HeapHandle, BaseAddress, Flags);
  else
    return RtlpFreeHeapInternal(HeapHandle, BaseAddress, Flags);
}
