/*
 * XREFs of RtlpHpSegContextReserve @ 0x1800085F8
 * Callers:
 *     RtlpHpHeapCreate @ 0x18000821C (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegSegmentAllocate @ 0x180006258 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x180006874 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180006CD0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegHeapAddSegment @ 0x1800071E4 (RtlpHpSegHeapAddSegment.c)
 */

__int64 __fastcall RtlpHpSegContextReserve(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // ebx
  unsigned __int64 v6; // r13
  unsigned int v7; // edi
  unsigned int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // r15

  v3 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = 0;
  v6 = ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 + a2 - 1) / (unsigned int)-*(_DWORD *)a1;
  v7 = (256 - (unsigned __int8)a1[10]) << a1[9];
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = v3;
      if ( v3 > v7 )
        v9 = v7;
      v3 = (v3 - v7) & -(__int64)(v7 < v3);
      v10 = RtlpHpSegSegmentAllocate((__int64)a1, v9, 0);
      v11 = v10;
      if ( !v10 )
        break;
      RtlpHpSegSegmentInitialize(a1, v10, v9);
      RtlpHpSegFreeRangeInsert((__int64)a1, v11 + 32LL * (unsigned __int8)a1[10], 1);
      RtlpHpSegHeapAddSegment((__int64)a1, v11);
      if ( !--v6 )
        return v5;
    }
    return (unsigned int)-1073741670;
  }
  return v5;
}
