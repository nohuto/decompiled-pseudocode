/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1409BF1C0
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1405AF7B4 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1405AF7FC (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x1409BEE30 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1409BEE80 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1409BEFF0 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1409BF1E4 (RtlpGetLastContiguosBase64Position.c)
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
