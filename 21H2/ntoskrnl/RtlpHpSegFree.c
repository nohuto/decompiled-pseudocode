/*
 * XREFs of RtlpHpSegFree @ 0x14034CF50
 * Callers:
 *     RtlpHpSegLfhVsFree @ 0x140243BD0 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x140223568 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140311B00 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegPageRangeShrink @ 0x140334740 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x14034C550 (RtlpHpVsContextFree.c)
 *     RtlpHpSegDescriptorValidate @ 0x14034D020 (RtlpHpSegDescriptorValidate.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
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
