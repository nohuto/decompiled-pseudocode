/*
 * XREFs of RtlpHpSegLargeRangeAllocate @ 0x14037E1BC
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1403099F0 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpHpSegFreeRangeRemove @ 0x140308294 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14030A960 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeSplit @ 0x140594FA4 (RtlpHpSegPageRangeSplit.c)
 */

unsigned __int64 __fastcall RtlpHpSegLargeRangeAllocate(__int64 a1, unsigned __int64 i, int a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v6; // r10d
  int v7; // r11d
  unsigned __int64 j; // rcx
  unsigned __int64 v10; // r8
  unsigned __int8 v11; // al
  unsigned int v12; // ebx
  int v14; // ebx
  __int16 *v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD **v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rbx

  v4 = *(unsigned __int8 *)(a1 + 8);
  v6 = a3 << *(_BYTE *)(a1 + 8);
  v7 = a4;
  while ( 1 )
  {
    j = v4;
    v10 = *(unsigned __int8 *)(i + 31) << v4;
    if ( !v7 )
      break;
    v11 = *(_BYTE *)(i + 30);
    if ( v11 <= 2u )
    {
      if ( !v11 && (v6 <= (v10 & 0x1FFFFF) || (v10 & 0x1FFFFF) == 0) )
      {
        v12 = 0;
        goto LABEL_7;
      }
      break;
    }
LABEL_22:
    v17 = *(_QWORD ***)(i + 8);
    v18 = i;
    if ( v17 )
    {
      v19 = *v17;
      for ( i = *(_QWORD *)(i + 8); v19; v19 = (_QWORD *)*v19 )
        i = (unsigned __int64)v19;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v18 )
          break;
        v18 = i;
      }
    }
    if ( !i )
      return 0LL;
  }
  a4 = (i & *(_QWORD *)a1) + ((__int64)(i - (i & *(_QWORD *)a1)) >> 5 << v4);
  v10 += a4;
  v14 = a4;
  v15 = (__int16 *)(*(_QWORD *)((a4 & *(_QWORD *)a1) + 0x18) + 2 * ((a4 - ((unsigned __int64)a4 & *(_QWORD *)a1)) >> 21));
  for ( j = (a4 + 0x200000) & 0xFFFFFFFFFFE00000uLL; ; j += 0x200000LL )
  {
    if ( *v15 < 0 )
    {
      v16 = v10;
      if ( j < v10 )
        v16 = j;
      j = v16;
      if ( (int)v16 - v14 >= v6 )
        break;
    }
    if ( j >= v10 )
      goto LABEL_22;
    v14 = j;
    ++v15;
  }
  v12 = v14 - a4;
LABEL_7:
  if ( v7 )
    RtlpHpSegFreeRangeRemove(a1, i, v10, a4);
  if ( v12 )
  {
    LOBYTE(j) = *(_BYTE *)(a1 + 8);
    v20 = RtlpHpSegPageRangeSplit(j, i, v12 >> j);
    RtlpHpSegFreeRangeInsert(a1, i, 0);
    return v20;
  }
  return i;
}
