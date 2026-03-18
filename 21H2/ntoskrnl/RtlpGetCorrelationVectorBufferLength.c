/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1409BBA8C
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1405EC264 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1405EC2AC (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x1409BB700 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1409BB750 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1409BB8C0 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1409BBAB0 (RtlpGetLastContiguosBase64Position.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetCorrelationVectorBufferLength(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 == 1 )
    return 65LL;
  result = 0xFFFFFFFFLL;
  if ( *a1 == 2 )
    return 129LL;
  return result;
}
