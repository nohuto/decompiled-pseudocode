/*
 * XREFs of RtlpHpSegSegmentInitialize @ 0x1403094C8
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1402493A0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x14037596C (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x140309578 (RtlpHpQueryVA.c)
 */

__int64 __fastcall RtlpHpSegSegmentInitialize(_BYTE *a1, __int64 a2, unsigned int a3)
{
  char v3; // al
  unsigned int v7; // r8d
  __int64 v8; // rdx
  unsigned int v9; // r9d
  unsigned int v10; // ecx
  __int64 result; // rax
  unsigned __int8 *v12; // rcx
  unsigned __int8 v13; // al
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1[13];
  v14 = 0LL;
  if ( (v3 & 7) != 0 )
  {
    RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v14, 0LL);
    *(_QWORD *)(a2 + 24) = v14;
  }
  v7 = a3;
  v8 = a2 + 32LL * (unsigned __int8)a1[10];
  *(_BYTE *)(v8 + 31) = -a1[10];
  *(_BYTE *)(v8 + 24) |= 2u;
  v9 = 1 << a1[9];
  if ( a3 )
  {
    v12 = (unsigned __int8 *)(v8 + 25);
    do
    {
      v13 = v9;
      if ( v7 < v9 )
        v13 = v7;
      *v12 = v13;
      v12 += 32;
      v7 -= v13;
    }
    while ( v7 );
  }
  v10 = *(unsigned __int8 *)(v8 + 31) - 1;
  *(_WORD *)(v8 + 28) = ~(_WORD)a3;
  result = 32LL * v10;
  *(_BYTE *)(result + v8 + 31) = v10;
  *(_DWORD *)v8 = -857879331;
  return result;
}
