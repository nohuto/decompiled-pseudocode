/*
 * XREFs of RtlpWriteExtendedContext @ 0x1405F58E8
 * Callers:
 *     PspWow64GetContextThread @ 0x1405F561C (PspWow64GetContextThread.c)
 *     PspGetContextThreadInternal @ 0x14063CC44 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x140264610 (RtlpGetLegacyContextLength.c)
 *     RtlpCopyExtendedContext @ 0x140264850 (RtlpCopyExtendedContext.c)
 *     RtlpValidateContextFlags @ 0x140264CD0 (RtlpValidateContextFlags.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 */

__int64 __fastcall RtlpWriteExtendedContext(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  ULONG Alignment; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0;
  Alignment = 0;
  result = RtlpValidateContextFlags(a4, &v10);
  if ( (int)result >= 0 )
  {
    RtlpGetLegacyContextLength(a4, 0LL, &Alignment);
    if ( (v10 & 1) != 0 )
      ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 8)), *(unsigned int *)(a3 + 12), Alignment);
    if ( (v10 & 2) != 0 )
      ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 16)), *(unsigned int *)(a3 + 20), 0x40u);
    return RtlpCopyExtendedContext(1u, a2, a3, a4, a5, 0LL);
  }
  return result;
}
