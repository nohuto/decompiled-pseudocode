/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x1407CD468
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403CAF50 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x1408EFE74 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140C4FF08 )
  {
    if ( (byte_140C4FFC1 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140C4FFC1 = (PopNetCompliantNicCount != 0) | byte_140C4FFC1 & 0xFE;
    }
  }
  return result;
}
