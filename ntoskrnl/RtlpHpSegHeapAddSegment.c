/*
 * XREFs of RtlpHpSegHeapAddSegment @ 0x1402E9EB0
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1402493A0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x14037596C (RtlpHpSegContextReserve.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegHeapAddSegment(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  *(_QWORD *)(a2 + 16) = a2 ^ RtlpHpHeapGlobals ^ a1 ^ 0xA2E64EADA2E64EADuLL;
  result = a1 + 72;
  v3 = *(unsigned __int64 **)(a1 + 80);
  if ( *v3 != a1 + 72 )
    __fastfail(3u);
  *(_QWORD *)a2 = result;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  *(_QWORD *)(a1 + 80) = a2;
  ++*(_QWORD *)(a1 + 88);
  return result;
}
