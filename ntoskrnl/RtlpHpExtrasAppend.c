/*
 * XREFs of RtlpHpExtrasAppend @ 0x1405B4050
 * Callers:
 *     RtlpHpAllocateHeap @ 0x14024A2B0 (RtlpHpAllocateHeap.c)
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpExtrasSetPresent @ 0x1405B4174 (RtlpHpExtrasSetPresent.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasAppend(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        __int16 a7)
{
  __m128i *v7; // r11
  unsigned __int64 v9; // rbx
  __m128i *v10; // rbx
  char v11; // dl

  v7 = (__m128i *)(a2 + a3);
  if ( (a6 & 0x10000000) != 0 )
    *v7 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  v9 = 0LL;
  if ( (a6 & 0x20000F08) != 0 )
  {
    v10 = v7 + 1;
    if ( (a6 & 0x10000000) == 0 )
      v10 = (__m128i *)(a2 + a3);
    v9 = ((unsigned __int64)&v10->m128i_u64[1] + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)v9 = 0LL;
    v11 = *(_BYTE *)(v9 + 2) & 0xF | (16 * (BYTE1(a6) & 0xFE));
    *(_BYTE *)(v9 + 3) = a5 >> 4;
    *(_WORD *)v9 = a7;
    *(_BYTE *)(v9 + 2) = v11;
    RtlpHpExtrasSetPresent(a1, a2, a6);
  }
  return v9;
}
