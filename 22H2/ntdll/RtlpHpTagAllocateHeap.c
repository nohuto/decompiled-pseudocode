/*
 * XREFs of RtlpHpTagAllocateHeap @ 0x180007AB4
 * Callers:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18002C270 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpHpTaggableHeap @ 0x180007BC4 (RtlpHpTaggableHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTagContextGetTag @ 0x18009CE24 (RtlpHpTagContextGetTag.c)
 */

__int64 __fastcall RtlpHpTagAllocateHeap(PVOID BaseAddress, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int16 Tag; // di
  __int64 result; // rax

  if ( (unsigned int)RtlpHpTaggableHeap() )
    Tag = RtlpHpTagContextGetTag(v4, a2);
  else
    Tag = 0;
  result = RtlpAllocateHeapInternal(BaseAddress);
  if ( !result )
  {
    if ( Tag )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_18016AB18 + 8LL * Tag - 8) + 32LL), -a2);
  }
  return result;
}
