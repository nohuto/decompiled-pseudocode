/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140916594
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x14058CE44 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x14058CE8C (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x140916210 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x140916260 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1409163D0 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1409165B8 (RtlpGetLastContiguosBase64Position.c)
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
