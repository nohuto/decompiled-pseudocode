/*
 * XREFs of RtlHeapZero @ 0x1403D2D10
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402491F0 (RtlpHpSegAlloc.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14024A790 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpLargeAlloc @ 0x1402B6D70 (RtlpHpLargeAlloc.c)
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhSlotAllocate @ 0x140310BA0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpAllocVA @ 0x140330920 (RtlpHpAllocVA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHeapZero(_OWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _OWORD *v3; // r8
  unsigned __int64 v4; // rdx

  if ( a2 < 0x40 )
  {
    if ( a2 )
    {
      *a1 = 0LL;
      *(_OWORD *)((char *)a1 + a2 - 16) = 0LL;
      *(_OWORD *)((char *)a1 + ((a2 & 0x20) >> 1)) = 0LL;
    }
  }
  else if ( (qword_140C6AF78 & 1) != 0 && a2 >= 0x320 )
  {
    return RtlpHeapZeroFastString();
  }
  else
  {
    v3 = (_OWORD *)((char *)a1 + a2 - 48);
    v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) >> 6;
    do
    {
      *a1 = 0LL;
      a1[1] = 0LL;
      a1 += 4;
      --v4;
      *(a1 - 2) = 0LL;
      *(a1 - 1) = 0LL;
    }
    while ( v4 );
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
  }
  return result;
}
