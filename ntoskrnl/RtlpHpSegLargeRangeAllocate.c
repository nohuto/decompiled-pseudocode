/*
 * XREFs of RtlpHpSegLargeRangeAllocate @ 0x1403BEB28
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1402493A0 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpHpSegFreeRangeInsert @ 0x14024E6D0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14024E804 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeSplit @ 0x1405B4678 (RtlpHpSegPageRangeSplit.c)
 */

unsigned __int64 __fastcall RtlpHpSegLargeRangeAllocate(__int64 a1, unsigned __int64 i, int a3, int a4)
{
  char v4; // r11
  unsigned int v6; // r10d
  __int64 v9; // r8
  unsigned __int8 v10; // al
  unsigned int v11; // ebx
  unsigned __int64 j; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  int v16; // ebx
  __int16 *v17; // rdx
  unsigned __int64 v18; // rax
  _QWORD **v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // rbx

  v4 = *(_BYTE *)(a1 + 8);
  v6 = a3 << v4;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(i + 31) << v4;
    if ( !a4 )
      goto LABEL_14;
    v10 = *(_BYTE *)(i + 30);
    if ( v10 <= 2u )
      break;
LABEL_21:
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
  if ( !v10 && (v6 <= ((unsigned int)v9 & 0x1FFFFF) || (v9 & 0x1FFFFF) == 0) )
  {
    v11 = 0;
LABEL_7:
    RtlpHpSegFreeRangeRemove(a1, i);
    goto LABEL_8;
  }
LABEL_14:
  v14 = (i & *(_QWORD *)a1) + ((__int64)(i - (i & *(_QWORD *)a1)) >> 5 << v4);
  v15 = v14 + v9;
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
      goto LABEL_21;
    v16 = j;
    ++v17;
  }
  v11 = v16 - v14;
  if ( a4 )
    goto LABEL_7;
LABEL_8:
  if ( v11 )
  {
    LOBYTE(j) = *(_BYTE *)(a1 + 8);
    v22 = RtlpHpSegPageRangeSplit(j, i, v11 >> j);
    RtlpHpSegFreeRangeInsert(a1, i, 0);
    return v22;
  }
  return i;
}
