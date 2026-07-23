/*
 * XREFs of RtlpHpSegLargeRangeAllocate @ 0x14037DD0C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x140314740 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpHpSegFreeRangeRemove @ 0x140312FE4 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x1403156B0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeSplit @ 0x1405951D4 (RtlpHpSegPageRangeSplit.c)
 */

unsigned __int64 __fastcall RtlpHpSegLargeRangeAllocate(__int64 a1, unsigned __int64 i, int a3, int a4)
{
  unsigned int v4; // ebp
  unsigned int v6; // r10d
  unsigned __int64 j; // rcx
  __int64 v10; // r8
  unsigned __int8 v11; // al
  unsigned int v12; // ebx
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  int v16; // ebx
  __int16 *v17; // rdx
  unsigned __int64 v18; // rax
  _QWORD **v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // rbx

  v4 = *(unsigned __int8 *)(a1 + 8);
  v6 = a3 << *(_BYTE *)(a1 + 8);
  while ( 1 )
  {
    j = v4;
    v10 = *(unsigned __int8 *)(i + 31) << v4;
    if ( !a4 )
      break;
    v11 = *(_BYTE *)(i + 30);
    if ( v11 <= 2u )
    {
      if ( !v11 && (v6 <= ((unsigned int)v10 & 0x1FFFFF) || (v10 & 0x1FFFFF) == 0) )
      {
        v12 = 0;
        goto LABEL_7;
      }
      break;
    }
LABEL_22:
    v19 = *(_QWORD ***)(i + 8);
    v20 = i;
    if ( v19 )
    {
      v21 = *v19;
      for ( i = *(_QWORD *)(i + 8); v21; v21 = (_QWORD *)*v21 )
        i = (unsigned __int64)v21;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v20 )
          break;
        v20 = i;
      }
    }
    if ( !i )
      return 0LL;
  }
  v14 = (i & *(_QWORD *)a1) + ((__int64)(i - (i & *(_QWORD *)a1)) >> 5 << v4);
  v15 = v14 + v10;
  v16 = v14;
  v17 = (__int16 *)(*(_QWORD *)((v14 & *(_QWORD *)a1) + 0x18)
                  + 2 * ((v14 - ((unsigned __int64)v14 & *(_QWORD *)a1)) >> 21));
  for ( j = (v14 + 0x200000) & 0xFFFFFFFFFFE00000uLL; ; j += 0x200000LL )
  {
    if ( *v17 < 0 )
    {
      v18 = v15;
      if ( j < v15 )
        v18 = j;
      j = v18;
      if ( (int)v18 - v16 >= v6 )
        break;
    }
    if ( j >= v15 )
      goto LABEL_22;
    v16 = j;
    ++v17;
  }
  v12 = v16 - v14;
LABEL_7:
  if ( a4 )
    RtlpHpSegFreeRangeRemove(a1, i);
  if ( v12 )
  {
    LOBYTE(j) = *(_BYTE *)(a1 + 8);
    v22 = RtlpHpSegPageRangeSplit(j, i, v12 >> j);
    RtlpHpSegFreeRangeInsert(a1, i, 0);
    return v22;
  }
  return i;
}
