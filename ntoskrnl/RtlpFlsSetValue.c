/*
 * XREFs of RtlpFlsSetValue @ 0x14076B564
 * Callers:
 *     PsTlsSetValue @ 0x14076B4A0 (PsTlsSetValue.c)
 * Callees:
 *     RtlpFlsSetValueSlot @ 0x14076B5F4 (RtlpFlsSetValueSlot.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpFlsSetValue(__int64 a1, __int64 *a2, int a3, __int64 a4, int a5)
{
  __int64 Pool2; // rax
  unsigned int v8; // edi

  if ( (unsigned int)(a3 - 1) > 0xEE )
    return 3221225485LL;
  Pool2 = *a2;
  v8 = a3 + 16;
  if ( *a2 )
    return RtlpFlsSetValueSlot(a1, Pool2, v8, a4);
  if ( a5 != 1 )
  {
    Pool2 = ExAllocatePool2(256LL, 40LL, 1800621126LL);
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_OWORD *)Pool2 = 0LL;
      *(_OWORD *)(Pool2 + 16) = 0LL;
      *a2 = Pool2;
      return RtlpFlsSetValueSlot(a1, Pool2, v8, a4);
    }
  }
  return 3221225495LL;
}
