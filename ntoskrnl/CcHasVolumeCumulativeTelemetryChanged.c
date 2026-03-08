/*
 * XREFs of CcHasVolumeCumulativeTelemetryChanged @ 0x1405373D8
 * Callers:
 *     CcPostVolumeTelemetry @ 0x1403CB4D0 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

char __fastcall CcHasVolumeCumulativeTelemetryChanged(_QWORD *a1)
{
  char result; // al

  result = 0;
  if ( a1[199] || a1[200] || a1[201] || a1[259] || a1[260] || a1[261] )
    return 1;
  return result;
}
