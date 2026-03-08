/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1409BC190
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1405AD304 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1405AD34C (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x1409BBE00 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1409BBE50 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1409BBFC0 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1409BC1B4 (RtlpGetLastContiguosBase64Position.c)
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
