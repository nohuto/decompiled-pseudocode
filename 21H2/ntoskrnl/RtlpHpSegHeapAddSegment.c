/*
 * XREFs of RtlpHpSegHeapAddSegment @ 0x140249F2C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x140314740 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x14037AED0 (RtlpHpSegContextReserve.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegHeapAddSegment(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  *(_QWORD *)(a2 + 16) = a2 ^ a1 ^ RtlpHpHeapGlobals ^ 0xA2E64EADA2E64EADuLL;
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
