/*
 * XREFs of RtlpHpCheckAllocationSizeLimit @ 0x1405B3A24
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1402E0BC8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpCheckAllocationSizeLimit(unsigned __int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // r9

  v3 = *(_QWORD *)(a3 + 16);
  v4 = 0;
  v5 = v3;
  if ( (v3 || (v5 = qword_140C6AF68) != 0) && a1 > v5 )
  {
    v6 = *(_QWORD *)(a3 + 24);
    if ( v6 )
      RtlpLogHeapFailure(20, a2, 0LL, v6, a1, v3);
  }
  else
  {
    return 1;
  }
  return v4;
}
