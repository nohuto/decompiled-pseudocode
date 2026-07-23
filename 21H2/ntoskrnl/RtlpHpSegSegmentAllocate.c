/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x14022117C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x140314740 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x14037AED0 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskWrite @ 0x140221288 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x140222154 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpEnvGetHeapManager @ 0x140314164 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegSegmentFree @ 0x140389C1C (RtlpHpSegSegmentFree.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 HeapManager; // r8
  unsigned int v8; // edx
  unsigned __int64 v9; // r14
  _BOOL8 v10; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rsi
  __int128 v15[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+20h]

  v3 = a2 + 2;
  v5 = RtlpHpSegMgrAllocate(a1, a2 + 2, a3);
  if ( !v5 )
    return 0LL;
  v6 = (unsigned int)-*(_DWORD *)a1;
  v15[0] = *(_OWORD *)(a1 + 40);
  HeapManager = RtlpHpEnvGetHeapManager(v15, v6);
  v9 = v8;
  v10 = v8 != 0x100000;
  v11 = 2 * ((unsigned __int64)(v5 - *(_QWORD *)(HeapManager + 8)) >> 20);
  v16 = v11 + 2 * ((unsigned __int64)v8 >> 20);
  if ( v11 >= v16 )
  {
LABEL_6:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), v9 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v3);
    v13 = v5;
    v5 = 0LL;
  }
  else
  {
    v12 = HeapManager + 16;
    while ( (int)RtlCSparseBitmapBitmaskWrite(v12, v11, HeapManager, v10 + 1) >= 0 )
    {
      v11 += 2LL;
      if ( v11 >= v16 )
        goto LABEL_6;
    }
    v13 = 0LL;
  }
  if ( v5 )
    RtlpHpSegSegmentFree(a1);
  return v13;
}
