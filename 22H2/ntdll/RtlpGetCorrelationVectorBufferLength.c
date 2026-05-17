/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1800852F0
 * Callers:
 *     RtlExtendCorrelationVector @ 0x180085130 (RtlExtendCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x180085174 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlIncrementCorrelationVector @ 0x1800851C0 (RtlIncrementCorrelationVector.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1800852A4 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlValidateCorrelationVector @ 0x1800FC0B0 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800FC194 (RtlpGetLastContiguosBase64Position.c)
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
