/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140916434
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x14058CC14 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x14058CC5C (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x1409160B0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x140916100 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x140916270 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x140916458 (RtlpGetLastContiguosBase64Position.c)
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
