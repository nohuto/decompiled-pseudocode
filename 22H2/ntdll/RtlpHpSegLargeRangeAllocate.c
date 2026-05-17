/*
 * XREFs of RtlpHpSegLargeRangeAllocate @ 0x18010ECB8
 * Callers:
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegFreeRangeInsert @ 0x180006CD0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180006DB8 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeSplit @ 0x18010F3A8 (RtlpHpSegPageRangeSplit.c)
 */

unsigned __int64 __fastcall RtlpHpSegLargeRangeAllocate(__int64 a1, unsigned __int64 i, int a3, int a4)
{
  unsigned int v4; // ebp
  unsigned int v6; // r10d
  unsigned __int64 j; // rcx
  unsigned __int64 v10; // r8
  unsigned __int8 v11; // al
  __int64 v12; // r9
  int v13; // ebx
  __int16 *v14; // rdx
  unsigned __int64 v15; // rax
  _QWORD **v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rbx

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
      if ( !v11 && (v6 <= (v10 & 0x1FFFFF) || (v10 & 0x1FFFFF) == 0) )
      {
        v20 = 0;
        goto LABEL_26;
      }
      break;
    }
LABEL_14:
    v16 = *(_QWORD ***)(i + 8);
    v17 = i;
    if ( v16 )
    {
      v18 = *v16;
      for ( i = *(_QWORD *)(i + 8); v18; v18 = (_QWORD *)*v18 )
        i = (unsigned __int64)v18;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v17 )
          break;
        v17 = i;
      }
    }
    if ( !i )
      return 0LL;
  }
  v12 = (i & *(_QWORD *)a1) + ((__int64)(i - (i & *(_QWORD *)a1)) >> 5 << v4);
  v10 += v12;
  v13 = v12;
  v14 = (__int16 *)(*(_QWORD *)((v12 & *(_QWORD *)a1) + 0x18)
                  + 2 * ((v12 - ((unsigned __int64)v12 & *(_QWORD *)a1)) >> 21));
  for ( j = (v12 + 0x200000) & 0xFFFFFFFFFFE00000uLL; ; j += 0x200000LL )
  {
    if ( *v14 < 0 )
    {
      v15 = v10;
      if ( j < v10 )
        v15 = j;
      j = v15;
      if ( (int)v15 - v13 >= v6 )
        break;
    }
    if ( j >= v10 )
      goto LABEL_14;
    v13 = j;
    ++v14;
  }
  v20 = v13 - v12;
LABEL_26:
  if ( a4 )
    RtlpHpSegFreeRangeRemove(a1, i, v10);
  if ( v20 )
  {
    LOBYTE(j) = *(_BYTE *)(a1 + 8);
    v21 = RtlpHpSegPageRangeSplit(j, i, v20 >> j);
    RtlpHpSegFreeRangeInsert(a1, i, 0LL);
    return v21;
  }
  return i;
}
