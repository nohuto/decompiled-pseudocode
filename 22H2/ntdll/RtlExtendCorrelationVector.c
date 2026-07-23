/*
 * XREFs of RtlExtendCorrelationVector @ 0x180085130
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x180085174 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800852F0 (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlExtendCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  int CorrelationVectorBufferLength; // eax
  __int64 v2; // rcx
  DWORD v3; // r10d
  __int64 v4; // r11

  if ( (int)RtlpGetCorrelationVectorEndPosition(CorrelationVector) < 0 )
    return -2147483643;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength();
  if ( (int)v4 >= CorrelationVectorBufferLength - 3 )
    return -2147483643;
  *(_WORD *)(v4 + v2 + 1) = 12334;
  *(_BYTE *)(v4 + v2 + 3) = v3;
  return v3;
}
