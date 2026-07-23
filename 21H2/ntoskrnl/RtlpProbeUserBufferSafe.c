/*
 * XREFs of RtlpProbeUserBufferSafe @ 0x14058B9E8
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1402236E4 (RtlpFreeHeapInternal.c)
 *     RtlpSizeHeapInternal @ 0x14058BC88 (RtlpSizeHeapInternal.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x140593684 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 */

unsigned __int8 *__fastcall RtlpProbeUserBufferSafe(int a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  int v3; // r8d
  int v4; // edx
  int v5; // ecx

  if ( (a2 & 0xF) != 0 )
  {
    v3 = a2;
    v4 = a1;
    v5 = 9;
    goto LABEL_7;
  }
  v2 = (unsigned __int8 *)(a2 - 16);
  _m_prefetchw(v2);
  if ( v2[15] == 5 )
    v2 -= 16 * v2[14];
  if ( (v2[15] & 0x3F) == 0 )
  {
    v3 = (int)v2;
    v4 = a1;
    v5 = 8;
LABEL_7:
    RtlpLogHeapFailure(v5, v4, v3, 0, 0LL, 0LL);
    return 0LL;
  }
  return v2;
}
