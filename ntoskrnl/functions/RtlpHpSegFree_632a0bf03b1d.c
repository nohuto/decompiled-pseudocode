__int64 __fastcall RtlpHpSegFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  int v7; // r8d
  unsigned __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v11; // rcx
  unsigned int v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v6 = RtlpHpSegDescriptorValidate();
  if ( v6 )
  {
    v8 = (v6 & *(_QWORD *)a1) + ((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( a2 > v8 )
    {
      if ( (*(_BYTE *)(v6 + 24) & 0xC) == 8 )
      {
        return (unsigned int)RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(a1 + 24), v8, a2, a3);
      }
      else
      {
        v9 = RtlpHpVsContextFree(*(_QWORD *)(a1 + 32), v8, a2, a3, &v12);
        if ( v9 )
        {
          v11 = *(_QWORD *)(a1 + 24);
          if ( v12 <= (unsigned int)*(unsigned __int16 *)(v11 + 60) - 16 )
            RtlpHpLfhBucketUpdateStats(v11, v12, 0LL);
        }
      }
    }
    else
    {
      RtlpHpSegPageRangeShrink(a1, v6, v7, a3);
      return 1;
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), a2, 0, 0LL, 0LL);
    return 0;
  }
  return v9;
}
