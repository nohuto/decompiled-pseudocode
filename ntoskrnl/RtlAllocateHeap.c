/*
 * XREFs of RtlAllocateHeap @ 0x1402E0B70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1402E0BC8 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x1405A798C (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 */

PVOID __stdcall RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, 0, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)RtlpHpAllocWithExceptionProtection(HeapHandle, Size, Flags);
  else
    return (PVOID)RtlpAllocateHeapInternal(HeapHandle);
}
