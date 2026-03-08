/*
 * XREFs of RtlpHpSegPageRangeSplit @ 0x1405B4678
 * Callers:
 *     RtlpHpSegLargeRangeAllocate @ 0x1403BEB28 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeSplit(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ecx
  __int64 v5; // r11
  unsigned __int64 v6; // r9
  int v7; // ecx
  __int64 v8; // r8
  __int16 v9; // cx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int16 v12; // ax

  v3 = *(unsigned __int8 *)(a2 + 31);
  v5 = a3;
  if ( v3 == a3 )
    return 0LL;
  v7 = v3 - a3;
  v8 = (unsigned __int8)v7;
  v6 = a2 + 32 * v5;
  *(_BYTE *)(v6 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v7 - 1) + v6 + 31) = v7 - 1;
  v9 = 0;
  *(_BYTE *)(v6 + 31) = v8;
  v10 = v6;
  v11 = v6 + 32 * v8;
  if ( v6 < v11 )
  {
    do
    {
      v12 = *(unsigned __int8 *)(v10 + 25);
      v10 += 32LL;
      v9 += v12;
    }
    while ( v10 < v11 );
  }
  *(_DWORD *)v6 = -857879331;
  *(_WORD *)(v6 + 28) = ~v9;
  *(_BYTE *)(32LL * (unsigned int)(v5 - 1) + a2 + 31) = v5 - 1;
  *(_BYTE *)(a2 + 31) = v5;
  *(_WORD *)(a2 + 28) = ~(*(_WORD *)(v6 + 28) - *(_WORD *)(a2 + 28));
  return v6;
}
