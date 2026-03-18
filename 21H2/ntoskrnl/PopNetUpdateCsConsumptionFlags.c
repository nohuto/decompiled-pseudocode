/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x14085CF58
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403DA240 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x140996FDC (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140C54148 )
  {
    if ( (byte_140C54209 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140C54209 = (PopNetCompliantNicCount != 0) | byte_140C54209 & 0xFE;
    }
  }
  return result;
}
