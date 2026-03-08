/*
 * XREFs of RtlpWriteExtendedContext @ 0x14077CA08
 * Callers:
 *     PspWow64GetContextThread @ 0x14077BF00 (PspWow64GetContextThread.c)
 *     PspGetContextThreadInternal @ 0x1407EE524 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlpCopyExtendedContext @ 0x140364B00 (RtlpCopyExtendedContext.c)
 *     RtlpValidateContextFlags @ 0x1403650A0 (RtlpValidateContextFlags.c)
 *     RtlpGetLegacyContextLength @ 0x140365130 (RtlpGetLegacyContextLength.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall RtlpWriteExtendedContext(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  ULONG Alignment[6]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0;
  Alignment[0] = 0;
  result = RtlpValidateContextFlags(a4, &v10);
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      return 3221225659LL;
    }
    else
    {
      RtlpGetLegacyContextLength(a4, 0LL, Alignment);
      if ( (v10 & 1) != 0 )
        ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 8)), *(unsigned int *)(a3 + 12), Alignment[0]);
      if ( (v10 & 2) != 0 )
        ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 16)), *(unsigned int *)(a3 + 20), 0x40u);
      result = RtlpCopyExtendedContext(1, a2, a3, a4, a5, 0LL);
      Alignment[1] = result;
    }
  }
  return result;
}
