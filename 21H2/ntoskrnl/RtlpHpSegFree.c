/*
 * XREFs of RtlpHpSegFree @ 0x140342200
 * Callers:
 *     RtlpHpSegLfhVsFree @ 0x1402C5370 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpFreeHeap @ 0x140342100 (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x1402A6128 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140306DB0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegPageRangeShrink @ 0x1403299F0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x140341800 (RtlpHpVsContextFree.c)
 *     RtlpHpSegDescriptorValidate @ 0x1403422D0 (RtlpHpSegDescriptorValidate.c)
 *     RtlpLogHeapFailure @ 0x14059356C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  int v6; // r8d
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  unsigned int v10; // edi
  __int64 v11; // rcx
  unsigned int v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v5 = RtlpHpSegDescriptorValidate();
  if ( v5 )
  {
    v8 = (v5 & *(_QWORD *)a1) + ((v5 - (v5 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( v7 <= v8 )
    {
      RtlpHpSegPageRangeShrink(a1, v5, v6, a3);
      return 1LL;
    }
    else if ( (*(_BYTE *)(v5 + 24) & 0xC) == 8 )
    {
      return RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(a1 + 24), v8, v7, a3);
    }
    else
    {
      result = RtlpHpVsContextFree(*(_QWORD *)(a1 + 32), v8, v7, a3, &v12);
      v10 = result;
      if ( (_DWORD)result )
      {
        v11 = *(_QWORD *)(a1 + 24);
        if ( v12 <= (unsigned int)*(unsigned __int16 *)(v11 + 60) - 16 )
        {
          RtlpHpLfhBucketUpdateStats(v11, v12, 0);
          return v10;
        }
      }
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), v7, 0, 0LL, 0LL);
    return 0LL;
  }
  return result;
}
