/*
 * XREFs of RtlpCreateHeapEncoding @ 0x1405A9B40
 * Callers:
 *     RtlCreateHeap @ 0x14078AD90 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 */

__int64 __fastcall RtlpCreateHeapEncoding(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 120);
  if ( (result & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) = 16;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) |= ExGenRandom(1);
    result = ExGenRandom(1);
    *(_DWORD *)(a1 + 140) = (unsigned __int16)result;
  }
  return result;
}
