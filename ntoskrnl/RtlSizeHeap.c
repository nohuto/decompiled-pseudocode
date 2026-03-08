/*
 * XREFs of RtlSizeHeap @ 0x1405A7940
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSizeHeapInternal @ 0x1405ABE4C (RtlpSizeHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlSizeHeap(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a1 )
    RtlpLogHeapFailure(19, 0, a3, 0, 0LL, 0LL);
  return RtlpSizeHeapInternal(a1, a2, a3);
}
